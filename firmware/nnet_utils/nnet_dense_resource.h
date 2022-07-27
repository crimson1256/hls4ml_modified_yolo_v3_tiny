//
//    rfnoc-hls-neuralnet: Vivado HLS code for neural-net building blocks
//
//    Copyright (C) 2017 EJ Kreinar
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef NNET_DENSE_RESOURCE_H_
#define NNET_DENSE_RESOURCE_H_

#include "nnet_common.h"
#include "nnet_mult.h"
#include "hls_stream.h"
#include <math.h>
#include <assert.h>

namespace nnet {

template<class data_T, class res_T, typename CONFIG_T>
void dense_resource_rf_leq_nin(
    data_T data[CONFIG_T::n_in],
    res_T  res[CONFIG_T::n_out],
    typename CONFIG_T::weight_t weights[CONFIG_T::n_in*CONFIG_T::n_out],
    typename CONFIG_T::bias_t   biases[CONFIG_T::n_out]) {

    const int rufactor = CONFIG_T::reuse_factor;
    const int multfactor = MIN(CONFIG_T::n_in,CONFIG_T::reuse_factor);
    const int multiplier_limit = DIV_ROUNDUP(CONFIG_T::n_in*CONFIG_T::n_out, multfactor);
    const int block_factor = DIV_ROUNDUP(CONFIG_T::n_in*CONFIG_T::n_out, CONFIG_T::reuse_factor);
    const int multscale = multiplier_limit/CONFIG_T::n_out;
    const int nin = CONFIG_T::n_in;
    const int nout = CONFIG_T::n_out;

    assert((multiplier_limit % nout == 0 || rufactor >= nin) && "The current Reuse Factor is not allowed");
    assert((multiplier_limit == block_factor) && "This function is correct only for RF <= N_IN");

    #pragma HLS function_instantiate variable=weights,biases
    //#pragma HLS RESOURCE variable=weights core=RAM_2P_BRAM Commenting out the deisgnation HLS seems to choose correctly
    #pragma HLS ARRAY_RESHAPE   variable=weights block factor=block_factor
    #pragma HLS ARRAY_PARTITION variable=biases complete

    typename CONFIG_T::accum_t acc[CONFIG_T::n_out];
    #pragma HLS ARRAY_PARTITION variable=acc complete

    InitAccum:
    for (int iacc = 0; iacc < nout; iacc++) {
        #pragma HLS UNROLL
        acc[iacc] = (typename CONFIG_T::accum_t) biases[iacc];
    }

    ReuseLoop:
    for (int ir = 0; ir < rufactor; ir++) {
        #pragma HLS PIPELINE II=1 rewind

        int w_index = ir;
        int in_index = ir;
        int out_index = 0;
        int acc_step = 0;

        MultLoop:
        for (int im = 0; im < block_factor; im++) {
            #pragma HLS UNROLL

            acc[out_index] += CONFIG_T::template product<data_T, typename CONFIG_T::weight_t, typename CONFIG_T::accum_t>::product(data[in_index], weights[w_index]);

            // Increment w_index
            w_index += rufactor;
            // Increment in_index
            in_index += rufactor;
            if (in_index >= nin) {
                in_index = ir;
            }
            // Increment out_index
            if (acc_step + 1 >= multscale) {
                acc_step = 0;
                out_index++;
            } else {
                acc_step++;
            }
        }
    }

    // Cast to "res_t" type
    Result:
    for (int ires = 0; ires < CONFIG_T::n_out; ires++) {
        #pragma HLS UNROLL
        res[ires] = cast<data_T, res_T, CONFIG_T>(acc[ires]);
    }
}

template<class data_T, class res_T, typename CONFIG_T>
void dense_resource_rf_gt_nin_rem0(
    data_T data[CONFIG_T::n_in],
    res_T  res[CONFIG_T::n_out],
    typename CONFIG_T::weight_t weights[CONFIG_T::n_in*CONFIG_T::n_out],
    typename CONFIG_T::bias_t   biases[CONFIG_T::n_out]) {

    const int rufactor = MIN(CONFIG_T::reuse_factor, CONFIG_T::n_in * CONFIG_T::n_out);
    const int multfactor = MIN(CONFIG_T::n_in,CONFIG_T::reuse_factor);
    const int multiplier_limit = DIV_ROUNDUP(CONFIG_T::n_in*CONFIG_T::n_out, multfactor);
    const int block_factor = DIV_ROUNDUP(CONFIG_T::n_in*CONFIG_T::n_out, CONFIG_T::reuse_factor);
    const int multscale = multiplier_limit/CONFIG_T::n_out;
    const int nin = CONFIG_T::n_in;
    const int nout = CONFIG_T::n_out;

    assert((multiplier_limit % nout == 0 || rufactor >= nin) && "The current Reuse Factor is not allowed");
    assert((rufactor > nin && rufactor % nin == 0) && "This function is correct only for RF > N_IN && RF % N_IN == 0");

    #pragma HLS function_instantiate variable=weights,biases
    //#pragma HLS RESOURCE variable=weights core=RAM_2P_BRAM Commenting out the deisgnation HLS seems to choose correctly
    #pragma HLS ARRAY_RESHAPE   variable=weights block factor=block_factor
    #pragma HLS ARRAY_PARTITION variable=biases complete

    typename CONFIG_T::accum_t acc[CONFIG_T::n_out];
    #pragma HLS ARRAY_PARTITION variable=acc complete

    InitAccum:
    for (int iacc = 0; iacc < nout; iacc++) {
        #pragma HLS UNROLL
        acc[iacc] = (typename CONFIG_T::accum_t) biases[iacc];
    }

    int w_index;
    int in_index = 0;
    int out_index;
    int outstep = 0;
    const int outscale = rufactor / nin;

    int outidx[rufactor];
    IndexLoop:
    for (int ir = 0; ir < rufactor; ir++) {
        outidx[ir] = outstep;
        if ((ir + 1) % nin == 0) {
            outstep++;
        }
    }

    ReuseLoop:
    for (int ir = 0; ir < rufactor; ir++) {
        #pragma HLS PIPELINE II=1 rewind

        w_index = ir;
        out_index = outidx[ir]/*outstep*/;

        MultLoop:
        for (int im = 0; im < block_factor; im++) {
            #pragma HLS UNROLL
            acc[out_index] += CONFIG_T::template product<data_T, typename CONFIG_T::weight_t, typename CONFIG_T::accum_t>::product(data[in_index], weights[w_index]);

            w_index += rufactor;
            if (w_index >= CONFIG_T::n_in * CONFIG_T::n_out) break; // check out of bounds
            out_index += outscale;
        }

        in_index++;
        if (in_index >= nin) {
            in_index = 0;
            //outstep++; // This causes a huge increase in scheduling and RTL generation times, hence the above workaround.
        }
    }

    // Cast to "res_t" type
    Result:
    for (int ires = 0; ires < CONFIG_T::n_out; ires++) {
        #pragma HLS UNROLL
        res[ires] = cast<data_T, res_T, CONFIG_T>(acc[ires]);
    }
}

template<class data_T, class res_T, typename CONFIG_T>
void dense_resource_rf_gt_nin(
    data_T data[CONFIG_T::n_in],
    res_T  res[CONFIG_T::n_out],
    typename CONFIG_T::weight_t weights[CONFIG_T::n_in*CONFIG_T::n_out],
    typename CONFIG_T::bias_t   biases[CONFIG_T::n_out]) {

    const int rufactor = CONFIG_T::reuse_factor;
    const int multfactor = MIN(CONFIG_T::n_in,CONFIG_T::reuse_factor);
    const int multiplier_limit = DIV_ROUNDUP(CONFIG_T::n_in*CONFIG_T::n_out, multfactor);
    const int block_factor = DIV_ROUNDUP(CONFIG_T::n_in*CONFIG_T::n_out, CONFIG_T::reuse_factor);
    const int multscale = multiplier_limit/CONFIG_T::n_out;
    const int nin = CONFIG_T::n_in;
    const int nout = CONFIG_T::n_out;

    assert((multiplier_limit % nout == 0 || rufactor >= nin) && "The current Reuse Factor is not allowed");
    assert((rufactor > nin) && "This function is correct only for RF > N_IN");

    #pragma HLS function_instantiate variable=weights,biases
    //#pragma HLS RESOURCE variable=weights core=RAM_2P_BRAM Commenting out the deisgnation HLS seems to choose correctly
    #pragma HLS ARRAY_RESHAPE   variable=weights block factor=block_factor
    #pragma HLS ARRAY_PARTITION variable=biases complete

    typename CONFIG_T::accum_t acc[CONFIG_T::n_out];
    #pragma HLS ARRAY_PARTITION variable=acc complete

    InitAccum:
    for (int iacc = 0; iacc < nout; iacc++) {
        #pragma HLS UNROLL
        acc[iacc] = (typename CONFIG_T::accum_t) biases[iacc];
    }

    ReuseLoop:
    for (int ir = 0; ir < rufactor; ir++) {
        #pragma HLS PIPELINE II=1 rewind
        typename CONFIG_T::accum_t tmpmult[block_factor];
        #pragma HLS ARRAY_PARTITION variable=tmpmult complete

        MultLoop:
        for (int im = 0; im < block_factor; im++) {
            #pragma HLS UNROLL
            int w_index = ir + rufactor * im;
            int in_index = w_index % nin;
            if (w_index >= CONFIG_T::n_in*CONFIG_T::n_out) continue; // check out of bounds
            tmpmult[im] = CONFIG_T::template product<data_T, typename CONFIG_T::weight_t, typename CONFIG_T::accum_t>::product(data[in_index], weights[w_index]);
        }

        typename CONFIG_T::accum_t mult[multiplier_limit];
        #pragma HLS ARRAY_PARTITION variable=mult complete

        ResetMult:
        for (int imult = 0; imult < multiplier_limit; imult++) {
            #pragma HLS UNROLL
            mult[imult] = 0;
        }

        AccumLoop1:
        for (int im = 0; im < block_factor; im++) {
            #pragma HLS UNROLL
            int w_index = ir + rufactor * im;
            int out_index = w_index / multfactor;
            if (out_index >= multiplier_limit) continue; // check out of bounds
            mult[out_index] += tmpmult[im];
        }

        AccumLoop2:
        for (int im = 0; im < multiplier_limit; im++) {
            #pragma HLS UNROLL
            //int out_index = im/multscale; // This is the general case
            //acc[out_index] += mult[im];
            acc[im] += mult[im]; // If RF > N_IN then multiplier_limit == n_out
        }
    }

    // Cast to "res_t" type
    Result:
    for (int ires = 0; ires < CONFIG_T::n_out; ires++) {
        #pragma HLS UNROLL
        res[ires] = cast<data_T, res_T, CONFIG_T>(acc[ires]);
    }
}

template<class data_T, class res_T, typename CONFIG_T>
void dense_resource(
    data_T data[CONFIG_T::n_in],
    res_T  res[CONFIG_T::n_out],
    typename CONFIG_T::weight_t weights[CONFIG_T::n_in*CONFIG_T::n_out],
    typename CONFIG_T::bias_t   biases[CONFIG_T::n_out]) {

    #pragma HLS INLINE region

    if (CONFIG_T::reuse_factor <= CONFIG_T::n_in) {
        dense_resource_rf_leq_nin<data_T, res_T, CONFIG_T>(data, res, weights, biases);
    } else if (CONFIG_T::reuse_factor % CONFIG_T::n_in == 0) {
        dense_resource_rf_gt_nin_rem0<data_T, res_T, CONFIG_T>(data, res, weights, biases);
    } else {
        dense_resource_rf_gt_nin<data_T, res_T, CONFIG_T>(data, res, weights, biases);
    }
}


//---------------------------------------------------------------------------------------------
//add by us
template<class data_T, class weight_T, class ret_T>
inline typename std::enable_if<(not std::is_same<data_T, ap_uint<1>>::value)
        and (not std::is_same<weight_T, ap_uint<1>>::value), ret_T>::type
product_dense(data_T a, weight_T w){
    // 'Normal' product
    #pragma HLS inline off
    return a * w;
}

template<class data_T, class weight_T, class ret_T>
inline typename std::enable_if<(not std::is_same<data_T, ap_uint<1>>::value)
        and (not std::is_same<weight_T, ap_uint<1>>::value), ret_T>::type
product_dense1(data_T a, weight_T w){
    // 'Normal' product
    #pragma HLS inline off
    return a * w;
}




template<class data_T, class res_T, typename CONFIG_T>
void dense_large_rf_leq_nin(
    data_T data[CONFIG_T::n_in],
    res_T  res[CONFIG_T::n_out],
    typename CONFIG_T::weight_t weights[CONFIG_T::n_in*CONFIG_T::n_out],
    typename CONFIG_T::bias_t   biases[CONFIG_T::n_out]) {

    const int rufactor = CONFIG_T::reuse_factor;
    const int multfactor = MIN(CONFIG_T::n_in,CONFIG_T::reuse_factor);
    const int multiplier_limit = DIV_ROUNDUP(CONFIG_T::n_in*CONFIG_T::n_out, multfactor);
    const int block_factor = DIV_ROUNDUP(CONFIG_T::n_in*CONFIG_T::n_out, CONFIG_T::reuse_factor);
    const int multscale = multiplier_limit/CONFIG_T::n_out;
    const int nin = CONFIG_T::n_in;
    const int nout = CONFIG_T::n_out;

    assert((multiplier_limit % nout == 0 || rufactor >= nin) && "The current Reuse Factor is not allowed");
    assert((multiplier_limit == block_factor) && "This function is correct only for RF <= N_IN");

    #pragma HLS ARRAY_RESHAPE   variable=weights block factor=block_factor
    #pragma HLS ARRAY_PARTITION variable=biases complete

    typename CONFIG_T::accum_t acc[CONFIG_T::n_out];
    #pragma HLS ARRAY_PARTITION variable=acc complete

    InitAccum:
    for (int iacc = 0; iacc < nout; iacc++) {
        #pragma HLS UNROLL
        acc[iacc] = (typename CONFIG_T::accum_t) biases[iacc];
    }

    for (int ir = 0; ir < rufactor; ir++) {
        #pragma HLS PIPELINE II=1 
        typename CONFIG_T::accum_t tmpmult[block_factor];
        #pragma HLS ARRAY_PARTITION variable=tmpmult complete  
	unsigned in_index=ir;
	for (int im = 0; im < block_factor; im++) {
            #pragma HLS UNROLL
            unsigned w_index  =  ir + (rufactor*im); 
	    tmpmult[im] = product_dense<data_T, typename CONFIG_T::weight_t, typename CONFIG_T::accum_t>(data[in_index], weights[w_index]);
	    in_index += rufactor;
	    if (in_index >= nin) {
             in_index = ir;
            }
        }
	for (int im = 0; im < block_factor; im++) {
          #pragma HLS UNROLL
	 //tmpacc[im] += tmpmult[im];
	 unsigned out_index =   im/multscale;
	 acc[out_index] += tmpmult[im];
       }
    }
    Result:
    for (int ires = 0; ires < CONFIG_T::n_out; ires++) {
        #pragma HLS UNROLL
        //res[ires] = cast<data_T, res_T, CONFIG_T>(acc[ires]);
        res_T tmp = acc[ires];
        res[ires] =  tmp;
    }
}


template<class data_T, class res_T, typename CONFIG_T>
void dense_ss(
      hls::stream<data_T> &data,
      hls::stream<res_T>  &res,
      typename CONFIG_T::weight_t weights[CONFIG_T::n_in*CONFIG_T::n_out],
      typename CONFIG_T::bias_t   biases[CONFIG_T::n_out]) {

      
      data_T tmpdata;
      
      res_T tmpres[CONFIG_T::n_out];
      #pragma HLS ARRAY_PARTITION variable=tmpdres complete
      
      typename CONFIG_T::accum_t acc[CONFIG_T::n_out];
      #pragma HLS ARRAY_PARTITION variable=acc complete

      InitAccum:
      for (int iacc = 0; iacc < CONFIG_T::n_out; iacc++) {
          #pragma HLS UNROLL
          acc[iacc] = (typename CONFIG_T::accum_t) biases[iacc];
      }
    
     for(int i_in = 0; i_in < CONFIG_T::n_in; i_in++) {
      #pragma HLS UNROLL
            tmpdata = data.read();
            
            
            for(unsigned i_out = 0; i_out < CONFIG_T::n_out; i_out++) {
            
                unsigned w_index  =  i_in + (CONFIG_T::n_in*i_out); 
                acc[i_out] += product_dense<data_T, typename CONFIG_T::weight_t, typename CONFIG_T::accum_t>(tmpdata, weights[w_index]);
                
            
            }
            
    }
     
       
	     
  	 ResWrite: for(unsigned i_out = 0; i_out < CONFIG_T::n_out; i_out++) {         
          #pragma HLS UNROLL
          
          res_T tmpres = (res_T) acc[i_out];
          
          res.write(tmpres);
      }

}

template<class data_T, class res_T, typename CONFIG_T>
void dense_ss1(
      hls::stream<data_T> &data,
      hls::stream<res_T>  &res,
      typename CONFIG_T::weight_t weights[CONFIG_T::n_in*CONFIG_T::n_out],
      typename CONFIG_T::bias_t   biases[CONFIG_T::n_out]) {
std::cout<<"dense_ss1"<<std::endl;
      
      data_T tmpdata;
      
      res_T tmpres[CONFIG_T::n_out];
      #pragma HLS ARRAY_PARTITION variable=tmpdres complete
      
      typename CONFIG_T::accum_t acc[CONFIG_T::n_out];
      #pragma HLS ARRAY_PARTITION variable=acc complete

      InitAccum:
      for (int iacc = 0; iacc < CONFIG_T::n_out; iacc++) {
          #pragma HLS UNROLL
          acc[iacc] = (typename CONFIG_T::accum_t) biases[iacc];
      }
    
     for(int i_in = 0; i_in < CONFIG_T::n_in; i_in++) {
      #pragma HLS UNROLL
            tmpdata = data.read();
            
            
            for(unsigned i_out = 0; i_out < CONFIG_T::n_out; i_out++) {
            
                unsigned w_index  =  i_in + (CONFIG_T::n_in*i_out); 
                acc[i_out] += product_dense1<data_T, typename CONFIG_T::weight_t, typename CONFIG_T::accum_t>(tmpdata, weights[w_index]);
                
            
            }
            
    }
     
       
	     
  	 ResWrite: for(unsigned i_out = 0; i_out < CONFIG_T::n_out; i_out++) {         
          #pragma HLS UNROLL
          
          res_T tmpres = (res_T) acc[i_out];
          
          res.write(tmpres);
      }

}


template<class data_T, class res_T, typename CONFIG_T>
void dense_large_rf_gt_nin_rem0(
    data_T data[CONFIG_T::n_in],
    res_T  res[CONFIG_T::n_out],
    typename CONFIG_T::weight_t weights[CONFIG_T::n_in*CONFIG_T::n_out],
    typename CONFIG_T::bias_t   biases[CONFIG_T::n_out]) {

    const int rufactor = MIN(CONFIG_T::reuse_factor, CONFIG_T::n_in * CONFIG_T::n_out);
    const int multfactor = MIN(CONFIG_T::n_in,CONFIG_T::reuse_factor);
    const int multiplier_limit = DIV_ROUNDUP(CONFIG_T::n_in*CONFIG_T::n_out, multfactor);
    const int block_factor = DIV_ROUNDUP(CONFIG_T::n_in*CONFIG_T::n_out, CONFIG_T::reuse_factor);
    const int multscale = multiplier_limit/CONFIG_T::n_out;
    const int nin = CONFIG_T::n_in;
    const int nout = CONFIG_T::n_out;

    assert((multiplier_limit % nout == 0 || rufactor >= nin) && "The current Reuse Factor is not allowed");
    assert((rufactor > nin && rufactor % nin == 0) && "This function is correct only for RF > N_IN && RF % N_IN == 0");

    #pragma HLS function_instantiate variable=biases
    //#pragma HLS RESOURCE variable=weights core=RAM_2P_BRAM Commenting out the deisgnation HLS seems to choose correctly
    #pragma HLS ARRAY_RESHAPE   variable=weights block factor=block_factor
    #pragma HLS ARRAY_PARTITION variable=biases complete

    typename CONFIG_T::accum_t acc[CONFIG_T::n_out];
    #pragma HLS ARRAY_PARTITION variable=acc complete

    InitAccum:
    for (int iacc = 0; iacc < nout; iacc++) {
        #pragma HLS UNROLL
        acc[iacc] = (typename CONFIG_T::accum_t) biases[iacc];
    }

    int w_index;
    int in_index = 0;
    int out_index;
    int outstep = 0;
    const int outscale = rufactor / nin;

    int outidx[rufactor];
    IndexLoop:
    for (int ir = 0; ir < rufactor; ir++) {
        outidx[ir] = outstep;
        if ((ir + 1) % nin == 0) {
            outstep++;
        }
    }

    ReuseLoop:
    for (int ir = 0; ir < rufactor; ir++) {
        #pragma HLS PIPELINE II=1 rewind

        //w_index = ir;
        //out_index = outidx[ir]/*outstep*/;
        
	unsigned in_index  = ir - int(ir/nin)*nin;
	unsigned out_idx_r = int(ir/nin);
	//if(in_index  != in_index1) std::cout << " check in_index "  << in_index  << " -- " << in_index1 << std::endl;
	//if(out_index != out_idx_r) std::cout << " check out_index " << out_index << " -- " << out_idx_r << std::endl;
	
        MultLoop:
        for (int im = 0; im < block_factor; im++) {
            #pragma HLS UNROLL
            unsigned w_index     = ir + rufactor*im;
	    unsigned out_index   = im*outscale+out_idx_r;
	    //if(w_index   != w_index1)   std::cout << "----> w_index " << w_index     << " -- " << w_index1 << std::endl;
	    //if(out_index != out_index1) std::cout << "----> out_index " << out_index << " -- " << out_index1 << std::endl;
	    acc[out_index] += product_dense<data_T, typename CONFIG_T::weight_t, typename CONFIG_T::accum_t>(data[in_index], weights[w_index]);

	    // w_index += rufactor;
            //if (w_index >= CONFIG_T::n_in * CONFIG_T::n_out) break; // check out of bounds
            //out_index += outscale;
        }

        //in_index++;
        //if (in_index >= nin) {
	//   in_index = 0;
            //outstep++; // This causes a huge increase in scheduling and RTL generation times, hence the above workaround.
        //}
    }

    // Cast to "res_t" type
    Result:
    for (int ires = 0; ires < CONFIG_T::n_out; ires++) {
        #pragma HLS UNROLL
       // res[ires] = cast<data_T, res_T, CONFIG_T>(acc[ires]);
        res_T tmp = acc[ires];
        res[ires] =  tmp;
    }
}


template<class data_T, class res_T, typename CONFIG_T>
void dense_large_rf_gt_nin(
    data_T data[CONFIG_T::n_in],
    res_T  res[CONFIG_T::n_out],
    typename CONFIG_T::weight_t weights[CONFIG_T::n_in*CONFIG_T::n_out],
    typename CONFIG_T::bias_t   biases[CONFIG_T::n_out]) {

    const int rufactor = CONFIG_T::reuse_factor;
    const int multfactor = MIN(CONFIG_T::n_in,CONFIG_T::reuse_factor);
    const int multiplier_limit = DIV_ROUNDUP(CONFIG_T::n_in*CONFIG_T::n_out, multfactor);
    const int block_factor = DIV_ROUNDUP(CONFIG_T::n_in*CONFIG_T::n_out, CONFIG_T::reuse_factor);
    const int multscale = multiplier_limit/CONFIG_T::n_out;
    const int nin = CONFIG_T::n_in;
    const int nout = CONFIG_T::n_out;

    assert((multiplier_limit % nout == 0 || rufactor >= nin) && "The current Reuse Factor is not allowed");
    assert((rufactor > nin) && "This function is correct only for RF > N_IN");

    #pragma HLS function_instantiate variable=biases
    //#pragma HLS RESOURCE variable=weights core=RAM_2P_BRAM Commenting out the deisgnation HLS seems to choose correctly
    #pragma HLS ARRAY_RESHAPE   variable=weights block factor=block_factor
    #pragma HLS ARRAY_PARTITION variable=biases complete

    typename CONFIG_T::accum_t acc[CONFIG_T::n_out];
    #pragma HLS ARRAY_PARTITION variable=acc complete

    InitAccum:
    for (int iacc = 0; iacc < nout; iacc++) {
        #pragma HLS UNROLL
        acc[iacc] = (typename CONFIG_T::accum_t) biases[iacc];
    }

    ReuseLoop:
    for (int ir = 0; ir < rufactor; ir++) {
        #pragma HLS PIPELINE II=1 rewind
        typename CONFIG_T::accum_t tmpmult[block_factor];
        #pragma HLS ARRAY_PARTITION variable=tmpmult complete

        MultLoop:
        for (int im = 0; im < block_factor; im++) {
            #pragma HLS UNROLL
            int w_index = ir + rufactor * im;
            int in_index = w_index % nin;
            if (w_index >= CONFIG_T::n_in*CONFIG_T::n_out) continue; // check out of bounds
            tmpmult[im] = product_dense<data_T, typename CONFIG_T::weight_t, typename CONFIG_T::accum_t>(data[in_index], weights[w_index]);
        }

        typename CONFIG_T::accum_t mult[multiplier_limit];
        #pragma HLS ARRAY_PARTITION variable=mult complete

        ResetMult:
        for (int imult = 0; imult < multiplier_limit; imult++) {
            #pragma HLS UNROLL
            mult[imult] = 0;
        }

        AccumLoop1:
        for (int im = 0; im < block_factor; im++) {
            #pragma HLS UNROLL
            int w_index = ir + rufactor * im;
            int out_index = w_index / multfactor;
            if (out_index >= multiplier_limit) continue; // check out of bounds
            mult[out_index] += tmpmult[im];
        }

        AccumLoop2:
        for (int im = 0; im < multiplier_limit; im++) {
            #pragma HLS UNROLL
            //int out_index = im/multscale; // This is the general case
            //acc[out_index] += mult[im];
            acc[im] += mult[im]; // If RF > N_IN then multiplier_limit == n_out
        }
    }

    // Cast to "res_t" type
    Result:
    for (int ires = 0; ires < CONFIG_T::n_out; ires++) {
        #pragma HLS UNROLL
        //res[ires] = cast<data_T, res_T, CONFIG_T>(acc[ires]);
         res_T tmp = acc[ires];
        res[ires] =  tmp;
    }
}


template<class data_T, class res_T, typename CONFIG_T>
void dense_large(
    data_T data[CONFIG_T::n_in],
    res_T  res[CONFIG_T::n_out],
    typename CONFIG_T::weight_t weights[CONFIG_T::n_in*CONFIG_T::n_out],
    typename CONFIG_T::bias_t   biases[CONFIG_T::n_out]) {

  #pragma HLS INLINE region
  
    if (CONFIG_T::reuse_factor <= CONFIG_T::n_in) {
        std::cout<< "USE DENSE LARGE1" << std::endl;
        dense_large_rf_leq_nin<data_T, res_T, CONFIG_T>(data, res, weights, biases);
    } else if (CONFIG_T::reuse_factor % CONFIG_T::n_in == 0) {
        std::cout<< "USE DENSE LARGE2" << std::endl;
        dense_large_rf_gt_nin_rem0<data_T, res_T, CONFIG_T>(data, res, weights, biases);
    } else {
        std::cout<< "USE DENSE LARGE3" << std::endl;
        dense_large_rf_gt_nin<data_T, res_T, CONFIG_T>(data, res, weights, biases);
    }
   
}

template<class data_T, class res_T, typename CONFIG_T>
void dense_large_stream_me(
      hls::stream<data_T> &data,
      hls::stream<res_T>  &res,
      typename CONFIG_T::weight_t weights[CONFIG_T::n_in*CONFIG_T::n_out],
      typename CONFIG_T::bias_t   biases[CONFIG_T::n_out]) {

      
      static data_T tmpdata[CONFIG_T::n_in];
      #pragma HLS ARRAY_PARTITION variable=tmpdata complete
      
      DataPrepare: for(int i_in = 0; i_in < CONFIG_T::n_in; i_in++) {
        if (CONFIG_T::n_in > 1) {
            #pragma HLS PIPELINE
        }
            #pragma HLS UNROLL
            tmpdata[i_in] = data.read();
    }
     
       res_T tmpres[CONFIG_T::n_out];
       #pragma HLS ARRAY_PARTITION variable=tmpdres complete
	     dense_large<data_T,res_T, CONFIG_T>(tmpdata,tmpres,weights,biases);

	 ResWrite: for(unsigned i_out = 0; i_out < CONFIG_T::n_out; i_out++) {
        if (CONFIG_T::n_out > 1) {
            #pragma HLS PIPELINE
        }
        #pragma HLS UNROLL
        res.write(tmpres[i_out]);
    }

}





}

#endif

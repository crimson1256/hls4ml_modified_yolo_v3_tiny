#ifndef NNET_CONV2D_STREAM_H_
#define NNET_CONV2D_STREAM_H_

#include "ap_shift_reg.h"
#include "nnet_common.h"
#include "nnet_conv_stream.h"
#include "hls_stream.h"

namespace nnet {

template<class data_T, typename CONFIG_T>
void compute_scaled_indices_2d(
    const unsigned h_idx,
    const unsigned w_idx,
    ap_uint<CONFIG_T::filt_height * CONFIG_T::filt_width> *pixel_idx
) {
    const unsigned sh_idx = scale_index<CONFIG_T::filt_height, CONFIG_T::stride_height, CONFIG_T::in_height>(h_idx);
    unsigned wp_idx = w_idx * (data_T::size / CONFIG_T::n_chan);

    ComputeIndex: for (unsigned p = 0; p < data_T::size / CONFIG_T::n_chan; p++) {
        #pragma HLS UNROLL

        unsigned sw_idx = scale_index<CONFIG_T::filt_width, CONFIG_T::stride_width, CONFIG_T::in_width>(wp_idx + p);
        pixel_idx[p] = CONFIG_T::pixels[sh_idx * CONFIG_T::min_width + sw_idx];
    }
}

template<class data_T, class res_T, typename CONFIG_T>
void conv_2d_encoded_cl(
    hls::stream<data_T> &data,
    hls::stream<res_T>  &res,
    typename CONFIG_T::weight_t weights[CONFIG_T::filt_height * CONFIG_T::filt_width * CONFIG_T::n_chan * CONFIG_T::n_filt],
    typename CONFIG_T::bias_t   biases[CONFIG_T::n_filt])
{
    assert(CONFIG_T::pad_top == 0 && CONFIG_T::pad_bottom == 0 && CONFIG_T::pad_left == 0 && CONFIG_T::pad_right == 0);
    assert(CONFIG_T::filt_height == CONFIG_T::filt_width);

    hls::stream<typename data_T::value_type> data_window[CONFIG_T::filt_height * CONFIG_T::filt_width * CONFIG_T::n_chan];
    const int win_depth = CONFIG_T::filt_height * CONFIG_T::out_width;
    for (unsigned i_out = 0; i_out < CONFIG_T::filt_height * CONFIG_T::filt_width * CONFIG_T::n_chan; i_out++) {
        #pragma HLS STREAM variable=data_window[i_out] depth=win_depth
    }

    #pragma HLS ARRAY_PARTITION variable=CONFIG_T::pixels complete

    res_T res_pack;
    #pragma HLS DATA_PACK variable=res_pack
    unsigned outputs_ready = 0;

    ap_uint<CONFIG_T::filt_height * CONFIG_T::filt_width> pixel_idx[data_T::size / CONFIG_T::n_chan];
    #pragma HLS ARRAY_PARTITION variable=pixel_idx complete

    ReadInputHeight: for (unsigned i_ih = 0; i_ih < CONFIG_T::in_height; i_ih++) {
        ReadInputWidth: for (unsigned i_iw = 0; i_iw < CONFIG_T::in_width / (data_T::size / CONFIG_T::n_chan); i_iw++) {
            #pragma HLS LOOP_FLATTEN
            if (CONFIG_T::strategy == nnet::latency && data_T::size / CONFIG_T::n_chan == 1) {
                #pragma HLS PIPELINE II=CONFIG_T::reuse_factor
            }
            compute_scaled_indices_2d<data_T, CONFIG_T>(i_ih, i_iw, pixel_idx);
            compute_output_encoded<data_T, res_T, CONFIG_T>(data.read(), data_window, res, res_pack, outputs_ready, weights, biases, pixel_idx);
        }
    }
}

// Line Buffer
template <class data_T, class res_T, typename CONFIG_T>
void conv_2d_buffer_cl(
    hls::stream<data_T> &data,
    hls::stream<res_T>  &res,
    typename CONFIG_T::weight_t weights[CONFIG_T::filt_height * CONFIG_T::filt_width * CONFIG_T::n_chan * CONFIG_T::n_filt],
    typename CONFIG_T::bias_t   biases[CONFIG_T::n_filt])
{
    assert(CONFIG_T::pad_top == 0 && CONFIG_T::pad_bottom == 0 && CONFIG_T::pad_left == 0 && CONFIG_T::pad_right == 0);

    static ap_shift_reg<typename data_T::value_type, CONFIG_T::in_width> line_buffer[MAX(CONFIG_T::filt_height - 1,1)][CONFIG_T::n_chan];
    #pragma HLS ARRAY_PARTITION variable = line_buffer complete dim = 2

    ReadInputHeight: for (unsigned i_ih = 0; i_ih < CONFIG_T::in_height; i_ih++) {
        ReadInputWidth: for (unsigned i_iw = 0; i_iw < CONFIG_T::in_width; i_iw++) {
            #pragma HLS LOOP_FLATTEN
            if(CONFIG_T::strategy == nnet::latency) {
                #pragma HLS PIPELINE II=CONFIG_T::reuse_factor
            }
            if (CONFIG_T::filt_height > 1) {
                compute_output_buffer_2d<data_T, res_T, CONFIG_T>(data.read(), line_buffer, res, weights, biases);
            } else {
                compute_output_buffer_1d<data_T, res_T, CONFIG_T>(data.read(), res, weights, biases);
            }
        }
    }
}

template <class data_T, class res_T, typename CONFIG_T>
void conv_2d_cl(
    hls::stream<data_T> &data,
    hls::stream<res_T>  &res,
    typename CONFIG_T::weight_t weights[CONFIG_T::filt_height * CONFIG_T::filt_width * CONFIG_T::n_chan * CONFIG_T::n_filt],
    typename CONFIG_T::bias_t   biases[CONFIG_T::n_filt])
{
    #pragma HLS inline region
    switch(CONFIG_T::implementation){
        case conv_implementation::linebuffer:
            conv_2d_buffer_cl<data_T, res_T, CONFIG_T>(data, res, weights, biases);
            break;
        case conv_implementation::encoded:
            conv_2d_encoded_cl<data_T, res_T, CONFIG_T>(data, res, weights, biases);
            break;
    }  
}

//-----------------------------------------------------------------------------------------------
//add by us

template<class data_T, class res_T, typename CONFIG_T>
void shift_right_small(//To be fixed with stride
			      data_T input[CONFIG_T::filt_height][CONFIG_T::n_chan],
			      res_T  data[CONFIG_T::filt_width   * CONFIG_T::filt_height * CONFIG_T::n_chan]) { 
  
  #pragma HLS inline
  //Shift register by image height
  static const int filt_width = CONFIG_T::filt_width-1;
  for(int i0 = 0; i0 < filt_width; i0++) { 
    #pragma HLS PIPELINE II=1
    for(unsigned i1 = 0; i1 < CONFIG_T::filt_height; i1++) { 
      for(unsigned i2 = 0; i2 < CONFIG_T::n_chan; i2++) { 
	data[i1*CONFIG_T::filt_width*CONFIG_T::n_chan+i0*CONFIG_T::n_chan+i2] = data[i1*CONFIG_T::filt_width*CONFIG_T::n_chan+(i0+1)*CONFIG_T::n_chan+i2];
      }
    }
  }
  static const int lastheight=(CONFIG_T::filt_width-1)*CONFIG_T::n_chan;
  for(int i1 = 0; i1 < CONFIG_T::filt_height; i1++) { 
   #pragma HLS UNROLL
    for(int i2 = 0; i2 < CONFIG_T::n_chan; i2++) { 
     data[lastheight+i1*CONFIG_T::filt_width*CONFIG_T::n_chan+i2] = input[i1][i2];
    }
  }
}


template<class data_T, class res_T, typename CONFIG_T>
  void cnnshift_arr(data_T data[CONFIG_T::n_chan],
		    ap_shift_reg<data_T, (CONFIG_T::in_width+CONFIG_T::pad_left+CONFIG_T::pad_right)> layer_in_row[(CONFIG_T::filt_height)-1][CONFIG_T::n_chan],
		    data_T output[(CONFIG_T::filt_height*CONFIG_T::filt_width)*(CONFIG_T::n_chan)]) { 
  
    #pragma HLS PIPELINE
    const static int rowsize = (CONFIG_T::in_width+CONFIG_T::pad_left+CONFIG_T::pad_right);
    
    data_T tmpinput[CONFIG_T::filt_height][CONFIG_T::n_chan];
    #pragma HLS ARRAY_RESHAPE variable=tmpinput complete dim=0
    
    for(int i0 = 0; i0 < CONFIG_T::n_chan; i0++) {
      #pragma HLS UNROLL
      tmpinput[CONFIG_T::filt_height-1][i0] = data[i0];
      for(unsigned i1 = 1; i1 < CONFIG_T::filt_height; i1++) {
        #pragma HLS UNROLL
	data_T tmp1      = tmpinput[CONFIG_T::filt_height-i1][i0];
	data_T tmp       = layer_in_row[i1-1][i0].shift(tmp1);
	tmpinput[CONFIG_T::filt_height-i1-1][i0] = tmp;
      }
    }
    shift_right_small<data_T,res_T,CONFIG_T>(tmpinput,output);
}

template<class data_T, class res_T, typename CONFIG_T>
void conv_2d_large_cl_nopad_pad_me(
         hls::stream<data_T> &data,
         hls::stream<res_T>  &res,
         typename CONFIG_T::weight_t weights[CONFIG_T::filt_height * CONFIG_T::filt_width * CONFIG_T::n_chan * CONFIG_T::n_filt],
         typename CONFIG_T::bias_t   biases[CONFIG_T::n_filt]               
			    ) {

    assert(CONFIG_T::pad_top == 0 && CONFIG_T::pad_bottom == 0 && CONFIG_T::pad_left == 0 && CONFIG_T::pad_right == 0);
    std::cout  << "USE CONV2D LARGE"<< std::endl;
 
    static ap_shift_reg<data_T, (CONFIG_T::in_width+CONFIG_T::pad_left+CONFIG_T::pad_right)> layer_in_row[(CONFIG_T::filt_height)-1][CONFIG_T::n_chan];
    #pragma HLS ARRAY_RESHAPE variable=layer_in_row complete dim=2
    
    data_T tmpdata[CONFIG_T::n_chan];
    #pragma HLS ARRAY_RESHAPE variable=tmpdata complete

    static data_T layer_in[CONFIG_T::filt_height*CONFIG_T::filt_width*CONFIG_T::n_chan];
    #pragma HLS ARRAY_RESHAPE variable=layer_in complete

    //typename res_T::value_type layer_reluout[CONFIG_T::n_filt];
    //#pragma HLS ARRAY_RESHAPE variable=layer_reluout complete dim=0

    res_T layer_out[CONFIG_T::n_filt];
    #pragma HLS ARRAY_RESHAPE variable=layer_out complete dim=0
    
	res_T res_pack;
    #pragma HLS DATA_PACK variable=res_pack
	
	
	
	// Thresholds
    const static int lShiftX = CONFIG_T::filt_width - 1;
    const static int lShiftY = CONFIG_T::filt_height - 1;

    // Counters
    static int pX = 0; // Pixel X
    static int pY = 0; // Pixel Y

    static int sX = 0; // Stride X
    static int sY = 0; // Stride Y
	
	for (unsigned i = 0; i < CONFIG_T::in_height * CONFIG_T::in_width; i++) {

		for(int i1 = 0; i1 < CONFIG_T::n_chan; i1++) { 
		  #pragma HLS UNROLL
		  tmpdata[i1] = data.read();
		}
		nnet::cnnshift_arr<data_T,res_T,  CONFIG_T>(tmpdata, layer_in_row, layer_in);
		
		// Check to see if we have a full kernel
		if ( (sX - lShiftX) == 0 && (sY - lShiftY) == 0 && pY > lShiftY - 1 && pX > lShiftX - 1) {
			
			// Dense multiply
			#pragma HLS INLINE region
			if (CONFIG_T::strategy == nnet::latency) {
				dense_latency<data_T,res_T, typename CONFIG_T::mult_config>(layer_in, layer_out, weights, biases);
			} else {
				dense_large<data_T,res_T, typename CONFIG_T::mult_config>(layer_in, layer_out, weights, biases);
			}

			// Pack output
			CastLoop: for (unsigned i_ic = 0; i_ic < CONFIG_T::n_filt; i_ic++) {
				#pragma HLS UNROLL
				res_pack = layer_out[i_ic];
				res.write(res_pack);
			}

			// Write output to stream when output ready

		}

		// Counter Housekeeping
		if (pX + 1 == CONFIG_T::in_width)  // Includes padding, end of line (padded)
		{
			pX = 0; 
			sX = 0;
			if (pY + 1 == CONFIG_T::in_height) {  // Reached bottom of image
				pY = 0; 
				sY = 0;
			} else {
				pY = pY + 1;
				// Update stride (threshold) ? subtract stride : increment stride
				sY = ((sY - lShiftY) == 0) ? sY - CONFIG_T::stride_height + 1 : sY + 1; 
			}
		} else {
			pX = pX + 1;
			// Update stride (threshold) ? subtract stride : increment stride
			sX = ((sX - lShiftX) == 0) ? sX - CONFIG_T::stride_width + 1 : sX + 1; 
		}
	}
}

template <class data_T, class res_T, typename CONFIG_T>
void conv_2d_cl_me(
    hls::stream<data_T> &data,
    hls::stream<res_T>  &res,
    typename CONFIG_T::weight_t weights[CONFIG_T::filt_height * CONFIG_T::filt_width * CONFIG_T::n_chan * CONFIG_T::n_filt],
    typename CONFIG_T::bias_t   biases[CONFIG_T::n_filt])
{
    #pragma HLS inline region
    switch(CONFIG_T::implementation){
        case conv_implementation::linebuffer:
            conv_2d_large_cl_nopad_pad_me<data_T, res_T, CONFIG_T>(data, res, weights, biases);
            break;
        case conv_implementation::encoded:
            conv_2d_large_cl_nopad_pad_me<data_T, res_T, CONFIG_T>(data, res, weights, biases);
            break;
    }  
}




}
#endif

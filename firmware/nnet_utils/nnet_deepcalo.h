#ifndef NNET_DEEPCALO_H_
#define NNET_DEEPCALO_H_

#include "nnet_common.h"
#include "hls_stream.h"
#include <cmath>

namespace nnet {

struct film_config {
    static const unsigned height = 56;
    static const unsigned width = 55;
    static const unsigned n_chan = 4;
    static const unsigned n_inp1 = 56*55*4;
    static const unsigned n_inp2 = 8;
};

struct mask_track_config {
    static const unsigned n_in = 258;
    static const unsigned height = 43;
    static const unsigned width = 6;
};

struct sum1d_config {
    static const unsigned n_in = 18;
    static const unsigned height = 6;
    static const unsigned width = 3;
};
struct slice_tensor1d_config {
    static const unsigned n_in = 24;
    static const unsigned start = 0;
    static const unsigned end = 8;
};

template<class input1_T, class input2_T, class res_T, typename CONFIG_T>
void film(
        input1_T data1[CONFIG_T::n_inp1],
	input2_T data2[CONFIG_T::n_inp2],
	res_T res[CONFIG_T::n_inp1]) {	

    	for (int i = 0; i < CONFIG_T::height; i++) {
        	for (int j = 0; j < CONFIG_T::width; j++) {
            		for (int k = 0; k < CONFIG_T::n_chan; k++) {
                		//output = (1+gamma)*in1 + betas
                		res[(i * CONFIG_T::n_chan * CONFIG_T::width ) + j * CONFIG_T::n_chan + k] = (data2[k]+1) * data1[(i * CONFIG_T::n_chan * CONFIG_T::width ) + j * CONFIG_T::n_chan + k]+(data2[CONFIG_T::n_chan+k]);
            		}
        	}
    	}
}


template<class data_T, class res_T, typename CONFIG_T>
void mask_track(
	data_T data[CONFIG_T::height * CONFIG_T::width],
	res_T  res[CONFIG_T::height]) {

    
    	bool mask_zero = false;
	#pragma HLS PIPELINE
    	for (int i = 0; i < CONFIG_T::height; i++) {
        	for (int j = 0; j < CONFIG_T::width; j++) {
            
            		if(data[ i * CONFIG_T::width  + j] == 0){
                		mask_zero = true;
                		break;
            		}

        	}
        	if (mask_zero){
            		res[i]  = 0;
            		mask_zero = false;
        	}
        	else res[i]  = 1;

    	}

}


template<class data_T, class res_T, typename CONFIG_T>
void sum1d(
	data_T data[CONFIG_T::height * CONFIG_T::width],
	res_T  res[CONFIG_T::width]) {
	#pragma HLS PIPELINE
    
	res_T zero[CONFIG_T::width];
	for (int i = 0; i < CONFIG_T::width; i++) {
        	zero[i] = 0;
    	}
    
	#pragma HLS PIPELINE
    	for (int i = 0; i < CONFIG_T::height; i++) {
        	for (int j = 0; j < CONFIG_T::width; j++) {            
            		zero[j] = zero[j] + data[ i * CONFIG_T::width  + j];
        	}
    	}
    	
	#pragma HLS PIPELINE
    	for (int i = 0; i < CONFIG_T::width; i++) {
        	res[i] = zero[i];
    	}
}


template<class data_T, class res_T, typename CONFIG_T>
void slice_tensor1d(
        data_T data[CONFIG_T::n_in],
	res_T  res[CONFIG_T::end - CONFIG_T::start]) {
	#pragma HLS PIPELINE

    	for (int i = 0; i < CONFIG_T::n_in; i++) {
        	if (i >=  CONFIG_T::start && i < CONFIG_T::end)
            		res[i - CONFIG_T::start] = data[i];
    	}
}

}

#endif

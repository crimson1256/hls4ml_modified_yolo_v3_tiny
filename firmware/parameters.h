#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "ap_int.h"
#include "ap_fixed.h"

#include "nnet_utils/nnet_helpers.h"
//hls-fpga-machine-learning insert includes
#include "nnet_utils/nnet_activation.h"
#include "nnet_utils/nnet_activation_stream.h"
#include "nnet_utils/nnet_conv2d.h"
#include "nnet_utils/nnet_conv2d_stream.h"
#include "nnet_utils/nnet_image.h"
#include "nnet_utils/nnet_image_stream.h"
#include "nnet_utils/nnet_padding.h"
#include "nnet_utils/nnet_padding_stream.h"
#include "nnet_utils/nnet_pooling.h"
#include "nnet_utils/nnet_pooling_stream.h"

#include "weights/w2.h"
#include "weights/b2.h"
#include "weights/w7.h"
#include "weights/b7.h"
#include "weights/w12.h"
#include "weights/b12.h"
#include "weights/w17.h"
#include "weights/b17.h"
#include "weights/w22.h"
#include "weights/b22.h"
#include "weights/w27.h"
#include "weights/b27.h"
#include "weights/w31.h"
#include "weights/b31.h"
#include "weights/w35.h"
#include "weights/b35.h"
#include "weights/w39.h"
#include "weights/b39.h"
#include "weights/w44.h"
#include "weights/b44.h"
#include "weights/w48.h"
#include "weights/b48.h"
 
//hls-fpga-machine-learning insert weights

//hls-fpga-machine-learning insert layer-config
// zp2d_conv2d
struct config50 : nnet::padding2d_config {
    static const unsigned in_height = N_INPUT_1_1;
    static const unsigned in_width = N_INPUT_2_1;
    static const unsigned n_chan = N_INPUT_3_1;
    static const unsigned out_height = OUT_HEIGHT_50;
    static const unsigned out_width = OUT_WIDTH_50;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d
struct config2_mult : nnet::dense_config {
    static const unsigned n_in = 27;
    static const unsigned n_out = 8;
    static const unsigned reuse_factor = 216;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef bias2_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config2 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_50;
    static const unsigned in_width = OUT_WIDTH_50;
    static const unsigned n_chan = N_CHAN_50;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_2;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_2;
    static const unsigned out_width = OUT_WIDTH_2;
    static const unsigned reuse_factor = 216;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef bias2_t bias_t;
    typedef model_default_t weight_t;
    typedef config2_mult mult_config;
};
const ap_uint<config2::filt_height * config2::filt_width> config2::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// leaky_re_lu
struct LeakyReLU_config5 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_2*OUT_WIDTH_2*N_FILT_2;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 1;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// max_pooling2d
struct config6 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_2;
    static const unsigned in_width = OUT_WIDTH_2;
    static const unsigned n_filt = N_FILT_6;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_6;

    static const unsigned out_height = OUT_HEIGHT_6;
    static const unsigned out_width = OUT_WIDTH_6;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 1;
    typedef ap_fixed<32,16> accum_t;
};

// zp2d_conv2d_1
struct config51 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_6;
    static const unsigned in_width = OUT_WIDTH_6;
    static const unsigned n_chan = N_FILT_6;
    static const unsigned out_height = OUT_HEIGHT_51;
    static const unsigned out_width = OUT_WIDTH_51;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_1
struct config7_mult : nnet::dense_config {
    static const unsigned n_in = 72;
    static const unsigned n_out = 8;
    static const unsigned reuse_factor = 576;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef bias7_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config7 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_51;
    static const unsigned in_width = OUT_WIDTH_51;
    static const unsigned n_chan = N_CHAN_51;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_7;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_7;
    static const unsigned out_width = OUT_WIDTH_7;
    static const unsigned reuse_factor = 576;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef bias7_t bias_t;
    typedef model_default_t weight_t;
    typedef config7_mult mult_config;
};
const ap_uint<config7::filt_height * config7::filt_width> config7::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// leaky_re_lu_1
struct LeakyReLU_config10 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_7*OUT_WIDTH_7*N_FILT_7;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 1;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// max_pooling2d_1
struct config11 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_7;
    static const unsigned in_width = OUT_WIDTH_7;
    static const unsigned n_filt = N_FILT_11;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_11;

    static const unsigned out_height = OUT_HEIGHT_11;
    static const unsigned out_width = OUT_WIDTH_11;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 1;
    typedef ap_fixed<32,16> accum_t;
};

// zp2d_conv2d_2
struct config52 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_11;
    static const unsigned in_width = OUT_WIDTH_11;
    static const unsigned n_chan = N_FILT_11;
    static const unsigned out_height = OUT_HEIGHT_52;
    static const unsigned out_width = OUT_WIDTH_52;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_2
struct config12_mult : nnet::dense_config {
    static const unsigned n_in = 72;
    static const unsigned n_out = 8;
    static const unsigned reuse_factor = 576;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef bias12_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config12 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_52;
    static const unsigned in_width = OUT_WIDTH_52;
    static const unsigned n_chan = N_CHAN_52;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_12;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_12;
    static const unsigned out_width = OUT_WIDTH_12;
    static const unsigned reuse_factor = 576;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef bias12_t bias_t;
    typedef model_default_t weight_t;
    typedef config12_mult mult_config;
};
const ap_uint<config12::filt_height * config12::filt_width> config12::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// leaky_re_lu_2
struct LeakyReLU_config15 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_12*OUT_WIDTH_12*N_FILT_12;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 1;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// max_pooling2d_2
struct config16 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_12;
    static const unsigned in_width = OUT_WIDTH_12;
    static const unsigned n_filt = N_FILT_16;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_16;

    static const unsigned out_height = OUT_HEIGHT_16;
    static const unsigned out_width = OUT_WIDTH_16;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 1;
    typedef ap_fixed<32,16> accum_t;
};

// zp2d_conv2d_3
struct config53 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_16;
    static const unsigned in_width = OUT_WIDTH_16;
    static const unsigned n_chan = N_FILT_16;
    static const unsigned out_height = OUT_HEIGHT_53;
    static const unsigned out_width = OUT_WIDTH_53;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_3
struct config17_mult : nnet::dense_config {
    static const unsigned n_in = 72;
    static const unsigned n_out = 8;
    static const unsigned reuse_factor = 576;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef bias17_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config17 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_53;
    static const unsigned in_width = OUT_WIDTH_53;
    static const unsigned n_chan = N_CHAN_53;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_17;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_17;
    static const unsigned out_width = OUT_WIDTH_17;
    static const unsigned reuse_factor = 576;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef bias17_t bias_t;
    typedef model_default_t weight_t;
    typedef config17_mult mult_config;
};
const ap_uint<config17::filt_height * config17::filt_width> config17::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// leaky_re_lu_3
struct LeakyReLU_config20 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_17*OUT_WIDTH_17*N_FILT_17;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 1;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// max_pooling2d_3
struct config21 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_17;
    static const unsigned in_width = OUT_WIDTH_17;
    static const unsigned n_filt = N_FILT_21;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_21;

    static const unsigned out_height = OUT_HEIGHT_21;
    static const unsigned out_width = OUT_WIDTH_21;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 1;
    typedef ap_fixed<32,16> accum_t;
};

// zp2d_conv2d_4
struct config54 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_21;
    static const unsigned in_width = OUT_WIDTH_21;
    static const unsigned n_chan = N_FILT_21;
    static const unsigned out_height = OUT_HEIGHT_54;
    static const unsigned out_width = OUT_WIDTH_54;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_4
struct config22_mult : nnet::dense_config {
    static const unsigned n_in = 72;
    static const unsigned n_out = 8;
    static const unsigned reuse_factor = 576;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef bias22_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config22 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_54;
    static const unsigned in_width = OUT_WIDTH_54;
    static const unsigned n_chan = N_CHAN_54;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_22;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_22;
    static const unsigned out_width = OUT_WIDTH_22;
    static const unsigned reuse_factor = 576;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef bias22_t bias_t;
    typedef model_default_t weight_t;
    typedef config22_mult mult_config;
};
const ap_uint<config22::filt_height * config22::filt_width> config22::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// leaky_re_lu_4
struct LeakyReLU_config25 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_22*OUT_WIDTH_22*N_FILT_22;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 1;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// max_pooling2d_4
struct config26 : nnet::pooling2d_config {
    static const unsigned in_height = OUT_HEIGHT_22;
    static const unsigned in_width = OUT_WIDTH_22;
    static const unsigned n_filt = N_FILT_26;
    static const unsigned stride_height = 2;
    static const unsigned stride_width = 2;
    static const unsigned pool_height = 2;
    static const unsigned pool_width = 2;

    static const unsigned filt_height = 2;
    static const unsigned filt_width = 2;
    static const unsigned n_chan = N_FILT_26;

    static const unsigned out_height = OUT_HEIGHT_26;
    static const unsigned out_width = OUT_WIDTH_26;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Max;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 1;
    typedef ap_fixed<32,16> accum_t;
};

// zp2d_conv2d_5
struct config55 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_26;
    static const unsigned in_width = OUT_WIDTH_26;
    static const unsigned n_chan = N_FILT_26;
    static const unsigned out_height = OUT_HEIGHT_55;
    static const unsigned out_width = OUT_WIDTH_55;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_5
struct config27_mult : nnet::dense_config {
    static const unsigned n_in = 72;
    static const unsigned n_out = 8;
    static const unsigned reuse_factor = 576;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef bias27_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config27 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_55;
    static const unsigned in_width = OUT_WIDTH_55;
    static const unsigned n_chan = N_CHAN_55;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_27;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_27;
    static const unsigned out_width = OUT_WIDTH_27;
    static const unsigned reuse_factor = 576;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef bias27_t bias_t;
    typedef model_default_t weight_t;
    typedef config27_mult mult_config;
};
const ap_uint<config27::filt_height * config27::filt_width> config27::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// leaky_re_lu_5
struct LeakyReLU_config30 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_27*OUT_WIDTH_27*N_FILT_27;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 1;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_conv2d_6
struct config56 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_27;
    static const unsigned in_width = OUT_WIDTH_27;
    static const unsigned n_chan = N_FILT_27;
    static const unsigned out_height = OUT_HEIGHT_56;
    static const unsigned out_width = OUT_WIDTH_56;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_6
struct config31_mult : nnet::dense_config {
    static const unsigned n_in = 72;
    static const unsigned n_out = 8;
    static const unsigned reuse_factor = 576;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef bias31_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config31 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_56;
    static const unsigned in_width = OUT_WIDTH_56;
    static const unsigned n_chan = N_CHAN_56;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_31;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_31;
    static const unsigned out_width = OUT_WIDTH_31;
    static const unsigned reuse_factor = 576;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef bias31_t bias_t;
    typedef model_default_t weight_t;
    typedef config31_mult mult_config;
};
const ap_uint<config31::filt_height * config31::filt_width> config31::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// leaky_re_lu_6
struct LeakyReLU_config34 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_31*OUT_WIDTH_31*N_FILT_31;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 1;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_conv2d_7
struct config57 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_31;
    static const unsigned in_width = OUT_WIDTH_31;
    static const unsigned n_chan = N_FILT_31;
    static const unsigned out_height = OUT_HEIGHT_57;
    static const unsigned out_width = OUT_WIDTH_57;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_7
struct config35_mult : nnet::dense_config {
    static const unsigned n_in = 72;
    static const unsigned n_out = 8;
    static const unsigned reuse_factor = 576;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef bias35_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config35 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_57;
    static const unsigned in_width = OUT_WIDTH_57;
    static const unsigned n_chan = N_CHAN_57;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_35;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_35;
    static const unsigned out_width = OUT_WIDTH_35;
    static const unsigned reuse_factor = 576;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef bias35_t bias_t;
    typedef model_default_t weight_t;
    typedef config35_mult mult_config;
};
const ap_uint<config35::filt_height * config35::filt_width> config35::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// leaky_re_lu_7
struct LeakyReLU_config38 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_35*OUT_WIDTH_35*N_FILT_35;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 1;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_conv2d_10
struct config58 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_35;
    static const unsigned in_width = OUT_WIDTH_35;
    static const unsigned n_chan = N_FILT_35;
    static const unsigned out_height = OUT_HEIGHT_58;
    static const unsigned out_width = OUT_WIDTH_58;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_10
struct config39_mult : nnet::dense_config {
    static const unsigned n_in = 72;
    static const unsigned n_out = 8;
    static const unsigned reuse_factor = 576;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef bias39_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config39 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_58;
    static const unsigned in_width = OUT_WIDTH_58;
    static const unsigned n_chan = N_CHAN_58;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_39;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_39;
    static const unsigned out_width = OUT_WIDTH_39;
    static const unsigned reuse_factor = 576;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef bias39_t bias_t;
    typedef model_default_t weight_t;
    typedef config39_mult mult_config;
};
const ap_uint<config39::filt_height * config39::filt_width> config39::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// leaky_re_lu_9
struct LeakyReLU_config42 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_39*OUT_WIDTH_39*N_FILT_39;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 1;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// up_sampling2d
struct config43 : nnet::resize_config {
    static const unsigned height = 4;
    static const unsigned width = 4;
    static const unsigned n_chan = 8;
    static const unsigned new_height = 8;
    static const unsigned new_width = 8;
};

// zp2d_conv2d_11
struct config59 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_43;
    static const unsigned in_width = OUT_WIDTH_43;
    static const unsigned n_chan = N_CHAN_43;
    static const unsigned out_height = OUT_HEIGHT_59;
    static const unsigned out_width = OUT_WIDTH_59;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_11
struct config44_mult : nnet::dense_config {
    static const unsigned n_in = 72;
    static const unsigned n_out = 8;
    static const unsigned reuse_factor = 576;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef bias44_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config44 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_59;
    static const unsigned in_width = OUT_WIDTH_59;
    static const unsigned n_chan = N_CHAN_59;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_44;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_44;
    static const unsigned out_width = OUT_WIDTH_44;
    static const unsigned reuse_factor = 576;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef bias44_t bias_t;
    typedef model_default_t weight_t;
    typedef config44_mult mult_config;
};
const ap_uint<config44::filt_height * config44::filt_width> config44::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};

// leaky_re_lu_10
struct LeakyReLU_config47 : nnet::activ_config {
    static const unsigned n_in = OUT_HEIGHT_44*OUT_WIDTH_44*N_FILT_44;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 1;
    typedef ap_fixed<18,8> table_t;
    //typedef ap_fixed<32,16> table_t;
};

// zp2d_conv2d_12
struct config60 : nnet::padding2d_config {
    static const unsigned in_height = OUT_HEIGHT_44;
    static const unsigned in_width = OUT_WIDTH_44;
    static const unsigned n_chan = N_FILT_44;
    static const unsigned out_height = OUT_HEIGHT_60;
    static const unsigned out_width = OUT_WIDTH_60;
    static const unsigned pad_top = 1;
    static const unsigned pad_bottom = 1;
    static const unsigned pad_left = 1;
    static const unsigned pad_right = 1;
};

// conv2d_12
struct config48_mult : nnet::dense_config {
    static const unsigned n_in = 72;
    static const unsigned n_out = 18;
    static const unsigned reuse_factor = 1296;
    static const unsigned strategy = nnet::resource;
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct config48 : nnet::conv2d_config {
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_height = OUT_HEIGHT_60;
    static const unsigned in_width = OUT_WIDTH_60;
    static const unsigned n_chan = N_CHAN_60;
    static const unsigned filt_height = 3;
    static const unsigned filt_width = 3;
    static const unsigned kernel_size = filt_height * filt_width;
    static const unsigned n_filt = N_FILT_48;
    static const unsigned stride_height = 1;
    static const unsigned stride_width = 1;
    static const unsigned out_height = OUT_HEIGHT_48;
    static const unsigned out_width = OUT_WIDTH_48;
    static const unsigned reuse_factor = 1296;
    static const unsigned n_zeros = 0;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::resource;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_height = 5;
    static const unsigned min_width = 5;
    static const ap_uint<filt_height * filt_width> pixels[min_height * min_width];
    typedef ap_fixed<32,16> accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef config48_mult mult_config;
};
const ap_uint<config48::filt_height * config48::filt_width> config48::pixels[] = {1,3,7,6,4,9,27,63,54,36,73,219,511,438,292,72,216,504,432,288,64,192,448,384,256};


#endif

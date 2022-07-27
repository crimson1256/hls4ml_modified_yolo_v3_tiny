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
#include <iostream>

#include "myproject.h"
#include "parameters.h"

void myproject(
    hls::stream<input_t> &input_1,
    hls::stream<layer48_t> &layer48_out,
    /*
    model_default_t w2[216],
    bias2_t b2[8],
    model_default_t w7[576],
    bias7_t b7[8],
    model_default_t w12[576],
    bias12_t b12[8],
    model_default_t w17[576],
    bias17_t b17[8],
    model_default_t w22[576],
    bias22_t b22[8],
    model_default_t w27[576],
    bias27_t b27[8],
    model_default_t w31[576],
    bias31_t b31[8],
    model_default_t w35[576],
    bias35_t b35[8],
    model_default_t w39[576],
    bias39_t b39[8],
    model_default_t w44[576],
    bias44_t b44[8],
    model_default_t w48[1296],
    model_default_t b48[18],
    */
    unsigned short &const_size_in_1,
    unsigned short &const_size_out_1
) {

    //hls-fpga-machine-learning insert IO
    #pragma HLS INTERFACE axis port=input_1,layer48_out 
    #pragma HLS DATAFLOW 

    const_size_in_1 = N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1;
    const_size_out_1 = OUT_HEIGHT_48*OUT_WIDTH_48*N_FILT_48;

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        //hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<model_default_t, 216>(w2, "w2.txt");
        nnet::load_weights_from_txt<bias2_t, 8>(b2, "b2.txt");
        nnet::load_weights_from_txt<model_default_t, 576>(w7, "w7.txt");
        nnet::load_weights_from_txt<bias7_t, 8>(b7, "b7.txt");
        nnet::load_weights_from_txt<model_default_t, 576>(w12, "w12.txt");
        nnet::load_weights_from_txt<bias12_t, 8>(b12, "b12.txt");
        nnet::load_weights_from_txt<model_default_t, 576>(w17, "w17.txt");
        nnet::load_weights_from_txt<bias17_t, 8>(b17, "b17.txt");
        nnet::load_weights_from_txt<model_default_t, 576>(w22, "w22.txt");
        nnet::load_weights_from_txt<bias22_t, 8>(b22, "b22.txt");
        nnet::load_weights_from_txt<model_default_t, 576>(w27, "w27.txt");
        nnet::load_weights_from_txt<bias27_t, 8>(b27, "b27.txt");
        nnet::load_weights_from_txt<model_default_t, 576>(w31, "w31.txt");
        nnet::load_weights_from_txt<bias31_t, 8>(b31, "b31.txt");
        nnet::load_weights_from_txt<model_default_t, 576>(w35, "w35.txt");
        nnet::load_weights_from_txt<bias35_t, 8>(b35, "b35.txt");
        nnet::load_weights_from_txt<model_default_t, 576>(w39, "w39.txt");
        nnet::load_weights_from_txt<bias39_t, 8>(b39, "b39.txt");
        nnet::load_weights_from_txt<model_default_t, 576>(w44, "w44.txt");
        nnet::load_weights_from_txt<bias44_t, 8>(b44, "b44.txt");
        nnet::load_weights_from_txt<model_default_t, 1296>(w48, "w48.txt");
        nnet::load_weights_from_txt<model_default_t, 18>(b48, "b48.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    //hls-fpga-machine-learning insert layers

std::cout<<"input_1"<<std::endl;
std::cout<<"zp2d_conv2d"<<std::endl;
    hls::stream<layer50_t> layer50_out("layer50_out");
    #pragma HLS STREAM variable=layer50_out depth=16900
    nnet::zeropad2d_cl_me<input_t, layer50_t, config50>(input_1, layer50_out); // zp2d_conv2d

std::cout<<"conv2d"<<std::endl;
    hls::stream<layer2_t> layer2_out("layer2_out");
    #pragma HLS STREAM variable=layer2_out depth=16384
    nnet::conv_2d_cl_me<layer50_t, layer2_t, config2>(layer50_out, layer2_out, w2, b2); // conv2d

std::cout<<"leaky_re_lu"<<std::endl;
    hls::stream<layer5_t> layer5_out("layer5_out");
    #pragma HLS STREAM variable=layer5_out depth=16384
    nnet::leaky_relu_me<layer2_t, layer5_t, LeakyReLU_config5>(layer2_out, 0.10000000149011612, layer5_out); // leaky_re_lu

std::cout<<"max_pooling2d"<<std::endl;
    hls::stream<layer6_t> layer6_out("layer6_out");
    #pragma HLS STREAM variable=layer6_out depth=4096
    nnet::pooling2d_large_cl_nopad_pad_me<layer5_t, layer6_t, config6>(layer5_out, layer6_out); // max_pooling2d

std::cout<<"zp2d_conv2d_1"<<std::endl;
    hls::stream<layer51_t> layer51_out("layer51_out");
    #pragma HLS STREAM variable=layer51_out depth=4356
    nnet::zeropad2d_cl_me<layer6_t, layer51_t, config51>(layer6_out, layer51_out); // zp2d_conv2d_1

std::cout<<"conv2d_1"<<std::endl;
    hls::stream<layer7_t> layer7_out("layer7_out");
    #pragma HLS STREAM variable=layer7_out depth=4096
    nnet::conv_2d_cl_me<layer51_t, layer7_t, config7>(layer51_out, layer7_out, w7, b7); // conv2d_1

std::cout<<"leaky_re_lu_1"<<std::endl;
    hls::stream<layer10_t> layer10_out("layer10_out");
    #pragma HLS STREAM variable=layer10_out depth=4096
    nnet::leaky_relu_me<layer7_t, layer10_t, LeakyReLU_config10>(layer7_out, 0.10000000149011612, layer10_out); // leaky_re_lu_1

std::cout<<"max_pooling2d_1"<<std::endl;
    hls::stream<layer11_t> layer11_out("layer11_out");
    #pragma HLS STREAM variable=layer11_out depth=1024
    nnet::pooling2d_large_cl_nopad_pad_me<layer10_t, layer11_t, config11>(layer10_out, layer11_out); // max_pooling2d_1

std::cout<<"zp2d_conv2d_2"<<std::endl;
    hls::stream<layer52_t> layer52_out("layer52_out");
    #pragma HLS STREAM variable=layer52_out depth=1156
    nnet::zeropad2d_cl_me<layer11_t, layer52_t, config52>(layer11_out, layer52_out); // zp2d_conv2d_2

std::cout<<"conv2d_2"<<std::endl;
    hls::stream<layer12_t> layer12_out("layer12_out");
    #pragma HLS STREAM variable=layer12_out depth=1024
    nnet::conv_2d_cl_me<layer52_t, layer12_t, config12>(layer52_out, layer12_out, w12, b12); // conv2d_2

std::cout<<"leaky_re_lu_2"<<std::endl;
    hls::stream<layer15_t> layer15_out("layer15_out");
    #pragma HLS STREAM variable=layer15_out depth=1024
    nnet::leaky_relu_me<layer12_t, layer15_t, LeakyReLU_config15>(layer12_out, 0.10000000149011612, layer15_out); // leaky_re_lu_2

std::cout<<"max_pooling2d_2"<<std::endl;
    hls::stream<layer16_t> layer16_out("layer16_out");
    #pragma HLS STREAM variable=layer16_out depth=256
    nnet::pooling2d_large_cl_nopad_pad_me<layer15_t, layer16_t, config16>(layer15_out, layer16_out); // max_pooling2d_2

std::cout<<"zp2d_conv2d_3"<<std::endl;
    hls::stream<layer53_t> layer53_out("layer53_out");
    #pragma HLS STREAM variable=layer53_out depth=324
    nnet::zeropad2d_cl_me<layer16_t, layer53_t, config53>(layer16_out, layer53_out); // zp2d_conv2d_3

std::cout<<"conv2d_3"<<std::endl;
    hls::stream<layer17_t> layer17_out("layer17_out");
    #pragma HLS STREAM variable=layer17_out depth=256
    nnet::conv_2d_cl_me<layer53_t, layer17_t, config17>(layer53_out, layer17_out, w17, b17); // conv2d_3

std::cout<<"leaky_re_lu_3"<<std::endl;
    hls::stream<layer20_t> layer20_out("layer20_out");
    #pragma HLS STREAM variable=layer20_out depth=256
    nnet::leaky_relu_me<layer17_t, layer20_t, LeakyReLU_config20>(layer17_out, 0.10000000149011612, layer20_out); // leaky_re_lu_3

std::cout<<"max_pooling2d_3"<<std::endl;
    hls::stream<layer21_t> layer21_out("layer21_out");
    #pragma HLS STREAM variable=layer21_out depth=64
    nnet::pooling2d_large_cl_nopad_pad_me<layer20_t, layer21_t, config21>(layer20_out, layer21_out); // max_pooling2d_3

std::cout<<"zp2d_conv2d_4"<<std::endl;
    hls::stream<layer54_t> layer54_out("layer54_out");
    #pragma HLS STREAM variable=layer54_out depth=100
    nnet::zeropad2d_cl_me<layer21_t, layer54_t, config54>(layer21_out, layer54_out); // zp2d_conv2d_4

std::cout<<"conv2d_4"<<std::endl;
    hls::stream<layer22_t> layer22_out("layer22_out");
    #pragma HLS STREAM variable=layer22_out depth=64
    nnet::conv_2d_cl_me<layer54_t, layer22_t, config22>(layer54_out, layer22_out, w22, b22); // conv2d_4

std::cout<<"leaky_re_lu_4"<<std::endl;
    hls::stream<layer25_t> layer25_out("layer25_out");
    #pragma HLS STREAM variable=layer25_out depth=64
    nnet::leaky_relu_me<layer22_t, layer25_t, LeakyReLU_config25>(layer22_out, 0.10000000149011612, layer25_out); // leaky_re_lu_4

std::cout<<"max_pooling2d_4"<<std::endl;
    hls::stream<layer26_t> layer26_out("layer26_out");
    #pragma HLS STREAM variable=layer26_out depth=16
    nnet::pooling2d_large_cl_nopad_pad_me<layer25_t, layer26_t, config26>(layer25_out, layer26_out); // max_pooling2d_4

std::cout<<"zp2d_conv2d_5"<<std::endl;
    hls::stream<layer55_t> layer55_out("layer55_out");
    #pragma HLS STREAM variable=layer55_out depth=36
    nnet::zeropad2d_cl_me<layer26_t, layer55_t, config55>(layer26_out, layer55_out); // zp2d_conv2d_5

std::cout<<"conv2d_5"<<std::endl;
    hls::stream<layer27_t> layer27_out("layer27_out");
    #pragma HLS STREAM variable=layer27_out depth=16
    nnet::conv_2d_cl_me<layer55_t, layer27_t, config27>(layer55_out, layer27_out, w27, b27); // conv2d_5

std::cout<<"leaky_re_lu_5"<<std::endl;
    hls::stream<layer30_t> layer30_out("layer30_out");
    #pragma HLS STREAM variable=layer30_out depth=16
    nnet::leaky_relu_me<layer27_t, layer30_t, LeakyReLU_config30>(layer27_out, 0.10000000149011612, layer30_out); // leaky_re_lu_5

std::cout<<"zp2d_conv2d_6"<<std::endl;
    hls::stream<layer56_t> layer56_out("layer56_out");
    #pragma HLS STREAM variable=layer56_out depth=36
    nnet::zeropad2d_cl_me<layer30_t, layer56_t, config56>(layer30_out, layer56_out); // zp2d_conv2d_6

std::cout<<"conv2d_6"<<std::endl;
    hls::stream<layer31_t> layer31_out("layer31_out");
    #pragma HLS STREAM variable=layer31_out depth=16
    nnet::conv_2d_cl_me<layer56_t, layer31_t, config31>(layer56_out, layer31_out, w31, b31); // conv2d_6

std::cout<<"leaky_re_lu_6"<<std::endl;
    hls::stream<layer34_t> layer34_out("layer34_out");
    #pragma HLS STREAM variable=layer34_out depth=16
    nnet::leaky_relu_me<layer31_t, layer34_t, LeakyReLU_config34>(layer31_out, 0.10000000149011612, layer34_out); // leaky_re_lu_6

std::cout<<"zp2d_conv2d_7"<<std::endl;
    hls::stream<layer57_t> layer57_out("layer57_out");
    #pragma HLS STREAM variable=layer57_out depth=36
    nnet::zeropad2d_cl_me<layer34_t, layer57_t, config57>(layer34_out, layer57_out); // zp2d_conv2d_7

std::cout<<"conv2d_7"<<std::endl;
    hls::stream<layer35_t> layer35_out("layer35_out");
    #pragma HLS STREAM variable=layer35_out depth=16
    nnet::conv_2d_cl_me<layer57_t, layer35_t, config35>(layer57_out, layer35_out, w35, b35); // conv2d_7

std::cout<<"leaky_re_lu_7"<<std::endl;
    hls::stream<layer38_t> layer38_out("layer38_out");
    #pragma HLS STREAM variable=layer38_out depth=16
    nnet::leaky_relu_me<layer35_t, layer38_t, LeakyReLU_config38>(layer35_out, 0.10000000149011612, layer38_out); // leaky_re_lu_7

std::cout<<"zp2d_conv2d_10"<<std::endl;
    hls::stream<layer58_t> layer58_out("layer58_out");
    #pragma HLS STREAM variable=layer58_out depth=36
    nnet::zeropad2d_cl_me<layer38_t, layer58_t, config58>(layer38_out, layer58_out); // zp2d_conv2d_10

std::cout<<"conv2d_10"<<std::endl;
    hls::stream<layer39_t> layer39_out("layer39_out");
    #pragma HLS STREAM variable=layer39_out depth=16
    nnet::conv_2d_cl_me<layer58_t, layer39_t, config39>(layer58_out, layer39_out, w39, b39); // conv2d_10

std::cout<<"leaky_re_lu_9"<<std::endl;
    hls::stream<layer42_t> layer42_out("layer42_out");
    #pragma HLS STREAM variable=layer42_out depth=16
    nnet::leaky_relu_me<layer39_t, layer42_t, LeakyReLU_config42>(layer39_out, 0.10000000149011612, layer42_out); // leaky_re_lu_9

std::cout<<"up_sampling2d"<<std::endl;
    hls::stream<layer43_t> layer43_out("layer43_out");
    #pragma HLS STREAM variable=layer43_out depth=64
    nnet::resize_nearest_me<layer42_t, config43>(layer42_out, layer43_out); // up_sampling2d

std::cout<<"zp2d_conv2d_11"<<std::endl;
    hls::stream<layer59_t> layer59_out("layer59_out");
    #pragma HLS STREAM variable=layer59_out depth=100
    nnet::zeropad2d_cl_me<layer43_t, layer59_t, config59>(layer43_out, layer59_out); // zp2d_conv2d_11

std::cout<<"conv2d_11"<<std::endl;
    hls::stream<layer44_t> layer44_out("layer44_out");
    #pragma HLS STREAM variable=layer44_out depth=64
    nnet::conv_2d_cl_me<layer59_t, layer44_t, config44>(layer59_out, layer44_out, w44, b44); // conv2d_11

std::cout<<"leaky_re_lu_10"<<std::endl;
    hls::stream<layer47_t> layer47_out("layer47_out");
    #pragma HLS STREAM variable=layer47_out depth=64
    nnet::leaky_relu_me<layer44_t, layer47_t, LeakyReLU_config47>(layer44_out, 0.10000000149011612, layer47_out); // leaky_re_lu_10

std::cout<<"zp2d_conv2d_12"<<std::endl;
    hls::stream<layer60_t> layer60_out("layer60_out");
    #pragma HLS STREAM variable=layer60_out depth=100
    nnet::zeropad2d_cl_me<layer47_t, layer60_t, config60>(layer47_out, layer60_out); // zp2d_conv2d_12

std::cout<<"conv2d_12"<<std::endl;
    nnet::conv_2d_cl_me<layer60_t, layer48_t, config48>(layer60_out, layer48_out, w48, b48); // conv2d_12

}

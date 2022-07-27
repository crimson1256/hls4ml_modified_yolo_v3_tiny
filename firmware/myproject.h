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

#ifndef MYPROJECT_H_
#define MYPROJECT_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "hls_stream.h"

#include "defines.h"

// Prototype of top level function for C-synthesis
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
);

#endif

#include "myproject_axi.h"
/*
    model_default_t w2[216];
    bias2_t b2[8];
    model_default_t w7[576];
    bias7_t b7[8];
    model_default_t w12[576];
    bias12_t b12[8];
    model_default_t w17[576];
    bias17_t b17[8];
    model_default_t w22[576];
    bias22_t b22[8];
    model_default_t w27[576];
    bias27_t b27[8];
    model_default_t w31[576];
    bias31_t b31[8];
    model_default_t w35[576];
    bias35_t b35[8];
    model_default_t w39[576];
    bias39_t b39[8];
    model_default_t w44[576];
    bias44_t b44[8];
    model_default_t w48[1296];
    model_default_t b48[18];
*/
void myproject_axi(
    input_axi_t in[N_IN],
    output_axi_t out[N_OUT]
        ){

    #pragma HLS INTERFACE axis port=in
    #pragma HLS INTERFACE axis port=out
    #pragma HLS INTERFACE ap_ctrl_none port=return
    #pragma HLS DATAFLOW

    unsigned short in_size = 0;
    unsigned short out_size = 0;

    bool is_last = false;
    hls::stream<input_t> in_local("input_1");
    hls::stream<layer48_t> out_local("output_1");

    #pragma HLS STREAM variable=in_local depth=N_IN
    #pragma HLS STREAM variable=out_local depth=N_OUT

    for(unsigned i = 0; i < N_IN; ++i) {
        input_t ctype;
            ctype = input_t (in[i].data);
            is_last |= (in[i].last == 1)? true : false;
        in_local.write(ctype);
    }

    myproject(in_local, out_local, in_size, out_size);

    for(unsigned i = 0; i < N_OUT; ++i) {
        layer48_t ctype = out_local.read();
            bool last = (is_last && (i == N_OUT - 1)) ? true : false;
            out[i] = output_axi_t(ctype, last);
    }
}

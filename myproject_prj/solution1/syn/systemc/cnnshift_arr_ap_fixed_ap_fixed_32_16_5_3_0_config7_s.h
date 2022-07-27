// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s_HH_
#define _cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s_layekbM.h"

namespace ap_rtl {

struct cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s : public sc_module {
    // Port declarations 9
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<256> > data_V_read;
    sc_in< sc_lv<2304> > output_V_read;
    sc_out< sc_lv<2304> > ap_return;
    sc_signal< sc_lv<7> > ap_var_for_const0;


    // Module declarations
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s(sc_module_name name);
    SC_HAS_PROCESS(cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s);

    ~cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s();

    sc_trace_file* mVcdFile;

    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s_layekbM* layer_in_row_Array_V_10_0_0_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s_layekbM* layer_in_row_Array_V_10_1_0_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s_layekbM* layer_in_row_Array_V_10_0_1_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s_layekbM* layer_in_row_Array_V_10_1_1_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s_layekbM* layer_in_row_Array_V_10_0_2_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s_layekbM* layer_in_row_Array_V_10_1_2_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s_layekbM* layer_in_row_Array_V_10_0_3_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s_layekbM* layer_in_row_Array_V_10_1_3_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s_layekbM* layer_in_row_Array_V_10_0_4_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s_layekbM* layer_in_row_Array_V_10_1_4_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s_layekbM* layer_in_row_Array_V_10_0_5_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s_layekbM* layer_in_row_Array_V_10_1_5_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s_layekbM* layer_in_row_Array_V_10_0_6_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s_layekbM* layer_in_row_Array_V_10_1_6_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s_layekbM* layer_in_row_Array_V_10_0_7_U;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config7_s_layekbM* layer_in_row_Array_V_10_1_7_U;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > layer_in_row_Array_V_10_0_0_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_0_0_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_0_0_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_1_0_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_1_0_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_1_0_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_0_1_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_0_1_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_0_1_d0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_0_1_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_1_1_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_1_1_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_1_1_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_0_2_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_0_2_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_0_2_d0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_0_2_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_1_2_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_1_2_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_1_2_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_0_3_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_0_3_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_0_3_d0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_0_3_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_1_3_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_1_3_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_1_3_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_0_4_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_0_4_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_0_4_d0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_0_4_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_1_4_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_1_4_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_1_4_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_0_5_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_0_5_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_0_5_d0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_0_5_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_1_5_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_1_5_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_1_5_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_0_6_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_0_6_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_0_6_d0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_0_6_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_1_6_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_1_6_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_1_6_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_0_7_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_0_7_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_0_7_d0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_0_7_q0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_1_7_ce0;
    sc_signal< sc_logic > layer_in_row_Array_V_10_1_7_we0;
    sc_signal< sc_lv<32> > layer_in_row_Array_V_10_1_7_q0;
    sc_signal< sc_lv<32> > trunc_ln203_fu_144_p1;
    sc_signal< sc_lv<512> > tmp_fu_378_p4;
    sc_signal< sc_lv<512> > tmp_1_fu_388_p4;
    sc_signal< sc_lv<512> > tmp_2_fu_398_p4;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_state1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<7> ap_const_lv7_41;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_5F;
    static const sc_lv<32> ap_const_lv32_60;
    static const sc_lv<32> ap_const_lv32_7F;
    static const sc_lv<32> ap_const_lv32_80;
    static const sc_lv<32> ap_const_lv32_9F;
    static const sc_lv<32> ap_const_lv32_A0;
    static const sc_lv<32> ap_const_lv32_BF;
    static const sc_lv<32> ap_const_lv32_C0;
    static const sc_lv<32> ap_const_lv32_DF;
    static const sc_lv<32> ap_const_lv32_E0;
    static const sc_lv<32> ap_const_lv32_FF;
    static const sc_lv<32> ap_const_lv32_700;
    static const sc_lv<32> ap_const_lv32_8FF;
    static const sc_lv<32> ap_const_lv32_400;
    static const sc_lv<32> ap_const_lv32_5FF;
    static const sc_lv<32> ap_const_lv32_100;
    static const sc_lv<32> ap_const_lv32_2FF;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_layer_in_row_Array_V_10_0_0_ce0();
    void thread_layer_in_row_Array_V_10_0_0_we0();
    void thread_layer_in_row_Array_V_10_0_1_ce0();
    void thread_layer_in_row_Array_V_10_0_1_d0();
    void thread_layer_in_row_Array_V_10_0_1_we0();
    void thread_layer_in_row_Array_V_10_0_2_ce0();
    void thread_layer_in_row_Array_V_10_0_2_d0();
    void thread_layer_in_row_Array_V_10_0_2_we0();
    void thread_layer_in_row_Array_V_10_0_3_ce0();
    void thread_layer_in_row_Array_V_10_0_3_d0();
    void thread_layer_in_row_Array_V_10_0_3_we0();
    void thread_layer_in_row_Array_V_10_0_4_ce0();
    void thread_layer_in_row_Array_V_10_0_4_d0();
    void thread_layer_in_row_Array_V_10_0_4_we0();
    void thread_layer_in_row_Array_V_10_0_5_ce0();
    void thread_layer_in_row_Array_V_10_0_5_d0();
    void thread_layer_in_row_Array_V_10_0_5_we0();
    void thread_layer_in_row_Array_V_10_0_6_ce0();
    void thread_layer_in_row_Array_V_10_0_6_d0();
    void thread_layer_in_row_Array_V_10_0_6_we0();
    void thread_layer_in_row_Array_V_10_0_7_ce0();
    void thread_layer_in_row_Array_V_10_0_7_d0();
    void thread_layer_in_row_Array_V_10_0_7_we0();
    void thread_layer_in_row_Array_V_10_1_0_ce0();
    void thread_layer_in_row_Array_V_10_1_0_we0();
    void thread_layer_in_row_Array_V_10_1_1_ce0();
    void thread_layer_in_row_Array_V_10_1_1_we0();
    void thread_layer_in_row_Array_V_10_1_2_ce0();
    void thread_layer_in_row_Array_V_10_1_2_we0();
    void thread_layer_in_row_Array_V_10_1_3_ce0();
    void thread_layer_in_row_Array_V_10_1_3_we0();
    void thread_layer_in_row_Array_V_10_1_4_ce0();
    void thread_layer_in_row_Array_V_10_1_4_we0();
    void thread_layer_in_row_Array_V_10_1_5_ce0();
    void thread_layer_in_row_Array_V_10_1_5_we0();
    void thread_layer_in_row_Array_V_10_1_6_ce0();
    void thread_layer_in_row_Array_V_10_1_6_we0();
    void thread_layer_in_row_Array_V_10_1_7_ce0();
    void thread_layer_in_row_Array_V_10_1_7_we0();
    void thread_tmp_1_fu_388_p4();
    void thread_tmp_2_fu_398_p4();
    void thread_tmp_fu_378_p4();
    void thread_trunc_ln203_fu_144_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif

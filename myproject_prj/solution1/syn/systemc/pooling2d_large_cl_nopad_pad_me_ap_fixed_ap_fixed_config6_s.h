// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _pooling2d_large_cl_nopad_pad_me_ap_fixed_ap_fixed_config6_s_HH_
#define _pooling2d_large_cl_nopad_pad_me_ap_fixed_ap_fixed_config6_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "pooling2d_large_cl_nopad_pad_me_ap_fixed_ap_fixed_config6hbi.h"
#include "pooling2d_large_cl_nopad_pad_me_ap_fixed_ap_fixed_config6jbC.h"

namespace ap_rtl {

struct pooling2d_large_cl_nopad_pad_me_ap_fixed_ap_fixed_config6_s : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_in< sc_logic > start_full_n;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > start_out;
    sc_out< sc_logic > start_write;
    sc_in< sc_lv<32> > data_V_V_dout;
    sc_in< sc_logic > data_V_V_empty_n;
    sc_out< sc_logic > data_V_V_read;
    sc_out< sc_lv<32> > res_V_V_din;
    sc_in< sc_logic > res_V_V_full_n;
    sc_out< sc_logic > res_V_V_write;


    // Module declarations
    pooling2d_large_cl_nopad_pad_me_ap_fixed_ap_fixed_config6_s(sc_module_name name);
    SC_HAS_PROCESS(pooling2d_large_cl_nopad_pad_me_ap_fixed_ap_fixed_config6_s);

    ~pooling2d_large_cl_nopad_pad_me_ap_fixed_ap_fixed_config6_s();

    sc_trace_file* mVcdFile;

    pooling2d_large_cl_nopad_pad_me_ap_fixed_ap_fixed_config6hbi* memory1_0_V_U;
    pooling2d_large_cl_nopad_pad_me_ap_fixed_ap_fixed_config6hbi* memory1_1_V_U;
    pooling2d_large_cl_nopad_pad_me_ap_fixed_ap_fixed_config6jbC* memory2_V_U;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<9> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > data_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > icmp_ln479_reg_459;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<1> > icmp_ln495_reg_506;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter4;
    sc_signal< bool > ap_block_pp2_stage0;
    sc_signal< sc_lv<1> > icmp_ln500_reg_520;
    sc_signal< sc_lv<1> > icmp_ln500_reg_520_pp2_iter3_reg;
    sc_signal< sc_logic > res_V_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter6;
    sc_signal< sc_lv<1> > icmp_ln500_reg_520_pp2_iter5_reg;
    sc_signal< sc_lv<11> > indvar_flatten_reg_173;
    sc_signal< sc_lv<8> > j_0_reg_184;
    sc_signal< sc_lv<4> > k_0_reg_195;
    sc_signal< sc_lv<4> > k9_0_reg_218;
    sc_signal< sc_lv<4> > k9_0_reg_218_pp1_iter1_reg;
    sc_signal< bool > ap_block_state8_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state9_pp1_stage0_iter1;
    sc_signal< bool > ap_block_state10_pp1_stage0_iter2;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<4> > k10_0_reg_230;
    sc_signal< sc_lv<4> > k10_0_reg_230_pp2_iter1_reg;
    sc_signal< sc_logic > ap_CS_fsm_pp2_stage0;
    sc_signal< bool > ap_block_state12_pp2_stage0_iter0;
    sc_signal< bool > ap_block_state13_pp2_stage0_iter1;
    sc_signal< bool > ap_block_state14_pp2_stage0_iter2;
    sc_signal< bool > ap_block_state15_pp2_stage0_iter3;
    sc_signal< bool > ap_block_state16_pp2_stage0_iter4;
    sc_signal< bool > ap_block_state17_pp2_stage0_iter5;
    sc_signal< bool > ap_block_state18_pp2_stage0_iter6;
    sc_signal< bool > ap_block_pp2_stage0_11001;
    sc_signal< sc_lv<32> > reg_242;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln477_fu_249_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<7> > i_fu_255_p2;
    sc_signal< sc_lv<7> > i_reg_454;
    sc_signal< sc_lv<1> > icmp_ln479_fu_261_p2;
    sc_signal< sc_lv<11> > add_ln479_fu_267_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<4> > select_ln203_fu_285_p3;
    sc_signal< sc_lv<4> > select_ln203_reg_468;
    sc_signal< sc_lv<8> > select_ln203_1_fu_293_p3;
    sc_signal< sc_lv<8> > select_ln203_1_reg_473;
    sc_signal< sc_lv<1> > trunc_ln203_fu_301_p1;
    sc_signal< sc_lv<1> > trunc_ln203_reg_478;
    sc_signal< sc_lv<1> > trunc_ln203_reg_478_pp0_iter1_reg;
    sc_signal< sc_lv<7> > zext_ln203_mid2_v_reg_482;
    sc_signal< sc_lv<4> > k_fu_315_p2;
    sc_signal< sc_lv<11> > add_ln203_fu_335_p2;
    sc_signal< sc_lv<11> > add_ln203_reg_492;
    sc_signal< sc_lv<1> > icmp_ln494_fu_346_p2;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<7> > j_23_fu_352_p2;
    sc_signal< sc_lv<7> > j_23_reg_501;
    sc_signal< sc_lv<1> > icmp_ln495_fu_358_p2;
    sc_signal< sc_lv<1> > icmp_ln495_reg_506_pp1_iter1_reg;
    sc_signal< sc_lv<4> > k_1_fu_364_p2;
    sc_signal< sc_lv<4> > k_1_reg_510;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<11> > zext_ln500_fu_383_p1;
    sc_signal< sc_lv<11> > zext_ln500_reg_515;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<1> > icmp_ln500_fu_387_p2;
    sc_signal< sc_lv<1> > icmp_ln500_reg_520_pp2_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln500_reg_520_pp2_iter2_reg;
    sc_signal< sc_lv<1> > icmp_ln500_reg_520_pp2_iter4_reg;
    sc_signal< sc_lv<4> > k_2_fu_393_p2;
    sc_signal< sc_lv<4> > k_2_reg_524;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter0;
    sc_signal< sc_lv<11> > add_ln203_1_fu_403_p2;
    sc_signal< sc_lv<11> > add_ln203_1_reg_529;
    sc_signal< sc_lv<32> > memory1_0_V_q0;
    sc_signal< sc_lv<32> > max_V_reg_544;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter2;
    sc_signal< sc_lv<32> > memory1_1_V_q0;
    sc_signal< sc_lv<32> > pool_1_V_reg_550;
    sc_signal< sc_lv<32> > memory2_V_q0;
    sc_signal< sc_lv<32> > pool_2_V_reg_561;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter3;
    sc_signal< sc_lv<32> > select_ln510_fu_422_p3;
    sc_signal< sc_lv<32> > select_ln510_reg_567;
    sc_signal< sc_lv<32> > select_ln510_1_fu_432_p3;
    sc_signal< sc_lv<32> > select_ln510_1_reg_573;
    sc_signal< sc_lv<32> > tmp_V_fu_443_p3;
    sc_signal< sc_lv<32> > tmp_V_reg_579;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state8;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter2;
    sc_signal< bool > ap_block_pp2_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp2_exit_iter0_state12;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter5;
    sc_signal< sc_lv<9> > memory1_0_V_address0;
    sc_signal< sc_logic > memory1_0_V_ce0;
    sc_signal< sc_logic > memory1_0_V_we0;
    sc_signal< sc_lv<9> > memory1_1_V_address0;
    sc_signal< sc_logic > memory1_1_V_ce0;
    sc_signal< sc_logic > memory1_1_V_we0;
    sc_signal< sc_lv<3> > memory2_V_address0;
    sc_signal< sc_logic > memory2_V_ce0;
    sc_signal< sc_logic > memory2_V_we0;
    sc_signal< sc_lv<7> > i_0_reg_162;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<8> > ap_phi_mux_j_0_phi_fu_188_p4;
    sc_signal< sc_lv<7> > j8_0_reg_206;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<4> > ap_phi_mux_k9_0_phi_fu_222_p4;
    sc_signal< sc_lv<4> > ap_phi_mux_k10_0_phi_fu_234_p4;
    sc_signal< sc_lv<64> > zext_ln203_1_fu_341_p1;
    sc_signal< sc_lv<64> > zext_ln498_fu_370_p1;
    sc_signal< sc_lv<64> > zext_ln203_3_fu_408_p1;
    sc_signal< sc_lv<64> > zext_ln502_fu_413_p1;
    sc_signal< bool > ap_block_pp2_stage0_01001;
    sc_signal< sc_lv<1> > icmp_ln480_fu_279_p2;
    sc_signal< sc_lv<8> > j_fu_273_p2;
    sc_signal< sc_lv<10> > tmp_1_fu_321_p3;
    sc_signal< sc_lv<11> > zext_ln480_fu_328_p1;
    sc_signal< sc_lv<11> > zext_ln203_fu_332_p1;
    sc_signal< sc_lv<10> > tmp_2_fu_375_p3;
    sc_signal< sc_lv<11> > zext_ln203_2_fu_399_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_fu_418_p2;
    sc_signal< sc_lv<1> > icmp_ln1494_1_fu_428_p2;
    sc_signal< sc_lv<1> > icmp_ln1494_2_fu_438_p2;
    sc_signal< sc_lv<9> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    sc_signal< sc_logic > ap_idle_pp2;
    sc_signal< sc_logic > ap_enable_pp2;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<9> ap_ST_fsm_state1;
    static const sc_lv<9> ap_ST_fsm_state2;
    static const sc_lv<9> ap_ST_fsm_pp0_stage0;
    static const sc_lv<9> ap_ST_fsm_state6;
    static const sc_lv<9> ap_ST_fsm_state7;
    static const sc_lv<9> ap_ST_fsm_pp1_stage0;
    static const sc_lv<9> ap_ST_fsm_state11;
    static const sc_lv<9> ap_ST_fsm_pp2_stage0;
    static const sc_lv<9> ap_ST_fsm_state19;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<7> ap_const_lv7_40;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<11> ap_const_lv11_400;
    static const sc_lv<11> ap_const_lv11_1;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<3> ap_const_lv3_0;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln203_1_fu_403_p2();
    void thread_add_ln203_fu_335_p2();
    void thread_add_ln479_fu_267_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_pp2_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_pp2_stage0();
    void thread_ap_block_pp2_stage0_01001();
    void thread_ap_block_pp2_stage0_11001();
    void thread_ap_block_pp2_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state10_pp1_stage0_iter2();
    void thread_ap_block_state12_pp2_stage0_iter0();
    void thread_ap_block_state13_pp2_stage0_iter1();
    void thread_ap_block_state14_pp2_stage0_iter2();
    void thread_ap_block_state15_pp2_stage0_iter3();
    void thread_ap_block_state16_pp2_stage0_iter4();
    void thread_ap_block_state17_pp2_stage0_iter5();
    void thread_ap_block_state18_pp2_stage0_iter6();
    void thread_ap_block_state3_pp0_stage0_iter0();
    void thread_ap_block_state4_pp0_stage0_iter1();
    void thread_ap_block_state5_pp0_stage0_iter2();
    void thread_ap_block_state8_pp1_stage0_iter0();
    void thread_ap_block_state9_pp1_stage0_iter1();
    void thread_ap_condition_pp0_exit_iter0_state3();
    void thread_ap_condition_pp1_exit_iter0_state8();
    void thread_ap_condition_pp2_exit_iter0_state12();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_enable_pp2();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_idle_pp2();
    void thread_ap_phi_mux_j_0_phi_fu_188_p4();
    void thread_ap_phi_mux_k10_0_phi_fu_234_p4();
    void thread_ap_phi_mux_k9_0_phi_fu_222_p4();
    void thread_ap_ready();
    void thread_data_V_V_blk_n();
    void thread_data_V_V_read();
    void thread_i_fu_255_p2();
    void thread_icmp_ln1494_1_fu_428_p2();
    void thread_icmp_ln1494_2_fu_438_p2();
    void thread_icmp_ln1494_fu_418_p2();
    void thread_icmp_ln477_fu_249_p2();
    void thread_icmp_ln479_fu_261_p2();
    void thread_icmp_ln480_fu_279_p2();
    void thread_icmp_ln494_fu_346_p2();
    void thread_icmp_ln495_fu_358_p2();
    void thread_icmp_ln500_fu_387_p2();
    void thread_internal_ap_ready();
    void thread_j_23_fu_352_p2();
    void thread_j_fu_273_p2();
    void thread_k_1_fu_364_p2();
    void thread_k_2_fu_393_p2();
    void thread_k_fu_315_p2();
    void thread_memory1_0_V_address0();
    void thread_memory1_0_V_ce0();
    void thread_memory1_0_V_we0();
    void thread_memory1_1_V_address0();
    void thread_memory1_1_V_ce0();
    void thread_memory1_1_V_we0();
    void thread_memory2_V_address0();
    void thread_memory2_V_ce0();
    void thread_memory2_V_we0();
    void thread_real_start();
    void thread_res_V_V_blk_n();
    void thread_res_V_V_din();
    void thread_res_V_V_write();
    void thread_select_ln203_1_fu_293_p3();
    void thread_select_ln203_fu_285_p3();
    void thread_select_ln510_1_fu_432_p3();
    void thread_select_ln510_fu_422_p3();
    void thread_start_out();
    void thread_start_write();
    void thread_tmp_1_fu_321_p3();
    void thread_tmp_2_fu_375_p3();
    void thread_tmp_V_fu_443_p3();
    void thread_trunc_ln203_fu_301_p1();
    void thread_zext_ln203_1_fu_341_p1();
    void thread_zext_ln203_2_fu_399_p1();
    void thread_zext_ln203_3_fu_408_p1();
    void thread_zext_ln203_fu_332_p1();
    void thread_zext_ln480_fu_328_p1();
    void thread_zext_ln498_fu_370_p1();
    void thread_zext_ln500_fu_383_p1();
    void thread_zext_ln502_fu_413_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
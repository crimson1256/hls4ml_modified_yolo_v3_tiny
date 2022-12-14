// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_HH_
#define _conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "product_dense_ap_fixed_ap_fixed_ap_fixed_s.h"
#include "cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s.h"
#include "myproject_axi_lshr_2304ns_12ns_2304_6_1.h"
#include "myproject_axi_mux_83_32_1_1.h"
#include "conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_w4cLz.h"

namespace ap_rtl {

struct conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config44_s : public sc_module {
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
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config44_s(sc_module_name name);
    SC_HAS_PROCESS(conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config44_s);

    ~conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config44_s();

    sc_trace_file* mVcdFile;

    conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_w4cLz* w44_V_U;
    product_dense_ap_fixed_ap_fixed_ap_fixed_s* grp_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_574;
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s* call_ret_cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_fu_580;
    myproject_axi_lshr_2304ns_12ns_2304_6_1<1,6,1,2304,12,2304>* myproject_axi_lshr_2304ns_12ns_2304_6_1_U156;
    myproject_axi_mux_83_32_1_1<1,1,32,32,32,32,32,32,32,32,3,32>* myproject_axi_mux_83_32_1_1_U157;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<20> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_lv<2304> > layer_in_V_19;
    sc_signal< sc_lv<32> > sX_8;
    sc_signal< sc_lv<32> > sY_8;
    sc_signal< sc_lv<32> > pY_8;
    sc_signal< sc_lv<32> > pX_8;
    sc_signal< sc_lv<10> > w44_V_address0;
    sc_signal< sc_logic > w44_V_ce0;
    sc_signal< sc_lv<15> > w44_V_q0;
    sc_signal< sc_logic > data_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > res_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_logic > ap_CS_fsm_state29;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_logic > ap_CS_fsm_state31;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_lv<1> > and_ln215_6_reg_1089;
    sc_signal< sc_lv<10> > ir1_0_i_i_i21_reg_194;
    sc_signal< sc_lv<10> > in_index_reg_205;
    sc_signal< sc_lv<32> > tmp_V_17420_reg_216;
    sc_signal< sc_lv<32> > tmp_V_17518_reg_227;
    sc_signal< sc_lv<32> > tmp_V_17616_reg_238;
    sc_signal< sc_lv<32> > tmp_V_17714_reg_249;
    sc_signal< sc_lv<32> > tmp_V_17812_reg_260;
    sc_signal< sc_lv<32> > tmp_V_17910_reg_271;
    sc_signal< sc_lv<32> > tmp_V_1808_reg_282;
    sc_signal< sc_lv<32> > tmp_V_1816_reg_293;
    sc_signal< sc_lv<20> > phi_mul_reg_304;
    sc_signal< sc_lv<32> > tmp_V_159_reg_315;
    sc_signal< sc_lv<32> > tmp_V_158_reg_346;
    sc_signal< sc_lv<32> > tmp_V_157_reg_377;
    sc_signal< sc_lv<32> > tmp_V_156_reg_408;
    sc_signal< sc_lv<32> > tmp_V_155_reg_439;
    sc_signal< sc_lv<32> > tmp_V_154_reg_470;
    sc_signal< sc_lv<32> > tmp_V_153_reg_501;
    sc_signal< sc_lv<32> > tmp_V_152_reg_532;
    sc_signal< sc_lv<32> > tmp_V_reg_1017;
    sc_signal< sc_lv<32> > tmp_V_145_reg_1022;
    sc_signal< sc_lv<32> > tmp_V_146_reg_1027;
    sc_signal< sc_lv<32> > tmp_V_147_reg_1032;
    sc_signal< sc_lv<32> > tmp_V_148_reg_1037;
    sc_signal< sc_lv<32> > tmp_V_149_reg_1042;
    sc_signal< sc_lv<32> > tmp_V_150_reg_1047;
    sc_signal< sc_lv<32> > tmp_V_151_reg_1052;
    sc_signal< sc_lv<32> > sX_8_load_reg_1057;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<1> > icmp_ln215_fu_646_p2;
    sc_signal< sc_lv<1> > icmp_ln215_reg_1062;
    sc_signal< sc_lv<32> > sY_8_load_reg_1067;
    sc_signal< sc_lv<1> > icmp_ln215_7_fu_656_p2;
    sc_signal< sc_lv<1> > icmp_ln215_7_reg_1072;
    sc_signal< sc_lv<32> > pY_8_load_reg_1077;
    sc_signal< sc_lv<32> > pX_8_load_reg_1083;
    sc_signal< sc_lv<1> > and_ln215_6_fu_714_p2;
    sc_signal< sc_lv<7> > i_fu_720_p2;
    sc_signal< sc_lv<7> > i_reg_1093;
    sc_signal< sc_lv<1> > icmp_ln532_fu_744_p2;
    sc_signal< sc_lv<1> > icmp_ln532_reg_1098;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state11_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state12_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state13_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state14_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state15_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state16_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state17_pp0_stage0_iter6;
    sc_signal< bool > ap_block_state18_pp0_stage0_iter7;
    sc_signal< bool > ap_block_state19_pp0_stage0_iter8;
    sc_signal< bool > ap_block_state20_pp0_stage0_iter9;
    sc_signal< bool > ap_block_state21_pp0_stage0_iter10;
    sc_signal< bool > ap_block_state22_pp0_stage0_iter11;
    sc_signal< bool > ap_block_state23_pp0_stage0_iter12;
    sc_signal< bool > ap_block_state24_pp0_stage0_iter13;
    sc_signal< bool > ap_block_state25_pp0_stage0_iter14;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<12> > select_ln532_6_fu_776_p3;
    sc_signal< sc_lv<12> > select_ln532_6_reg_1103;
    sc_signal< sc_lv<12> > sub_ln532_9_fu_784_p2;
    sc_signal< sc_lv<12> > sub_ln532_9_reg_1108;
    sc_signal< sc_lv<12> > sub_ln532_9_reg_1108_pp0_iter1_reg;
    sc_signal< sc_lv<12> > sub_ln532_9_reg_1108_pp0_iter2_reg;
    sc_signal< sc_lv<12> > sub_ln532_9_reg_1108_pp0_iter3_reg;
    sc_signal< sc_lv<12> > sub_ln532_9_reg_1108_pp0_iter4_reg;
    sc_signal< sc_lv<12> > sub_ln532_9_reg_1108_pp0_iter5_reg;
    sc_signal< sc_lv<12> > sub_ln532_9_reg_1108_pp0_iter6_reg;
    sc_signal< sc_lv<10> > ir_fu_795_p2;
    sc_signal< sc_lv<10> > ir_reg_1118;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<10> > select_ln544_fu_813_p3;
    sc_signal< sc_lv<10> > select_ln544_reg_1123;
    sc_signal< sc_lv<1> > icmp_ln514_fu_821_p2;
    sc_signal< sc_lv<1> > icmp_ln514_reg_1128;
    sc_signal< sc_lv<1> > icmp_ln514_reg_1128_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln514_reg_1128_pp0_iter2_reg;
    sc_signal< sc_lv<1> > icmp_ln514_reg_1128_pp0_iter3_reg;
    sc_signal< sc_lv<1> > icmp_ln514_reg_1128_pp0_iter4_reg;
    sc_signal< sc_lv<1> > icmp_ln514_reg_1128_pp0_iter5_reg;
    sc_signal< sc_lv<1> > icmp_ln514_reg_1128_pp0_iter6_reg;
    sc_signal< sc_lv<1> > icmp_ln514_reg_1128_pp0_iter7_reg;
    sc_signal< sc_lv<1> > icmp_ln514_reg_1128_pp0_iter8_reg;
    sc_signal< sc_lv<1> > icmp_ln514_reg_1128_pp0_iter9_reg;
    sc_signal< sc_lv<1> > icmp_ln514_reg_1128_pp0_iter10_reg;
    sc_signal< sc_lv<1> > icmp_ln514_reg_1128_pp0_iter11_reg;
    sc_signal< sc_lv<1> > icmp_ln514_reg_1128_pp0_iter12_reg;
    sc_signal< sc_lv<1> > icmp_ln514_reg_1128_pp0_iter13_reg;
    sc_signal< sc_lv<15> > w44_V_load_reg_1142;
    sc_signal< sc_lv<15> > w44_V_load_reg_1142_pp0_iter2_reg;
    sc_signal< sc_lv<15> > w44_V_load_reg_1142_pp0_iter3_reg;
    sc_signal< sc_lv<15> > w44_V_load_reg_1142_pp0_iter4_reg;
    sc_signal< sc_lv<15> > w44_V_load_reg_1142_pp0_iter5_reg;
    sc_signal< sc_lv<15> > w44_V_load_reg_1142_pp0_iter6_reg;
    sc_signal< sc_lv<15> > w44_V_load_reg_1142_pp0_iter7_reg;
    sc_signal< sc_lv<2304> > grp_fu_847_p2;
    sc_signal< sc_lv<2304> > lshr_ln532_reg_1147;
    sc_signal< sc_lv<32> > trunc_ln532_fu_867_p1;
    sc_signal< sc_lv<32> > trunc_ln532_reg_1152;
    sc_signal< sc_lv<31> > grp_product_dense_ap_fixed_ap_fixed_ap_fixed_s_fu_574_ap_return;
    sc_signal< sc_lv<31> > p_0_reg_1157;
    sc_signal< sc_lv<20> > add_ln521_fu_871_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter14;
    sc_signal< sc_lv<1> > icmp_ln237_fu_926_p2;
    sc_signal< sc_lv<1> > icmp_ln237_reg_1170;
    sc_signal< bool > ap_block_state33;
    sc_signal< sc_lv<32> > select_ln252_fu_947_p3;
    sc_signal< sc_lv<32> > select_ln252_reg_1174;
    sc_signal< sc_lv<1> > icmp_ln241_fu_966_p2;
    sc_signal< sc_lv<1> > icmp_ln241_reg_1179;
    sc_signal< sc_lv<32> > select_ln247_fu_987_p3;
    sc_signal< sc_lv<32> > select_ln247_reg_1183;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter8;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter9;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter10;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter11;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter12;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter13;
    sc_signal< sc_logic > call_ret_cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_fu_580_ap_start;
    sc_signal< sc_logic > call_ret_cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_fu_580_ap_done;
    sc_signal< sc_logic > call_ret_cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_fu_580_ap_idle;
    sc_signal< sc_logic > call_ret_cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_fu_580_ap_ready;
    sc_signal< sc_lv<256> > call_ret_cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_fu_580_data_V_read;
    sc_signal< sc_lv<2304> > call_ret_cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_fu_580_ap_return;
    sc_signal< sc_lv<7> > i_0_i22_reg_182;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_logic > ap_CS_fsm_state34;
    sc_signal< sc_lv<1> > icmp_ln206_fu_1011_p2;
    sc_signal< sc_lv<10> > ap_phi_mux_ir1_0_i_i_i21_phi_fu_198_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<10> > ap_phi_mux_in_index_phi_fu_209_p4;
    sc_signal< sc_lv<32> > ap_phi_mux_tmp_V_152_phi_fu_537_p16;
    sc_signal< sc_lv<32> > ap_phi_mux_tmp_V_153_phi_fu_506_p16;
    sc_signal< sc_lv<32> > ap_phi_mux_tmp_V_154_phi_fu_475_p16;
    sc_signal< sc_lv<32> > ap_phi_mux_tmp_V_155_phi_fu_444_p16;
    sc_signal< sc_lv<32> > ap_phi_mux_tmp_V_156_phi_fu_413_p16;
    sc_signal< sc_lv<32> > ap_phi_mux_tmp_V_157_phi_fu_382_p16;
    sc_signal< sc_lv<32> > ap_phi_mux_tmp_V_158_phi_fu_351_p16;
    sc_signal< sc_lv<32> > ap_phi_mux_tmp_V_159_phi_fu_320_p16;
    sc_signal< sc_lv<32> > acc_0_V_fu_912_p2;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter14_tmp_V_159_reg_315;
    sc_signal< sc_lv<3> > trunc_ln_fu_877_p4;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter14_tmp_V_158_reg_346;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter14_tmp_V_157_reg_377;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter14_tmp_V_156_reg_408;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter14_tmp_V_155_reg_439;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter14_tmp_V_154_reg_470;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter14_tmp_V_153_reg_501;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter14_tmp_V_152_reg_532;
    sc_signal< sc_lv<32> > ap_phi_mux_storemerge_i_phi_fu_567_p4;
    sc_signal< sc_lv<32> > storemerge_i_reg_563;
    sc_signal< sc_lv<64> > zext_ln532_fu_790_p1;
    sc_signal< sc_lv<32> > add_ln245_fu_971_p2;
    sc_signal< sc_lv<32> > add_ln250_fu_931_p2;
    sc_signal< sc_lv<31> > tmp_8_fu_666_p4;
    sc_signal< sc_lv<31> > tmp_9_fu_686_p4;
    sc_signal< sc_lv<1> > icmp_ln215_8_fu_676_p2;
    sc_signal< sc_lv<1> > icmp_ln215_9_fu_696_p2;
    sc_signal< sc_lv<1> > and_ln215_5_fu_708_p2;
    sc_signal< sc_lv<1> > and_ln215_fu_702_p2;
    sc_signal< sc_lv<7> > empty_203_fu_726_p1;
    sc_signal< sc_lv<12> > tmp_s_fu_730_p3;
    sc_signal< sc_lv<12> > empty_204_fu_738_p2;
    sc_signal< sc_lv<12> > sub_ln532_fu_750_p2;
    sc_signal< sc_lv<12> > sub_ln532_8_fu_762_p2;
    sc_signal< sc_lv<12> > sub_ln532_7_fu_756_p2;
    sc_signal< sc_lv<12> > select_ln532_fu_768_p3;
    sc_signal< sc_lv<10> > add_ln544_fu_801_p2;
    sc_signal< sc_lv<1> > icmp_ln544_fu_807_p2;
    sc_signal< sc_lv<2304> > tmp_10_fu_827_p4;
    sc_signal< sc_lv<2304> > grp_fu_847_p0;
    sc_signal< sc_lv<2304> > grp_fu_847_p1;
    sc_signal< sc_lv<2304> > zext_ln532_6_fu_853_p1;
    sc_signal< sc_lv<2304> > lshr_ln532_3_fu_856_p2;
    sc_signal< sc_lv<2304> > and_ln532_fu_862_p2;
    sc_signal< sc_lv<3> > tmp_3_fu_887_p9;
    sc_signal< sc_lv<32> > sext_ln703_fu_909_p1;
    sc_signal< sc_lv<32> > tmp_3_fu_887_p10;
    sc_signal< sc_lv<32> > add_ln252_fu_942_p2;
    sc_signal< sc_lv<32> > add_ln247_fu_982_p2;
    sc_signal< sc_lv<20> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< bool > ap_condition_368;
    sc_signal< bool > ap_condition_377;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<20> ap_ST_fsm_state1;
    static const sc_lv<20> ap_ST_fsm_state2;
    static const sc_lv<20> ap_ST_fsm_state3;
    static const sc_lv<20> ap_ST_fsm_state4;
    static const sc_lv<20> ap_ST_fsm_state5;
    static const sc_lv<20> ap_ST_fsm_state6;
    static const sc_lv<20> ap_ST_fsm_state7;
    static const sc_lv<20> ap_ST_fsm_state8;
    static const sc_lv<20> ap_ST_fsm_state9;
    static const sc_lv<20> ap_ST_fsm_state10;
    static const sc_lv<20> ap_ST_fsm_pp0_stage0;
    static const sc_lv<20> ap_ST_fsm_state26;
    static const sc_lv<20> ap_ST_fsm_state27;
    static const sc_lv<20> ap_ST_fsm_state28;
    static const sc_lv<20> ap_ST_fsm_state29;
    static const sc_lv<20> ap_ST_fsm_state30;
    static const sc_lv<20> ap_ST_fsm_state31;
    static const sc_lv<20> ap_ST_fsm_state32;
    static const sc_lv<20> ap_ST_fsm_state33;
    static const sc_lv<20> ap_ST_fsm_state34;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<20> ap_const_lv20_0;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<3> ap_const_lv3_6;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_3;
    static const sc_lv<3> ap_const_lv3_2;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<12> ap_const_lv12_1F;
    static const sc_lv<12> ap_const_lv12_8FF;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<10> ap_const_lv10_48;
    static const sc_lv<10> ap_const_lv10_23F;
    static const sc_lv<32> ap_const_lv32_8FF;
    static const sc_lv<2304> ap_const_lv2304_lc_3;
    static const sc_lv<20> ap_const_lv20_71D;
    static const sc_lv<7> ap_const_lv7_63;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_acc_0_V_fu_912_p2();
    void thread_add_ln245_fu_971_p2();
    void thread_add_ln247_fu_982_p2();
    void thread_add_ln250_fu_931_p2();
    void thread_add_ln252_fu_942_p2();
    void thread_add_ln521_fu_871_p2();
    void thread_add_ln544_fu_801_p2();
    void thread_and_ln215_5_fu_708_p2();
    void thread_and_ln215_6_fu_714_p2();
    void thread_and_ln215_fu_702_p2();
    void thread_and_ln532_fu_862_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state29();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state30();
    void thread_ap_CS_fsm_state31();
    void thread_ap_CS_fsm_state32();
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state34();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state11_pp0_stage0_iter0();
    void thread_ap_block_state12_pp0_stage0_iter1();
    void thread_ap_block_state13_pp0_stage0_iter2();
    void thread_ap_block_state14_pp0_stage0_iter3();
    void thread_ap_block_state15_pp0_stage0_iter4();
    void thread_ap_block_state16_pp0_stage0_iter5();
    void thread_ap_block_state17_pp0_stage0_iter6();
    void thread_ap_block_state18_pp0_stage0_iter7();
    void thread_ap_block_state19_pp0_stage0_iter8();
    void thread_ap_block_state20_pp0_stage0_iter9();
    void thread_ap_block_state21_pp0_stage0_iter10();
    void thread_ap_block_state22_pp0_stage0_iter11();
    void thread_ap_block_state23_pp0_stage0_iter12();
    void thread_ap_block_state24_pp0_stage0_iter13();
    void thread_ap_block_state25_pp0_stage0_iter14();
    void thread_ap_block_state33();
    void thread_ap_condition_368();
    void thread_ap_condition_377();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_in_index_phi_fu_209_p4();
    void thread_ap_phi_mux_ir1_0_i_i_i21_phi_fu_198_p4();
    void thread_ap_phi_mux_storemerge_i_phi_fu_567_p4();
    void thread_ap_phi_mux_tmp_V_152_phi_fu_537_p16();
    void thread_ap_phi_mux_tmp_V_153_phi_fu_506_p16();
    void thread_ap_phi_mux_tmp_V_154_phi_fu_475_p16();
    void thread_ap_phi_mux_tmp_V_155_phi_fu_444_p16();
    void thread_ap_phi_mux_tmp_V_156_phi_fu_413_p16();
    void thread_ap_phi_mux_tmp_V_157_phi_fu_382_p16();
    void thread_ap_phi_mux_tmp_V_158_phi_fu_351_p16();
    void thread_ap_phi_mux_tmp_V_159_phi_fu_320_p16();
    void thread_ap_phi_reg_pp0_iter14_tmp_V_152_reg_532();
    void thread_ap_phi_reg_pp0_iter14_tmp_V_153_reg_501();
    void thread_ap_phi_reg_pp0_iter14_tmp_V_154_reg_470();
    void thread_ap_phi_reg_pp0_iter14_tmp_V_155_reg_439();
    void thread_ap_phi_reg_pp0_iter14_tmp_V_156_reg_408();
    void thread_ap_phi_reg_pp0_iter14_tmp_V_157_reg_377();
    void thread_ap_phi_reg_pp0_iter14_tmp_V_158_reg_346();
    void thread_ap_phi_reg_pp0_iter14_tmp_V_159_reg_315();
    void thread_ap_ready();
    void thread_call_ret_cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_fu_580_ap_start();
    void thread_call_ret_cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config44_s_fu_580_data_V_read();
    void thread_data_V_V_blk_n();
    void thread_data_V_V_read();
    void thread_empty_203_fu_726_p1();
    void thread_empty_204_fu_738_p2();
    void thread_grp_fu_847_p0();
    void thread_grp_fu_847_p1();
    void thread_i_fu_720_p2();
    void thread_icmp_ln206_fu_1011_p2();
    void thread_icmp_ln215_7_fu_656_p2();
    void thread_icmp_ln215_8_fu_676_p2();
    void thread_icmp_ln215_9_fu_696_p2();
    void thread_icmp_ln215_fu_646_p2();
    void thread_icmp_ln237_fu_926_p2();
    void thread_icmp_ln241_fu_966_p2();
    void thread_icmp_ln514_fu_821_p2();
    void thread_icmp_ln532_fu_744_p2();
    void thread_icmp_ln544_fu_807_p2();
    void thread_internal_ap_ready();
    void thread_ir_fu_795_p2();
    void thread_lshr_ln532_3_fu_856_p2();
    void thread_real_start();
    void thread_res_V_V_blk_n();
    void thread_res_V_V_din();
    void thread_res_V_V_write();
    void thread_select_ln247_fu_987_p3();
    void thread_select_ln252_fu_947_p3();
    void thread_select_ln532_6_fu_776_p3();
    void thread_select_ln532_fu_768_p3();
    void thread_select_ln544_fu_813_p3();
    void thread_sext_ln703_fu_909_p1();
    void thread_start_out();
    void thread_start_write();
    void thread_sub_ln532_7_fu_756_p2();
    void thread_sub_ln532_8_fu_762_p2();
    void thread_sub_ln532_9_fu_784_p2();
    void thread_sub_ln532_fu_750_p2();
    void thread_tmp_10_fu_827_p4();
    void thread_tmp_3_fu_887_p9();
    void thread_tmp_8_fu_666_p4();
    void thread_tmp_9_fu_686_p4();
    void thread_tmp_s_fu_730_p3();
    void thread_trunc_ln532_fu_867_p1();
    void thread_trunc_ln_fu_877_p4();
    void thread_w44_V_address0();
    void thread_w44_V_ce0();
    void thread_zext_ln532_6_fu_853_p1();
    void thread_zext_ln532_fu_790_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif

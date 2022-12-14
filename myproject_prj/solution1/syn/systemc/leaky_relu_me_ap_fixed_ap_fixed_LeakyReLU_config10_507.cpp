// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<3> leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::ap_ST_fsm_state1 = "1";
const sc_lv<3> leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::ap_ST_fsm_pp0_stage0 = "10";
const sc_lv<3> leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::ap_ST_fsm_state10 = "100";
const bool leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::ap_const_boolean_1 = true;
const sc_lv<32> leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::ap_const_lv32_1 = "1";
const bool leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::ap_const_boolean_0 = false;
const sc_lv<1> leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::ap_const_lv1_0 = "0";
const sc_lv<1> leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::ap_const_lv1_1 = "1";
const sc_lv<16> leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::ap_const_lv16_0 = "0000000000000000";
const sc_lv<16> leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::ap_const_lv16_8000 = "1000000000000000";
const sc_lv<16> leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::ap_const_lv16_1 = "1";
const sc_lv<46> leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::ap_const_lv46_1999 = "1100110011001";
const sc_lv<32> leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::ap_const_lv32_10 = "10000";
const sc_lv<32> leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::ap_const_lv32_2D = "101101";
const sc_lv<32> leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::ap_const_lv32_2 = "10";

leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507(sc_module_name name) : sc_module(name), mVcdFile(0) {
    myproject_axi_mul_32s_14ns_46_5_1_U47 = new myproject_axi_mul_32s_14ns_46_5_1<1,5,32,14,46>("myproject_axi_mul_32s_14ns_46_5_1_U47");
    myproject_axi_mul_32s_14ns_46_5_1_U47->clk(ap_clk);
    myproject_axi_mul_32s_14ns_46_5_1_U47->reset(ap_rst);
    myproject_axi_mul_32s_14ns_46_5_1_U47->din0(tmp_V_reg_131);
    myproject_axi_mul_32s_14ns_46_5_1_U47->din1(grp_fu_91_p1);
    myproject_axi_mul_32s_14ns_46_5_1_U47->ce(grp_fu_91_ce);
    myproject_axi_mul_32s_14ns_46_5_1_U47->dout(grp_fu_91_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state10);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_01001);
    sensitive << ( data_V_V_empty_n );
    sensitive << ( res_V_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( icmp_ln548_reg_122 );
    sensitive << ( ap_enable_reg_pp0_iter7 );
    sensitive << ( icmp_ln548_reg_122_pp0_iter6_reg );

    SC_METHOD(thread_ap_block_pp0_stage0_11001);
    sensitive << ( data_V_V_empty_n );
    sensitive << ( res_V_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( icmp_ln548_reg_122 );
    sensitive << ( ap_enable_reg_pp0_iter7 );
    sensitive << ( icmp_ln548_reg_122_pp0_iter6_reg );

    SC_METHOD(thread_ap_block_pp0_stage0_subdone);
    sensitive << ( data_V_V_empty_n );
    sensitive << ( res_V_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( icmp_ln548_reg_122 );
    sensitive << ( ap_enable_reg_pp0_iter7 );
    sensitive << ( icmp_ln548_reg_122_pp0_iter6_reg );

    SC_METHOD(thread_ap_block_state1);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );

    SC_METHOD(thread_ap_block_state2_pp0_stage0_iter0);

    SC_METHOD(thread_ap_block_state3_pp0_stage0_iter1);
    sensitive << ( data_V_V_empty_n );
    sensitive << ( icmp_ln548_reg_122 );

    SC_METHOD(thread_ap_block_state4_pp0_stage0_iter2);

    SC_METHOD(thread_ap_block_state5_pp0_stage0_iter3);

    SC_METHOD(thread_ap_block_state6_pp0_stage0_iter4);

    SC_METHOD(thread_ap_block_state7_pp0_stage0_iter5);

    SC_METHOD(thread_ap_block_state8_pp0_stage0_iter6);

    SC_METHOD(thread_ap_block_state9_pp0_stage0_iter7);
    sensitive << ( res_V_V_full_n );
    sensitive << ( icmp_ln548_reg_122_pp0_iter6_reg );

    SC_METHOD(thread_ap_condition_pp0_exit_iter0_state2);
    sensitive << ( icmp_ln548_fu_76_p2 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_ap_enable_pp0);
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( real_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_idle_pp0);
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_enable_reg_pp0_iter7 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_enable_reg_pp0_iter3 );
    sensitive << ( ap_enable_reg_pp0_iter4 );
    sensitive << ( ap_enable_reg_pp0_iter5 );
    sensitive << ( ap_enable_reg_pp0_iter6 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( internal_ap_ready );

    SC_METHOD(thread_data_V_V_blk_n);
    sensitive << ( data_V_V_empty_n );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( icmp_ln548_reg_122 );

    SC_METHOD(thread_data_V_V_read);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( icmp_ln548_reg_122 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_grp_fu_91_ce);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_grp_fu_91_p1);
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter2 );

    SC_METHOD(thread_i_fu_82_p2);
    sensitive << ( i_0_reg_65 );

    SC_METHOD(thread_icmp_ln1494_fu_97_p2);
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( icmp_ln548_reg_122_pp0_iter5_reg );
    sensitive << ( tmp_V_reg_131_pp0_iter5_reg );
    sensitive << ( ap_enable_reg_pp0_iter6 );

    SC_METHOD(thread_icmp_ln548_fu_76_p2);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( i_0_reg_65 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_internal_ap_ready);
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_real_start);
    sensitive << ( ap_start );
    sensitive << ( start_full_n );
    sensitive << ( start_once_reg );

    SC_METHOD(thread_res_V_V_blk_n);
    sensitive << ( res_V_V_full_n );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter7 );
    sensitive << ( icmp_ln548_reg_122_pp0_iter6_reg );

    SC_METHOD(thread_res_V_V_din);
    sensitive << ( ap_enable_reg_pp0_iter7 );
    sensitive << ( icmp_ln548_reg_122_pp0_iter6_reg );
    sensitive << ( tmp_V_reg_131_pp0_iter6_reg );
    sensitive << ( icmp_ln1494_reg_143 );
    sensitive << ( ap_block_pp0_stage0_01001 );
    sensitive << ( sext_ln708_fu_112_p1 );

    SC_METHOD(thread_res_V_V_write);
    sensitive << ( ap_enable_reg_pp0_iter7 );
    sensitive << ( icmp_ln548_reg_122_pp0_iter6_reg );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_sext_ln708_fu_112_p1);
    sensitive << ( trunc_ln_reg_148 );

    SC_METHOD(thread_start_out);
    sensitive << ( real_start );

    SC_METHOD(thread_start_write);
    sensitive << ( real_start );
    sensitive << ( start_once_reg );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_enable_reg_pp0_iter7 );
    sensitive << ( icmp_ln548_fu_76_p2 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0_subdone );
    sensitive << ( ap_enable_reg_pp0_iter6 );

    start_once_reg = SC_LOGIC_0;
    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "001";
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter7 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter0 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter2 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter3 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter4 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter5 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter6 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, start_full_n, "(port)start_full_n");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, start_out, "(port)start_out");
    sc_trace(mVcdFile, start_write, "(port)start_write");
    sc_trace(mVcdFile, data_V_V_dout, "(port)data_V_V_dout");
    sc_trace(mVcdFile, data_V_V_empty_n, "(port)data_V_V_empty_n");
    sc_trace(mVcdFile, data_V_V_read, "(port)data_V_V_read");
    sc_trace(mVcdFile, res_V_V_din, "(port)res_V_V_din");
    sc_trace(mVcdFile, res_V_V_full_n, "(port)res_V_V_full_n");
    sc_trace(mVcdFile, res_V_V_write, "(port)res_V_V_write");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, real_start, "real_start");
    sc_trace(mVcdFile, start_once_reg, "start_once_reg");
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, internal_ap_ready, "internal_ap_ready");
    sc_trace(mVcdFile, data_V_V_blk_n, "data_V_V_blk_n");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, icmp_ln548_reg_122, "icmp_ln548_reg_122");
    sc_trace(mVcdFile, res_V_V_blk_n, "res_V_V_blk_n");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter7, "ap_enable_reg_pp0_iter7");
    sc_trace(mVcdFile, icmp_ln548_reg_122_pp0_iter6_reg, "icmp_ln548_reg_122_pp0_iter6_reg");
    sc_trace(mVcdFile, i_0_reg_65, "i_0_reg_65");
    sc_trace(mVcdFile, icmp_ln548_fu_76_p2, "icmp_ln548_fu_76_p2");
    sc_trace(mVcdFile, ap_block_state2_pp0_stage0_iter0, "ap_block_state2_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state3_pp0_stage0_iter1, "ap_block_state3_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_block_state4_pp0_stage0_iter2, "ap_block_state4_pp0_stage0_iter2");
    sc_trace(mVcdFile, ap_block_state5_pp0_stage0_iter3, "ap_block_state5_pp0_stage0_iter3");
    sc_trace(mVcdFile, ap_block_state6_pp0_stage0_iter4, "ap_block_state6_pp0_stage0_iter4");
    sc_trace(mVcdFile, ap_block_state7_pp0_stage0_iter5, "ap_block_state7_pp0_stage0_iter5");
    sc_trace(mVcdFile, ap_block_state8_pp0_stage0_iter6, "ap_block_state8_pp0_stage0_iter6");
    sc_trace(mVcdFile, ap_block_state9_pp0_stage0_iter7, "ap_block_state9_pp0_stage0_iter7");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, icmp_ln548_reg_122_pp0_iter1_reg, "icmp_ln548_reg_122_pp0_iter1_reg");
    sc_trace(mVcdFile, icmp_ln548_reg_122_pp0_iter2_reg, "icmp_ln548_reg_122_pp0_iter2_reg");
    sc_trace(mVcdFile, icmp_ln548_reg_122_pp0_iter3_reg, "icmp_ln548_reg_122_pp0_iter3_reg");
    sc_trace(mVcdFile, icmp_ln548_reg_122_pp0_iter4_reg, "icmp_ln548_reg_122_pp0_iter4_reg");
    sc_trace(mVcdFile, icmp_ln548_reg_122_pp0_iter5_reg, "icmp_ln548_reg_122_pp0_iter5_reg");
    sc_trace(mVcdFile, i_fu_82_p2, "i_fu_82_p2");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, tmp_V_reg_131, "tmp_V_reg_131");
    sc_trace(mVcdFile, tmp_V_reg_131_pp0_iter2_reg, "tmp_V_reg_131_pp0_iter2_reg");
    sc_trace(mVcdFile, tmp_V_reg_131_pp0_iter3_reg, "tmp_V_reg_131_pp0_iter3_reg");
    sc_trace(mVcdFile, tmp_V_reg_131_pp0_iter4_reg, "tmp_V_reg_131_pp0_iter4_reg");
    sc_trace(mVcdFile, tmp_V_reg_131_pp0_iter5_reg, "tmp_V_reg_131_pp0_iter5_reg");
    sc_trace(mVcdFile, tmp_V_reg_131_pp0_iter6_reg, "tmp_V_reg_131_pp0_iter6_reg");
    sc_trace(mVcdFile, icmp_ln1494_fu_97_p2, "icmp_ln1494_fu_97_p2");
    sc_trace(mVcdFile, icmp_ln1494_reg_143, "icmp_ln1494_reg_143");
    sc_trace(mVcdFile, trunc_ln_reg_148, "trunc_ln_reg_148");
    sc_trace(mVcdFile, ap_block_state1, "ap_block_state1");
    sc_trace(mVcdFile, ap_block_pp0_stage0_subdone, "ap_block_pp0_stage0_subdone");
    sc_trace(mVcdFile, ap_condition_pp0_exit_iter0_state2, "ap_condition_pp0_exit_iter0_state2");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter2, "ap_enable_reg_pp0_iter2");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter3, "ap_enable_reg_pp0_iter3");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter4, "ap_enable_reg_pp0_iter4");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter5, "ap_enable_reg_pp0_iter5");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter6, "ap_enable_reg_pp0_iter6");
    sc_trace(mVcdFile, ap_block_pp0_stage0_01001, "ap_block_pp0_stage0_01001");
    sc_trace(mVcdFile, grp_fu_91_p1, "grp_fu_91_p1");
    sc_trace(mVcdFile, grp_fu_91_p2, "grp_fu_91_p2");
    sc_trace(mVcdFile, sext_ln708_fu_112_p1, "sext_ln708_fu_112_p1");
    sc_trace(mVcdFile, grp_fu_91_ce, "grp_fu_91_ce");
    sc_trace(mVcdFile, ap_CS_fsm_state10, "ap_CS_fsm_state10");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_idle_pp0, "ap_idle_pp0");
    sc_trace(mVcdFile, ap_enable_pp0, "ap_enable_pp0");
#endif

    }
}

leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::~leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete myproject_axi_mul_32s_14ns_46_5_1_U47;
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state2.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter4 = ap_enable_reg_pp0_iter3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter5 = ap_enable_reg_pp0_iter4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter6 = ap_enable_reg_pp0_iter5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter7 = ap_enable_reg_pp0_iter6.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            ap_enable_reg_pp0_iter7 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln548_fu_76_p2.read()))) {
        i_0_reg_65 = i_fu_82_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        i_0_reg_65 = ap_const_lv16_0;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        start_once_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_0, internal_ap_ready.read()))) {
            start_once_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, internal_ap_ready.read())) {
            start_once_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln548_reg_122_pp0_iter5_reg.read()))) {
        icmp_ln1494_reg_143 = icmp_ln1494_fu_97_p2.read();
        trunc_ln_reg_148 = grp_fu_91_p2.read().range(45, 16);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln548_reg_122 = icmp_ln548_fu_76_p2.read();
        icmp_ln548_reg_122_pp0_iter1_reg = icmp_ln548_reg_122.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        icmp_ln548_reg_122_pp0_iter2_reg = icmp_ln548_reg_122_pp0_iter1_reg.read();
        icmp_ln548_reg_122_pp0_iter3_reg = icmp_ln548_reg_122_pp0_iter2_reg.read();
        icmp_ln548_reg_122_pp0_iter4_reg = icmp_ln548_reg_122_pp0_iter3_reg.read();
        icmp_ln548_reg_122_pp0_iter5_reg = icmp_ln548_reg_122_pp0_iter4_reg.read();
        icmp_ln548_reg_122_pp0_iter6_reg = icmp_ln548_reg_122_pp0_iter5_reg.read();
        tmp_V_reg_131_pp0_iter2_reg = tmp_V_reg_131.read();
        tmp_V_reg_131_pp0_iter3_reg = tmp_V_reg_131_pp0_iter2_reg.read();
        tmp_V_reg_131_pp0_iter4_reg = tmp_V_reg_131_pp0_iter3_reg.read();
        tmp_V_reg_131_pp0_iter5_reg = tmp_V_reg_131_pp0_iter4_reg.read();
        tmp_V_reg_131_pp0_iter6_reg = tmp_V_reg_131_pp0_iter5_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(icmp_ln548_reg_122.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        tmp_V_reg_131 = data_V_V_dout.read();
    }
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[2];
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_block_pp0_stage0_01001() {
    ap_block_pp0_stage0_01001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(icmp_ln548_reg_122.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, data_V_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln548_reg_122_pp0_iter6_reg.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_V_full_n.read())));
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(icmp_ln548_reg_122.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, data_V_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln548_reg_122_pp0_iter6_reg.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_V_full_n.read())));
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(icmp_ln548_reg_122.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, data_V_V_empty_n.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln548_reg_122_pp0_iter6_reg.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_0, res_V_V_full_n.read())));
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = (esl_seteq<1,1,1>(icmp_ln548_reg_122.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, data_V_V_empty_n.read()));
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_block_state4_pp0_stage0_iter2() {
    ap_block_state4_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_block_state5_pp0_stage0_iter3() {
    ap_block_state5_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_block_state6_pp0_stage0_iter4() {
    ap_block_state6_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_block_state7_pp0_stage0_iter5() {
    ap_block_state7_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_block_state8_pp0_stage0_iter6() {
    ap_block_state8_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_block_state9_pp0_stage0_iter7() {
    ap_block_state9_pp0_stage0_iter7 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln548_reg_122_pp0_iter6_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, res_V_V_full_n.read()));
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(icmp_ln548_fu_76_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_ready() {
    ap_ready = internal_ap_ready.read();
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_data_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln548_reg_122.read(), ap_const_lv1_0))) {
        data_V_V_blk_n = data_V_V_empty_n.read();
    } else {
        data_V_V_blk_n = ap_const_logic_1;
    }
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_data_V_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln548_reg_122.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_V_V_read = ap_const_logic_1;
    } else {
        data_V_V_read = ap_const_logic_0;
    }
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_grp_fu_91_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        grp_fu_91_ce = ap_const_logic_1;
    } else {
        grp_fu_91_ce = ap_const_logic_0;
    }
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_grp_fu_91_p1() {
    grp_fu_91_p1 =  (sc_lv<14>) (ap_const_lv46_1999);
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_i_fu_82_p2() {
    i_fu_82_p2 = (!i_0_reg_65.read().is_01() || !ap_const_lv16_1.is_01())? sc_lv<16>(): (sc_biguint<16>(i_0_reg_65.read()) + sc_biguint<16>(ap_const_lv16_1));
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_icmp_ln1494_fu_97_p2() {
    icmp_ln1494_fu_97_p2 = (!tmp_V_reg_131_pp0_iter5_reg.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(tmp_V_reg_131_pp0_iter5_reg.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_icmp_ln548_fu_76_p2() {
    icmp_ln548_fu_76_p2 = (!i_0_reg_65.read().is_01() || !ap_const_lv16_8000.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_65.read() == ap_const_lv16_8000);
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_internal_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        internal_ap_ready = ap_const_logic_1;
    } else {
        internal_ap_ready = ap_const_logic_0;
    }
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_real_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_full_n.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()))) {
        real_start = ap_const_logic_0;
    } else {
        real_start = ap_start.read();
    }
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_res_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln548_reg_122_pp0_iter6_reg.read()))) {
        res_V_V_blk_n = res_V_V_full_n.read();
    } else {
        res_V_V_blk_n = ap_const_logic_1;
    }
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_res_V_V_din() {
    res_V_V_din = (!icmp_ln1494_reg_143.read()[0].is_01())? sc_lv<32>(): ((icmp_ln1494_reg_143.read()[0].to_bool())? tmp_V_reg_131_pp0_iter6_reg.read(): sext_ln708_fu_112_p1.read());
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_res_V_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln548_reg_122_pp0_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        res_V_V_write = ap_const_logic_1;
    } else {
        res_V_V_write = ap_const_logic_0;
    }
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_sext_ln708_fu_112_p1() {
    sext_ln708_fu_112_p1 = esl_sext<32,30>(trunc_ln_reg_148.read());
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_start_out() {
    start_out = real_start.read();
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_start_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()))) {
        start_write = ap_const_logic_1;
    } else {
        start_write = ap_const_logic_0;
    }
}

void leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config10_507::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter6.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln548_fu_76_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter6.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(icmp_ln548_fu_76_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state10;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}


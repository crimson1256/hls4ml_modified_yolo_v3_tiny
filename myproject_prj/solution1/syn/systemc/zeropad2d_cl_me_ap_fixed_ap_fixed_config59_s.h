// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _zeropad2d_cl_me_ap_fixed_ap_fixed_config59_s_HH_
#define _zeropad2d_cl_me_ap_fixed_ap_fixed_config59_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct zeropad2d_cl_me_ap_fixed_ap_fixed_config59_s : public sc_module {
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
    zeropad2d_cl_me_ap_fixed_ap_fixed_config59_s(sc_module_name name);
    SC_HAS_PROCESS(zeropad2d_cl_me_ap_fixed_ap_fixed_config59_s);

    ~zeropad2d_cl_me_ap_fixed_ap_fixed_config59_s();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<40> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > data_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<1> > icmp_ln121_fu_139_p2;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_logic > res_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln112_fu_115_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<1> > icmp_ln117_fu_127_p2;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_logic > ap_CS_fsm_state29;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_logic > ap_CS_fsm_state31;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_lv<1> > icmp_ln130_fu_151_p2;
    sc_signal< sc_logic > ap_CS_fsm_state34;
    sc_signal< sc_logic > ap_CS_fsm_state35;
    sc_signal< sc_logic > ap_CS_fsm_state36;
    sc_signal< sc_logic > ap_CS_fsm_state37;
    sc_signal< sc_logic > ap_CS_fsm_state38;
    sc_signal< sc_logic > ap_CS_fsm_state39;
    sc_signal< sc_logic > ap_CS_fsm_state40;
    sc_signal< sc_lv<4> > j_fu_121_p2;
    sc_signal< sc_lv<4> > j_reg_166;
    sc_signal< bool > ap_block_state2;
    sc_signal< sc_lv<4> > i_fu_133_p2;
    sc_signal< sc_lv<4> > i_reg_174;
    sc_signal< bool > ap_block_state10;
    sc_signal< sc_lv<4> > j_4_fu_145_p2;
    sc_signal< sc_lv<4> > j_4_reg_182;
    sc_signal< bool > ap_block_state18;
    sc_signal< sc_lv<4> > j_3_fu_157_p2;
    sc_signal< sc_lv<4> > j_3_reg_190;
    sc_signal< bool > ap_block_state33;
    sc_signal< sc_lv<4> > j_0_reg_71;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<4> > i1_0_reg_82;
    sc_signal< sc_lv<4> > j3_0_reg_93;
    sc_signal< bool > ap_block_state25;
    sc_signal< sc_lv<4> > j6_0_reg_104;
    sc_signal< bool > ap_block_state19;
    sc_signal< bool > ap_block_state20;
    sc_signal< bool > ap_block_state21;
    sc_signal< bool > ap_block_state22;
    sc_signal< bool > ap_block_state23;
    sc_signal< bool > ap_block_state24;
    sc_signal< sc_lv<40> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<40> ap_ST_fsm_state1;
    static const sc_lv<40> ap_ST_fsm_state2;
    static const sc_lv<40> ap_ST_fsm_state3;
    static const sc_lv<40> ap_ST_fsm_state4;
    static const sc_lv<40> ap_ST_fsm_state5;
    static const sc_lv<40> ap_ST_fsm_state6;
    static const sc_lv<40> ap_ST_fsm_state7;
    static const sc_lv<40> ap_ST_fsm_state8;
    static const sc_lv<40> ap_ST_fsm_state9;
    static const sc_lv<40> ap_ST_fsm_state10;
    static const sc_lv<40> ap_ST_fsm_state11;
    static const sc_lv<40> ap_ST_fsm_state12;
    static const sc_lv<40> ap_ST_fsm_state13;
    static const sc_lv<40> ap_ST_fsm_state14;
    static const sc_lv<40> ap_ST_fsm_state15;
    static const sc_lv<40> ap_ST_fsm_state16;
    static const sc_lv<40> ap_ST_fsm_state17;
    static const sc_lv<40> ap_ST_fsm_state18;
    static const sc_lv<40> ap_ST_fsm_state19;
    static const sc_lv<40> ap_ST_fsm_state20;
    static const sc_lv<40> ap_ST_fsm_state21;
    static const sc_lv<40> ap_ST_fsm_state22;
    static const sc_lv<40> ap_ST_fsm_state23;
    static const sc_lv<40> ap_ST_fsm_state24;
    static const sc_lv<40> ap_ST_fsm_state25;
    static const sc_lv<40> ap_ST_fsm_state26;
    static const sc_lv<40> ap_ST_fsm_state27;
    static const sc_lv<40> ap_ST_fsm_state28;
    static const sc_lv<40> ap_ST_fsm_state29;
    static const sc_lv<40> ap_ST_fsm_state30;
    static const sc_lv<40> ap_ST_fsm_state31;
    static const sc_lv<40> ap_ST_fsm_state32;
    static const sc_lv<40> ap_ST_fsm_state33;
    static const sc_lv<40> ap_ST_fsm_state34;
    static const sc_lv<40> ap_ST_fsm_state35;
    static const sc_lv<40> ap_ST_fsm_state36;
    static const sc_lv<40> ap_ST_fsm_state37;
    static const sc_lv<40> ap_ST_fsm_state38;
    static const sc_lv<40> ap_ST_fsm_state39;
    static const sc_lv<40> ap_ST_fsm_state40;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<32> ap_const_lv32_24;
    static const sc_lv<32> ap_const_lv32_25;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_8;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
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
    void thread_ap_CS_fsm_state35();
    void thread_ap_CS_fsm_state36();
    void thread_ap_CS_fsm_state37();
    void thread_ap_CS_fsm_state38();
    void thread_ap_CS_fsm_state39();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state40();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_state1();
    void thread_ap_block_state10();
    void thread_ap_block_state18();
    void thread_ap_block_state19();
    void thread_ap_block_state2();
    void thread_ap_block_state20();
    void thread_ap_block_state21();
    void thread_ap_block_state22();
    void thread_ap_block_state23();
    void thread_ap_block_state24();
    void thread_ap_block_state25();
    void thread_ap_block_state33();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_data_V_V_blk_n();
    void thread_data_V_V_read();
    void thread_i_fu_133_p2();
    void thread_icmp_ln112_fu_115_p2();
    void thread_icmp_ln117_fu_127_p2();
    void thread_icmp_ln121_fu_139_p2();
    void thread_icmp_ln130_fu_151_p2();
    void thread_internal_ap_ready();
    void thread_j_3_fu_157_p2();
    void thread_j_4_fu_145_p2();
    void thread_j_fu_121_p2();
    void thread_real_start();
    void thread_res_V_V_blk_n();
    void thread_res_V_V_din();
    void thread_res_V_V_write();
    void thread_start_out();
    void thread_start_write();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif

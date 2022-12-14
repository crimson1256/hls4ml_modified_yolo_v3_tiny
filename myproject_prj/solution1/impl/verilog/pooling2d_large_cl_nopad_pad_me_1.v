// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module pooling2d_large_cl_nopad_pad_me_1 (
        ap_clk,
        ap_rst,
        ap_start,
        start_full_n,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        start_out,
        start_write,
        data_V_V_dout,
        data_V_V_empty_n,
        data_V_V_read,
        res_V_V_din,
        res_V_V_full_n,
        res_V_V_write
);

parameter    ap_ST_fsm_state1 = 9'd1;
parameter    ap_ST_fsm_state2 = 9'd2;
parameter    ap_ST_fsm_pp0_stage0 = 9'd4;
parameter    ap_ST_fsm_state6 = 9'd8;
parameter    ap_ST_fsm_state7 = 9'd16;
parameter    ap_ST_fsm_pp1_stage0 = 9'd32;
parameter    ap_ST_fsm_state11 = 9'd64;
parameter    ap_ST_fsm_pp2_stage0 = 9'd128;
parameter    ap_ST_fsm_state19 = 9'd256;

input   ap_clk;
input   ap_rst;
input   ap_start;
input   start_full_n;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output   start_out;
output   start_write;
input  [31:0] data_V_V_dout;
input   data_V_V_empty_n;
output   data_V_V_read;
output  [31:0] res_V_V_din;
input   res_V_V_full_n;
output   res_V_V_write;

reg ap_done;
reg ap_idle;
reg start_write;
reg data_V_V_read;
reg res_V_V_write;

reg    real_start;
reg    start_once_reg;
reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [8:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
reg    data_V_V_blk_n;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage0;
reg   [0:0] icmp_ln479_reg_451;
wire    ap_CS_fsm_pp1_stage0;
reg    ap_enable_reg_pp1_iter1;
wire    ap_block_pp1_stage0;
reg   [0:0] icmp_ln495_reg_498;
reg    ap_enable_reg_pp2_iter4;
wire    ap_block_pp2_stage0;
reg   [0:0] icmp_ln500_reg_512;
reg   [0:0] icmp_ln500_reg_512_pp2_iter3_reg;
reg    res_V_V_blk_n;
reg    ap_enable_reg_pp2_iter6;
reg   [0:0] icmp_ln500_reg_512_pp2_iter5_reg;
reg   [7:0] indvar_flatten_reg_165;
reg   [4:0] j_0_reg_176;
reg   [3:0] k_0_reg_187;
reg   [3:0] k9_0_reg_210;
reg   [3:0] k9_0_reg_210_pp1_iter1_reg;
wire    ap_block_state8_pp1_stage0_iter0;
reg    ap_block_state9_pp1_stage0_iter1;
wire    ap_block_state10_pp1_stage0_iter2;
reg    ap_block_pp1_stage0_11001;
reg   [3:0] k10_0_reg_222;
reg   [3:0] k10_0_reg_222_pp2_iter1_reg;
wire    ap_CS_fsm_pp2_stage0;
wire    ap_block_state12_pp2_stage0_iter0;
wire    ap_block_state13_pp2_stage0_iter1;
wire    ap_block_state14_pp2_stage0_iter2;
wire    ap_block_state15_pp2_stage0_iter3;
reg    ap_block_state16_pp2_stage0_iter4;
wire    ap_block_state17_pp2_stage0_iter5;
reg    ap_block_state18_pp2_stage0_iter6;
reg    ap_block_pp2_stage0_11001;
reg   [31:0] reg_234;
wire    ap_block_state3_pp0_stage0_iter0;
reg    ap_block_state4_pp0_stage0_iter1;
wire    ap_block_state5_pp0_stage0_iter2;
reg    ap_block_pp0_stage0_11001;
wire   [0:0] icmp_ln477_fu_241_p2;
wire    ap_CS_fsm_state2;
wire   [3:0] i_fu_247_p2;
reg   [3:0] i_reg_446;
wire   [0:0] icmp_ln479_fu_253_p2;
wire   [7:0] add_ln479_fu_259_p2;
reg    ap_enable_reg_pp0_iter0;
wire   [3:0] select_ln203_fu_277_p3;
reg   [3:0] select_ln203_reg_460;
wire   [4:0] select_ln203_4_fu_285_p3;
reg   [4:0] select_ln203_4_reg_465;
wire   [0:0] trunc_ln203_fu_293_p1;
reg   [0:0] trunc_ln203_reg_470;
reg   [0:0] trunc_ln203_reg_470_pp0_iter1_reg;
reg   [3:0] zext_ln203_mid2_v_reg_474;
wire   [3:0] k_fu_307_p2;
wire   [7:0] add_ln203_fu_327_p2;
reg   [7:0] add_ln203_reg_484;
wire   [0:0] icmp_ln494_fu_338_p2;
wire    ap_CS_fsm_state7;
wire   [3:0] j_26_fu_344_p2;
reg   [3:0] j_26_reg_493;
wire   [0:0] icmp_ln495_fu_350_p2;
reg   [0:0] icmp_ln495_reg_498_pp1_iter1_reg;
wire   [3:0] k_7_fu_356_p2;
reg   [3:0] k_7_reg_502;
reg    ap_enable_reg_pp1_iter0;
wire   [7:0] zext_ln500_fu_375_p1;
reg   [7:0] zext_ln500_reg_507;
wire    ap_CS_fsm_state11;
wire   [0:0] icmp_ln500_fu_379_p2;
reg   [0:0] icmp_ln500_reg_512_pp2_iter1_reg;
reg   [0:0] icmp_ln500_reg_512_pp2_iter2_reg;
reg   [0:0] icmp_ln500_reg_512_pp2_iter4_reg;
wire   [3:0] k_8_fu_385_p2;
reg   [3:0] k_8_reg_516;
reg    ap_enable_reg_pp2_iter0;
wire   [7:0] add_ln203_4_fu_395_p2;
reg   [7:0] add_ln203_4_reg_521;
wire   [31:0] memory1_0_V_q0;
reg   [31:0] max_V_reg_536;
reg    ap_enable_reg_pp2_iter2;
wire   [31:0] memory1_1_V_q0;
reg   [31:0] pool_1_V_reg_542;
wire   [31:0] memory2_V_q0;
reg   [31:0] pool_2_V_reg_553;
reg    ap_enable_reg_pp2_iter3;
wire   [31:0] select_ln510_fu_414_p3;
reg   [31:0] select_ln510_reg_559;
wire   [31:0] select_ln510_5_fu_424_p3;
reg   [31:0] select_ln510_5_reg_565;
wire   [31:0] tmp_V_fu_435_p3;
reg   [31:0] tmp_V_reg_571;
reg    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state3;
reg    ap_enable_reg_pp0_iter2;
reg    ap_block_pp1_stage0_subdone;
reg    ap_condition_pp1_exit_iter0_state8;
reg    ap_enable_reg_pp1_iter2;
reg    ap_block_pp2_stage0_subdone;
reg    ap_condition_pp2_exit_iter0_state12;
reg    ap_enable_reg_pp2_iter1;
reg    ap_enable_reg_pp2_iter5;
reg   [5:0] memory1_0_V_address0;
reg    memory1_0_V_ce0;
reg    memory1_0_V_we0;
reg   [5:0] memory1_1_V_address0;
reg    memory1_1_V_ce0;
reg    memory1_1_V_we0;
reg   [2:0] memory2_V_address0;
reg    memory2_V_ce0;
reg    memory2_V_we0;
reg   [3:0] i_0_reg_154;
reg    ap_block_state1;
reg   [4:0] ap_phi_mux_j_0_phi_fu_180_p4;
reg   [3:0] j8_0_reg_198;
wire    ap_CS_fsm_state19;
wire    ap_CS_fsm_state6;
reg   [3:0] ap_phi_mux_k9_0_phi_fu_214_p4;
reg   [3:0] ap_phi_mux_k10_0_phi_fu_226_p4;
wire   [63:0] zext_ln203_10_fu_333_p1;
wire   [63:0] zext_ln498_fu_362_p1;
wire   [63:0] zext_ln203_12_fu_400_p1;
wire   [63:0] zext_ln502_fu_405_p1;
reg    ap_block_pp2_stage0_01001;
wire   [0:0] icmp_ln480_fu_271_p2;
wire   [4:0] j_fu_265_p2;
wire   [6:0] tmp_7_fu_313_p3;
wire   [7:0] zext_ln480_fu_320_p1;
wire   [7:0] zext_ln203_fu_324_p1;
wire   [6:0] tmp_8_fu_367_p3;
wire   [7:0] zext_ln203_11_fu_391_p1;
wire   [0:0] icmp_ln1494_fu_410_p2;
wire   [0:0] icmp_ln1494_1_fu_420_p2;
wire   [0:0] icmp_ln1494_2_fu_430_p2;
reg   [8:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
reg    ap_idle_pp1;
wire    ap_enable_pp1;
reg    ap_idle_pp2;
wire    ap_enable_pp2;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 9'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp1_iter1 = 1'b0;
#0 ap_enable_reg_pp2_iter4 = 1'b0;
#0 ap_enable_reg_pp2_iter6 = 1'b0;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp1_iter0 = 1'b0;
#0 ap_enable_reg_pp2_iter0 = 1'b0;
#0 ap_enable_reg_pp2_iter2 = 1'b0;
#0 ap_enable_reg_pp2_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp1_iter2 = 1'b0;
#0 ap_enable_reg_pp2_iter1 = 1'b0;
#0 ap_enable_reg_pp2_iter5 = 1'b0;
end

pooling2d_large_cl_nopad_pad_me_1_memory1_0_V #(
    .DataWidth( 32 ),
    .AddressRange( 64 ),
    .AddressWidth( 6 ))
memory1_0_V_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(memory1_0_V_address0),
    .ce0(memory1_0_V_ce0),
    .we0(memory1_0_V_we0),
    .d0(reg_234),
    .q0(memory1_0_V_q0)
);

pooling2d_large_cl_nopad_pad_me_1_memory1_0_V #(
    .DataWidth( 32 ),
    .AddressRange( 64 ),
    .AddressWidth( 6 ))
memory1_1_V_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(memory1_1_V_address0),
    .ce0(memory1_1_V_ce0),
    .we0(memory1_1_V_we0),
    .d0(reg_234),
    .q0(memory1_1_V_q0)
);

pooling2d_large_cl_nopad_pad_me_ap_fixed_ap_fixed_config6jbC #(
    .DataWidth( 32 ),
    .AddressRange( 8 ),
    .AddressWidth( 3 ))
memory2_V_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(memory2_V_address0),
    .ce0(memory2_V_ce0),
    .we0(memory2_V_we0),
    .d0(reg_234),
    .q0(memory2_V_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln477_fu_241_p2 == 1'd1))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state3))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((icmp_ln477_fu_241_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp0_exit_iter0_state3)) begin
                ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state3);
            end else if ((1'b1 == 1'b1)) begin
                ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end else if (((icmp_ln477_fu_241_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
            ap_enable_reg_pp0_iter2 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp1_stage0_subdone) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b1 == ap_condition_pp1_exit_iter0_state8))) begin
            ap_enable_reg_pp1_iter0 <= 1'b0;
        end else if (((icmp_ln494_fu_338_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
            ap_enable_reg_pp1_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp1_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp1_exit_iter0_state8)) begin
                ap_enable_reg_pp1_iter1 <= (1'b1 ^ ap_condition_pp1_exit_iter0_state8);
            end else if ((1'b1 == 1'b1)) begin
                ap_enable_reg_pp1_iter1 <= ap_enable_reg_pp1_iter0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp1_stage0_subdone)) begin
            ap_enable_reg_pp1_iter2 <= ap_enable_reg_pp1_iter1;
        end else if (((icmp_ln494_fu_338_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
            ap_enable_reg_pp1_iter2 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp2_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp2_stage0_subdone) & (1'b1 == ap_condition_pp2_exit_iter0_state12) & (1'b1 == ap_CS_fsm_pp2_stage0))) begin
            ap_enable_reg_pp2_iter0 <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state11)) begin
            ap_enable_reg_pp2_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp2_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp2_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp2_exit_iter0_state12)) begin
                ap_enable_reg_pp2_iter1 <= (1'b1 ^ ap_condition_pp2_exit_iter0_state12);
            end else if ((1'b1 == 1'b1)) begin
                ap_enable_reg_pp2_iter1 <= ap_enable_reg_pp2_iter0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp2_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp2_stage0_subdone)) begin
            ap_enable_reg_pp2_iter2 <= ap_enable_reg_pp2_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp2_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp2_stage0_subdone)) begin
            ap_enable_reg_pp2_iter3 <= ap_enable_reg_pp2_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp2_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp2_stage0_subdone)) begin
            ap_enable_reg_pp2_iter4 <= ap_enable_reg_pp2_iter3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp2_iter5 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp2_stage0_subdone)) begin
            ap_enable_reg_pp2_iter5 <= ap_enable_reg_pp2_iter4;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp2_iter6 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp2_stage0_subdone)) begin
            ap_enable_reg_pp2_iter6 <= ap_enable_reg_pp2_iter5;
        end else if ((1'b1 == ap_CS_fsm_state11)) begin
            ap_enable_reg_pp2_iter6 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        start_once_reg <= 1'b0;
    end else begin
        if (((internal_ap_ready == 1'b0) & (real_start == 1'b1))) begin
            start_once_reg <= 1'b1;
        end else if ((internal_ap_ready == 1'b1)) begin
            start_once_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln494_fu_338_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
        i_0_reg_154 <= i_reg_446;
    end else if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        i_0_reg_154 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln477_fu_241_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        indvar_flatten_reg_165 <= 8'd0;
    end else if (((icmp_ln479_fu_253_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        indvar_flatten_reg_165 <= add_ln479_fu_259_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        j8_0_reg_198 <= 4'd0;
    end else if ((1'b1 == ap_CS_fsm_state19)) begin
        j8_0_reg_198 <= j_26_reg_493;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln477_fu_241_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_0_reg_176 <= 5'd0;
    end else if (((icmp_ln479_reg_451 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        j_0_reg_176 <= select_ln203_4_reg_465;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        k10_0_reg_222 <= 4'd0;
    end else if (((icmp_ln500_reg_512 == 1'd0) & (ap_enable_reg_pp2_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp2_stage0) & (1'b0 == ap_block_pp2_stage0_11001))) begin
        k10_0_reg_222 <= k_8_reg_516;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln494_fu_338_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
        k9_0_reg_210 <= 4'd0;
    end else if (((icmp_ln495_reg_498 == 1'd0) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        k9_0_reg_210 <= k_7_reg_502;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln477_fu_241_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        k_0_reg_187 <= 4'd0;
    end else if (((icmp_ln479_fu_253_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        k_0_reg_187 <= k_fu_307_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln500_fu_379_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp2_stage0) & (1'b0 == ap_block_pp2_stage0_11001))) begin
        add_ln203_4_reg_521 <= add_ln203_4_fu_395_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln479_reg_451 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        add_ln203_reg_484 <= add_ln203_fu_327_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_reg_446 <= i_fu_247_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        icmp_ln479_reg_451 <= icmp_ln479_fu_253_p2;
        trunc_ln203_reg_470_pp0_iter1_reg <= trunc_ln203_reg_470;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        icmp_ln495_reg_498 <= icmp_ln495_fu_350_p2;
        icmp_ln495_reg_498_pp1_iter1_reg <= icmp_ln495_reg_498;
        k9_0_reg_210_pp1_iter1_reg <= k9_0_reg_210;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp2_stage0) & (1'b0 == ap_block_pp2_stage0_11001))) begin
        icmp_ln500_reg_512 <= icmp_ln500_fu_379_p2;
        icmp_ln500_reg_512_pp2_iter1_reg <= icmp_ln500_reg_512;
        k10_0_reg_222_pp2_iter1_reg <= k10_0_reg_222;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp2_stage0_11001)) begin
        icmp_ln500_reg_512_pp2_iter2_reg <= icmp_ln500_reg_512_pp2_iter1_reg;
        icmp_ln500_reg_512_pp2_iter3_reg <= icmp_ln500_reg_512_pp2_iter2_reg;
        icmp_ln500_reg_512_pp2_iter4_reg <= icmp_ln500_reg_512_pp2_iter3_reg;
        icmp_ln500_reg_512_pp2_iter5_reg <= icmp_ln500_reg_512_pp2_iter4_reg;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        j_26_reg_493 <= j_26_fu_344_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp1_stage0) & (ap_enable_reg_pp1_iter0 == 1'b1) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        k_7_reg_502 <= k_7_fu_356_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp2_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp2_stage0) & (1'b0 == ap_block_pp2_stage0_11001))) begin
        k_8_reg_516 <= k_8_fu_385_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln500_reg_512_pp2_iter1_reg == 1'd0) & (ap_enable_reg_pp2_iter2 == 1'b1) & (1'b0 == ap_block_pp2_stage0_11001))) begin
        max_V_reg_536 <= memory1_0_V_q0;
        pool_1_V_reg_542 <= memory1_1_V_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln500_reg_512_pp2_iter2_reg == 1'd0) & (ap_enable_reg_pp2_iter3 == 1'b1) & (1'b0 == ap_block_pp2_stage0_11001))) begin
        pool_2_V_reg_553 <= memory2_V_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((((icmp_ln500_reg_512_pp2_iter3_reg == 1'd0) & (ap_enable_reg_pp2_iter4 == 1'b1) & (1'b0 == ap_block_pp2_stage0_11001)) | ((icmp_ln495_reg_498 == 1'd0) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001)) | ((icmp_ln479_reg_451 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001)))) begin
        reg_234 <= data_V_V_dout;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln479_fu_253_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        select_ln203_4_reg_465 <= select_ln203_4_fu_285_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln479_fu_253_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        select_ln203_reg_460 <= select_ln203_fu_277_p3;
        trunc_ln203_reg_470 <= trunc_ln203_fu_293_p1;
        zext_ln203_mid2_v_reg_474 <= {{select_ln203_4_fu_285_p3[4:1]}};
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln500_reg_512_pp2_iter3_reg == 1'd0) & (1'b0 == ap_block_pp2_stage0_11001))) begin
        select_ln510_5_reg_565 <= select_ln510_5_fu_424_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln500_reg_512_pp2_iter2_reg == 1'd0) & (1'b0 == ap_block_pp2_stage0_11001))) begin
        select_ln510_reg_559 <= select_ln510_fu_414_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln500_reg_512_pp2_iter4_reg == 1'd0) & (1'b0 == ap_block_pp2_stage0_11001))) begin
        tmp_V_reg_571 <= tmp_V_fu_435_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        zext_ln500_reg_507[6 : 3] <= zext_ln500_fu_375_p1[6 : 3];
    end
end

always @ (*) begin
    if ((icmp_ln479_fu_253_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state3 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state3 = 1'b0;
    end
end

always @ (*) begin
    if ((icmp_ln495_fu_350_p2 == 1'd1)) begin
        ap_condition_pp1_exit_iter0_state8 = 1'b1;
    end else begin
        ap_condition_pp1_exit_iter0_state8 = 1'b0;
    end
end

always @ (*) begin
    if ((icmp_ln500_fu_379_p2 == 1'd1)) begin
        ap_condition_pp2_exit_iter0_state12 = 1'b1;
    end else begin
        ap_condition_pp2_exit_iter0_state12 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln477_fu_241_p2 == 1'd1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((real_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp1_iter1 == 1'b0) & (ap_enable_reg_pp1_iter2 == 1'b0) & (ap_enable_reg_pp1_iter0 == 1'b0))) begin
        ap_idle_pp1 = 1'b1;
    end else begin
        ap_idle_pp1 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp2_iter6 == 1'b0) & (ap_enable_reg_pp2_iter4 == 1'b0) & (ap_enable_reg_pp2_iter5 == 1'b0) & (ap_enable_reg_pp2_iter1 == 1'b0) & (ap_enable_reg_pp2_iter3 == 1'b0) & (ap_enable_reg_pp2_iter2 == 1'b0) & (ap_enable_reg_pp2_iter0 == 1'b0))) begin
        ap_idle_pp2 = 1'b1;
    end else begin
        ap_idle_pp2 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln479_reg_451 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_phi_mux_j_0_phi_fu_180_p4 = select_ln203_4_reg_465;
    end else begin
        ap_phi_mux_j_0_phi_fu_180_p4 = j_0_reg_176;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp2_stage0) & (icmp_ln500_reg_512 == 1'd0) & (ap_enable_reg_pp2_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp2_stage0))) begin
        ap_phi_mux_k10_0_phi_fu_226_p4 = k_8_reg_516;
    end else begin
        ap_phi_mux_k10_0_phi_fu_226_p4 = k10_0_reg_222;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp1_stage0) & (icmp_ln495_reg_498 == 1'd0) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
        ap_phi_mux_k9_0_phi_fu_214_p4 = k_7_reg_502;
    end else begin
        ap_phi_mux_k9_0_phi_fu_214_p4 = k9_0_reg_210;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp2_stage0) & (icmp_ln500_reg_512_pp2_iter3_reg == 1'd0) & (ap_enable_reg_pp2_iter4 == 1'b1)) | ((1'b0 == ap_block_pp1_stage0) & (icmp_ln495_reg_498 == 1'd0) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0)) | ((icmp_ln479_reg_451 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)))) begin
        data_V_V_blk_n = data_V_V_empty_n;
    end else begin
        data_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((((icmp_ln500_reg_512_pp2_iter3_reg == 1'd0) & (ap_enable_reg_pp2_iter4 == 1'b1) & (1'b0 == ap_block_pp2_stage0_11001)) | ((icmp_ln495_reg_498 == 1'd0) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001)) | ((icmp_ln479_reg_451 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001)))) begin
        data_V_V_read = 1'b1;
    end else begin
        data_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln477_fu_241_p2 == 1'd1))) begin
        internal_ap_ready = 1'b1;
    end else begin
        internal_ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp2_stage0) & (ap_enable_reg_pp2_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp2_stage0))) begin
        memory1_0_V_address0 = zext_ln203_12_fu_400_p1;
    end else if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        memory1_0_V_address0 = zext_ln203_10_fu_333_p1;
    end else begin
        memory1_0_V_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001)) | ((ap_enable_reg_pp2_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp2_stage0) & (1'b0 == ap_block_pp2_stage0_11001)))) begin
        memory1_0_V_ce0 = 1'b1;
    end else begin
        memory1_0_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((trunc_ln203_reg_470_pp0_iter1_reg == 1'd0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        memory1_0_V_we0 = 1'b1;
    end else begin
        memory1_0_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp2_stage0) & (ap_enable_reg_pp2_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp2_stage0))) begin
        memory1_1_V_address0 = zext_ln203_12_fu_400_p1;
    end else if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        memory1_1_V_address0 = zext_ln203_10_fu_333_p1;
    end else begin
        memory1_1_V_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001)) | ((ap_enable_reg_pp2_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp2_stage0) & (1'b0 == ap_block_pp2_stage0_11001)))) begin
        memory1_1_V_ce0 = 1'b1;
    end else begin
        memory1_1_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (trunc_ln203_reg_470_pp0_iter1_reg == 1'd1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        memory1_1_V_we0 = 1'b1;
    end else begin
        memory1_1_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp2_stage0) & (ap_enable_reg_pp2_iter2 == 1'b1))) begin
        memory2_V_address0 = zext_ln502_fu_405_p1;
    end else if (((1'b0 == ap_block_pp1_stage0) & (ap_enable_reg_pp1_iter2 == 1'b1))) begin
        memory2_V_address0 = zext_ln498_fu_362_p1;
    end else begin
        memory2_V_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((ap_enable_reg_pp2_iter2 == 1'b1) & (1'b0 == ap_block_pp2_stage0_11001)) | ((ap_enable_reg_pp1_iter2 == 1'b1) & (1'b0 == ap_block_pp1_stage0_11001)))) begin
        memory2_V_ce0 = 1'b1;
    end else begin
        memory2_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln495_reg_498_pp1_iter1_reg == 1'd0) & (ap_enable_reg_pp1_iter2 == 1'b1) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        memory2_V_we0 = 1'b1;
    end else begin
        memory2_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (start_full_n == 1'b0))) begin
        real_start = 1'b0;
    end else begin
        real_start = ap_start;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp2_stage0) & (icmp_ln500_reg_512_pp2_iter5_reg == 1'd0) & (ap_enable_reg_pp2_iter6 == 1'b1))) begin
        res_V_V_blk_n = res_V_V_full_n;
    end else begin
        res_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((icmp_ln500_reg_512_pp2_iter5_reg == 1'd0) & (ap_enable_reg_pp2_iter6 == 1'b1) & (1'b0 == ap_block_pp2_stage0_11001))) begin
        res_V_V_write = 1'b1;
    end else begin
        res_V_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (real_start == 1'b1))) begin
        start_write = 1'b1;
    end else begin
        start_write = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln477_fu_241_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (icmp_ln479_fu_253_p2 == 1'd1)) & ~((ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter2 == 1'b1)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((((ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter2 == 1'b1)) | ((ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (icmp_ln479_fu_253_p2 == 1'd1)))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            if (((icmp_ln494_fu_338_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            end
        end
        ap_ST_fsm_pp1_stage0 : begin
            if ((~((ap_enable_reg_pp1_iter1 == 1'b0) & (1'b0 == ap_block_pp1_stage0_subdone) & (icmp_ln495_fu_350_p2 == 1'd1) & (ap_enable_reg_pp1_iter0 == 1'b1)) & ~((ap_enable_reg_pp1_iter1 == 1'b0) & (1'b0 == ap_block_pp1_stage0_subdone) & (ap_enable_reg_pp1_iter2 == 1'b1)))) begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            end else if ((((ap_enable_reg_pp1_iter1 == 1'b0) & (1'b0 == ap_block_pp1_stage0_subdone) & (ap_enable_reg_pp1_iter2 == 1'b1)) | ((ap_enable_reg_pp1_iter1 == 1'b0) & (1'b0 == ap_block_pp1_stage0_subdone) & (icmp_ln495_fu_350_p2 == 1'd1) & (ap_enable_reg_pp1_iter0 == 1'b1)))) begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            end
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_pp2_stage0;
        end
        ap_ST_fsm_pp2_stage0 : begin
            if ((~((ap_enable_reg_pp2_iter1 == 1'b0) & (1'b0 == ap_block_pp2_stage0_subdone) & (icmp_ln500_fu_379_p2 == 1'd1) & (ap_enable_reg_pp2_iter0 == 1'b1)) & ~((ap_enable_reg_pp2_iter5 == 1'b0) & (1'b0 == ap_block_pp2_stage0_subdone) & (ap_enable_reg_pp2_iter6 == 1'b1)))) begin
                ap_NS_fsm = ap_ST_fsm_pp2_stage0;
            end else if ((((ap_enable_reg_pp2_iter1 == 1'b0) & (1'b0 == ap_block_pp2_stage0_subdone) & (icmp_ln500_fu_379_p2 == 1'd1) & (ap_enable_reg_pp2_iter0 == 1'b1)) | ((ap_enable_reg_pp2_iter5 == 1'b0) & (1'b0 == ap_block_pp2_stage0_subdone) & (ap_enable_reg_pp2_iter6 == 1'b1)))) begin
                ap_NS_fsm = ap_ST_fsm_state19;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp2_stage0;
            end
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln203_4_fu_395_p2 = (zext_ln500_reg_507 + zext_ln203_11_fu_391_p1);

assign add_ln203_fu_327_p2 = (zext_ln480_fu_320_p1 + zext_ln203_fu_324_p1);

assign add_ln479_fu_259_p2 = (indvar_flatten_reg_165 + 8'd1);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_pp1_stage0 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_pp2_stage0 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state19 = ap_CS_fsm[32'd8];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd4];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_11001 = ((icmp_ln479_reg_451 == 1'd0) & (data_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = ((icmp_ln479_reg_451 == 1'd0) & (data_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1));
end

assign ap_block_pp1_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp1_stage0_11001 = ((icmp_ln495_reg_498 == 1'd0) & (data_V_V_empty_n == 1'b0) & (ap_enable_reg_pp1_iter1 == 1'b1));
end

always @ (*) begin
    ap_block_pp1_stage0_subdone = ((icmp_ln495_reg_498 == 1'd0) & (data_V_V_empty_n == 1'b0) & (ap_enable_reg_pp1_iter1 == 1'b1));
end

assign ap_block_pp2_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp2_stage0_01001 = (((icmp_ln500_reg_512_pp2_iter3_reg == 1'd0) & (data_V_V_empty_n == 1'b0) & (ap_enable_reg_pp2_iter4 == 1'b1)) | ((icmp_ln500_reg_512_pp2_iter5_reg == 1'd0) & (res_V_V_full_n == 1'b0) & (ap_enable_reg_pp2_iter6 == 1'b1)));
end

always @ (*) begin
    ap_block_pp2_stage0_11001 = (((icmp_ln500_reg_512_pp2_iter3_reg == 1'd0) & (data_V_V_empty_n == 1'b0) & (ap_enable_reg_pp2_iter4 == 1'b1)) | ((icmp_ln500_reg_512_pp2_iter5_reg == 1'd0) & (res_V_V_full_n == 1'b0) & (ap_enable_reg_pp2_iter6 == 1'b1)));
end

always @ (*) begin
    ap_block_pp2_stage0_subdone = (((icmp_ln500_reg_512_pp2_iter3_reg == 1'd0) & (data_V_V_empty_n == 1'b0) & (ap_enable_reg_pp2_iter4 == 1'b1)) | ((icmp_ln500_reg_512_pp2_iter5_reg == 1'd0) & (res_V_V_full_n == 1'b0) & (ap_enable_reg_pp2_iter6 == 1'b1)));
end

always @ (*) begin
    ap_block_state1 = ((real_start == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_block_state10_pp1_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state12_pp2_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state13_pp2_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state14_pp2_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state15_pp2_stage0_iter3 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state16_pp2_stage0_iter4 = ((icmp_ln500_reg_512_pp2_iter3_reg == 1'd0) & (data_V_V_empty_n == 1'b0));
end

assign ap_block_state17_pp2_stage0_iter5 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state18_pp2_stage0_iter6 = ((icmp_ln500_reg_512_pp2_iter5_reg == 1'd0) & (res_V_V_full_n == 1'b0));
end

assign ap_block_state3_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state4_pp0_stage0_iter1 = ((icmp_ln479_reg_451 == 1'd0) & (data_V_V_empty_n == 1'b0));
end

assign ap_block_state5_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp1_stage0_iter0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state9_pp1_stage0_iter1 = ((icmp_ln495_reg_498 == 1'd0) & (data_V_V_empty_n == 1'b0));
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_pp1 = (ap_idle_pp1 ^ 1'b1);

assign ap_enable_pp2 = (ap_idle_pp2 ^ 1'b1);

assign ap_ready = internal_ap_ready;

assign i_fu_247_p2 = (i_0_reg_154 + 4'd1);

assign icmp_ln1494_1_fu_420_p2 = (($signed(pool_2_V_reg_553) > $signed(select_ln510_reg_559)) ? 1'b1 : 1'b0);

assign icmp_ln1494_2_fu_430_p2 = (($signed(reg_234) > $signed(select_ln510_5_reg_565)) ? 1'b1 : 1'b0);

assign icmp_ln1494_fu_410_p2 = (($signed(pool_1_V_reg_542) > $signed(max_V_reg_536)) ? 1'b1 : 1'b0);

assign icmp_ln477_fu_241_p2 = ((i_0_reg_154 == 4'd8) ? 1'b1 : 1'b0);

assign icmp_ln479_fu_253_p2 = ((indvar_flatten_reg_165 == 8'd128) ? 1'b1 : 1'b0);

assign icmp_ln480_fu_271_p2 = ((k_0_reg_187 == 4'd8) ? 1'b1 : 1'b0);

assign icmp_ln494_fu_338_p2 = ((j8_0_reg_198 == 4'd8) ? 1'b1 : 1'b0);

assign icmp_ln495_fu_350_p2 = ((ap_phi_mux_k9_0_phi_fu_214_p4 == 4'd8) ? 1'b1 : 1'b0);

assign icmp_ln500_fu_379_p2 = ((ap_phi_mux_k10_0_phi_fu_226_p4 == 4'd8) ? 1'b1 : 1'b0);

assign j_26_fu_344_p2 = (j8_0_reg_198 + 4'd1);

assign j_fu_265_p2 = (5'd1 + ap_phi_mux_j_0_phi_fu_180_p4);

assign k_7_fu_356_p2 = (ap_phi_mux_k9_0_phi_fu_214_p4 + 4'd1);

assign k_8_fu_385_p2 = (ap_phi_mux_k10_0_phi_fu_226_p4 + 4'd1);

assign k_fu_307_p2 = (select_ln203_fu_277_p3 + 4'd1);

assign res_V_V_din = tmp_V_reg_571;

assign select_ln203_4_fu_285_p3 = ((icmp_ln480_fu_271_p2[0:0] === 1'b1) ? j_fu_265_p2 : ap_phi_mux_j_0_phi_fu_180_p4);

assign select_ln203_fu_277_p3 = ((icmp_ln480_fu_271_p2[0:0] === 1'b1) ? 4'd0 : k_0_reg_187);

assign select_ln510_5_fu_424_p3 = ((icmp_ln1494_1_fu_420_p2[0:0] === 1'b1) ? pool_2_V_reg_553 : select_ln510_reg_559);

assign select_ln510_fu_414_p3 = ((icmp_ln1494_fu_410_p2[0:0] === 1'b1) ? pool_1_V_reg_542 : max_V_reg_536);

assign start_out = real_start;

assign tmp_7_fu_313_p3 = {{zext_ln203_mid2_v_reg_474}, {3'd0}};

assign tmp_8_fu_367_p3 = {{j8_0_reg_198}, {3'd0}};

assign tmp_V_fu_435_p3 = ((icmp_ln1494_2_fu_430_p2[0:0] === 1'b1) ? reg_234 : select_ln510_5_reg_565);

assign trunc_ln203_fu_293_p1 = select_ln203_4_fu_285_p3[0:0];

assign zext_ln203_10_fu_333_p1 = add_ln203_reg_484;

assign zext_ln203_11_fu_391_p1 = ap_phi_mux_k10_0_phi_fu_226_p4;

assign zext_ln203_12_fu_400_p1 = add_ln203_4_reg_521;

assign zext_ln203_fu_324_p1 = select_ln203_reg_460;

assign zext_ln480_fu_320_p1 = tmp_7_fu_313_p3;

assign zext_ln498_fu_362_p1 = k9_0_reg_210_pp1_iter1_reg;

assign zext_ln500_fu_375_p1 = tmp_8_fu_367_p3;

assign zext_ln502_fu_405_p1 = k10_0_reg_222_pp2_iter1_reg;

always @ (posedge ap_clk) begin
    zext_ln500_reg_507[2:0] <= 3'b000;
    zext_ln500_reg_507[7] <= 1'b0;
end

endmodule //pooling2d_large_cl_nopad_pad_me_1

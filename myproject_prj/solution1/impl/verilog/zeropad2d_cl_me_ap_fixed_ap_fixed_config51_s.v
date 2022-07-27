// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module zeropad2d_cl_me_ap_fixed_ap_fixed_config51_s (
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

parameter    ap_ST_fsm_state1 = 40'd1;
parameter    ap_ST_fsm_state2 = 40'd2;
parameter    ap_ST_fsm_state3 = 40'd4;
parameter    ap_ST_fsm_state4 = 40'd8;
parameter    ap_ST_fsm_state5 = 40'd16;
parameter    ap_ST_fsm_state6 = 40'd32;
parameter    ap_ST_fsm_state7 = 40'd64;
parameter    ap_ST_fsm_state8 = 40'd128;
parameter    ap_ST_fsm_state9 = 40'd256;
parameter    ap_ST_fsm_state10 = 40'd512;
parameter    ap_ST_fsm_state11 = 40'd1024;
parameter    ap_ST_fsm_state12 = 40'd2048;
parameter    ap_ST_fsm_state13 = 40'd4096;
parameter    ap_ST_fsm_state14 = 40'd8192;
parameter    ap_ST_fsm_state15 = 40'd16384;
parameter    ap_ST_fsm_state16 = 40'd32768;
parameter    ap_ST_fsm_state17 = 40'd65536;
parameter    ap_ST_fsm_state18 = 40'd131072;
parameter    ap_ST_fsm_state19 = 40'd262144;
parameter    ap_ST_fsm_state20 = 40'd524288;
parameter    ap_ST_fsm_state21 = 40'd1048576;
parameter    ap_ST_fsm_state22 = 40'd2097152;
parameter    ap_ST_fsm_state23 = 40'd4194304;
parameter    ap_ST_fsm_state24 = 40'd8388608;
parameter    ap_ST_fsm_state25 = 40'd16777216;
parameter    ap_ST_fsm_state26 = 40'd33554432;
parameter    ap_ST_fsm_state27 = 40'd67108864;
parameter    ap_ST_fsm_state28 = 40'd134217728;
parameter    ap_ST_fsm_state29 = 40'd268435456;
parameter    ap_ST_fsm_state30 = 40'd536870912;
parameter    ap_ST_fsm_state31 = 40'd1073741824;
parameter    ap_ST_fsm_state32 = 40'd2147483648;
parameter    ap_ST_fsm_state33 = 40'd4294967296;
parameter    ap_ST_fsm_state34 = 40'd8589934592;
parameter    ap_ST_fsm_state35 = 40'd17179869184;
parameter    ap_ST_fsm_state36 = 40'd34359738368;
parameter    ap_ST_fsm_state37 = 40'd68719476736;
parameter    ap_ST_fsm_state38 = 40'd137438953472;
parameter    ap_ST_fsm_state39 = 40'd274877906944;
parameter    ap_ST_fsm_state40 = 40'd549755813888;

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
reg[31:0] res_V_V_din;
reg res_V_V_write;

reg    real_start;
reg    start_once_reg;
reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [39:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
reg    data_V_V_blk_n;
wire    ap_CS_fsm_state18;
wire   [0:0] icmp_ln121_fu_139_p2;
wire    ap_CS_fsm_state19;
wire    ap_CS_fsm_state20;
wire    ap_CS_fsm_state21;
wire    ap_CS_fsm_state22;
wire    ap_CS_fsm_state23;
wire    ap_CS_fsm_state24;
wire    ap_CS_fsm_state25;
reg    res_V_V_blk_n;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln112_fu_115_p2;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state4;
wire    ap_CS_fsm_state5;
wire    ap_CS_fsm_state6;
wire    ap_CS_fsm_state7;
wire    ap_CS_fsm_state8;
wire    ap_CS_fsm_state9;
wire    ap_CS_fsm_state10;
wire   [0:0] icmp_ln117_fu_127_p2;
wire    ap_CS_fsm_state11;
wire    ap_CS_fsm_state12;
wire    ap_CS_fsm_state13;
wire    ap_CS_fsm_state14;
wire    ap_CS_fsm_state15;
wire    ap_CS_fsm_state16;
wire    ap_CS_fsm_state17;
wire    ap_CS_fsm_state26;
wire    ap_CS_fsm_state27;
wire    ap_CS_fsm_state28;
wire    ap_CS_fsm_state29;
wire    ap_CS_fsm_state30;
wire    ap_CS_fsm_state31;
wire    ap_CS_fsm_state32;
wire    ap_CS_fsm_state33;
wire   [0:0] icmp_ln130_fu_151_p2;
wire    ap_CS_fsm_state34;
wire    ap_CS_fsm_state35;
wire    ap_CS_fsm_state36;
wire    ap_CS_fsm_state37;
wire    ap_CS_fsm_state38;
wire    ap_CS_fsm_state39;
wire    ap_CS_fsm_state40;
wire   [6:0] j_fu_121_p2;
reg   [6:0] j_reg_166;
reg    ap_block_state2;
wire   [6:0] i_fu_133_p2;
reg   [6:0] i_reg_174;
reg    ap_block_state10;
wire   [6:0] j_20_fu_145_p2;
reg   [6:0] j_20_reg_182;
reg    ap_block_state18;
wire   [6:0] j_19_fu_157_p2;
reg   [6:0] j_19_reg_190;
reg    ap_block_state33;
reg   [6:0] j_0_reg_71;
reg    ap_block_state1;
reg   [6:0] i1_0_reg_82;
reg   [6:0] j3_0_reg_93;
reg    ap_block_state25;
reg   [6:0] j6_0_reg_104;
reg    ap_block_state19;
reg    ap_block_state20;
reg    ap_block_state21;
reg    ap_block_state22;
reg    ap_block_state23;
reg    ap_block_state24;
reg   [39:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 40'd1;
end

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
        end else if ((~((icmp_ln130_fu_151_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln130_fu_151_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state33))) begin
            ap_done_reg <= 1'b1;
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
    if ((~((icmp_ln112_fu_115_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln112_fu_115_p2 == 1'd1))) begin
        i1_0_reg_82 <= 7'd0;
    end else if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state32))) begin
        i1_0_reg_82 <= i_reg_174;
    end
end

always @ (posedge ap_clk) begin
    if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state17))) begin
        j3_0_reg_93 <= 7'd0;
    end else if ((~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state25))) begin
        j3_0_reg_93 <= j_20_reg_182;
    end
end

always @ (posedge ap_clk) begin
    if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state40))) begin
        j6_0_reg_104 <= j_19_reg_190;
    end else if ((~((icmp_ln117_fu_127_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state10) & (icmp_ln117_fu_127_p2 == 1'd1))) begin
        j6_0_reg_104 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state9))) begin
        j_0_reg_71 <= j_reg_166;
    end else if ((~((ap_done_reg == 1'b1) | (real_start == 1'b0)) & (1'b1 == ap_CS_fsm_state1))) begin
        j_0_reg_71 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((~((icmp_ln117_fu_127_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state10))) begin
        i_reg_174 <= i_fu_133_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((~((icmp_ln130_fu_151_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state33))) begin
        j_19_reg_190 <= j_19_fu_157_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((~(((icmp_ln121_fu_139_p2 == 1'd0) & (data_V_V_empty_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd1) & (res_V_V_full_n == 1'b0))) & (1'b1 == ap_CS_fsm_state18))) begin
        j_20_reg_182 <= j_20_fu_145_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((~((icmp_ln112_fu_115_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state2))) begin
        j_reg_166 <= j_fu_121_p2;
    end
end

always @ (*) begin
    if ((~((icmp_ln130_fu_151_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln130_fu_151_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state33))) begin
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
    if (((1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state25) | (1'b1 == ap_CS_fsm_state24) | (1'b1 == ap_CS_fsm_state23) | (1'b1 == ap_CS_fsm_state22) | (1'b1 == ap_CS_fsm_state21) | (1'b1 == ap_CS_fsm_state20) | ((icmp_ln121_fu_139_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state18)))) begin
        data_V_V_blk_n = data_V_V_empty_n;
    end else begin
        data_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state19)) | (~(((icmp_ln121_fu_139_p2 == 1'd0) & (data_V_V_empty_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd1) & (res_V_V_full_n == 1'b0))) & (icmp_ln121_fu_139_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state18)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state25)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state24)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state23)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state22)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state21)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state20)))) begin
        data_V_V_read = 1'b1;
    end else begin
        data_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((icmp_ln130_fu_151_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln130_fu_151_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state33))) begin
        internal_ap_ready = 1'b1;
    end else begin
        internal_ap_ready = 1'b0;
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
    if (((1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state40) | (1'b1 == ap_CS_fsm_state39) | (1'b1 == ap_CS_fsm_state38) | (1'b1 == ap_CS_fsm_state37) | (1'b1 == ap_CS_fsm_state36) | (1'b1 == ap_CS_fsm_state35) | (1'b1 == ap_CS_fsm_state34) | (1'b1 == ap_CS_fsm_state32) | (1'b1 == ap_CS_fsm_state31) | (1'b1 == ap_CS_fsm_state30) | (1'b1 == ap_CS_fsm_state29) | (1'b1 == ap_CS_fsm_state28) | (1'b1 == ap_CS_fsm_state27) | (1'b1 == ap_CS_fsm_state26) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state25) | (1'b1 == ap_CS_fsm_state24) | (1'b1 == ap_CS_fsm_state23) | (1'b1 == ap_CS_fsm_state22) | (1'b1 == ap_CS_fsm_state21) | (1'b1 == ap_CS_fsm_state20) | ((icmp_ln121_fu_139_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state18)) | ((icmp_ln121_fu_139_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state18)) | ((icmp_ln130_fu_151_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state33)) | ((icmp_ln117_fu_127_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state10)) | ((icmp_ln112_fu_115_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        res_V_V_blk_n = res_V_V_full_n;
    end else begin
        res_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state19)) | (~(((icmp_ln121_fu_139_p2 == 1'd0) & (data_V_V_empty_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd1) & (res_V_V_full_n == 1'b0))) & (icmp_ln121_fu_139_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state18)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state25)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state24)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state23)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state22)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state21)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state20)))) begin
        res_V_V_din = data_V_V_dout;
    end else if (((~(((icmp_ln121_fu_139_p2 == 1'd0) & (data_V_V_empty_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd1) & (res_V_V_full_n == 1'b0))) & (icmp_ln121_fu_139_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state18)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state40)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state39)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state38)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state37)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state36)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state35)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state34)) | (~((icmp_ln130_fu_151_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln130_fu_151_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state33)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state32)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state31)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state30)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state29)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state28)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state27)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state26)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state17)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state16)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state15)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state14)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state13)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state12)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state11)) | (~((icmp_ln117_fu_127_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln117_fu_127_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state10)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state9)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state8)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state7)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state6)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state5)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state4)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state3)) | (~((icmp_ln112_fu_115_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln112_fu_115_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        res_V_V_din = 32'd0;
    end else begin
        res_V_V_din = 'bx;
    end
end

always @ (*) begin
    if (((~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state19)) | (~(((icmp_ln121_fu_139_p2 == 1'd0) & (data_V_V_empty_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd1) & (res_V_V_full_n == 1'b0))) & (icmp_ln121_fu_139_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state18)) | (~(((icmp_ln121_fu_139_p2 == 1'd0) & (data_V_V_empty_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd1) & (res_V_V_full_n == 1'b0))) & (icmp_ln121_fu_139_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state18)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state40)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state39)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state38)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state37)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state36)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state35)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state34)) | (~((icmp_ln130_fu_151_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln130_fu_151_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state33)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state32)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state31)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state30)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state29)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state28)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state27)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state26)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state17)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state16)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state15)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state14)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state13)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state12)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state11)) | (~((icmp_ln117_fu_127_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln117_fu_127_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state10)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state9)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state8)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state7)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state6)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state5)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state4)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state3)) | (~((icmp_ln112_fu_115_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln112_fu_115_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state25)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state24)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state23)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state22)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state21)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state20)))) begin
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
            if ((~((ap_done_reg == 1'b1) | (real_start == 1'b0)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if ((~((icmp_ln112_fu_115_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state2) & (icmp_ln112_fu_115_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end else if ((~((icmp_ln112_fu_115_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln112_fu_115_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state4))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state5 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state5))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state6 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state6))) begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state7 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state7))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state8 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state8))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_state9 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state9))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end
        end
        ap_ST_fsm_state10 : begin
            if ((~((icmp_ln117_fu_127_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state10) & (icmp_ln117_fu_127_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state33;
            end else if ((~((icmp_ln117_fu_127_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln117_fu_127_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state10))) begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end
        end
        ap_ST_fsm_state11 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state11))) begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end
        end
        ap_ST_fsm_state12 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state12))) begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end
        end
        ap_ST_fsm_state13 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state13))) begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end
        end
        ap_ST_fsm_state14 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state14))) begin
                ap_NS_fsm = ap_ST_fsm_state15;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end
        end
        ap_ST_fsm_state15 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state15))) begin
                ap_NS_fsm = ap_ST_fsm_state16;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state15;
            end
        end
        ap_ST_fsm_state16 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state16))) begin
                ap_NS_fsm = ap_ST_fsm_state17;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state16;
            end
        end
        ap_ST_fsm_state17 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state17))) begin
                ap_NS_fsm = ap_ST_fsm_state18;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state17;
            end
        end
        ap_ST_fsm_state18 : begin
            if ((~(((icmp_ln121_fu_139_p2 == 1'd0) & (data_V_V_empty_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd1) & (res_V_V_full_n == 1'b0))) & (icmp_ln121_fu_139_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state18))) begin
                ap_NS_fsm = ap_ST_fsm_state26;
            end else if ((~(((icmp_ln121_fu_139_p2 == 1'd0) & (data_V_V_empty_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd1) & (res_V_V_full_n == 1'b0))) & (icmp_ln121_fu_139_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state18))) begin
                ap_NS_fsm = ap_ST_fsm_state19;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state18;
            end
        end
        ap_ST_fsm_state19 : begin
            if ((~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state19))) begin
                ap_NS_fsm = ap_ST_fsm_state20;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state19;
            end
        end
        ap_ST_fsm_state20 : begin
            if ((~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state20))) begin
                ap_NS_fsm = ap_ST_fsm_state21;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state20;
            end
        end
        ap_ST_fsm_state21 : begin
            if ((~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state21))) begin
                ap_NS_fsm = ap_ST_fsm_state22;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state21;
            end
        end
        ap_ST_fsm_state22 : begin
            if ((~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state22))) begin
                ap_NS_fsm = ap_ST_fsm_state23;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state22;
            end
        end
        ap_ST_fsm_state23 : begin
            if ((~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state23))) begin
                ap_NS_fsm = ap_ST_fsm_state24;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state23;
            end
        end
        ap_ST_fsm_state24 : begin
            if ((~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state24))) begin
                ap_NS_fsm = ap_ST_fsm_state25;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state24;
            end
        end
        ap_ST_fsm_state25 : begin
            if ((~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state25))) begin
                ap_NS_fsm = ap_ST_fsm_state18;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state25;
            end
        end
        ap_ST_fsm_state26 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state26))) begin
                ap_NS_fsm = ap_ST_fsm_state27;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state26;
            end
        end
        ap_ST_fsm_state27 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state27))) begin
                ap_NS_fsm = ap_ST_fsm_state28;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state27;
            end
        end
        ap_ST_fsm_state28 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state28))) begin
                ap_NS_fsm = ap_ST_fsm_state29;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state28;
            end
        end
        ap_ST_fsm_state29 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state29))) begin
                ap_NS_fsm = ap_ST_fsm_state30;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state29;
            end
        end
        ap_ST_fsm_state30 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state30))) begin
                ap_NS_fsm = ap_ST_fsm_state31;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state30;
            end
        end
        ap_ST_fsm_state31 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state31))) begin
                ap_NS_fsm = ap_ST_fsm_state32;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state31;
            end
        end
        ap_ST_fsm_state32 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state32))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state32;
            end
        end
        ap_ST_fsm_state33 : begin
            if ((~((icmp_ln130_fu_151_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln130_fu_151_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state33))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else if ((~((icmp_ln130_fu_151_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln130_fu_151_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state33))) begin
                ap_NS_fsm = ap_ST_fsm_state34;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state33;
            end
        end
        ap_ST_fsm_state34 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state34))) begin
                ap_NS_fsm = ap_ST_fsm_state35;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state34;
            end
        end
        ap_ST_fsm_state35 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state35))) begin
                ap_NS_fsm = ap_ST_fsm_state36;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state35;
            end
        end
        ap_ST_fsm_state36 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state36))) begin
                ap_NS_fsm = ap_ST_fsm_state37;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state36;
            end
        end
        ap_ST_fsm_state37 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state37))) begin
                ap_NS_fsm = ap_ST_fsm_state38;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state37;
            end
        end
        ap_ST_fsm_state38 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state38))) begin
                ap_NS_fsm = ap_ST_fsm_state39;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state38;
            end
        end
        ap_ST_fsm_state39 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state39))) begin
                ap_NS_fsm = ap_ST_fsm_state40;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state39;
            end
        end
        ap_ST_fsm_state40 : begin
            if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state40))) begin
                ap_NS_fsm = ap_ST_fsm_state33;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state40;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];

assign ap_CS_fsm_state16 = ap_CS_fsm[32'd15];

assign ap_CS_fsm_state17 = ap_CS_fsm[32'd16];

assign ap_CS_fsm_state18 = ap_CS_fsm[32'd17];

assign ap_CS_fsm_state19 = ap_CS_fsm[32'd18];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state20 = ap_CS_fsm[32'd19];

assign ap_CS_fsm_state21 = ap_CS_fsm[32'd20];

assign ap_CS_fsm_state22 = ap_CS_fsm[32'd21];

assign ap_CS_fsm_state23 = ap_CS_fsm[32'd22];

assign ap_CS_fsm_state24 = ap_CS_fsm[32'd23];

assign ap_CS_fsm_state25 = ap_CS_fsm[32'd24];

assign ap_CS_fsm_state26 = ap_CS_fsm[32'd25];

assign ap_CS_fsm_state27 = ap_CS_fsm[32'd26];

assign ap_CS_fsm_state28 = ap_CS_fsm[32'd27];

assign ap_CS_fsm_state29 = ap_CS_fsm[32'd28];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state30 = ap_CS_fsm[32'd29];

assign ap_CS_fsm_state31 = ap_CS_fsm[32'd30];

assign ap_CS_fsm_state32 = ap_CS_fsm[32'd31];

assign ap_CS_fsm_state33 = ap_CS_fsm[32'd32];

assign ap_CS_fsm_state34 = ap_CS_fsm[32'd33];

assign ap_CS_fsm_state35 = ap_CS_fsm[32'd34];

assign ap_CS_fsm_state36 = ap_CS_fsm[32'd35];

assign ap_CS_fsm_state37 = ap_CS_fsm[32'd36];

assign ap_CS_fsm_state38 = ap_CS_fsm[32'd37];

assign ap_CS_fsm_state39 = ap_CS_fsm[32'd38];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state40 = ap_CS_fsm[32'd39];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

always @ (*) begin
    ap_block_state1 = ((ap_done_reg == 1'b1) | (real_start == 1'b0));
end

always @ (*) begin
    ap_block_state10 = ((icmp_ln117_fu_127_p2 == 1'd0) & (res_V_V_full_n == 1'b0));
end

always @ (*) begin
    ap_block_state18 = (((icmp_ln121_fu_139_p2 == 1'd0) & (data_V_V_empty_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd1) & (res_V_V_full_n == 1'b0)));
end

always @ (*) begin
    ap_block_state19 = ((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0));
end

always @ (*) begin
    ap_block_state2 = ((icmp_ln112_fu_115_p2 == 1'd0) & (res_V_V_full_n == 1'b0));
end

always @ (*) begin
    ap_block_state20 = ((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0));
end

always @ (*) begin
    ap_block_state21 = ((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0));
end

always @ (*) begin
    ap_block_state22 = ((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0));
end

always @ (*) begin
    ap_block_state23 = ((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0));
end

always @ (*) begin
    ap_block_state24 = ((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0));
end

always @ (*) begin
    ap_block_state25 = ((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0));
end

always @ (*) begin
    ap_block_state33 = ((icmp_ln130_fu_151_p2 == 1'd0) & (res_V_V_full_n == 1'b0));
end

assign ap_ready = internal_ap_ready;

assign i_fu_133_p2 = (i1_0_reg_82 + 7'd1);

assign icmp_ln112_fu_115_p2 = ((j_0_reg_71 == 7'd66) ? 1'b1 : 1'b0);

assign icmp_ln117_fu_127_p2 = ((i1_0_reg_82 == 7'd64) ? 1'b1 : 1'b0);

assign icmp_ln121_fu_139_p2 = ((j3_0_reg_93 == 7'd64) ? 1'b1 : 1'b0);

assign icmp_ln130_fu_151_p2 = ((j6_0_reg_104 == 7'd66) ? 1'b1 : 1'b0);

assign j_19_fu_157_p2 = (j6_0_reg_104 + 7'd1);

assign j_20_fu_145_p2 = (j3_0_reg_93 + 7'd1);

assign j_fu_121_p2 = (j_0_reg_71 + 7'd1);

assign start_out = real_start;

endmodule //zeropad2d_cl_me_ap_fixed_ap_fixed_config51_s

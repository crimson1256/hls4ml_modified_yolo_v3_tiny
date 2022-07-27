// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module zeropad2d_cl_me_ap_fixed_ap_fixed_config50_s (
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

parameter    ap_ST_fsm_state1 = 15'd1;
parameter    ap_ST_fsm_state2 = 15'd2;
parameter    ap_ST_fsm_state3 = 15'd4;
parameter    ap_ST_fsm_state4 = 15'd8;
parameter    ap_ST_fsm_state5 = 15'd16;
parameter    ap_ST_fsm_state6 = 15'd32;
parameter    ap_ST_fsm_state7 = 15'd64;
parameter    ap_ST_fsm_state8 = 15'd128;
parameter    ap_ST_fsm_state9 = 15'd256;
parameter    ap_ST_fsm_state10 = 15'd512;
parameter    ap_ST_fsm_state11 = 15'd1024;
parameter    ap_ST_fsm_state12 = 15'd2048;
parameter    ap_ST_fsm_state13 = 15'd4096;
parameter    ap_ST_fsm_state14 = 15'd8192;
parameter    ap_ST_fsm_state15 = 15'd16384;

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
(* fsm_encoding = "none" *) reg   [14:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
reg    data_V_V_blk_n;
wire    ap_CS_fsm_state8;
wire   [0:0] icmp_ln121_fu_139_p2;
wire    ap_CS_fsm_state9;
wire    ap_CS_fsm_state10;
reg    res_V_V_blk_n;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln112_fu_115_p2;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state4;
wire    ap_CS_fsm_state5;
wire   [0:0] icmp_ln117_fu_127_p2;
wire    ap_CS_fsm_state6;
wire    ap_CS_fsm_state7;
wire    ap_CS_fsm_state11;
wire    ap_CS_fsm_state12;
wire    ap_CS_fsm_state13;
wire   [0:0] icmp_ln130_fu_151_p2;
wire    ap_CS_fsm_state14;
wire    ap_CS_fsm_state15;
wire   [7:0] j_fu_121_p2;
reg   [7:0] j_reg_166;
reg    ap_block_state2;
wire   [7:0] i_fu_133_p2;
reg   [7:0] i_reg_174;
reg    ap_block_state5;
wire   [7:0] j_22_fu_145_p2;
reg   [7:0] j_22_reg_182;
reg    ap_block_state8;
wire   [7:0] j_21_fu_157_p2;
reg   [7:0] j_21_reg_190;
reg    ap_block_state13;
reg   [7:0] j_0_reg_71;
reg    ap_block_state1;
reg   [7:0] i1_0_reg_82;
reg   [7:0] j3_0_reg_93;
reg    ap_block_state10;
reg   [7:0] j6_0_reg_104;
reg    ap_block_state9;
reg   [14:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 15'd1;
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
        end else if ((~((icmp_ln130_fu_151_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state13) & (icmp_ln130_fu_151_p2 == 1'd1))) begin
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
    if ((~((icmp_ln112_fu_115_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln112_fu_115_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        i1_0_reg_82 <= 8'd0;
    end else if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state12))) begin
        i1_0_reg_82 <= i_reg_174;
    end
end

always @ (posedge ap_clk) begin
    if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state7))) begin
        j3_0_reg_93 <= 8'd0;
    end else if ((~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state10))) begin
        j3_0_reg_93 <= j_22_reg_182;
    end
end

always @ (posedge ap_clk) begin
    if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state15))) begin
        j6_0_reg_104 <= j_21_reg_190;
    end else if ((~((icmp_ln117_fu_127_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state5) & (icmp_ln117_fu_127_p2 == 1'd1))) begin
        j6_0_reg_104 <= 8'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state4))) begin
        j_0_reg_71 <= j_reg_166;
    end else if ((~((ap_done_reg == 1'b1) | (real_start == 1'b0)) & (1'b1 == ap_CS_fsm_state1))) begin
        j_0_reg_71 <= 8'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((~((icmp_ln117_fu_127_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state5))) begin
        i_reg_174 <= i_fu_133_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((~((icmp_ln130_fu_151_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state13))) begin
        j_21_reg_190 <= j_21_fu_157_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((~(((icmp_ln121_fu_139_p2 == 1'd0) & (data_V_V_empty_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd1) & (res_V_V_full_n == 1'b0))) & (1'b1 == ap_CS_fsm_state8))) begin
        j_22_reg_182 <= j_22_fu_145_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((~((icmp_ln112_fu_115_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state2))) begin
        j_reg_166 <= j_fu_121_p2;
    end
end

always @ (*) begin
    if ((~((icmp_ln130_fu_151_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state13) & (icmp_ln130_fu_151_p2 == 1'd1))) begin
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
    if (((1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9) | ((icmp_ln121_fu_139_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state8)))) begin
        data_V_V_blk_n = data_V_V_empty_n;
    end else begin
        data_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state10)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state9)) | (~(((icmp_ln121_fu_139_p2 == 1'd0) & (data_V_V_empty_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd1) & (res_V_V_full_n == 1'b0))) & (icmp_ln121_fu_139_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state8)))) begin
        data_V_V_read = 1'b1;
    end else begin
        data_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((icmp_ln130_fu_151_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state13) & (icmp_ln130_fu_151_p2 == 1'd1))) begin
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
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | ((icmp_ln112_fu_115_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) | ((icmp_ln121_fu_139_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state8)) | ((icmp_ln121_fu_139_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state8)) | ((icmp_ln130_fu_151_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13)) | ((icmp_ln117_fu_127_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5)))) begin
        res_V_V_blk_n = res_V_V_full_n;
    end else begin
        res_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state10)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state9)) | (~(((icmp_ln121_fu_139_p2 == 1'd0) & (data_V_V_empty_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd1) & (res_V_V_full_n == 1'b0))) & (icmp_ln121_fu_139_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state8)))) begin
        res_V_V_din = data_V_V_dout;
    end else if ((((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state3)) | (~((icmp_ln112_fu_115_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln112_fu_115_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) | (~(((icmp_ln121_fu_139_p2 == 1'd0) & (data_V_V_empty_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd1) & (res_V_V_full_n == 1'b0))) & (icmp_ln121_fu_139_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state8)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state15)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state14)) | (~((icmp_ln130_fu_151_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln130_fu_151_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state12)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state11)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state7)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state6)) | (~((icmp_ln117_fu_127_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln117_fu_127_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state4)))) begin
        res_V_V_din = 32'd0;
    end else begin
        res_V_V_din = 'bx;
    end
end

always @ (*) begin
    if ((((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state3)) | (~((icmp_ln112_fu_115_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln112_fu_115_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state10)) | (~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state9)) | (~(((icmp_ln121_fu_139_p2 == 1'd0) & (data_V_V_empty_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd1) & (res_V_V_full_n == 1'b0))) & (icmp_ln121_fu_139_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state8)) | (~(((icmp_ln121_fu_139_p2 == 1'd0) & (data_V_V_empty_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd1) & (res_V_V_full_n == 1'b0))) & (icmp_ln121_fu_139_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state8)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state15)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state14)) | (~((icmp_ln130_fu_151_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln130_fu_151_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state12)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state11)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state7)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state6)) | (~((icmp_ln117_fu_127_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln117_fu_127_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5)) | ((res_V_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state4)))) begin
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
            if ((~((icmp_ln112_fu_115_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln112_fu_115_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
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
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state5 : begin
            if ((~((icmp_ln117_fu_127_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state5) & (icmp_ln117_fu_127_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end else if ((~((icmp_ln117_fu_127_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln117_fu_127_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
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
            if ((~(((icmp_ln121_fu_139_p2 == 1'd0) & (data_V_V_empty_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd1) & (res_V_V_full_n == 1'b0))) & (icmp_ln121_fu_139_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state8))) begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end else if ((~(((icmp_ln121_fu_139_p2 == 1'd0) & (data_V_V_empty_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd1) & (res_V_V_full_n == 1'b0))) & (icmp_ln121_fu_139_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state8))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_state9 : begin
            if ((~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state9))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end
        end
        ap_ST_fsm_state10 : begin
            if ((~((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state10))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
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
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end
        end
        ap_ST_fsm_state13 : begin
            if ((~((icmp_ln130_fu_151_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state13) & (icmp_ln130_fu_151_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else if ((~((icmp_ln130_fu_151_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) & (icmp_ln130_fu_151_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13))) begin
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
                ap_NS_fsm = ap_ST_fsm_state13;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state15;
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

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

always @ (*) begin
    ap_block_state1 = ((ap_done_reg == 1'b1) | (real_start == 1'b0));
end

always @ (*) begin
    ap_block_state10 = ((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0));
end

always @ (*) begin
    ap_block_state13 = ((icmp_ln130_fu_151_p2 == 1'd0) & (res_V_V_full_n == 1'b0));
end

always @ (*) begin
    ap_block_state2 = ((icmp_ln112_fu_115_p2 == 1'd0) & (res_V_V_full_n == 1'b0));
end

always @ (*) begin
    ap_block_state5 = ((icmp_ln117_fu_127_p2 == 1'd0) & (res_V_V_full_n == 1'b0));
end

always @ (*) begin
    ap_block_state8 = (((icmp_ln121_fu_139_p2 == 1'd0) & (data_V_V_empty_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd0) & (res_V_V_full_n == 1'b0)) | ((icmp_ln121_fu_139_p2 == 1'd1) & (res_V_V_full_n == 1'b0)));
end

always @ (*) begin
    ap_block_state9 = ((res_V_V_full_n == 1'b0) | (data_V_V_empty_n == 1'b0));
end

assign ap_ready = internal_ap_ready;

assign i_fu_133_p2 = (i1_0_reg_82 + 8'd1);

assign icmp_ln112_fu_115_p2 = ((j_0_reg_71 == 8'd130) ? 1'b1 : 1'b0);

assign icmp_ln117_fu_127_p2 = ((i1_0_reg_82 == 8'd128) ? 1'b1 : 1'b0);

assign icmp_ln121_fu_139_p2 = ((j3_0_reg_93 == 8'd128) ? 1'b1 : 1'b0);

assign icmp_ln130_fu_151_p2 = ((j6_0_reg_104 == 8'd130) ? 1'b1 : 1'b0);

assign j_21_fu_157_p2 = (j6_0_reg_104 + 8'd1);

assign j_22_fu_145_p2 = (j3_0_reg_93 + 8'd1);

assign j_fu_121_p2 = (j_0_reg_71 + 8'd1);

assign start_out = real_start;

endmodule //zeropad2d_cl_me_ap_fixed_ap_fixed_config50_s
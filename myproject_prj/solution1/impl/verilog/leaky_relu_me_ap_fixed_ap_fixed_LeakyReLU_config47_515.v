// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config47_515 (
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

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_pp0_stage0 = 3'd2;
parameter    ap_ST_fsm_state10 = 3'd4;

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
(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
reg    data_V_V_blk_n;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage0;
reg   [0:0] icmp_ln548_reg_122;
reg    res_V_V_blk_n;
reg    ap_enable_reg_pp0_iter7;
reg   [0:0] icmp_ln548_reg_122_pp0_iter6_reg;
reg   [9:0] i_0_reg_65;
wire   [0:0] icmp_ln548_fu_76_p2;
wire    ap_block_state2_pp0_stage0_iter0;
reg    ap_block_state3_pp0_stage0_iter1;
wire    ap_block_state4_pp0_stage0_iter2;
wire    ap_block_state5_pp0_stage0_iter3;
wire    ap_block_state6_pp0_stage0_iter4;
wire    ap_block_state7_pp0_stage0_iter5;
wire    ap_block_state8_pp0_stage0_iter6;
reg    ap_block_state9_pp0_stage0_iter7;
reg    ap_block_pp0_stage0_11001;
reg   [0:0] icmp_ln548_reg_122_pp0_iter1_reg;
reg   [0:0] icmp_ln548_reg_122_pp0_iter2_reg;
reg   [0:0] icmp_ln548_reg_122_pp0_iter3_reg;
reg   [0:0] icmp_ln548_reg_122_pp0_iter4_reg;
reg   [0:0] icmp_ln548_reg_122_pp0_iter5_reg;
wire   [9:0] i_fu_82_p2;
reg    ap_enable_reg_pp0_iter0;
reg  signed [31:0] tmp_V_reg_131;
reg  signed [31:0] tmp_V_reg_131_pp0_iter2_reg;
reg  signed [31:0] tmp_V_reg_131_pp0_iter3_reg;
reg  signed [31:0] tmp_V_reg_131_pp0_iter4_reg;
reg  signed [31:0] tmp_V_reg_131_pp0_iter5_reg;
reg  signed [31:0] tmp_V_reg_131_pp0_iter6_reg;
wire   [0:0] icmp_ln1494_fu_97_p2;
reg   [0:0] icmp_ln1494_reg_143;
reg   [29:0] trunc_ln_reg_148;
reg    ap_block_state1;
reg    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state2;
reg    ap_enable_reg_pp0_iter2;
reg    ap_enable_reg_pp0_iter3;
reg    ap_enable_reg_pp0_iter4;
reg    ap_enable_reg_pp0_iter5;
reg    ap_enable_reg_pp0_iter6;
reg    ap_block_pp0_stage0_01001;
wire   [13:0] grp_fu_91_p1;
wire   [45:0] grp_fu_91_p2;
wire  signed [31:0] sext_ln708_fu_112_p1;
reg    grp_fu_91_ce;
wire    ap_CS_fsm_state10;
reg   [2:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 3'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter7 = 1'b0;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
#0 ap_enable_reg_pp0_iter5 = 1'b0;
#0 ap_enable_reg_pp0_iter6 = 1'b0;
end

myproject_axi_mul_32s_14ns_46_5_1 #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 14 ),
    .dout_WIDTH( 46 ))
myproject_axi_mul_32s_14ns_46_5_1_U161(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp_V_reg_131),
    .din1(grp_fu_91_p1),
    .ce(grp_fu_91_ce),
    .dout(grp_fu_91_p2)
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
        end else if ((1'b1 == ap_CS_fsm_state10)) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state2) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp0_exit_iter0_state2)) begin
                ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state2);
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
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter5 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter5 <= ap_enable_reg_pp0_iter4;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter6 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter6 <= ap_enable_reg_pp0_iter5;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter7 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter7 <= ap_enable_reg_pp0_iter6;
        end else if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter7 <= 1'b0;
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
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln548_fu_76_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        i_0_reg_65 <= i_fu_82_p2;
    end else if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        i_0_reg_65 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln548_reg_122_pp0_iter5_reg == 1'd0))) begin
        icmp_ln1494_reg_143 <= icmp_ln1494_fu_97_p2;
        trunc_ln_reg_148 <= {{grp_fu_91_p2[45:16]}};
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        icmp_ln548_reg_122 <= icmp_ln548_fu_76_p2;
        icmp_ln548_reg_122_pp0_iter1_reg <= icmp_ln548_reg_122;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        icmp_ln548_reg_122_pp0_iter2_reg <= icmp_ln548_reg_122_pp0_iter1_reg;
        icmp_ln548_reg_122_pp0_iter3_reg <= icmp_ln548_reg_122_pp0_iter2_reg;
        icmp_ln548_reg_122_pp0_iter4_reg <= icmp_ln548_reg_122_pp0_iter3_reg;
        icmp_ln548_reg_122_pp0_iter5_reg <= icmp_ln548_reg_122_pp0_iter4_reg;
        icmp_ln548_reg_122_pp0_iter6_reg <= icmp_ln548_reg_122_pp0_iter5_reg;
        tmp_V_reg_131_pp0_iter2_reg <= tmp_V_reg_131;
        tmp_V_reg_131_pp0_iter3_reg <= tmp_V_reg_131_pp0_iter2_reg;
        tmp_V_reg_131_pp0_iter4_reg <= tmp_V_reg_131_pp0_iter3_reg;
        tmp_V_reg_131_pp0_iter5_reg <= tmp_V_reg_131_pp0_iter4_reg;
        tmp_V_reg_131_pp0_iter6_reg <= tmp_V_reg_131_pp0_iter5_reg;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln548_reg_122 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        tmp_V_reg_131 <= data_V_V_dout;
    end
end

always @ (*) begin
    if ((icmp_ln548_fu_76_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state2 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state2 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
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
    if (((ap_enable_reg_pp0_iter7 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter6 == 1'b0) & (ap_enable_reg_pp0_iter5 == 1'b0) & (ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln548_reg_122 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        data_V_V_blk_n = data_V_V_empty_n;
    end else begin
        data_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln548_reg_122 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        data_V_V_read = 1'b1;
    end else begin
        data_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        grp_fu_91_ce = 1'b1;
    end else begin
        grp_fu_91_ce = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
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
    if (((icmp_ln548_reg_122_pp0_iter6_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter7 == 1'b1))) begin
        res_V_V_blk_n = res_V_V_full_n;
    end else begin
        res_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln548_reg_122_pp0_iter6_reg == 1'd0) & (ap_enable_reg_pp0_iter7 == 1'b1))) begin
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
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((icmp_ln548_fu_76_p2 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone)) & ~((ap_enable_reg_pp0_iter7 == 1'b1) & (ap_enable_reg_pp0_iter6 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((((ap_enable_reg_pp0_iter7 == 1'b1) & (ap_enable_reg_pp0_iter6 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone)) | ((icmp_ln548_fu_76_p2 == 1'd1) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone)))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd2];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_01001 = (((icmp_ln548_reg_122_pp0_iter6_reg == 1'd0) & (res_V_V_full_n == 1'b0) & (ap_enable_reg_pp0_iter7 == 1'b1)) | ((icmp_ln548_reg_122 == 1'd0) & (data_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1)));
end

always @ (*) begin
    ap_block_pp0_stage0_11001 = (((icmp_ln548_reg_122_pp0_iter6_reg == 1'd0) & (res_V_V_full_n == 1'b0) & (ap_enable_reg_pp0_iter7 == 1'b1)) | ((icmp_ln548_reg_122 == 1'd0) & (data_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1)));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = (((icmp_ln548_reg_122_pp0_iter6_reg == 1'd0) & (res_V_V_full_n == 1'b0) & (ap_enable_reg_pp0_iter7 == 1'b1)) | ((icmp_ln548_reg_122 == 1'd0) & (data_V_V_empty_n == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b1)));
end

always @ (*) begin
    ap_block_state1 = ((real_start == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_block_state2_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state3_pp0_stage0_iter1 = ((icmp_ln548_reg_122 == 1'd0) & (data_V_V_empty_n == 1'b0));
end

assign ap_block_state4_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter5 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter6 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state9_pp0_stage0_iter7 = ((icmp_ln548_reg_122_pp0_iter6_reg == 1'd0) & (res_V_V_full_n == 1'b0));
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_ready = internal_ap_ready;

assign grp_fu_91_p1 = 46'd6553;

assign i_fu_82_p2 = (i_0_reg_65 + 10'd1);

assign icmp_ln1494_fu_97_p2 = (($signed(tmp_V_reg_131_pp0_iter5_reg) > $signed(32'd0)) ? 1'b1 : 1'b0);

assign icmp_ln548_fu_76_p2 = ((i_0_reg_65 == 10'd512) ? 1'b1 : 1'b0);

assign res_V_V_din = ((icmp_ln1494_reg_143[0:0] === 1'b1) ? tmp_V_reg_131_pp0_iter6_reg : sext_ln708_fu_112_p1);

assign sext_ln708_fu_112_p1 = $signed(trunc_ln_reg_148);

assign start_out = real_start;

endmodule //leaky_relu_me_ap_fixed_ap_fixed_LeakyReLU_config47_515
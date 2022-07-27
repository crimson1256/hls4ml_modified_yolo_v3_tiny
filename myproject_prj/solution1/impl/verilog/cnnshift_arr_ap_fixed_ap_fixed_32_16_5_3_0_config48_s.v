// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config48_s (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        data_V_read,
        output_V_read,
        ap_return
);

parameter    ap_ST_fsm_state1 = 1'd1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [255:0] data_V_read;
input  [2303:0] output_V_read;
output  [2303:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    layer_in_row_Array_V_9_0_0_ce0;
reg    layer_in_row_Array_V_9_0_0_we0;
wire   [31:0] layer_in_row_Array_V_9_0_0_q0;
reg    layer_in_row_Array_V_9_1_0_ce0;
reg    layer_in_row_Array_V_9_1_0_we0;
wire   [31:0] layer_in_row_Array_V_9_1_0_q0;
reg    layer_in_row_Array_V_9_0_1_ce0;
reg    layer_in_row_Array_V_9_0_1_we0;
wire   [31:0] layer_in_row_Array_V_9_0_1_d0;
wire   [31:0] layer_in_row_Array_V_9_0_1_q0;
reg    layer_in_row_Array_V_9_1_1_ce0;
reg    layer_in_row_Array_V_9_1_1_we0;
wire   [31:0] layer_in_row_Array_V_9_1_1_q0;
reg    layer_in_row_Array_V_9_0_2_ce0;
reg    layer_in_row_Array_V_9_0_2_we0;
wire   [31:0] layer_in_row_Array_V_9_0_2_d0;
wire   [31:0] layer_in_row_Array_V_9_0_2_q0;
reg    layer_in_row_Array_V_9_1_2_ce0;
reg    layer_in_row_Array_V_9_1_2_we0;
wire   [31:0] layer_in_row_Array_V_9_1_2_q0;
reg    layer_in_row_Array_V_9_0_3_ce0;
reg    layer_in_row_Array_V_9_0_3_we0;
wire   [31:0] layer_in_row_Array_V_9_0_3_d0;
wire   [31:0] layer_in_row_Array_V_9_0_3_q0;
reg    layer_in_row_Array_V_9_1_3_ce0;
reg    layer_in_row_Array_V_9_1_3_we0;
wire   [31:0] layer_in_row_Array_V_9_1_3_q0;
reg    layer_in_row_Array_V_9_0_4_ce0;
reg    layer_in_row_Array_V_9_0_4_we0;
wire   [31:0] layer_in_row_Array_V_9_0_4_d0;
wire   [31:0] layer_in_row_Array_V_9_0_4_q0;
reg    layer_in_row_Array_V_9_1_4_ce0;
reg    layer_in_row_Array_V_9_1_4_we0;
wire   [31:0] layer_in_row_Array_V_9_1_4_q0;
reg    layer_in_row_Array_V_9_0_5_ce0;
reg    layer_in_row_Array_V_9_0_5_we0;
wire   [31:0] layer_in_row_Array_V_9_0_5_d0;
wire   [31:0] layer_in_row_Array_V_9_0_5_q0;
reg    layer_in_row_Array_V_9_1_5_ce0;
reg    layer_in_row_Array_V_9_1_5_we0;
wire   [31:0] layer_in_row_Array_V_9_1_5_q0;
reg    layer_in_row_Array_V_9_0_6_ce0;
reg    layer_in_row_Array_V_9_0_6_we0;
wire   [31:0] layer_in_row_Array_V_9_0_6_d0;
wire   [31:0] layer_in_row_Array_V_9_0_6_q0;
reg    layer_in_row_Array_V_9_1_6_ce0;
reg    layer_in_row_Array_V_9_1_6_we0;
wire   [31:0] layer_in_row_Array_V_9_1_6_q0;
reg    layer_in_row_Array_V_9_0_7_ce0;
reg    layer_in_row_Array_V_9_0_7_we0;
wire   [31:0] layer_in_row_Array_V_9_0_7_d0;
wire   [31:0] layer_in_row_Array_V_9_0_7_q0;
reg    layer_in_row_Array_V_9_1_7_ce0;
reg    layer_in_row_Array_V_9_1_7_we0;
wire   [31:0] layer_in_row_Array_V_9_1_7_q0;
wire   [31:0] trunc_ln203_fu_144_p1;
wire   [511:0] tmp_fu_378_p4;
wire   [511:0] tmp_3_fu_388_p4;
wire   [511:0] tmp_4_fu_398_p4;
reg   [0:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 1'd1;
end

cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ #(
    .DataWidth( 32 ),
    .AddressRange( 10 ),
    .AddressWidth( 4 ))
layer_in_row_Array_V_9_0_0_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(4'd9),
    .ce0(layer_in_row_Array_V_9_0_0_ce0),
    .we0(layer_in_row_Array_V_9_0_0_we0),
    .d0(trunc_ln203_fu_144_p1),
    .q0(layer_in_row_Array_V_9_0_0_q0)
);

cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ #(
    .DataWidth( 32 ),
    .AddressRange( 10 ),
    .AddressWidth( 4 ))
layer_in_row_Array_V_9_1_0_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(4'd9),
    .ce0(layer_in_row_Array_V_9_1_0_ce0),
    .we0(layer_in_row_Array_V_9_1_0_we0),
    .d0(layer_in_row_Array_V_9_0_0_q0),
    .q0(layer_in_row_Array_V_9_1_0_q0)
);

cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ #(
    .DataWidth( 32 ),
    .AddressRange( 10 ),
    .AddressWidth( 4 ))
layer_in_row_Array_V_9_0_1_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(4'd9),
    .ce0(layer_in_row_Array_V_9_0_1_ce0),
    .we0(layer_in_row_Array_V_9_0_1_we0),
    .d0(layer_in_row_Array_V_9_0_1_d0),
    .q0(layer_in_row_Array_V_9_0_1_q0)
);

cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ #(
    .DataWidth( 32 ),
    .AddressRange( 10 ),
    .AddressWidth( 4 ))
layer_in_row_Array_V_9_1_1_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(4'd9),
    .ce0(layer_in_row_Array_V_9_1_1_ce0),
    .we0(layer_in_row_Array_V_9_1_1_we0),
    .d0(layer_in_row_Array_V_9_0_1_q0),
    .q0(layer_in_row_Array_V_9_1_1_q0)
);

cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ #(
    .DataWidth( 32 ),
    .AddressRange( 10 ),
    .AddressWidth( 4 ))
layer_in_row_Array_V_9_0_2_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(4'd9),
    .ce0(layer_in_row_Array_V_9_0_2_ce0),
    .we0(layer_in_row_Array_V_9_0_2_we0),
    .d0(layer_in_row_Array_V_9_0_2_d0),
    .q0(layer_in_row_Array_V_9_0_2_q0)
);

cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ #(
    .DataWidth( 32 ),
    .AddressRange( 10 ),
    .AddressWidth( 4 ))
layer_in_row_Array_V_9_1_2_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(4'd9),
    .ce0(layer_in_row_Array_V_9_1_2_ce0),
    .we0(layer_in_row_Array_V_9_1_2_we0),
    .d0(layer_in_row_Array_V_9_0_2_q0),
    .q0(layer_in_row_Array_V_9_1_2_q0)
);

cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ #(
    .DataWidth( 32 ),
    .AddressRange( 10 ),
    .AddressWidth( 4 ))
layer_in_row_Array_V_9_0_3_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(4'd9),
    .ce0(layer_in_row_Array_V_9_0_3_ce0),
    .we0(layer_in_row_Array_V_9_0_3_we0),
    .d0(layer_in_row_Array_V_9_0_3_d0),
    .q0(layer_in_row_Array_V_9_0_3_q0)
);

cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ #(
    .DataWidth( 32 ),
    .AddressRange( 10 ),
    .AddressWidth( 4 ))
layer_in_row_Array_V_9_1_3_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(4'd9),
    .ce0(layer_in_row_Array_V_9_1_3_ce0),
    .we0(layer_in_row_Array_V_9_1_3_we0),
    .d0(layer_in_row_Array_V_9_0_3_q0),
    .q0(layer_in_row_Array_V_9_1_3_q0)
);

cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ #(
    .DataWidth( 32 ),
    .AddressRange( 10 ),
    .AddressWidth( 4 ))
layer_in_row_Array_V_9_0_4_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(4'd9),
    .ce0(layer_in_row_Array_V_9_0_4_ce0),
    .we0(layer_in_row_Array_V_9_0_4_we0),
    .d0(layer_in_row_Array_V_9_0_4_d0),
    .q0(layer_in_row_Array_V_9_0_4_q0)
);

cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ #(
    .DataWidth( 32 ),
    .AddressRange( 10 ),
    .AddressWidth( 4 ))
layer_in_row_Array_V_9_1_4_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(4'd9),
    .ce0(layer_in_row_Array_V_9_1_4_ce0),
    .we0(layer_in_row_Array_V_9_1_4_we0),
    .d0(layer_in_row_Array_V_9_0_4_q0),
    .q0(layer_in_row_Array_V_9_1_4_q0)
);

cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ #(
    .DataWidth( 32 ),
    .AddressRange( 10 ),
    .AddressWidth( 4 ))
layer_in_row_Array_V_9_0_5_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(4'd9),
    .ce0(layer_in_row_Array_V_9_0_5_ce0),
    .we0(layer_in_row_Array_V_9_0_5_we0),
    .d0(layer_in_row_Array_V_9_0_5_d0),
    .q0(layer_in_row_Array_V_9_0_5_q0)
);

cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ #(
    .DataWidth( 32 ),
    .AddressRange( 10 ),
    .AddressWidth( 4 ))
layer_in_row_Array_V_9_1_5_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(4'd9),
    .ce0(layer_in_row_Array_V_9_1_5_ce0),
    .we0(layer_in_row_Array_V_9_1_5_we0),
    .d0(layer_in_row_Array_V_9_0_5_q0),
    .q0(layer_in_row_Array_V_9_1_5_q0)
);

cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ #(
    .DataWidth( 32 ),
    .AddressRange( 10 ),
    .AddressWidth( 4 ))
layer_in_row_Array_V_9_0_6_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(4'd9),
    .ce0(layer_in_row_Array_V_9_0_6_ce0),
    .we0(layer_in_row_Array_V_9_0_6_we0),
    .d0(layer_in_row_Array_V_9_0_6_d0),
    .q0(layer_in_row_Array_V_9_0_6_q0)
);

cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ #(
    .DataWidth( 32 ),
    .AddressRange( 10 ),
    .AddressWidth( 4 ))
layer_in_row_Array_V_9_1_6_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(4'd9),
    .ce0(layer_in_row_Array_V_9_1_6_ce0),
    .we0(layer_in_row_Array_V_9_1_6_we0),
    .d0(layer_in_row_Array_V_9_0_6_q0),
    .q0(layer_in_row_Array_V_9_1_6_q0)
);

cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ #(
    .DataWidth( 32 ),
    .AddressRange( 10 ),
    .AddressWidth( 4 ))
layer_in_row_Array_V_9_0_7_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(4'd9),
    .ce0(layer_in_row_Array_V_9_0_7_ce0),
    .we0(layer_in_row_Array_V_9_0_7_we0),
    .d0(layer_in_row_Array_V_9_0_7_d0),
    .q0(layer_in_row_Array_V_9_0_7_q0)
);

cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ #(
    .DataWidth( 32 ),
    .AddressRange( 10 ),
    .AddressWidth( 4 ))
layer_in_row_Array_V_9_1_7_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(4'd9),
    .ce0(layer_in_row_Array_V_9_1_7_ce0),
    .we0(layer_in_row_Array_V_9_1_7_we0),
    .d0(layer_in_row_Array_V_9_0_7_q0),
    .q0(layer_in_row_Array_V_9_1_7_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_0_0_ce0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_0_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_0_0_we0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_0_0_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_0_1_ce0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_0_1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_0_1_we0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_0_1_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_0_2_ce0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_0_2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_0_2_we0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_0_2_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_0_3_ce0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_0_3_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_0_3_we0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_0_3_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_0_4_ce0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_0_4_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_0_4_we0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_0_4_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_0_5_ce0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_0_5_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_0_5_we0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_0_5_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_0_6_ce0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_0_6_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_0_6_we0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_0_6_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_0_7_ce0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_0_7_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_0_7_we0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_0_7_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_1_0_ce0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_1_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_1_0_we0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_1_0_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_1_1_ce0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_1_1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_1_1_we0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_1_1_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_1_2_ce0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_1_2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_1_2_we0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_1_2_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_1_3_ce0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_1_3_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_1_3_we0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_1_3_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_1_4_ce0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_1_4_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_1_4_we0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_1_4_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_1_5_ce0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_1_5_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_1_5_we0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_1_5_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_1_6_ce0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_1_6_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_1_6_we0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_1_6_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_1_7_ce0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_1_7_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        layer_in_row_Array_V_9_1_7_we0 = 1'd1;
    end else begin
        layer_in_row_Array_V_9_1_7_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_return = {{{{{{{{{{{{{{{{{{{{data_V_read}, {tmp_fu_378_p4}}, {layer_in_row_Array_V_9_0_7_q0}}, {layer_in_row_Array_V_9_0_6_q0}}, {layer_in_row_Array_V_9_0_5_q0}}, {layer_in_row_Array_V_9_0_4_q0}}, {layer_in_row_Array_V_9_0_3_q0}}, {layer_in_row_Array_V_9_0_2_q0}}, {layer_in_row_Array_V_9_0_1_q0}}, {layer_in_row_Array_V_9_0_0_q0}}, {tmp_3_fu_388_p4}}, {layer_in_row_Array_V_9_1_7_q0}}, {layer_in_row_Array_V_9_1_6_q0}}, {layer_in_row_Array_V_9_1_5_q0}}, {layer_in_row_Array_V_9_1_4_q0}}, {layer_in_row_Array_V_9_1_3_q0}}, {layer_in_row_Array_V_9_1_2_q0}}, {layer_in_row_Array_V_9_1_1_q0}}, {layer_in_row_Array_V_9_1_0_q0}}, {tmp_4_fu_398_p4}};

assign layer_in_row_Array_V_9_0_1_d0 = {{data_V_read[63:32]}};

assign layer_in_row_Array_V_9_0_2_d0 = {{data_V_read[95:64]}};

assign layer_in_row_Array_V_9_0_3_d0 = {{data_V_read[127:96]}};

assign layer_in_row_Array_V_9_0_4_d0 = {{data_V_read[159:128]}};

assign layer_in_row_Array_V_9_0_5_d0 = {{data_V_read[191:160]}};

assign layer_in_row_Array_V_9_0_6_d0 = {{data_V_read[223:192]}};

assign layer_in_row_Array_V_9_0_7_d0 = {{data_V_read[255:224]}};

assign tmp_3_fu_388_p4 = {{output_V_read[1535:1024]}};

assign tmp_4_fu_398_p4 = {{output_V_read[767:256]}};

assign tmp_fu_378_p4 = {{output_V_read[2303:1792]}};

assign trunc_ln203_fu_144_p1 = data_V_read[31:0];

endmodule //cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config48_s

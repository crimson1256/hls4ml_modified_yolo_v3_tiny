# This script segment is generated automatically by AutoPilot

set id 21
set name myproject_axi_lshr_864ns_10ns_864_6_1
set corename simcore_lshr
set op lshr
set stage_num 6
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 864
set in0_signed 0
set in1_width 864
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 864
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_lshr] == "ap_gen_simcore_lshr"} {
eval "ap_gen_simcore_lshr { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_lshr, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op lshr
set corename ShiftnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipeshift] == "::AESL_LIB_VIRTEX::xil_gen_pipeshift"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipeshift { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipeshift, check your platform lib"
}
}


set id 22
set name myproject_axi_mux_83_32_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 32
set din0_signed 0
set din1_width 32
set din1_signed 0
set din2_width 32
set din2_signed 0
set din3_width 32
set din3_signed 0
set din4_width 32
set din4_signed 0
set din5_width 32
set din5_signed 0
set din6_width 32
set din6_signed 0
set din7_width 32
set din7_signed 0
set din8_width 3
set din8_signed 0
set dout_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 25
set hasByteEnable 0
set MemName conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config2_s_w2_V
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 15
set AddrRange 216
set AddrWd 8
set TrueReset 0
set IsROM 1
set ROMData { "010011001001110" "001000000001110" "011110010100101" "000110010000110" "110011010011000" "101110111111111" "010110101111100" "100011000111011" "101011001001111" "101011011110110" "001001100000110" "010111111001010" "111101110001000" "011110001001100" "111001110011001" "001100110111110" "011001001110101" "111011001010100" "000110000010011" "101000000011101" "110110110110111" "000111010011111" "101111110011101" "100101101001001" "001100011001011" "000111010101011" "110000000111011" "101010011111100" "011111001110000" "011001100100111" "011000101010110" "011001000100010" "000110111100000" "011100011011011" "100101111101110" "000101010101011" "011111000101111" "001000010011100" "111111111110011" "000111010011101" "101110101000111" "100011000101111" "100111100100001" "100111100000101" "111110010001010" "100010111011111" "000001111000101" "100011010100011" "011100111011100" "110011100010001" "010101101000100" "101001111110111" "100100100011000" "011111011001110" "101011000010001" "001111101000000" "100111111011001" "010111101111011" "001111100101000" "011110001110001" "100010111010001" "101001110011110" "100111111111111" "000011110100110" "001101110110111" "010000101001001" "111010010101010" "101011000001010" "111100011001011" "010101100110101" "001000000011001" "010000010000000" "101001101111010" "010000101000000" "111111011110001" "111100101001001" "110110101010111" "110000100100101" "111001010010110" "001100111110001" "101001010100001" "111110011111010" "001111011100010" "111010010111010" "000011100011100" "010101100011110" "010110000011000" "000110100100010" "010000001101110" "100001011010010" "000101110011101" "110111111000001" "100010000110111" "010101110100001" "110001000010011" "010011001111011" "110101110001101" "001011101100000" "010000011011010" "000111100100111" "100100110100011" "101010010110110" "000011011110101" "011000101111110" "111011010110110" "010100000011100" "010100111010001" "011010111101101" "010110000111111" "010000110100111" "101011101010110" "001001000010101" "111111100000110" "000001001110010" "111001001001101" "101101000010001" "101110101011000" "111100001000010" "111110011000011" "001100001101010" "010111000000001" "001000101011111" "100110011010101" "100110010111100" "111110100011001" "110000100110111" "110100000010111" "011110010110001" "010101111110001" "111011010100000" "001001101001101" "000010100101010" "000010010011011" "001000000011001" "111000001110100" "100010110011000" "011100000111010" "011010001000011" "010011010100011" "110111000110100" "010001000101010" "001000100000011" "100101111111100" "011110111011010" "110110001111100" "111011101000000" "101100110010011" "100100100001100" "110100101101110" "011000010100100" "001000010101101" "010101101101101" "111101100001010" "101011111101010" "011100000011101" "000111101100000" "110100101011001" "011100001101100" "001111010111001" "110011111110000" "101111001010100" "010110010011101" "101010100011110" "000010000000001" "110000000001011" "111001001001101" "100010011010111" "101111010110001" "010110100111111" "100100111110111" "111111111110111" "010001000001010" "010111010111101" "111001000100000" "100100011010101" "110011010111001" "010011101110000" "100011100011011" "110101111110011" "111111111101100" "111110101100000" "100000100100101" "011000110000100" "010011001111111" "011111001111101" "000111111010101" "000101001001011" "000100000011010" "110000000111111" "100110101111010" "110111111000111" "010110010011101" "001111000110110" "011010011111100" "011010010111111" "101100001000110" "101001101000111" "111110111011101" "101101000010101" "011000110001100" "000111010100001" "100000101110110" "001111111000111" "100101101011001" "010001011001101" "010011101011010" "000010000100001" "111001100001010" "100100110111100" "101101111110001" "000010010001011" "001101101111000" "010000011111000" "010101010011111" "111000000111011" "110101011000000" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 26 \
    name data_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_V_V \
    op interface \
    ports { data_V_V_dout { I 32 vector } data_V_V_empty_n { I 1 bit } data_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 27 \
    name res_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_V_V \
    op interface \
    ports { res_V_V_din { O 32 vector } res_V_V_full_n { I 1 bit } res_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}



set moduleName cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config2_s
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 1
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {cnnshift_arr<ap_fixed,ap_fixed<32,16,5,3,0>,config2>}
set C_modelType { int 864 }
set C_modelArgList {
	{ data_V_read int 96 regular  }
	{ output_V_read int 864 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_V_read", "interface" : "wire", "bitwidth" : 96, "direction" : "READONLY"} , 
 	{ "Name" : "output_V_read", "interface" : "wire", "bitwidth" : 864, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 864} ]}
# RTL Port declarations: 
set portNum 9
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ data_V_read sc_in sc_lv 96 signal 0 } 
	{ output_V_read sc_in sc_lv 864 signal 1 } 
	{ ap_return sc_out sc_lv 864 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "data_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":96, "type": "signal", "bundle":{"name": "data_V_read", "role": "default" }} , 
 	{ "name": "output_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":864, "type": "signal", "bundle":{"name": "output_V_read", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":864, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6"],
		"CDFG" : "cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "layer_in_row_Array_V_3_0_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_3_1_0", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_3_0_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_3_1_1", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_3_0_2", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "layer_in_row_Array_V_3_1_2", "Type" : "Memory", "Direction" : "X"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer_in_row_Array_V_3_0_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer_in_row_Array_V_3_1_0_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer_in_row_Array_V_3_0_1_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer_in_row_Array_V_3_1_1_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer_in_row_Array_V_3_0_2_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.layer_in_row_Array_V_3_1_2_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config2_s {
		data_V_read {Type I LastRead 0 FirstWrite -1}
		output_V_read {Type I LastRead 0 FirstWrite -1}
		layer_in_row_Array_V_3_0_0 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_3_1_0 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_3_0_1 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_3_1_1 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_3_0_2 {Type X LastRead -1 FirstWrite -1}
		layer_in_row_Array_V_3_1_2 {Type X LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "0"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_V_read { ap_none {  { data_V_read in_data 0 96 } } }
	output_V_read { ap_none {  { output_V_read in_data 0 864 } } }
}

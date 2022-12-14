// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config31_s_w3bWr_H__
#define __conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config31_s_w3bWr_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config31_s_w3bWr_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 15;
  static const unsigned AddressRange = 576;
  static const unsigned AddressWidth = 10;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config31_s_w3bWr_ram) {
        ram[0] = "0b000100111001000";
        ram[1] = "0b111001000000011";
        ram[2] = "0b000011000010001";
        ram[3] = "0b000011010011011";
        ram[4] = "0b010111111010011";
        ram[5] = "0b110010001100111";
        ram[6] = "0b010101011110001";
        ram[7] = "0b100111010110111";
        ram[8] = "0b110000010011010";
        ram[9] = "0b111001000111010";
        ram[10] = "0b111101010001000";
        ram[11] = "0b001100110101111";
        ram[12] = "0b010101000111100";
        ram[13] = "0b001100010000001";
        ram[14] = "0b110110010010001";
        ram[15] = "0b101111111100110";
        ram[16] = "0b101100001101101";
        ram[17] = "0b101011111101101";
        ram[18] = "0b111110101111010";
        ram[19] = "0b110010001100000";
        ram[20] = "0b101111110111101";
        ram[21] = "0b000011111111101";
        ram[22] = "0b101000100100101";
        ram[23] = "0b010010111010110";
        ram[24] = "0b010110011010000";
        ram[25] = "0b111000110011101";
        ram[26] = "0b111100000011111";
        ram[27] = "0b001010011111010";
        ram[28] = "0b111110010000011";
        ram[29] = "0b110010011010110";
        ram[30] = "0b010010110011101";
        ram[31] = "0b111101111010111";
        ram[32] = "0b010010110100011";
        ram[33] = "0b110001001010000";
        ram[34] = "0b001000000011010";
        ram[35] = "0b111011101010111";
        ram[36] = "0b001110110101010";
        ram[37] = "0b111001101111100";
        ram[38] = "0b100110010001101";
        ram[39] = "0b001010000010000";
        ram[40] = "0b001000001111010";
        ram[41] = "0b110111001100100";
        ram[42] = "0b001100101000111";
        ram[43] = "0b101101010100111";
        ram[44] = "0b101001111001001";
        ram[45] = "0b001101101100011";
        ram[46] = "0b101000011110101";
        ram[47] = "0b000110110101000";
        ram[48] = "0b010110111101001";
        ram[49] = "0b110100010010101";
        ram[50] = "0b010001000101010";
        ram[51] = "0b001111010111000";
        ram[52] = "0b011000010110011";
        ram[53] = "0b101000101100000";
        ram[54] = "0b010101100110111";
        ram[55] = "0b011001000000101";
        ram[56] = "0b010111011000110";
        ram[57] = "0b101101110001010";
        ram[58] = "0b001011111100101";
        ram[59] = "0b011010000111000";
        ram[60] = "0b001110000101010";
        ram[61] = "0b001100110110011";
        ram[62] = "0b000000100011110";
        ram[63] = "0b010100001000100";
        ram[64] = "0b011001010001111";
        ram[65] = "0b111101010011101";
        ram[66] = "0b101100010001100";
        ram[67] = "0b110010111001010";
        ram[68] = "0b101011000011001";
        ram[69] = "0b101111111010001";
        ram[70] = "0b111110100011010";
        ram[71] = "0b111110010110011";
        ram[72] = "0b111110011001011";
        ram[73] = "0b010000110100000";
        ram[74] = "0b000111100010111";
        ram[75] = "0b001010101010110";
        ram[76] = "0b111111001010101";
        ram[77] = "0b101110011010010";
        ram[78] = "0b101001100001101";
        ram[79] = "0b111110111011011";
        ram[80] = "0b010010111001111";
        ram[81] = "0b010111011011111";
        ram[82] = "0b010110000010101";
        ram[83] = "0b111011000010011";
        ram[84] = "0b111000011110010";
        ram[85] = "0b011000100010011";
        ram[86] = "0b110011110000001";
        ram[87] = "0b010111111011000";
        ram[88] = "0b000101011110000";
        ram[89] = "0b101101110100110";
        ram[90] = "0b101101110111101";
        ram[91] = "0b110000001000110";
        ram[92] = "0b001001111110100";
        ram[93] = "0b101010010010101";
        ram[94] = "0b000100111101101";
        ram[95] = "0b101101001011011";
        ram[96] = "0b010011011010111";
        ram[97] = "0b001010011110010";
        ram[98] = "0b111111110001001";
        ram[99] = "0b101001001001111";
        ram[100] = "0b110100111100101";
        ram[101] = "0b100110000000111";
        ram[102] = "0b000010011000110";
        ram[103] = "0b000010010001001";
        ram[104] = "0b000101000110011";
        ram[105] = "0b110010110100101";
        ram[106] = "0b110111011110110";
        ram[107] = "0b010000001011100";
        ram[108] = "0b111110110001111";
        ram[109] = "0b010010010111001";
        ram[110] = "0b110100101011101";
        ram[111] = "0b110111110001001";
        ram[112] = "0b111111010110111";
        ram[113] = "0b101011010010100";
        ram[114] = "0b001100001001101";
        ram[115] = "0b111010001000011";
        ram[116] = "0b111011101111100";
        ram[117] = "0b110100100010001";
        ram[118] = "0b001010000001110";
        ram[119] = "0b111101110010010";
        ram[120] = "0b101010101000001";
        ram[121] = "0b110110000100000";
        ram[122] = "0b101110111011010";
        ram[123] = "0b010001001011110";
        ram[124] = "0b111001001010001";
        ram[125] = "0b110010000100010";
        ram[126] = "0b001010011101101";
        ram[127] = "0b110111101111001";
        ram[128] = "0b101100101110111";
        ram[129] = "0b011000111001001";
        ram[130] = "0b001110010110111";
        ram[131] = "0b000001011100010";
        ram[132] = "0b101000110011101";
        ram[133] = "0b101010011110101";
        ram[134] = "0b001001001101010";
        ram[135] = "0b000000100100000";
        ram[136] = "0b010000011100010";
        ram[137] = "0b011000001101011";
        ram[138] = "0b010111100101111";
        ram[139] = "0b011001110101100";
        ram[140] = "0b010000100110100";
        ram[141] = "0b101001000100111";
        ram[142] = "0b010100000010010";
        ram[143] = "0b101011010000001";
        ram[144] = "0b101101011110011";
        ram[145] = "0b110010000000011";
        ram[146] = "0b110111000001000";
        ram[147] = "0b010000000001111";
        ram[148] = "0b001010000101001";
        ram[149] = "0b010101111101000";
        ram[150] = "0b010001000010101";
        ram[151] = "0b010001011011100";
        ram[152] = "0b011001001101101";
        ram[153] = "0b011001100010101";
        ram[154] = "0b101111111011111";
        ram[155] = "0b010100000110100";
        ram[156] = "0b010010010111010";
        ram[157] = "0b011001011101110";
        ram[158] = "0b011000010011110";
        ram[159] = "0b101011010101000";
        ram[160] = "0b010101101010110";
        ram[161] = "0b101011010001111";
        ram[162] = "0b001010010111110";
        ram[163] = "0b101010100100000";
        ram[164] = "0b000001110101111";
        ram[165] = "0b010100000000010";
        ram[166] = "0b101101000100111";
        ram[167] = "0b001010011110011";
        ram[168] = "0b101001111100110";
        ram[169] = "0b001000110010111";
        ram[170] = "0b100110101100110";
        ram[171] = "0b101111110010111";
        ram[172] = "0b101111111000111";
        ram[173] = "0b111100101100101";
        ram[174] = "0b010000010000101";
        ram[175] = "0b000010110010010";
        ram[176] = "0b110100001111100";
        ram[177] = "0b110011110010010";
        ram[178] = "0b001100001001100";
        ram[179] = "0b110001111110111";
        ram[180] = "0b111001001011000";
        ram[181] = "0b001000111000001";
        ram[182] = "0b000100110110111";
        ram[183] = "0b110000111101011";
        ram[184] = "0b011001111111010";
        ram[185] = "0b100101111001000";
        ram[186] = "0b110011101111000";
        ram[187] = "0b111100101110110";
        ram[188] = "0b001100100001001";
        ram[189] = "0b001110110001111";
        ram[190] = "0b110101100010000";
        ram[191] = "0b110010011000111";
        ram[192] = "0b000101101000101";
        ram[193] = "0b001111011100110";
        ram[194] = "0b001101010010101";
        ram[195] = "0b000100010000000";
        ram[196] = "0b110101000001100";
        ram[197] = "0b101010110000011";
        ram[198] = "0b011001010110100";
        ram[199] = "0b110010110101000";
        ram[200] = "0b001000101010101";
        ram[201] = "0b001111111000101";
        ram[202] = "0b001000111101010";
        ram[203] = "0b110010101001011";
        ram[204] = "0b111101111100011";
        ram[205] = "0b000100001000010";
        ram[206] = "0b011000101101001";
        ram[207] = "0b101001101111000";
        ram[208] = "0b111000011111101";
        ram[209] = "0b111000001100110";
        ram[210] = "0b101111000010100";
        ram[211] = "0b100111111100011";
        ram[212] = "0b110010011101101";
        ram[213] = "0b011000000011010";
        ram[214] = "0b110000000100110";
        ram[215] = "0b000000100000111";
        ram[216] = "0b101100011101110";
        ram[217] = "0b101000111100111";
        ram[218] = "0b111110011010001";
        ram[219] = "0b000011110001001";
        ram[220] = "0b010101000011111";
        ram[221] = "0b001101110100011";
        ram[222] = "0b101100101000011";
        ram[223] = "0b011000000011010";
        ram[224] = "0b010101001111000";
        ram[225] = "0b001111001100101";
        ram[226] = "0b000111100111010";
        ram[227] = "0b100111101010101";
        ram[228] = "0b000011101010111";
        ram[229] = "0b010100100010101";
        ram[230] = "0b110100100101101";
        ram[231] = "0b010001100111001";
        ram[232] = "0b011000111000011";
        ram[233] = "0b111000101110000";
        ram[234] = "0b010101100000110";
        ram[235] = "0b101010000000000";
        ram[236] = "0b111010000100000";
        ram[237] = "0b001010011100110";
        ram[238] = "0b001000110011110";
        ram[239] = "0b110000011010110";
        ram[240] = "0b001101011011011";
        ram[241] = "0b110101101001101";
        ram[242] = "0b010101101001110";
        ram[243] = "0b000100010000110";
        ram[244] = "0b010011100011111";
        ram[245] = "0b111110001010001";
        ram[246] = "0b110100010100011";
        ram[247] = "0b101011101110100";
        ram[248] = "0b101010001111110";
        ram[249] = "0b011001101001011";
        ram[250] = "0b110111011000111";
        ram[251] = "0b101010010001001";
        ram[252] = "0b010001010101000";
        ram[253] = "0b010110010111010";
        ram[254] = "0b110111101011000";
        ram[255] = "0b000010000111000";
        ram[256] = "0b111101100111000";
        ram[257] = "0b010001010111101";
        ram[258] = "0b010001111010100";
        ram[259] = "0b110111000011001";
        ram[260] = "0b100111011000010";
        ram[261] = "0b000110011110100";
        ram[262] = "0b010001110110100";
        ram[263] = "0b110010011110111";
        ram[264] = "0b101011011010110";
        ram[265] = "0b000111010011100";
        ram[266] = "0b000011100011101";
        ram[267] = "0b100110100010010";
        ram[268] = "0b111101101110101";
        ram[269] = "0b111011101011010";
        ram[270] = "0b001111100001111";
        ram[271] = "0b010100111100110";
        ram[272] = "0b000101100011000";
        ram[273] = "0b010011011101101";
        ram[274] = "0b001000101001111";
        ram[275] = "0b001000101011010";
        ram[276] = "0b011010000110010";
        ram[277] = "0b101101111011111";
        ram[278] = "0b010000101110011";
        ram[279] = "0b111101011101001";
        ram[280] = "0b011000111100100";
        ram[281] = "0b010000011011100";
        ram[282] = "0b010111100000001";
        ram[283] = "0b110111111110110";
        ram[284] = "0b010100000011111";
        ram[285] = "0b000001111111001";
        ram[286] = "0b101011100001100";
        ram[287] = "0b110110011110101";
        ram[288] = "0b111000100010111";
        ram[289] = "0b101111111111010";
        ram[290] = "0b001101110010111";
        ram[291] = "0b101011011000010";
        ram[292] = "0b001100000111010";
        ram[293] = "0b101001100001011";
        ram[294] = "0b111100101000110";
        ram[295] = "0b001110100011001";
        ram[296] = "0b001110011000110";
        ram[297] = "0b001001111010100";
        ram[298] = "0b010001100011000";
        ram[299] = "0b110111000101000";
        ram[300] = "0b111000100111011";
        ram[301] = "0b000011101011001";
        ram[302] = "0b100110100000001";
        ram[303] = "0b010110010101100";
        ram[304] = "0b010100101100101";
        ram[305] = "0b110011010110110";
        ram[306] = "0b000111000000011";
        ram[307] = "0b010000010000011";
        ram[308] = "0b000010011110010";
        ram[309] = "0b100111000100010";
        ram[310] = "0b110110010011100";
        ram[311] = "0b111011111000111";
        ram[312] = "0b100111101100111";
        ram[313] = "0b001100100101111";
        ram[314] = "0b010010010101011";
        ram[315] = "0b110001011111110";
        ram[316] = "0b110110010010101";
        ram[317] = "0b001110100000101";
        ram[318] = "0b001110101101011";
        ram[319] = "0b111110010000100";
        ram[320] = "0b101110100110001";
        ram[321] = "0b110111001101111";
        ram[322] = "0b010110101110111";
        ram[323] = "0b101010000100101";
        ram[324] = "0b101100010001011";
        ram[325] = "0b000000111001010";
        ram[326] = "0b100110000101010";
        ram[327] = "0b000110011010000";
        ram[328] = "0b110001010111000";
        ram[329] = "0b111111000100011";
        ram[330] = "0b010100110111000";
        ram[331] = "0b001010000101000";
        ram[332] = "0b101011110111011";
        ram[333] = "0b110101000010000";
        ram[334] = "0b000101100011101";
        ram[335] = "0b110110111110001";
        ram[336] = "0b110111100010010";
        ram[337] = "0b111111010000100";
        ram[338] = "0b011001100000100";
        ram[339] = "0b101011010001110";
        ram[340] = "0b001111010111101";
        ram[341] = "0b010111100111100";
        ram[342] = "0b001101001001010";
        ram[343] = "0b000101100011001";
        ram[344] = "0b111011000001000";
        ram[345] = "0b010101101011110";
        ram[346] = "0b101110000101101";
        ram[347] = "0b010110111100000";
        ram[348] = "0b110001101011101";
        ram[349] = "0b111000111110101";
        ram[350] = "0b000111001011111";
        ram[351] = "0b000000010000010";
        ram[352] = "0b110010101100111";
        ram[353] = "0b001000011010100";
        ram[354] = "0b111111110110101";
        ram[355] = "0b110001010011100";
        ram[356] = "0b001100011000100";
        ram[357] = "0b011001101101000";
        ram[358] = "0b101010110100001";
        ram[359] = "0b000010011000000";
        ram[360] = "0b110100010010010";
        ram[361] = "0b111101001000011";
        ram[362] = "0b010010000000010";
        ram[363] = "0b111111010111101";
        ram[364] = "0b000001000000100";
        ram[365] = "0b001111000111001";
        ram[366] = "0b010110110111111";
        ram[367] = "0b010001110010111";
        ram[368] = "0b100110100100111";
        ram[369] = "0b111101011101101";
        ram[370] = "0b101010111011001";
        ram[371] = "0b000000000000110";
        ram[372] = "0b101010010011101";
        ram[373] = "0b111001100101011";
        ram[374] = "0b000001100000010";
        ram[375] = "0b011000011110001";
        ram[376] = "0b000111001010110";
        ram[377] = "0b011001010111011";
        ram[378] = "0b000100111110111";
        ram[379] = "0b110100100101000";
        ram[380] = "0b001000110100111";
        ram[381] = "0b000010100000010";
        ram[382] = "0b001111110111100";
        ram[383] = "0b001111111010000";
        ram[384] = "0b101111010110101";
        ram[385] = "0b100110000100111";
        ram[386] = "0b111001100101111";
        ram[387] = "0b110110001011010";
        ram[388] = "0b000101000101000";
        ram[389] = "0b101000100111001";
        ram[390] = "0b101001000110011";
        ram[391] = "0b110001001100111";
        ram[392] = "0b010011111111100";
        ram[393] = "0b000111101110110";
        ram[394] = "0b000010010111110";
        ram[395] = "0b111110001001100";
        ram[396] = "0b010000101001000";
        ram[397] = "0b111001111110001";
        ram[398] = "0b000000001010111";
        ram[399] = "0b010001000110100";
        ram[400] = "0b111011011010010";
        ram[401] = "0b111101110110100";
        ram[402] = "0b101111111110111";
        ram[403] = "0b110000110100000";
        ram[404] = "0b100111110001100";
        ram[405] = "0b111101000000001";
        ram[406] = "0b110010000111011";
        ram[407] = "0b010000101000101";
        ram[408] = "0b010110000001010";
        ram[409] = "0b001010001000001";
        ram[410] = "0b110011110001000";
        ram[411] = "0b101100110111010";
        ram[412] = "0b000000111001010";
        ram[413] = "0b001011110111001";
        ram[414] = "0b110101010001010";
        ram[415] = "0b010111011011001";
        ram[416] = "0b111101110100001";
        ram[417] = "0b100110001101000";
        ram[418] = "0b110110000011100";
        ram[419] = "0b000011000101110";
        ram[420] = "0b101101000110111";
        ram[421] = "0b110110111001010";
        ram[422] = "0b000000000111111";
        ram[423] = "0b111011001101001";
        ram[424] = "0b111011011110110";
        ram[425] = "0b010110010010001";
        ram[426] = "0b111000111011000";
        ram[427] = "0b010101111100001";
        ram[428] = "0b001100001000010";
        ram[429] = "0b101000011100010";
        ram[430] = "0b110001001101001";
        ram[431] = "0b101000010100010";
        ram[432] = "0b111001111100111";
        ram[433] = "0b101011111000100";
        ram[434] = "0b001100000011011";
        ram[435] = "0b001000000010110";
        ram[436] = "0b000110000110001";
        ram[437] = "0b010110001100010";
        ram[438] = "0b101001010111010";
        ram[439] = "0b001010100001100";
        ram[440] = "0b110000001101111";
        ram[441] = "0b101001110101101";
        ram[442] = "0b110100110111000";
        ram[443] = "0b111111100100010";
        ram[444] = "0b001100110010001";
        ram[445] = "0b111000001011110";
        ram[446] = "0b010000111001011";
        ram[447] = "0b000000000111011";
        ram[448] = "0b000100001010010";
        ram[449] = "0b010000011001100";
        ram[450] = "0b101010000011001";
        ram[451] = "0b110101110101010";
        ram[452] = "0b111111110101100";
        ram[453] = "0b110100000001010";
        ram[454] = "0b000110100101011";
        ram[455] = "0b111111001011100";
        ram[456] = "0b101010110111110";
        ram[457] = "0b110100110001011";
        ram[458] = "0b010010100100001";
        ram[459] = "0b101111100010110";
        ram[460] = "0b110100011101100";
        ram[461] = "0b111010000011001";
        ram[462] = "0b011001100010110";
        ram[463] = "0b110100011100000";
        ram[464] = "0b000011001111011";
        ram[465] = "0b000111010100111";
        ram[466] = "0b111100100000111";
        ram[467] = "0b010000100011100";
        ram[468] = "0b101011110100101";
        ram[469] = "0b001101100010100";
        ram[470] = "0b001010001100111";
        ram[471] = "0b111000000110000";
        ram[472] = "0b100110010010111";
        ram[473] = "0b001000010110100";
        ram[474] = "0b010011011110010";
        ram[475] = "0b111000011111000";
        ram[476] = "0b001101010011010";
        ram[477] = "0b011001111000100";
        ram[478] = "0b111111110011100";
        ram[479] = "0b101010111011011";
        ram[480] = "0b001110111011110";
        ram[481] = "0b110111101100111";
        ram[482] = "0b010010111011010";
        ram[483] = "0b010011001010011";
        ram[484] = "0b010110011111001";
        ram[485] = "0b111100100010101";
        ram[486] = "0b110101101101101";
        ram[487] = "0b111001110011000";
        ram[488] = "0b000101100100000";
        ram[489] = "0b111001000101011";
        ram[490] = "0b001100110110101";
        ram[491] = "0b000101000101001";
        ram[492] = "0b101001110001101";
        ram[493] = "0b010101010110101";
        ram[494] = "0b111011101100101";
        ram[495] = "0b010110101111010";
        ram[496] = "0b010001000100011";
        ram[497] = "0b000100010011111";
        ram[498] = "0b000000000001001";
        ram[499] = "0b001001001000100";
        ram[500] = "0b001100011110101";
        ram[501] = "0b000100100000110";
        ram[502] = "0b110001011011110";
        ram[503] = "0b111010000101100";
        ram[504] = "0b000000010110011";
        ram[505] = "0b000011111101100";
        ram[506] = "0b111111110100110";
        ram[507] = "0b101100001101000";
        ram[508] = "0b010010101100110";
        ram[509] = "0b001010111111111";
        ram[510] = "0b100110110000101";
        ram[511] = "0b100110011100000";
        ram[512] = "0b110110100011111";
        ram[513] = "0b110100001001011";
        ram[514] = "0b110011101001010";
        ram[515] = "0b010101110011000";
        ram[516] = "0b010000100011111";
        ram[517] = "0b110110101111000";
        ram[518] = "0b111111000101001";
        ram[519] = "0b111010111001111";
        ram[520] = "0b101110001011110";
        ram[521] = "0b110111101101110";
        ram[522] = "0b101001100001001";
        ram[523] = "0b110001111010100";
        ram[524] = "0b000111010101110";
        ram[525] = "0b000000010001001";
        ram[526] = "0b111000110111110";
        ram[527] = "0b000101100101001";
        ram[528] = "0b011000010000111";
        ram[529] = "0b110101100011011";
        ram[530] = "0b000100100011101";
        ram[531] = "0b010011010111000";
        ram[532] = "0b110111110110010";
        ram[533] = "0b101001010111010";
        ram[534] = "0b010111010001101";
        ram[535] = "0b111110000110100";
        ram[536] = "0b100111000101011";
        ram[537] = "0b110010101011100";
        ram[538] = "0b100111011110010";
        ram[539] = "0b001010101010010";
        ram[540] = "0b001000010111010";
        ram[541] = "0b000010001111010";
        ram[542] = "0b011001111101100";
        ram[543] = "0b111101000011100";
        ram[544] = "0b010111111000111";
        ram[545] = "0b110011001110001";
        ram[546] = "0b100111111011101";
        ram[547] = "0b000110001010101";
        ram[548] = "0b010110000110001";
        ram[549] = "0b010011101010110";
        ram[550] = "0b010001101100010";
        ram[551] = "0b101101101101111";
        ram[552] = "0b010010000000111";
        ram[553] = "0b010010111101110";
        ram[554] = "0b100111100111100";
        ram[555] = "0b101110100110100";
        ram[556] = "0b101011001100100";
        ram[557] = "0b001100101011101";
        ram[558] = "0b101001011100101";
        ram[559] = "0b010110111111100";
        ram[560] = "0b001000010110110";
        ram[561] = "0b001110100010000";
        ram[562] = "0b001101100000000";
        ram[563] = "0b010011110000110";
        ram[564] = "0b111110100010111";
        ram[565] = "0b111111010101001";
        ram[566] = "0b111100001001100";
        ram[567] = "0b001010100100110";
        ram[568] = "0b110000110101100";
        ram[569] = "0b111110111011100";
        ram[570] = "0b000111010100110";
        ram[571] = "0b101110010001101";
        ram[572] = "0b100110110100010";
        ram[573] = "0b011001101101011";
        ram[574] = "0b010011111110111";
        ram[575] = "0b000110100101010";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config31_s_w3bWr) {


static const unsigned DataWidth = 15;
static const unsigned AddressRange = 576;
static const unsigned AddressWidth = 10;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config31_s_w3bWr_ram* meminst;


SC_CTOR(conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config31_s_w3bWr) {
meminst = new conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config31_s_w3bWr_ram("conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config31_s_w3bWr_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config31_s_w3bWr() {
    delete meminst;
}


};//endmodule
#endif

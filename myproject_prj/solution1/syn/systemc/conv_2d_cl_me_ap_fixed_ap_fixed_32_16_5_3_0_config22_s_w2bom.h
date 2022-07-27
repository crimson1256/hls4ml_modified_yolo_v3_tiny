// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_w2bom_H__
#define __conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_w2bom_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_w2bom_ram : public sc_core::sc_module {

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


   SC_CTOR(conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_w2bom_ram) {
        ram[0] = "0b001010111101101";
        ram[1] = "0b101010101010010";
        ram[2] = "0b101111101100110";
        ram[3] = "0b101000100010111";
        ram[4] = "0b110001000110100";
        ram[5] = "0b000111100101111";
        ram[6] = "0b000010101101111";
        ram[7] = "0b110110011101110";
        ram[8] = "0b001010111000101";
        ram[9] = "0b111001001110001";
        ram[10] = "0b000001010111101";
        ram[11] = "0b001011101010111";
        ram[12] = "0b001011011110111";
        ram[13] = "0b000101001001011";
        ram[14] = "0b001001010110001";
        ram[15] = "0b001000101100111";
        ram[16] = "0b001001011010011";
        ram[17] = "0b111000100010011";
        ram[18] = "0b001000110101111";
        ram[19] = "0b010001100100111";
        ram[20] = "0b110111011011110";
        ram[21] = "0b101010011100101";
        ram[22] = "0b101100011110000";
        ram[23] = "0b010111010101010";
        ram[24] = "0b011001111000100";
        ram[25] = "0b111011111101001";
        ram[26] = "0b001110100010011";
        ram[27] = "0b010111010001100";
        ram[28] = "0b101111111000010";
        ram[29] = "0b010101001100110";
        ram[30] = "0b011000001011111";
        ram[31] = "0b011000110111110";
        ram[32] = "0b101110110011011";
        ram[33] = "0b110100010000010";
        ram[34] = "0b111010010101101";
        ram[35] = "0b111011000010011";
        ram[36] = "0b001000001110001";
        ram[37] = "0b110111101101111";
        ram[38] = "0b111000111000001";
        ram[39] = "0b010000001010101";
        ram[40] = "0b101000001011110";
        ram[41] = "0b111111110010111";
        ram[42] = "0b110110010011010";
        ram[43] = "0b010111010100001";
        ram[44] = "0b000010100001010";
        ram[45] = "0b101001000000011";
        ram[46] = "0b111011110101100";
        ram[47] = "0b000111000011100";
        ram[48] = "0b001100100110001";
        ram[49] = "0b001101001000001";
        ram[50] = "0b001010111011001";
        ram[51] = "0b010010000010101";
        ram[52] = "0b001101010101111";
        ram[53] = "0b110101011111001";
        ram[54] = "0b001001011010111";
        ram[55] = "0b101111011000110";
        ram[56] = "0b000111000100010";
        ram[57] = "0b001001100010110";
        ram[58] = "0b010110010011111";
        ram[59] = "0b110010010000000";
        ram[60] = "0b010001100010100";
        ram[61] = "0b101010011111111";
        ram[62] = "0b110101001111110";
        ram[63] = "0b101000100111010";
        ram[64] = "0b010010010100111";
        ram[65] = "0b010101111100011";
        ram[66] = "0b010011001010111";
        ram[67] = "0b101010110001011";
        ram[68] = "0b000001011000101";
        ram[69] = "0b010110000100101";
        ram[70] = "0b101111000010101";
        ram[71] = "0b100111000101111";
        ram[72] = "0b010001011000101";
        ram[73] = "0b101110110110010";
        ram[74] = "0b110100001010000";
        ram[75] = "0b110000110001010";
        ram[76] = "0b110110010010001";
        ram[77] = "0b101010000101100";
        ram[78] = "0b000101001111110";
        ram[79] = "0b010010110100111";
        ram[80] = "0b110010101000110";
        ram[81] = "0b000111101101000";
        ram[82] = "0b110001101110000";
        ram[83] = "0b001101110011100";
        ram[84] = "0b111011010110011";
        ram[85] = "0b111110001100010";
        ram[86] = "0b010010001011010";
        ram[87] = "0b101101100011010";
        ram[88] = "0b010101001111111";
        ram[89] = "0b110011000001010";
        ram[90] = "0b010010001000100";
        ram[91] = "0b111100010101000";
        ram[92] = "0b110010001000111";
        ram[93] = "0b001111101111110";
        ram[94] = "0b111110001110010";
        ram[95] = "0b111101001101101";
        ram[96] = "0b111101101100100";
        ram[97] = "0b110111011101010";
        ram[98] = "0b111101011111000";
        ram[99] = "0b111100000110011";
        ram[100] = "0b001011000100000";
        ram[101] = "0b010100100010101";
        ram[102] = "0b010101010100011";
        ram[103] = "0b001111100001000";
        ram[104] = "0b001101001011000";
        ram[105] = "0b010011101011011";
        ram[106] = "0b111001110000111";
        ram[107] = "0b000010011011110";
        ram[108] = "0b000000101101000";
        ram[109] = "0b001011010011110";
        ram[110] = "0b101101111010010";
        ram[111] = "0b101010111101000";
        ram[112] = "0b001101000111111";
        ram[113] = "0b110111100000000";
        ram[114] = "0b101111011111001";
        ram[115] = "0b101010001111100";
        ram[116] = "0b001010111111000";
        ram[117] = "0b011001110100100";
        ram[118] = "0b111101000000111";
        ram[119] = "0b001110000010101";
        ram[120] = "0b110111101001110";
        ram[121] = "0b101110110111111";
        ram[122] = "0b101100100101001";
        ram[123] = "0b110101111111101";
        ram[124] = "0b001111101100100";
        ram[125] = "0b001111011100110";
        ram[126] = "0b100110100111011";
        ram[127] = "0b111101101001111";
        ram[128] = "0b111110001100100";
        ram[129] = "0b011010000110101";
        ram[130] = "0b000101000011110";
        ram[131] = "0b110101001010001";
        ram[132] = "0b011001111110000";
        ram[133] = "0b111011001010111";
        ram[134] = "0b001011001110100";
        ram[135] = "0b001011100011001";
        ram[136] = "0b010000111000000";
        ram[137] = "0b001111011100001";
        ram[138] = "0b110110011000101";
        ram[139] = "0b010100011111010";
        ram[140] = "0b001000100010010";
        ram[141] = "0b111100011011000";
        ram[142] = "0b110110100101000";
        ram[143] = "0b011001111010110";
        ram[144] = "0b010001011010100";
        ram[145] = "0b000011011000000";
        ram[146] = "0b111111000110001";
        ram[147] = "0b010101100010111";
        ram[148] = "0b001010001110010";
        ram[149] = "0b010100101011100";
        ram[150] = "0b010010110110100";
        ram[151] = "0b010110001101001";
        ram[152] = "0b101011000001011";
        ram[153] = "0b010011011010001";
        ram[154] = "0b110000011001000";
        ram[155] = "0b111110110111000";
        ram[156] = "0b001110000110110";
        ram[157] = "0b111110100110100";
        ram[158] = "0b111100000000100";
        ram[159] = "0b000100111110111";
        ram[160] = "0b001010010000001";
        ram[161] = "0b010011110001111";
        ram[162] = "0b101110010001010";
        ram[163] = "0b010000111011011";
        ram[164] = "0b001100010001100";
        ram[165] = "0b010001100001001";
        ram[166] = "0b110101000111110";
        ram[167] = "0b111110110001010";
        ram[168] = "0b000011000011001";
        ram[169] = "0b001110111000010";
        ram[170] = "0b111100010101101";
        ram[171] = "0b010111100000110";
        ram[172] = "0b011010000011100";
        ram[173] = "0b010001111010010";
        ram[174] = "0b000001100110100";
        ram[175] = "0b010101111001011";
        ram[176] = "0b011001010001010";
        ram[177] = "0b011001001010110";
        ram[178] = "0b000110110010111";
        ram[179] = "0b000001101110000";
        ram[180] = "0b011000111101011";
        ram[181] = "0b010101010100011";
        ram[182] = "0b101100101100101";
        ram[183] = "0b001100000100110";
        ram[184] = "0b111111000111011";
        ram[185] = "0b010000010000101";
        ram[186] = "0b001111101001100";
        ram[187] = "0b000100011010010";
        ram[188] = "0b000001100000101";
        ram[189] = "0b111010010101110";
        ram[190] = "0b010011011101011";
        ram[191] = "0b111111110110111";
        ram[192] = "0b111011111110101";
        ram[193] = "0b110010010110011";
        ram[194] = "0b001101001101101";
        ram[195] = "0b110011101000111";
        ram[196] = "0b000110011000100";
        ram[197] = "0b010001001010100";
        ram[198] = "0b111110111101100";
        ram[199] = "0b001100010001011";
        ram[200] = "0b101110111000001";
        ram[201] = "0b111001110010101";
        ram[202] = "0b110011111100000";
        ram[203] = "0b110000110110100";
        ram[204] = "0b010010010100110";
        ram[205] = "0b000010100110000";
        ram[206] = "0b100110110110010";
        ram[207] = "0b111010000110000";
        ram[208] = "0b110010001110110";
        ram[209] = "0b011000110011010";
        ram[210] = "0b110001111010101";
        ram[211] = "0b010000100100011";
        ram[212] = "0b110101100010100";
        ram[213] = "0b101011001001011";
        ram[214] = "0b101011011011011";
        ram[215] = "0b000001111101010";
        ram[216] = "0b001011100001001";
        ram[217] = "0b010011011001100";
        ram[218] = "0b110011010001101";
        ram[219] = "0b111001000000110";
        ram[220] = "0b101110010011111";
        ram[221] = "0b101100101100010";
        ram[222] = "0b111110010011011";
        ram[223] = "0b000000010000110";
        ram[224] = "0b101110000011010";
        ram[225] = "0b111011011110001";
        ram[226] = "0b000011001010101";
        ram[227] = "0b110010010100010";
        ram[228] = "0b111000011010011";
        ram[229] = "0b001011010101001";
        ram[230] = "0b001000100110000";
        ram[231] = "0b101110001001111";
        ram[232] = "0b101001000010010";
        ram[233] = "0b101100000000011";
        ram[234] = "0b000101010110111";
        ram[235] = "0b001010111111100";
        ram[236] = "0b111101001101101";
        ram[237] = "0b010001011010001";
        ram[238] = "0b010000111000110";
        ram[239] = "0b110010010111001";
        ram[240] = "0b111111011110010";
        ram[241] = "0b110000000001111";
        ram[242] = "0b010101100100110";
        ram[243] = "0b101001000000010";
        ram[244] = "0b000100001101000";
        ram[245] = "0b101110001001010";
        ram[246] = "0b111000101111011";
        ram[247] = "0b111000101010011";
        ram[248] = "0b001111011000011";
        ram[249] = "0b001000001110111";
        ram[250] = "0b000100011101101";
        ram[251] = "0b001110001101111";
        ram[252] = "0b000000010000101";
        ram[253] = "0b101111011000000";
        ram[254] = "0b001110110101111";
        ram[255] = "0b001010101111010";
        ram[256] = "0b101010100100101";
        ram[257] = "0b110000100111100";
        ram[258] = "0b101111111100101";
        ram[259] = "0b010110100100011";
        ram[260] = "0b011000001000000";
        ram[261] = "0b111101101110100";
        ram[262] = "0b010110011111000";
        ram[263] = "0b111000110010000";
        ram[264] = "0b000011011001011";
        ram[265] = "0b110111111001110";
        ram[266] = "0b000111110111111";
        ram[267] = "0b000001110001110";
        ram[268] = "0b111000011111000";
        ram[269] = "0b101101001111011";
        ram[270] = "0b001110011011001";
        ram[271] = "0b000111000010100";
        ram[272] = "0b010011000011111";
        ram[273] = "0b010001110011011";
        ram[274] = "0b101111100110110";
        ram[275] = "0b100110101011101";
        ram[276] = "0b010010101111011";
        ram[277] = "0b110010110100011";
        ram[278] = "0b101001011010011";
        ram[279] = "0b111100110001101";
        ram[280] = "0b010100101010011";
        ram[281] = "0b010000011111100";
        ram[282] = "0b000100000001110";
        ram[283] = "0b110111100010001";
        ram[284] = "0b010000001001000";
        ram[285] = "0b101000100010100";
        ram[286] = "0b000011110010001";
        ram[287] = "0b000100100110000";
        ram[288] = "0b110111111110000";
        ram[289] = "0b111000011101011";
        ram[290] = "0b001010011010010";
        ram[291] = "0b000101000001011";
        ram[292] = "0b001011000111011";
        ram[293] = "0b110101000010111";
        ram[294] = "0b101000000010011";
        ram[295] = "0b111101100011111";
        ram[296] = "0b001100101010110";
        ram[297] = "0b111000100100110";
        ram[298] = "0b010100100111100";
        ram[299] = "0b110000111100011";
        ram[300] = "0b101110001101000";
        ram[301] = "0b000111111001101";
        ram[302] = "0b111110101101101";
        ram[303] = "0b111110000100011";
        ram[304] = "0b000111001001000";
        ram[305] = "0b010011101111000";
        ram[306] = "0b111100000110100";
        ram[307] = "0b111000010100000";
        ram[308] = "0b010001010111101";
        ram[309] = "0b010111000010110";
        ram[310] = "0b101100000000100";
        ram[311] = "0b110101000100011";
        ram[312] = "0b010111100010110";
        ram[313] = "0b111111111100010";
        ram[314] = "0b101110101001001";
        ram[315] = "0b010111101001110";
        ram[316] = "0b111010011010000";
        ram[317] = "0b000011001010000";
        ram[318] = "0b001011000000010";
        ram[319] = "0b000011010110011";
        ram[320] = "0b101000110010110";
        ram[321] = "0b100110000100100";
        ram[322] = "0b110001111101001";
        ram[323] = "0b111111000111110";
        ram[324] = "0b001010000100100";
        ram[325] = "0b001010001100011";
        ram[326] = "0b000100000001111";
        ram[327] = "0b110100010000011";
        ram[328] = "0b000011100011010";
        ram[329] = "0b101111010101011";
        ram[330] = "0b000101100111010";
        ram[331] = "0b001111111100101";
        ram[332] = "0b010000101110000";
        ram[333] = "0b111100001100000";
        ram[334] = "0b101111100001010";
        ram[335] = "0b001000011011110";
        ram[336] = "0b111010101000001";
        ram[337] = "0b001101000000100";
        ram[338] = "0b000001010101111";
        ram[339] = "0b000111011010011";
        ram[340] = "0b110011111110001";
        ram[341] = "0b111100010000110";
        ram[342] = "0b110010001011001";
        ram[343] = "0b000110110110010";
        ram[344] = "0b110010111101101";
        ram[345] = "0b101010010101110";
        ram[346] = "0b101000010001101";
        ram[347] = "0b010001000111100";
        ram[348] = "0b001101101101000";
        ram[349] = "0b000100101101001";
        ram[350] = "0b000011110111011";
        ram[351] = "0b000000011000000";
        ram[352] = "0b001001010101000";
        ram[353] = "0b001001111011010";
        ram[354] = "0b010011101001001";
        ram[355] = "0b101001101011101";
        ram[356] = "0b010101001000101";
        ram[357] = "0b010111100110110";
        ram[358] = "0b101010101001110";
        ram[359] = "0b111110111001110";
        ram[360] = "0b010101110000011";
        ram[361] = "0b010000111011001";
        ram[362] = "0b110010110000011";
        ram[363] = "0b100111111000100";
        ram[364] = "0b000010111101101";
        ram[365] = "0b001001110111010";
        ram[366] = "0b000010111110001";
        ram[367] = "0b001101001100011";
        ram[368] = "0b010011100110000";
        ram[369] = "0b101101101010111";
        ram[370] = "0b001100010010100";
        ram[371] = "0b110010011101000";
        ram[372] = "0b010001010010101";
        ram[373] = "0b000101001010111";
        ram[374] = "0b111011111011100";
        ram[375] = "0b101011011011000";
        ram[376] = "0b010011011011010";
        ram[377] = "0b010101101100000";
        ram[378] = "0b101100111100000";
        ram[379] = "0b110110110001001";
        ram[380] = "0b101101011010100";
        ram[381] = "0b101100100110011";
        ram[382] = "0b101001101011000";
        ram[383] = "0b000110000001111";
        ram[384] = "0b101010000001001";
        ram[385] = "0b111100110001110";
        ram[386] = "0b110011110000000";
        ram[387] = "0b110000001011010";
        ram[388] = "0b111010101000000";
        ram[389] = "0b111011000100111";
        ram[390] = "0b001101001011010";
        ram[391] = "0b101111100001101";
        ram[392] = "0b101101101111010";
        ram[393] = "0b111001110111100";
        ram[394] = "0b111111000011100";
        ram[395] = "0b100110011010010";
        ram[396] = "0b000101101011000";
        ram[397] = "0b101001101010111";
        ram[398] = "0b000011110110111";
        ram[399] = "0b001100110100011";
        ram[400] = "0b010010011010001";
        ram[401] = "0b100110100101100";
        ram[402] = "0b000011000101001";
        ram[403] = "0b000000100100001";
        ram[404] = "0b101001011001101";
        ram[405] = "0b101000111011010";
        ram[406] = "0b110100100100101";
        ram[407] = "0b010010000101000";
        ram[408] = "0b001101100101101";
        ram[409] = "0b000100001101111";
        ram[410] = "0b001100010001010";
        ram[411] = "0b001011110101010";
        ram[412] = "0b111100011110011";
        ram[413] = "0b001110101100001";
        ram[414] = "0b110011011111000";
        ram[415] = "0b010111101100010";
        ram[416] = "0b101011100101000";
        ram[417] = "0b010001000100100";
        ram[418] = "0b010101111111100";
        ram[419] = "0b101001100010111";
        ram[420] = "0b000010101110110";
        ram[421] = "0b100110100000100";
        ram[422] = "0b011000000111101";
        ram[423] = "0b010010110110000";
        ram[424] = "0b110110000110101";
        ram[425] = "0b101100011010000";
        ram[426] = "0b001010100001100";
        ram[427] = "0b110010011010011";
        ram[428] = "0b101100111111111";
        ram[429] = "0b001000011001011";
        ram[430] = "0b000010101101100";
        ram[431] = "0b001101100110010";
        ram[432] = "0b100111111110101";
        ram[433] = "0b110111000101111";
        ram[434] = "0b101001001110110";
        ram[435] = "0b111010010011110";
        ram[436] = "0b001100111110101";
        ram[437] = "0b100110011001001";
        ram[438] = "0b110001010110000";
        ram[439] = "0b000110100001001";
        ram[440] = "0b001000100101100";
        ram[441] = "0b000110101101100";
        ram[442] = "0b000000100101011";
        ram[443] = "0b000001111011111";
        ram[444] = "0b101010110100010";
        ram[445] = "0b001101100010010";
        ram[446] = "0b111001010110010";
        ram[447] = "0b101010100000000";
        ram[448] = "0b101011101111001";
        ram[449] = "0b101110000001101";
        ram[450] = "0b101010000110001";
        ram[451] = "0b000100111111100";
        ram[452] = "0b001111110100101";
        ram[453] = "0b010110001001001";
        ram[454] = "0b111010101001110";
        ram[455] = "0b000011000010110";
        ram[456] = "0b010110010110111";
        ram[457] = "0b100111100100011";
        ram[458] = "0b110000100000011";
        ram[459] = "0b000011000111101";
        ram[460] = "0b001110100101110";
        ram[461] = "0b101101101100110";
        ram[462] = "0b110101011100111";
        ram[463] = "0b001001101001011";
        ram[464] = "0b001101101100000";
        ram[465] = "0b001000111111010";
        ram[466] = "0b000110101010100";
        ram[467] = "0b100111111111110";
        ram[468] = "0b101111011110100";
        ram[469] = "0b111000011000011";
        ram[470] = "0b111111010100010";
        ram[471] = "0b110011010011101";
        ram[472] = "0b001111100011010";
        ram[473] = "0b011001101110011";
        ram[474] = "0b101000100100010";
        ram[475] = "0b110101100101101";
        ram[476] = "0b000000100011101";
        ram[477] = "0b101001100001110";
        ram[478] = "0b101001101110010";
        ram[479] = "0b101100011111101";
        ram[480] = "0b111011000011001";
        ram[481] = "0b110011001101110";
        ram[482] = "0b010001111101101";
        ram[483] = "0b110000100101000";
        ram[484] = "0b101111100011101";
        ram[485] = "0b111101101010111";
        ram[486] = "0b101011111011010";
        ram[487] = "0b010000001010101";
        ram[488] = "0b110010001001100";
        ram[489] = "0b000110011100011";
        ram[490] = "0b111110101011111";
        ram[491] = "0b010100100010000";
        ram[492] = "0b011001001100111";
        ram[493] = "0b001111011011100";
        ram[494] = "0b100110001000001";
        ram[495] = "0b111101101100001";
        ram[496] = "0b101000110100011";
        ram[497] = "0b000010110110001";
        ram[498] = "0b101000001000110";
        ram[499] = "0b111110101111000";
        ram[500] = "0b101100110000101";
        ram[501] = "0b100111001011000";
        ram[502] = "0b110001011011110";
        ram[503] = "0b010000101000111";
        ram[504] = "0b100110111011001";
        ram[505] = "0b101100001010100";
        ram[506] = "0b001000001010111";
        ram[507] = "0b001001110001110";
        ram[508] = "0b010011100111110";
        ram[509] = "0b010110101001100";
        ram[510] = "0b110111010110001";
        ram[511] = "0b001110011111010";
        ram[512] = "0b001001001110011";
        ram[513] = "0b001010001101111";
        ram[514] = "0b110100010011111";
        ram[515] = "0b000001011001101";
        ram[516] = "0b001101000110000";
        ram[517] = "0b100111111100001";
        ram[518] = "0b110101101001110";
        ram[519] = "0b000111010110010";
        ram[520] = "0b010011001111110";
        ram[521] = "0b111010100000010";
        ram[522] = "0b111000111000000";
        ram[523] = "0b110100011011100";
        ram[524] = "0b000110111011111";
        ram[525] = "0b111011011100010";
        ram[526] = "0b111011011110111";
        ram[527] = "0b111010101000011";
        ram[528] = "0b100111000001000";
        ram[529] = "0b000100010010101";
        ram[530] = "0b101101100101100";
        ram[531] = "0b000110101001011";
        ram[532] = "0b001100101010011";
        ram[533] = "0b010010001010011";
        ram[534] = "0b111101000000001";
        ram[535] = "0b011001110100101";
        ram[536] = "0b000001111011011";
        ram[537] = "0b010111001100011";
        ram[538] = "0b110100001100011";
        ram[539] = "0b101001000100110";
        ram[540] = "0b111001000101110";
        ram[541] = "0b001001101110000";
        ram[542] = "0b101111100011011";
        ram[543] = "0b001111100001101";
        ram[544] = "0b001110011011101";
        ram[545] = "0b101011110010000";
        ram[546] = "0b111110001111000";
        ram[547] = "0b111001110101011";
        ram[548] = "0b010110001101001";
        ram[549] = "0b100111110110101";
        ram[550] = "0b001011100000011";
        ram[551] = "0b000001111111100";
        ram[552] = "0b110001011000110";
        ram[553] = "0b001010111100111";
        ram[554] = "0b000100101101100";
        ram[555] = "0b101111000110011";
        ram[556] = "0b111111000101111";
        ram[557] = "0b110001011100011";
        ram[558] = "0b011001010001110";
        ram[559] = "0b110000011111111";
        ram[560] = "0b010000100000100";
        ram[561] = "0b101010100111101";
        ram[562] = "0b110110000101010";
        ram[563] = "0b101111111011001";
        ram[564] = "0b001100100111011";
        ram[565] = "0b001011000000111";
        ram[566] = "0b100111000010001";
        ram[567] = "0b000111011000011";
        ram[568] = "0b110011100000100";
        ram[569] = "0b010011110100001";
        ram[570] = "0b101110110111110";
        ram[571] = "0b110011011001100";
        ram[572] = "0b101110110001010";
        ram[573] = "0b101111000000101";
        ram[574] = "0b000100011011111";
        ram[575] = "0b001100000101010";


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


SC_MODULE(conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_w2bom) {


static const unsigned DataWidth = 15;
static const unsigned AddressRange = 576;
static const unsigned AddressWidth = 10;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_w2bom_ram* meminst;


SC_CTOR(conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_w2bom) {
meminst = new conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_w2bom_ram("conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_w2bom_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_w2bom() {
    delete meminst;
}


};//endmodule
#endif

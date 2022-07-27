-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config12_s_w1QgW_rom is 
    generic(
             DWIDTH     : integer := 15; 
             AWIDTH     : integer := 10; 
             MEM_SIZE    : integer := 576
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config12_s_w1QgW_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "101001111001000", 1 => "011001100001101", 2 => "010010101010110", 
    3 => "110110011100110", 4 => "101101100101001", 5 => "111010000101010", 
    6 => "101000000010011", 7 => "110101111100010", 8 => "001100000110110", 
    9 => "000011101111110", 10 => "111000000111000", 11 => "111110111010111", 
    12 => "101011001010101", 13 => "000000010001111", 14 => "101010101110011", 
    15 => "001101101010100", 16 => "010100111000000", 17 => "101100011111000", 
    18 => "010000011100100", 19 => "110100001011111", 20 => "001100101101010", 
    21 => "101111001110011", 22 => "110010100111011", 23 => "001011001001100", 
    24 => "100110011111111", 25 => "111111100100010", 26 => "001011100001110", 
    27 => "111100100010101", 28 => "001111001000010", 29 => "110000010100000", 
    30 => "110100100010010", 31 => "011010000101100", 32 => "110111011111000", 
    33 => "000101111100010", 34 => "010101011000100", 35 => "010111111011000", 
    36 => "010010101111010", 37 => "101101010000011", 38 => "111100011010100", 
    39 => "001110010111111", 40 => "010011001111100", 41 => "001000110011111", 
    42 => "000000110111101", 43 => "111010101110110", 44 => "110101111100100", 
    45 => "010110001110111", 46 => "110111010101111", 47 => "111011010100000", 
    48 => "001010011001100", 49 => "010110101111001", 50 => "001111010111000", 
    51 => "101001100110110", 52 => "000110010110111", 53 => "110001111000000", 
    54 => "101011000000101", 55 => "111000110001110", 56 => "111000101110011", 
    57 => "001011011000100", 58 => "111001101110000", 59 => "000110110000001", 
    60 => "000001001100010", 61 => "011001101011011", 62 => "000010001000001", 
    63 => "111001000000100", 64 => "001100101000100", 65 => "110100011000101", 
    66 => "010100100100101", 67 => "001000001011001", 68 => "111111100111111", 
    69 => "111101011100101", 70 => "011010000110110", 71 => "010110100010110", 
    72 => "000101100110110", 73 => "111001001011111", 74 => "110001110011101", 
    75 => "111110000011001", 76 => "001010100010110", 77 => "000100010101110", 
    78 => "110001101111011", 79 => "101011111000100", 80 => "101100100010000", 
    81 => "001000001101110", 82 => "001011000101000", 83 => "110100111000101", 
    84 => "110001000010011", 85 => "010110111000001", 86 => "001100111010001", 
    87 => "111011000100111", 88 => "101101000000011", 89 => "000000001011100", 
    90 => "100111010000010", 91 => "101100110100101", 92 => "010000011101111", 
    93 => "110001010010111", 94 => "001101011000100", 95 => "100110010001010", 
    96 => "010101001101100", 97 => "010101110010000", 98 => "001011101011011", 
    99 => "001101110001011", 100 => "010110110011010", 101 => "000010011111101", 
    102 => "101100111011101", 103 => "000110010011011", 104 => "110001101001101", 
    105 => "101001001111110", 106 => "000100010110011", 107 => "001000111100011", 
    108 => "000111000011100", 109 => "111101100010001", 110 => "100101111011100", 
    111 => "010011010100101", 112 => "000000011011001", 113 => "101110111011001", 
    114 => "000100011111100", 115 => "000000010011110", 116 => "100111010001100", 
    117 => "101010100111001", 118 => "110100001001001", 119 => "000110010101110", 
    120 => "001111001100101", 121 => "010001011011100", 122 => "101001111011110", 
    123 => "000100100011100", 124 => "000001111111110", 125 => "000110001000111", 
    126 => "100110011000010", 127 => "101001111100111", 128 => "110111001011111", 
    129 => "011010000010000", 130 => "001100001000110", 131 => "001001001100111", 
    132 => "000101001100010", 133 => "000000000001011", 134 => "111000111101011", 
    135 => "001011001001011", 136 => "000111111101011", 137 => "001000000101011", 
    138 => "111100110110000", 139 => "011000010011000", 140 => "000000100000001", 
    141 => "110101111001111", 142 => "001011101011101", 143 => "010001001101011", 
    144 => "111110101100011", 145 => "001100111011110", 146 => "000110011000111", 
    147 => "001110101000000", 148 => "000100110011101", 149 => "001110010010101", 
    150 => "010101101111001", 151 => "111110101011100", 152 => "010100101110000", 
    153 => "111110111001011", 154 => "010010111011101", 155 => "001100110100101", 
    156 => "110101010100001", 157 => "001001111111101", 158 => "010011011000111", 
    159 => "111101110011001", 160 => "000111111101101", 161 => "101100100111111", 
    162 => "001110111010100", 163 => "110111111111110", 164 => "111110000000010", 
    165 => "101111000110001", 166 => "110011010111010", 167 => "010110110110000", 
    168 => "110100010011000", 169 => "001101101100010", 170 => "110011101000100", 
    171 => "110111101011101", 172 => "101000000010010", 173 => "101001101111101", 
    174 => "101000000010001", 175 => "000000101000110", 176 => "111000000010100", 
    177 => "011000100010010", 178 => "011000100101110", 179 => "010011010000001", 
    180 => "111001111010000", 181 => "100111110011100", 182 => "000111000010111", 
    183 => "101001110100011", 184 => "111100110010101", 185 => "001000001000010", 
    186 => "101110011010000", 187 => "110101010110011", 188 => "101000100100011", 
    189 => "110100011101110", 190 => "100111100000100", 191 => "010001001000011", 
    192 => "010011101001010", 193 => "000101111101111", 194 => "111000000000010", 
    195 => "010011100011011", 196 => "100110000100100", 197 => "001111010101111", 
    198 => "111100000000001", 199 => "010000000001100", 200 => "000101111000010", 
    201 => "000000101101100", 202 => "111011000101100", 203 => "110100100000001", 
    204 => "001110111000100", 205 => "110101000000000", 206 => "001100010000000", 
    207 => "010101110100100", 208 => "110111101011010", 209 => "010111101111101", 
    210 => "110001000001001", 211 => "101100101111011", 212 => "100110001100100", 
    213 => "001100111100111", 214 => "000011001000001", 215 => "000100111011011", 
    216 => "110010100010010", 217 => "001011010001110", 218 => "010110101000011", 
    219 => "000111110001110", 220 => "110000101001110", 221 => "111101000011110", 
    222 => "111111011110011", 223 => "001000110010110", 224 => "111101010001010", 
    225 => "000000101001010", 226 => "001100000110011", 227 => "000110111101010", 
    228 => "000010011001010", 229 => "001000011011110", 230 => "101110011111111", 
    231 => "110001101110110", 232 => "000100010011010", 233 => "101110100001101", 
    234 => "010000011110111", 235 => "000110101101110", 236 => "110101000101111", 
    237 => "110011011000000", 238 => "011001100001000", 239 => "001101111000100", 
    240 => "111110101110000", 241 => "100110100100011", 242 => "110000101001001", 
    243 => "101100001101010", 244 => "010101110101000", 245 => "000100101100000", 
    246 => "010111111010001", 247 => "010111111110100", 248 => "101011011010001", 
    249 => "101011000110100", 250 => "101100001001011", 251 => "000110110100110", 
    252 => "111111100011110", 253 => "010000001110111", 254 => "101100011100000", 
    255 => "110110101001111", 256 => "110110010001101", 257 => "100110010010100", 
    258 => "010100010111001", 259 => "010000001110001", 260 => "111101110001010", 
    261 => "101010000010110", 262 => "010111100001010", 263 => "000010111111011", 
    264 => "100110111100110", 265 => "110110110011110", 266 => "111000011110111", 
    267 => "101010000010010", 268 => "010001100001101", 269 => "001110010110011", 
    270 => "101100011011101", 271 => "111110011111100", 272 => "010001001001111", 
    273 => "011001011001101", 274 => "001000000011010", 275 => "101100100111111", 
    276 => "110000011100110", 277 => "001011101010000", 278 => "111110001111110", 
    279 => "001010001010001", 280 => "110111011000011", 281 => "000001011111101", 
    282 => "110000101110111", 283 => "010111001100111", 284 => "111100010000001", 
    285 => "001001010100010", 286 => "011001100110111", 287 => "000000011110010", 
    288 => "111011010100110", 289 => "110011111001110", 290 => "101111101010100", 
    291 => "001100110011100", 292 => "000011100001000", 293 => "011000100001100", 
    294 => "001010110101001", 295 => "010010111001110", 296 => "100110010111001", 
    297 => "001111000000010", 298 => "000110010011101", 299 => "011001101010100", 
    300 => "010110101111110", 301 => "101010010111100", 302 => "101001000010001", 
    303 => "001011100111111", 304 => "101011010000110", 305 => "011000101110111", 
    306 => "010011001111101", 307 => "001011111011000", 308 => "000010010011101", 
    309 => "010111101100101", 310 => "111000001000000", 311 => "010110011010000", 
    312 => "001110100110011", 313 => "111101111111011", 314 => "111011111100111", 
    315 => "101101100110110", 316 => "001000001111110", 317 => "000011001000111", 
    318 => "000000011110100", 319 => "110111010101010", 320 => "110011010101000", 
    321 => "000000001101100", 322 => "100110001011111", 323 => "001011101110100", 
    324 => "101100100001010", 325 => "001010111000001", 326 => "011000111010010", 
    327 => "110111100000111", 328 => "010001101111001", 329 => "000010000100101", 
    330 => "000101010101011", 331 => "110001100011111", 332 => "011000111000001", 
    333 => "011000101011110", 334 => "010001001110101", 335 => "110011001110100", 
    336 => "110111010010110", 337 => "111000001010011", 338 => "111111111010110", 
    339 => "001101100011010", 340 => "001000101101011", 341 => "001001010001010", 
    342 => "110111110000101", 343 => "100110101010100", 344 => "010011011100100", 
    345 => "000100101000001", 346 => "101011100101101", 347 => "111010110010101", 
    348 => "110110001101011", 349 => "110001110011001", 350 => "110100010011101", 
    351 => "000001000000011", 352 => "110110110100011", 353 => "101110111101001", 
    354 => "010101110110001", 355 => "010001110001011", 356 => "101100110001010", 
    357 => "110110110010101", 358 => "111001101110100", 359 => "010001100101111", 
    360 => "110001110110011", 361 => "000010111111010", 362 => "100101111000110", 
    363 => "111001111000101", 364 => "000101000111101", 365 => "111100110010011", 
    366 => "010110100100011", 367 => "001101011110010", 368 => "000010111101111", 
    369 => "111001101001000", 370 => "010111101011100", 371 => "000000011001111", 
    372 => "001110110100101", 373 => "010011001011111", 374 => "000100100110110", 
    375 => "111001110011001", 376 => "101010010101100", 377 => "001001011111110", 
    378 => "001000100110100", 379 => "010001111101110", 380 => "001111001011000", 
    381 => "110111101101000", 382 => "101110100001101", 383 => "001111000010110", 
    384 => "111100011101011", 385 => "100111110001000", 386 => "010011101000111", 
    387 => "000100010011011", 388 => "010010010010001", 389 => "000100010110100", 
    390 => "010110000010101", 391 => "110011001101110", 392 => "000101111000100", 
    393 => "111000001001010", 394 => "110010110100100", 395 => "000111010000001", 
    396 => "011001111010011", 397 => "111010111100101", 398 => "010111000100100", 
    399 => "101010000101110", 400 => "110110010111100", 401 => "101000001100100", 
    402 => "000010010101101", 403 => "101100100101001", 404 => "001101111011000", 
    405 => "010111110010110", 406 => "010100001101010", 407 => "101101100000000", 
    408 => "010001111101000", 409 => "111111110100000", 410 => "100101111101001", 
    411 => "101000111000001", 412 => "010111111001100", 413 => "111000010101011", 
    414 => "010110001100001", 415 => "000101011001110", 416 => "001101110001101", 
    417 => "101111010010100", 418 => "110101101110010", 419 => "010011010011100", 
    420 => "001010101001001", 421 => "101011000010101", 422 => "000100110001100", 
    423 => "001110010001111", 424 => "111100001101001", 425 => "010110010111010", 
    426 => "000000001111010", 427 => "100110111000101", 428 => "010100001011101", 
    429 => "111000110011111", 430 => "010001100101000", 431 => "010000001000100", 
    432 => "001100101000011", 433 => "101110000001001", 434 => "010000011111011", 
    435 => "101011010101001", 436 => "001001101001101", 437 => "110011100111010", 
    438 => "010111101111010", 439 => "000111001101011", 440 => "000000101100011", 
    441 => "110101101110100", 442 => "111000101001011", 443 => "111100010110101", 
    444 => "000100010011101", 445 => "001111000111110", 446 => "110011001010101", 
    447 => "010100100111110", 448 => "001100100111011", 449 => "101110000001101", 
    450 => "000110010101001", 451 => "101011101000110", 452 => "111101100100011", 
    453 => "000000011101100", 454 => "000100111101101", 455 => "101110111101101", 
    456 => "000000010010101", 457 => "100111100011110", 458 => "111100110011011", 
    459 => "001110010110111", 460 => "101011001011010", 461 => "111110100001001", 
    462 => "101110111110001", 463 => "000001101011010", 464 => "001000110101000", 
    465 => "110000011011011", 466 => "101100111010111", 467 => "010001010110110", 
    468 => "101010011011001", 469 => "101110000101011", 470 => "001000100000111", 
    471 => "101100101001110", 472 => "010111001001010", 473 => "001000011111110", 
    474 => "101010100001101", 475 => "010000100001000", 476 => "000111110010001", 
    477 => "101000001000101", 478 => "111000010000011", 479 => "101101010111101", 
    480 => "100110100100100", 481 => "000110101011011", 482 => "101001010110001", 
    483 => "010000000000111", 484 => "111111100100100", 485 => "000010011001111", 
    486 => "000000000001100", 487 => "110110001100100", 488 => "111010110011111", 
    489 => "101010001001010", 490 => "001101010110110", 491 => "010110001101000", 
    492 => "001111000011101", 493 => "110101010110001", 494 => "110101110011111", 
    495 => "110001111110101", 496 => "100101111010111", 497 => "110010001011000", 
    498 => "101111011101100", 499 => "001000110000000", 500 => "010111111110110", 
    501 => "000111000110111", 502 => "000100010111101", 503 => "101101100111111", 
    504 => "101100001101100", 505 => "010001001111010", 506 => "110101010011100", 
    507 => "010000000011100", 508 => "001000011100000", 509 => "000111011110111", 
    510 => "011001110110000", 511 => "101100001100000", 512 => "000100010011001", 
    513 => "001101010011101", 514 => "000110100011100", 515 => "111001001001001", 
    516 => "111110011100011", 517 => "010110100101110", 518 => "111100011111100", 
    519 => "000010010111011", 520 => "101110011011101", 521 => "111100110110110", 
    522 => "001100001101100", 523 => "011001110011110", 524 => "001100001000011", 
    525 => "111101100000100", 526 => "101001100010000", 527 => "001111111101111", 
    528 => "111110000000011", 529 => "101110100000100", 530 => "001011000011000", 
    531 => "000000010000110", 532 => "001100000001000", 533 => "001111011010001", 
    534 => "010011000010111", 535 => "001101101010011", 536 => "100111011111110", 
    537 => "111001101111101", 538 => "001010110010011", 539 => "010110010011101", 
    540 => "111110111111001", 541 => "111101001010011", 542 => "111011000010111", 
    543 => "001111101010001", 544 => "110001010110001", 545 => "010001110011010", 
    546 => "001000101001101", 547 => "100111110111000", 548 => "000100110001100", 
    549 => "010010000010010", 550 => "111000011100010", 551 => "101001111111001", 
    552 => "100110100101101", 553 => "111110000101110", 554 => "101111010010000", 
    555 => "100111100101110", 556 => "001101101110101", 557 => "001010110000000", 
    558 => "000100110101101", 559 => "101011000110111", 560 => "110000000011000", 
    561 => "010001011001011", 562 => "010001000011100", 563 => "111001000011101", 
    564 => "010111100001011", 565 => "000000100110101", 566 => "100110101000100", 
    567 => "010100011101111", 568 => "001111101010011", 569 => "011000001001011", 
    570 => "001001110110101", 571 => "111101111101000", 572 => "111100101000111", 
    573 => "110010001101010", 574 => "111000111100100", 575 => "110011111001111" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config12_s_w1QgW is
    generic (
        DataWidth : INTEGER := 15;
        AddressRange : INTEGER := 576;
        AddressWidth : INTEGER := 10);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config12_s_w1QgW is
    component conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config12_s_w1QgW_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config12_s_w1QgW_rom_U :  component conv_2d_cl_me_ap_fixed_ap_fixed_32_16_5_3_0_config12_s_w1QgW_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;



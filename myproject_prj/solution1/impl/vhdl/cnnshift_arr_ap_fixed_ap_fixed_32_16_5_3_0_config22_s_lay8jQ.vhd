-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_unsigned.all;

entity cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ_core is
    generic (
        DATA_WIDTH : integer := 32;
        ADDR_WIDTH : integer := 4;
        DEPTH : integer := 10);
    port (
        clk : in std_logic;
        ce : in std_logic;
        din : in std_logic_vector(DATA_WIDTH-1 downto 0);
        addr : in std_logic_vector(ADDR_WIDTH-1 downto 0);
        dout : out std_logic_vector(DATA_WIDTH-1 downto 0));

    attribute keep_hierarchy : string;
    attribute keep_hierarchy of cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ_core : entity is "yes";

end entity;

architecture rtl of cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ_core is
type SRL_ARRAY is array (0 to DEPTH-1) of std_logic_vector(DATA_WIDTH-1 downto 0);
signal ShiftRegMem : SRL_ARRAY := (others=>(others=>'0'));


begin
p_shift: process (clk)
    variable i: integer;
begin
    if (clk'event and clk = '1') then
        if (ce = '1') then
            for i in 0 to DEPTH - 2 loop
                ShiftRegMem(i+1) <= ShiftRegMem(i);
            end loop;
            ShiftRegMem(0) <= din;
        end if;
    end if;
end process;

dout <= ShiftRegMem(CONV_INTEGER(addr));

end rtl;


library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_unsigned.all;

entity cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ is
    generic (
        DataWidth : integer := 32;
        AddressWidth : integer := 4;
        AddressRange : integer := 10);
    port (
        clk : in std_logic;
        reset : in std_logic;
        address0 : in std_logic_vector(AddressWidth-1 downto 0);
        ce0 : in std_logic;
        we0 : in std_logic;
        d0 : in std_logic_vector(DataWidth-1 downto 0);
        q0 : out std_logic_vector(DataWidth-1 downto 0));
end;

architecture behav of cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ is

    component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ_core is
        generic (
            DATA_WIDTH : integer;
            ADDR_WIDTH : integer;
            DEPTH : integer);
        port (
            clk : in std_logic;
            ce : in std_logic;
            din : in std_logic_vector(DATA_WIDTH-1 downto 0);
            addr : in std_logic_vector(ADDR_WIDTH-1 downto 0);
            dout : out std_logic_vector(DATA_WIDTH-1 downto 0));
    end component;

begin
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ_core_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config22_s_lay8jQ_core
    generic map (
        DATA_WIDTH => DataWidth,
        ADDR_WIDTH => AddressWidth,
        DEPTH => AddressRange)
    port map (
        clk => clk,
        ce => we0,
        din => d0,
        addr => address0,
        dout => q0);

end behav;


-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config35_s is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    data_V_read : IN STD_LOGIC_VECTOR (255 downto 0);
    output_V_read : IN STD_LOGIC_VECTOR (2303 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (2303 downto 0) );
end;


architecture behav of cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config35_s is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv3_5 : STD_LOGIC_VECTOR (2 downto 0) := "101";
    constant ap_const_lv32_20 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100000";
    constant ap_const_lv32_3F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000111111";
    constant ap_const_lv32_40 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001000000";
    constant ap_const_lv32_5F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001011111";
    constant ap_const_lv32_60 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001100000";
    constant ap_const_lv32_7F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001111111";
    constant ap_const_lv32_80 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010000000";
    constant ap_const_lv32_9F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010011111";
    constant ap_const_lv32_A0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010100000";
    constant ap_const_lv32_BF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010111111";
    constant ap_const_lv32_C0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000011000000";
    constant ap_const_lv32_DF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000011011111";
    constant ap_const_lv32_E0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000011100000";
    constant ap_const_lv32_FF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000011111111";
    constant ap_const_lv32_700 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000011100000000";
    constant ap_const_lv32_8FF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000100011111111";
    constant ap_const_lv32_400 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000010000000000";
    constant ap_const_lv32_5FF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000010111111111";
    constant ap_const_lv32_100 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000100000000";
    constant ap_const_lv32_2FF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000001011111111";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (0 downto 0) := "1";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal layer_in_row_Array_V_5_0_0_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_0_0_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_0_0_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_1_0_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_1_0_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_1_0_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_0_1_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_0_1_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_0_1_d0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_0_1_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_1_1_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_1_1_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_1_1_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_0_2_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_0_2_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_0_2_d0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_0_2_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_1_2_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_1_2_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_1_2_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_0_3_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_0_3_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_0_3_d0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_0_3_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_1_3_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_1_3_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_1_3_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_0_4_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_0_4_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_0_4_d0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_0_4_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_1_4_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_1_4_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_1_4_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_0_5_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_0_5_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_0_5_d0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_0_5_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_1_5_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_1_5_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_1_5_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_0_6_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_0_6_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_0_6_d0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_0_6_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_1_6_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_1_6_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_1_6_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_0_7_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_0_7_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_0_7_d0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_0_7_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal layer_in_row_Array_V_5_1_7_ce0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_1_7_we0 : STD_LOGIC;
    signal layer_in_row_Array_V_5_1_7_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal trunc_ln203_fu_144_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_fu_378_p4 : STD_LOGIC_VECTOR (511 downto 0);
    signal tmp_9_fu_388_p4 : STD_LOGIC_VECTOR (511 downto 0);
    signal tmp_s_fu_398_p4 : STD_LOGIC_VECTOR (511 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (0 downto 0);

    component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config27_s_laybpm IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (2 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (31 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;



begin
    layer_in_row_Array_V_5_0_0_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config27_s_laybpm
    generic map (
        DataWidth => 32,
        AddressRange => 6,
        AddressWidth => 3)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv3_5,
        ce0 => layer_in_row_Array_V_5_0_0_ce0,
        we0 => layer_in_row_Array_V_5_0_0_we0,
        d0 => trunc_ln203_fu_144_p1,
        q0 => layer_in_row_Array_V_5_0_0_q0);

    layer_in_row_Array_V_5_1_0_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config27_s_laybpm
    generic map (
        DataWidth => 32,
        AddressRange => 6,
        AddressWidth => 3)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv3_5,
        ce0 => layer_in_row_Array_V_5_1_0_ce0,
        we0 => layer_in_row_Array_V_5_1_0_we0,
        d0 => layer_in_row_Array_V_5_0_0_q0,
        q0 => layer_in_row_Array_V_5_1_0_q0);

    layer_in_row_Array_V_5_0_1_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config27_s_laybpm
    generic map (
        DataWidth => 32,
        AddressRange => 6,
        AddressWidth => 3)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv3_5,
        ce0 => layer_in_row_Array_V_5_0_1_ce0,
        we0 => layer_in_row_Array_V_5_0_1_we0,
        d0 => layer_in_row_Array_V_5_0_1_d0,
        q0 => layer_in_row_Array_V_5_0_1_q0);

    layer_in_row_Array_V_5_1_1_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config27_s_laybpm
    generic map (
        DataWidth => 32,
        AddressRange => 6,
        AddressWidth => 3)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv3_5,
        ce0 => layer_in_row_Array_V_5_1_1_ce0,
        we0 => layer_in_row_Array_V_5_1_1_we0,
        d0 => layer_in_row_Array_V_5_0_1_q0,
        q0 => layer_in_row_Array_V_5_1_1_q0);

    layer_in_row_Array_V_5_0_2_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config27_s_laybpm
    generic map (
        DataWidth => 32,
        AddressRange => 6,
        AddressWidth => 3)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv3_5,
        ce0 => layer_in_row_Array_V_5_0_2_ce0,
        we0 => layer_in_row_Array_V_5_0_2_we0,
        d0 => layer_in_row_Array_V_5_0_2_d0,
        q0 => layer_in_row_Array_V_5_0_2_q0);

    layer_in_row_Array_V_5_1_2_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config27_s_laybpm
    generic map (
        DataWidth => 32,
        AddressRange => 6,
        AddressWidth => 3)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv3_5,
        ce0 => layer_in_row_Array_V_5_1_2_ce0,
        we0 => layer_in_row_Array_V_5_1_2_we0,
        d0 => layer_in_row_Array_V_5_0_2_q0,
        q0 => layer_in_row_Array_V_5_1_2_q0);

    layer_in_row_Array_V_5_0_3_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config27_s_laybpm
    generic map (
        DataWidth => 32,
        AddressRange => 6,
        AddressWidth => 3)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv3_5,
        ce0 => layer_in_row_Array_V_5_0_3_ce0,
        we0 => layer_in_row_Array_V_5_0_3_we0,
        d0 => layer_in_row_Array_V_5_0_3_d0,
        q0 => layer_in_row_Array_V_5_0_3_q0);

    layer_in_row_Array_V_5_1_3_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config27_s_laybpm
    generic map (
        DataWidth => 32,
        AddressRange => 6,
        AddressWidth => 3)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv3_5,
        ce0 => layer_in_row_Array_V_5_1_3_ce0,
        we0 => layer_in_row_Array_V_5_1_3_we0,
        d0 => layer_in_row_Array_V_5_0_3_q0,
        q0 => layer_in_row_Array_V_5_1_3_q0);

    layer_in_row_Array_V_5_0_4_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config27_s_laybpm
    generic map (
        DataWidth => 32,
        AddressRange => 6,
        AddressWidth => 3)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv3_5,
        ce0 => layer_in_row_Array_V_5_0_4_ce0,
        we0 => layer_in_row_Array_V_5_0_4_we0,
        d0 => layer_in_row_Array_V_5_0_4_d0,
        q0 => layer_in_row_Array_V_5_0_4_q0);

    layer_in_row_Array_V_5_1_4_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config27_s_laybpm
    generic map (
        DataWidth => 32,
        AddressRange => 6,
        AddressWidth => 3)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv3_5,
        ce0 => layer_in_row_Array_V_5_1_4_ce0,
        we0 => layer_in_row_Array_V_5_1_4_we0,
        d0 => layer_in_row_Array_V_5_0_4_q0,
        q0 => layer_in_row_Array_V_5_1_4_q0);

    layer_in_row_Array_V_5_0_5_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config27_s_laybpm
    generic map (
        DataWidth => 32,
        AddressRange => 6,
        AddressWidth => 3)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv3_5,
        ce0 => layer_in_row_Array_V_5_0_5_ce0,
        we0 => layer_in_row_Array_V_5_0_5_we0,
        d0 => layer_in_row_Array_V_5_0_5_d0,
        q0 => layer_in_row_Array_V_5_0_5_q0);

    layer_in_row_Array_V_5_1_5_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config27_s_laybpm
    generic map (
        DataWidth => 32,
        AddressRange => 6,
        AddressWidth => 3)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv3_5,
        ce0 => layer_in_row_Array_V_5_1_5_ce0,
        we0 => layer_in_row_Array_V_5_1_5_we0,
        d0 => layer_in_row_Array_V_5_0_5_q0,
        q0 => layer_in_row_Array_V_5_1_5_q0);

    layer_in_row_Array_V_5_0_6_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config27_s_laybpm
    generic map (
        DataWidth => 32,
        AddressRange => 6,
        AddressWidth => 3)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv3_5,
        ce0 => layer_in_row_Array_V_5_0_6_ce0,
        we0 => layer_in_row_Array_V_5_0_6_we0,
        d0 => layer_in_row_Array_V_5_0_6_d0,
        q0 => layer_in_row_Array_V_5_0_6_q0);

    layer_in_row_Array_V_5_1_6_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config27_s_laybpm
    generic map (
        DataWidth => 32,
        AddressRange => 6,
        AddressWidth => 3)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv3_5,
        ce0 => layer_in_row_Array_V_5_1_6_ce0,
        we0 => layer_in_row_Array_V_5_1_6_we0,
        d0 => layer_in_row_Array_V_5_0_6_q0,
        q0 => layer_in_row_Array_V_5_1_6_q0);

    layer_in_row_Array_V_5_0_7_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config27_s_laybpm
    generic map (
        DataWidth => 32,
        AddressRange => 6,
        AddressWidth => 3)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv3_5,
        ce0 => layer_in_row_Array_V_5_0_7_ce0,
        we0 => layer_in_row_Array_V_5_0_7_we0,
        d0 => layer_in_row_Array_V_5_0_7_d0,
        q0 => layer_in_row_Array_V_5_0_7_q0);

    layer_in_row_Array_V_5_1_7_U : component cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config27_s_laybpm
    generic map (
        DataWidth => 32,
        AddressRange => 6,
        AddressWidth => 3)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => ap_const_lv3_5,
        ce0 => layer_in_row_Array_V_5_1_7_ce0,
        we0 => layer_in_row_Array_V_5_1_7_we0,
        d0 => layer_in_row_Array_V_5_0_7_q0,
        q0 => layer_in_row_Array_V_5_1_7_q0);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "X";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if ((((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)) or ((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    ap_return <= (((((((((((((((((((data_V_read & tmp_fu_378_p4) & layer_in_row_Array_V_5_0_7_q0) & layer_in_row_Array_V_5_0_6_q0) & layer_in_row_Array_V_5_0_5_q0) & layer_in_row_Array_V_5_0_4_q0) & layer_in_row_Array_V_5_0_3_q0) & layer_in_row_Array_V_5_0_2_q0) & layer_in_row_Array_V_5_0_1_q0) & layer_in_row_Array_V_5_0_0_q0) & tmp_9_fu_388_p4) & layer_in_row_Array_V_5_1_7_q0) & layer_in_row_Array_V_5_1_6_q0) & layer_in_row_Array_V_5_1_5_q0) & layer_in_row_Array_V_5_1_4_q0) & layer_in_row_Array_V_5_1_3_q0) & layer_in_row_Array_V_5_1_2_q0) & layer_in_row_Array_V_5_1_1_q0) & layer_in_row_Array_V_5_1_0_q0) & tmp_s_fu_398_p4);

    layer_in_row_Array_V_5_0_0_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_0_0_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_0_0_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_0_0_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_0_0_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_0_0_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_0_1_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_0_1_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_0_1_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    layer_in_row_Array_V_5_0_1_d0 <= data_V_read(63 downto 32);

    layer_in_row_Array_V_5_0_1_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_0_1_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_0_1_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_0_2_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_0_2_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_0_2_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    layer_in_row_Array_V_5_0_2_d0 <= data_V_read(95 downto 64);

    layer_in_row_Array_V_5_0_2_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_0_2_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_0_2_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_0_3_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_0_3_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_0_3_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    layer_in_row_Array_V_5_0_3_d0 <= data_V_read(127 downto 96);

    layer_in_row_Array_V_5_0_3_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_0_3_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_0_3_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_0_4_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_0_4_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_0_4_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    layer_in_row_Array_V_5_0_4_d0 <= data_V_read(159 downto 128);

    layer_in_row_Array_V_5_0_4_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_0_4_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_0_4_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_0_5_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_0_5_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_0_5_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    layer_in_row_Array_V_5_0_5_d0 <= data_V_read(191 downto 160);

    layer_in_row_Array_V_5_0_5_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_0_5_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_0_5_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_0_6_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_0_6_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_0_6_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    layer_in_row_Array_V_5_0_6_d0 <= data_V_read(223 downto 192);

    layer_in_row_Array_V_5_0_6_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_0_6_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_0_6_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_0_7_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_0_7_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_0_7_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    layer_in_row_Array_V_5_0_7_d0 <= data_V_read(255 downto 224);

    layer_in_row_Array_V_5_0_7_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_0_7_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_0_7_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_1_0_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_1_0_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_1_0_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_1_0_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_1_0_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_1_0_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_1_1_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_1_1_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_1_1_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_1_1_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_1_1_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_1_1_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_1_2_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_1_2_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_1_2_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_1_2_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_1_2_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_1_2_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_1_3_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_1_3_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_1_3_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_1_3_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_1_3_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_1_3_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_1_4_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_1_4_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_1_4_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_1_4_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_1_4_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_1_4_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_1_5_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_1_5_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_1_5_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_1_5_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_1_5_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_1_5_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_1_6_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_1_6_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_1_6_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_1_6_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_1_6_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_1_6_we0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_1_7_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_1_7_ce0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_1_7_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    layer_in_row_Array_V_5_1_7_we0_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            layer_in_row_Array_V_5_1_7_we0 <= ap_const_logic_1;
        else 
            layer_in_row_Array_V_5_1_7_we0 <= ap_const_logic_0;
        end if; 
    end process;

    tmp_9_fu_388_p4 <= output_V_read(1535 downto 1024);
    tmp_fu_378_p4 <= output_V_read(2303 downto 1792);
    tmp_s_fu_398_p4 <= output_V_read(767 downto 256);
    trunc_ln203_fu_144_p1 <= data_V_read(32 - 1 downto 0);
end behav;

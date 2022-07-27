// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#ifndef _cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config2_s_layebkb_H_
#define _cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config2_s_layebkb_H_
#include <systemc>
#include <iostream>
#include <fstream>
#include "AESL_pkg.h"

template<unsigned int DATA_WIDTH = 32,
         unsigned int ADDR_WIDTH = 8,
         unsigned int DEPTH = 130>
struct cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config2_s_layebkb_core : public sc_core::sc_module
{
public:
    sc_core::sc_in< sc_dt::sc_lv< DATA_WIDTH > > din;
    sc_core::sc_out< sc_dt::sc_lv< DATA_WIDTH > > dout;
    sc_core::sc_in < sc_dt::sc_lv< ADDR_WIDTH > > addr;
    sc_core::sc_in <sc_dt::sc_logic>  ce;
    sc_core::sc_in_clk  clk;

    SC_HAS_PROCESS(cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config2_s_layebkb_core);
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config2_s_layebkb_core(sc_core::sc_module_name) {
        SC_METHOD(proc_dout);
        for (unsigned i = 0; i < DEPTH; i++)
            sensitive << ShiftRegMem[i];
        sensitive << addr;

        SC_METHOD(proc_mem);
        sensitive << clk.pos();

        for (unsigned j = 0; j < DEPTH; j++) {
            ShiftRegMem[j] = 0;
        }
    }

    void proc_mem()
    {
        if (ce.read() == SC_LOGIC_1) {
            for (unsigned j = DEPTH-1; j > 0; j--) {
                ShiftRegMem[j] = ShiftRegMem[j-1].read();
            }
            ShiftRegMem[0] = din.read();
        }
    }


    void proc_dout()
    {
        if (addr.read().is_01() && addr.read().to_uint() < DEPTH) {
            dout.write(ShiftRegMem[addr.read().to_uint()].read());
        }
    }


public:
    sc_signal< sc_dt::sc_lv< DATA_WIDTH > > ShiftRegMem[DEPTH];
};


SC_MODULE( cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config2_s_layebkb )
{
    static const unsigned int DataWidth = 32;
    static const unsigned int AddressRange = 130;
    static const unsigned int AddressWidth = 8;


    sc_core::sc_in<sc_dt::sc_lv<AddressWidth> > address0;
    sc_core::sc_in<sc_dt::sc_logic> ce0;
    sc_core::sc_out<sc_dt::sc_lv<DataWidth> > q0;
    sc_core::sc_in<sc_dt::sc_logic> we0;
    sc_core::sc_in<sc_dt::sc_lv<DataWidth> > d0;


    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in_clk clk;


    SC_CTOR( cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config2_s_layebkb ) {
        meminst = new cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config2_s_layebkb_core <DataWidth, AddressWidth, AddressRange>("core_inst");

        meminst->din(d0);
        meminst->dout(q0);
        meminst->addr(address0);
        meminst->ce(we0);
        meminst->clk(clk);
    }

    ~cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config2_s_layebkb() {
        delete meminst;
    }

public:
    cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config2_s_layebkb_core <DataWidth, AddressWidth, AddressRange>* meminst;

};

#endif //_cnnshift_arr_ap_fixed_ap_fixed_32_16_5_3_0_config2_s_layebkb_H_

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_wb_mem_wrapper__M1000_I0.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vrvfpgasim_wb_mem_wrapper__M1000_I0) {
    VL_CELL(ram, Vrvfpgasim_dpram64__S1000_MB0);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vrvfpgasim_wb_mem_wrapper__M1000_I0::__Vconfigure(Vrvfpgasim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vrvfpgasim_wb_mem_wrapper__M1000_I0::~Vrvfpgasim_wb_mem_wrapper__M1000_I0() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vrvfpgasim_wb_mem_wrapper__M1000_I0::_settle__TOP__rvfpgasim__swervolf__bootrom__1(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrvfpgasim_wb_mem_wrapper__M1000_I0::_settle__TOP__rvfpgasim__swervolf__bootrom__1\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we 
        = ((0xf0U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we)) 
           | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                  >> 6U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))
               ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)
               : 0U));
    vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we 
        = ((0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we)) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                   >> 6U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)
                : 0U) << 4U));
}

VL_INLINE_OPT void Vrvfpgasim_wb_mem_wrapper__M1000_I0::_sequent__TOP__rvfpgasim__swervolf__bootrom__2(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrvfpgasim_wb_mem_wrapper__M1000_I0::_sequent__TOP__rvfpgasim__swervolf__bootrom__2\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../src/SweRVolfSoC/Peripherals/BootROM/wb_mem_wrapper.v:54
    vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__o_wb_ack 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
             >> 6U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__o_wb_ack)));
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)))) {
        vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__o_wb_ack = 0U;
    }
}

void Vrvfpgasim_wb_mem_wrapper__M1000_I0::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrvfpgasim_wb_mem_wrapper__M1000_I0::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst = VL_RAND_RESET_I(1);
    __PVT__i_wb_adr = VL_RAND_RESET_I(10);
    __PVT__i_wb_dat = VL_RAND_RESET_I(32);
    __PVT__i_wb_sel = VL_RAND_RESET_I(4);
    __PVT__i_wb_we = VL_RAND_RESET_I(1);
    __PVT__i_wb_cyc = VL_RAND_RESET_I(1);
    __PVT__i_wb_stb = VL_RAND_RESET_I(1);
    __PVT__o_wb_ack = VL_RAND_RESET_I(1);
    __PVT__o_wb_rdt = VL_RAND_RESET_I(32);
    __PVT__mem_addr = VL_RAND_RESET_I(32);
    __PVT__mem_we = VL_RAND_RESET_I(8);
}

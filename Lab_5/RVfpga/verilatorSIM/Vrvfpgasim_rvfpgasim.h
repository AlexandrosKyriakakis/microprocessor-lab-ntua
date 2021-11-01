// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef _Vrvfpgasim_rvfpgasim_H_
#define _Vrvfpgasim_rvfpgasim_H_

#include "verilated_heavy.h"
#include "Vrvfpgasim__Dpi.h"

class Vrvfpgasim__Syms;
class Vrvfpgasim_axi_mem_wrapper__I6_M10000;
class Vrvfpgasim_swervolf_core__B0;
class VerilatedVcd;

//----------

VL_MODULE(Vrvfpgasim_rvfpgasim) {
  public:
    // CELLS
    Vrvfpgasim_axi_mem_wrapper__I6_M10000* ram;
    Vrvfpgasim_swervolf_core__B0* swervolf;
    
    // PORTS
    // Begin mtask footprint all: 
    VL_IN8(clk,0,0);
    VL_IN8(i_jtag_tck,0,0);
    VL_IN8(i_jtag_trst_n,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(i_jtag_tms,0,0);
    VL_IN8(i_jtag_tdi,0,0);
    VL_OUT8(o_jtag_tdo,0,0);
    VL_OUT8(o_uart_tx,0,0);
    VL_OUT8(o_gpio,0,0);
    
    // LOCAL SIGNALS
    // Begin mtask footprint all: 
    VL_SIG8(__PVT__dmi_reg_en,0,0);
    VL_SIG8(__PVT__dmi_hard_reset,0,0);
    VL_SIG8(__PVT__dmi_wrapper__DOT__dmireset,0,0);
    VL_SIG8(__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state,3,0);
    VL_SIG8(__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate,3,0);
    VL_SIG8(__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir,4,0);
    VL_SIG8(__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en,1,0);
    VL_SIG8(__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en,0,0);
    VL_SIG8(__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden,2,0);
    VL_SIG8(__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren,2,0);
    VL_SIGW(__PVT__ram_init_file,1023,0,32);
    VL_SIGW(__PVT__rom_init_file,1023,0,32);
    VL_SIG64(__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr,40,0);
    VL_SIG64(__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr,40,0);
    VL_SIG64(__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr,40,0);
    
    // LOCAL VARIABLES
    // Begin mtask footprint all: 
    VL_SIG8(__Vcellinp__swervolf__rstn,0,0);
    VL_SIG8(__Vtableidx1,4,0);
    VL_SIG64(__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr,40,0);
    static VL_ST_SIG8(__Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[32],3,0);
    
    // INTERNAL VARIABLES
  private:
    Vrvfpgasim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrvfpgasim_rvfpgasim);  ///< Copying not allowed
  public:
    Vrvfpgasim_rvfpgasim(const char* name="TOP");
    ~Vrvfpgasim_rvfpgasim();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vrvfpgasim__Syms* symsp, bool first);
    static void _combo__TOP__rvfpgasim__8(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _combo__TOP__rvfpgasim__9(Vrvfpgasim__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__rvfpgasim__1(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__rvfpgasim__3(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__rvfpgasim__4(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__rvfpgasim__5(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__rvfpgasim__6(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__rvfpgasim__7(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _settle__TOP__rvfpgasim__2(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef _Vrvfpgasim_axi_mem_wrapper__I6_M10000_H_
#define _Vrvfpgasim_axi_mem_wrapper__I6_M10000_H_

#include "verilated_heavy.h"
#include "Vrvfpgasim__Dpi.h"

class Vrvfpgasim__Syms;
class Vrvfpgasim_dpram64__S10000_MB0;
class VerilatedVcd;

//----------

VL_MODULE(Vrvfpgasim_axi_mem_wrapper__I6_M10000) {
  public:
    // CELLS
    Vrvfpgasim_dpram64__S10000_MB0* ram;
    
    // PORTS
    // Begin mtask footprint all: 
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__i_awid,5,0);
    VL_IN8(__PVT__i_awlen,7,0);
    VL_IN8(__PVT__i_awsize,2,0);
    VL_IN8(__PVT__i_awburst,1,0);
    VL_IN8(__PVT__i_awvalid,0,0);
    VL_OUT8(__PVT__o_awready,0,0);
    VL_IN8(__PVT__i_arid,5,0);
    VL_IN8(__PVT__i_arlen,7,0);
    VL_IN8(__PVT__i_arsize,2,0);
    VL_IN8(__PVT__i_arburst,1,0);
    VL_IN8(__PVT__i_arvalid,0,0);
    VL_OUT8(__PVT__o_arready,0,0);
    VL_IN8(__PVT__i_wstrb,7,0);
    VL_IN8(__PVT__i_wlast,0,0);
    VL_IN8(__PVT__i_wvalid,0,0);
    VL_OUT8(__PVT__o_wready,0,0);
    VL_OUT8(__PVT__o_bid,5,0);
    VL_OUT8(__PVT__o_bresp,1,0);
    VL_OUT8(__PVT__o_bvalid,0,0);
    VL_IN8(__PVT__i_bready,0,0);
    VL_OUT8(__PVT__o_rid,5,0);
    VL_OUT8(__PVT__o_rresp,1,0);
    VL_OUT8(__PVT__o_rlast,0,0);
    VL_OUT8(__PVT__o_rvalid,0,0);
    VL_IN8(__PVT__i_rready,0,0);
    VL_IN(__PVT__i_awaddr,31,0);
    VL_IN(__PVT__i_araddr,31,0);
    VL_IN64(__PVT__i_wdata,63,0);
    VL_OUT64(__PVT__o_rdata,63,0);
    
    // LOCAL SIGNALS
    // Begin mtask footprint all: 
    VL_SIG8(__PVT__wb_sel,3,0);
    VL_SIG8(__PVT__wb_we,0,0);
    VL_SIG8(__PVT__wb_cyc,0,0);
    VL_SIG8(__PVT__wb_stb,0,0);
    VL_SIG8(__PVT__wb_ack,0,0);
    VL_SIG8(__PVT__mem_we,7,0);
    VL_SIG8(__PVT__axi2wb__DOT__hi_32b_w,0,0);
    VL_SIG8(__PVT__axi2wb__DOT__arbiter,0,0);
    VL_SIG8(__PVT__axi2wb__DOT__cs,3,0);
    VL_SIG8(__PVT__axi2wb__DOT__aw_req,0,0);
    VL_SIG8(__PVT__axi2wb__DOT__w_req,0,0);
    VL_SIG8(__PVT__axi2wb__DOT__ar_req,0,0);
    VL_SIG16(__PVT__wb_adr,15,2);
    VL_SIG(__PVT__wb_dat,31,0);
    VL_SIG(__PVT__wb_rdt,31,0);
    VL_SIG(__PVT__mem_addr,31,0);
    VL_SIG(__PVT__axi2wb__DOT__wb_rdt_low,31,0);
    
    // LOCAL VARIABLES
    // Begin mtask footprint all: 
    VL_SIG8(__Vdly__wb_ack,0,0);
    VL_SIG8(__Vdly__axi2wb__DOT__arbiter,0,0);
    VL_SIG8(__Vdly__axi2wb__DOT__cs,3,0);
    VL_SIG(__Vdly__axi2wb__DOT__wb_rdt_low,31,0);
    
    // INTERNAL VARIABLES
  private:
    Vrvfpgasim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrvfpgasim_axi_mem_wrapper__I6_M10000);  ///< Copying not allowed
  public:
    Vrvfpgasim_axi_mem_wrapper__I6_M10000(const char* name="TOP");
    ~Vrvfpgasim_axi_mem_wrapper__I6_M10000();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vrvfpgasim__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__rvfpgasim__ram__1(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__rvfpgasim__ram__3(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__rvfpgasim__ram__4(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _settle__TOP__rvfpgasim__ram__2(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard

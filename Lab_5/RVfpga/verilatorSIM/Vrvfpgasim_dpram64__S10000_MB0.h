// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef _Vrvfpgasim_dpram64__S10000_MB0_H_
#define _Vrvfpgasim_dpram64__S10000_MB0_H_

#include "verilated_heavy.h"
#include "Vrvfpgasim__Dpi.h"

class Vrvfpgasim__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vrvfpgasim_dpram64__S10000_MB0) {
  public:
    
    // PORTS
    // Begin mtask footprint all: 
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__we,7,0);
    VL_IN16(__PVT__waddr,15,0);
    VL_IN16(__PVT__raddr,15,0);
    VL_IN64(__PVT__din,63,0);
    VL_OUT64(__PVT__dout,63,0);
    
    // LOCAL SIGNALS
    // Begin mtask footprint all: 
    VL_SIG(__PVT__i,31,0);
    VL_SIG64(mem[8192],63,0);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vrvfpgasim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrvfpgasim_dpram64__S10000_MB0);  ///< Copying not allowed
  public:
    Vrvfpgasim_dpram64__S10000_MB0(const char* name="TOP");
    ~Vrvfpgasim_dpram64__S10000_MB0();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vrvfpgasim__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__rvfpgasim__ram__ram__1(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard

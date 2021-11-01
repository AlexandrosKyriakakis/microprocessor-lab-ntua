// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _Vrvfpgasim__Syms_H_
#define _Vrvfpgasim__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vrvfpgasim.h"
#include "Vrvfpgasim_rvfpgasim.h"
#include "Vrvfpgasim___024unit.h"
#include "Vrvfpgasim_swervolf_core__B0.h"
#include "Vrvfpgasim_axi_mem_wrapper__I6_M10000.h"
#include "Vrvfpgasim_wb_mem_wrapper__M1000_I0.h"
#include "Vrvfpgasim_dpram64__S1000_MB0.h"
#include "Vrvfpgasim_dpram64__S10000_MB0.h"
#include "Vrvfpgasim_axi_demux__pi3.h"
#include "Vrvfpgasim_axi_mux__pi5.h"
#include "Vrvfpgasim_axi_err_slv__pi4.h"
#include "Vrvfpgasim_axi_demux_id_counters__pi6.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vrvfpgasim__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vrvfpgasim*                    TOPp;
    Vrvfpgasim_rvfpgasim           TOP__rvfpgasim;
    Vrvfpgasim_axi_mem_wrapper__I6_M10000 TOP__rvfpgasim__ram;
    Vrvfpgasim_dpram64__S10000_MB0 TOP__rvfpgasim__ram__ram;
    Vrvfpgasim_swervolf_core__B0   TOP__rvfpgasim__swervolf;
    Vrvfpgasim_axi_mux__pi5        TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux;
    Vrvfpgasim_axi_mux__pi5        TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux;
    Vrvfpgasim_axi_demux__pi3      TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux;
    Vrvfpgasim_axi_demux_id_counters__pi6 TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter;
    Vrvfpgasim_axi_demux_id_counters__pi6 TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter;
    Vrvfpgasim_axi_err_slv__pi4    TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv;
    Vrvfpgasim_axi_demux__pi3      TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux;
    Vrvfpgasim_axi_demux_id_counters__pi6 TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter;
    Vrvfpgasim_axi_demux_id_counters__pi6 TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter;
    Vrvfpgasim_axi_err_slv__pi4    TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv;
    Vrvfpgasim_axi_demux__pi3      TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux;
    Vrvfpgasim_axi_demux_id_counters__pi6 TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter;
    Vrvfpgasim_axi_demux_id_counters__pi6 TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter;
    Vrvfpgasim_axi_err_slv__pi4    TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv;
    Vrvfpgasim_wb_mem_wrapper__M1000_I0 TOP__rvfpgasim__swervolf__bootrom;
    Vrvfpgasim_dpram64__S1000_MB0  TOP__rvfpgasim__swervolf__bootrom__ram;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_rvfpgasim__ram__ram;
    VerilatedScope __Vscope_rvfpgasim__swervolf__bootrom__ram;
    
    // CREATORS
    Vrvfpgasim__Syms(Vrvfpgasim* topp, const char* namep);
    ~Vrvfpgasim__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard

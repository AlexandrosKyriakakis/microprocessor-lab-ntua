// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef _Vrvfpgasim_axi_err_slv__pi4_H_
#define _Vrvfpgasim_axi_err_slv__pi4_H_

#include "verilated_heavy.h"
#include "Vrvfpgasim__Dpi.h"

class Vrvfpgasim__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vrvfpgasim_axi_err_slv__pi4) {
  public:
    
    // PORTS
    // Begin mtask footprint all: 
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_ni,0,0);
    VL_IN8(__PVT__test_i,0,0);
    VL_INW(__PVT__slv_req_i,216,0,7);
    VL_OUTW(__PVT__slv_resp_o,83,0,3);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        // Begin mtask footprint all: 
        VL_SIG8(__PVT__w_fifo_empty,0,0);
        VL_SIG8(__PVT__w_fifo_push,0,0);
        VL_SIG8(__PVT__w_fifo_pop,0,0);
        VL_SIG8(__PVT__b_fifo_push,0,0);
        VL_SIG8(__PVT__b_fifo_pop,0,0);
        VL_SIG8(__PVT__r_fifo_push,0,0);
        VL_SIG8(__PVT__r_fifo_pop,0,0);
        VL_SIG8(__PVT__r_cnt_clear,0,0);
        VL_SIG8(__PVT__r_cnt_en,0,0);
        VL_SIG8(__PVT__r_cnt_load,0,0);
        VL_SIG8(__PVT__r_busy_d,0,0);
        VL_SIG8(__PVT__r_busy_q,0,0);
        VL_SIG8(__PVT__r_busy_load,0,0);
        VL_SIG8(__PVT__i_w_fifo__DOT__gate_clock,0,0);
        VL_SIG8(__PVT__i_w_fifo__DOT__read_pointer_n,1,0);
        VL_SIG8(__PVT__i_w_fifo__DOT__read_pointer_q,1,0);
        VL_SIG8(__PVT__i_w_fifo__DOT__write_pointer_n,1,0);
        VL_SIG8(__PVT__i_w_fifo__DOT__write_pointer_q,1,0);
        VL_SIG8(__PVT__i_w_fifo__DOT__status_cnt_n,2,0);
        VL_SIG8(__PVT__i_w_fifo__DOT__status_cnt_q,2,0);
        VL_SIG16(__PVT__i_w_fifo__DOT__mem_n,15,0);
        VL_SIG16(__PVT__i_w_fifo__DOT__mem_q,15,0);
        VL_SIG8(__PVT__i_b_fifo__DOT__gate_clock,0,0);
        VL_SIG8(__PVT__i_b_fifo__DOT__read_pointer_n,0,0);
        VL_SIG8(__PVT__i_b_fifo__DOT__read_pointer_q,0,0);
        VL_SIG8(__PVT__i_b_fifo__DOT__write_pointer_n,0,0);
        VL_SIG8(__PVT__i_b_fifo__DOT__write_pointer_q,0,0);
        VL_SIG8(__PVT__i_b_fifo__DOT__status_cnt_n,1,0);
        VL_SIG8(__PVT__i_b_fifo__DOT__status_cnt_q,1,0);
        VL_SIG8(__PVT__i_b_fifo__DOT__mem_n,7,0);
        VL_SIG8(__PVT__i_b_fifo__DOT__mem_q,7,0);
        VL_SIG8(__PVT__i_r_fifo__DOT__gate_clock,0,0);
        VL_SIG8(__PVT__i_r_fifo__DOT__read_pointer_n,1,0);
        VL_SIG8(__PVT__i_r_fifo__DOT__read_pointer_q,1,0);
        VL_SIG8(__PVT__i_r_fifo__DOT__write_pointer_n,1,0);
        VL_SIG8(__PVT__i_r_fifo__DOT__write_pointer_q,1,0);
        VL_SIG8(__PVT__i_r_fifo__DOT__status_cnt_n,2,0);
        VL_SIG8(__PVT__i_r_fifo__DOT__status_cnt_q,2,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d,3,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q,3,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d,2,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q,2,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d,1,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q,1,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__id_d,3,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__id_q,3,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d,7,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q,7,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream,0,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream,0,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid,0,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready,0,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock,0,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n,0,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q,0,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n,0,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q,0,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n,1,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q,1,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n,7,0);
        VL_SIG8(__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q,7,0);
        VL_SIG16(__PVT__r_fifo_inp,11,0);
        VL_SIG64(__PVT__i_r_fifo__DOT__mem_n,47,0);
        VL_SIG64(__PVT__i_r_fifo__DOT__mem_q,47,0);
    };
    struct {
        VL_SIG16(__PVT__i_r_counter__DOT__i_counter__DOT__counter_q,8,0);
        VL_SIG16(__PVT__i_r_counter__DOT__i_counter__DOT__counter_d,8,0);
        VL_SIGW(__PVT__err_resp,83,0,3);
    };
    
    // LOCAL VARIABLES
    // Begin mtask footprint all: 
    VL_SIG8(__Vcellout__i_w_fifo__data_o,3,0);
    VL_SIG8(genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i,0,0);
    VL_SIG8(genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i,0,0);
    VL_SIG16(__Vcellout__i_r_fifo__data_o,11,0);
    VL_SIG16(i_r_fifo__DOT____Vlvbound1,11,0);
    VL_SIGW(__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o,216,0,7);
    VL_SIGW(__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o,83,0,3);
    
    // INTERNAL VARIABLES
  private:
    Vrvfpgasim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrvfpgasim_axi_err_slv__pi4);  ///< Copying not allowed
  public:
    Vrvfpgasim_axi_err_slv__pi4(const char* name="TOP");
    ~Vrvfpgasim_axi_err_slv__pi4();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vrvfpgasim__Syms* symsp, bool first);
    void _combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__10(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__4(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__11(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__5(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__12(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__6(Vrvfpgasim__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__7(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__1(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__2(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__3(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard

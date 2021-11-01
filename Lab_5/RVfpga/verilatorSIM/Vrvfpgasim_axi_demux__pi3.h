// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef _Vrvfpgasim_axi_demux__pi3_H_
#define _Vrvfpgasim_axi_demux__pi3_H_

#include "verilated_heavy.h"
#include "Vrvfpgasim__Dpi.h"

class Vrvfpgasim__Syms;
class Vrvfpgasim_axi_demux_id_counters__pi6;
class VerilatedVcd;

//----------

VL_MODULE(Vrvfpgasim_axi_demux__pi3) {
  public:
    // CELLS
    Vrvfpgasim_axi_demux_id_counters__pi6* __PVT__gen_demux__DOT__i_aw_id_counter;
    Vrvfpgasim_axi_demux_id_counters__pi6* __PVT__gen_demux__DOT__i_ar_id_counter;
    
    // PORTS
    // Begin mtask footprint all: 
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_ni,0,0);
    VL_IN8(__PVT__test_i,0,0);
    VL_IN8(__PVT__slv_aw_select_i,1,0);
    VL_IN8(__PVT__slv_ar_select_i,1,0);
    VL_INW(__PVT__slv_req_i,216,0,7);
    VL_OUTW(__PVT__slv_resp_o,83,0,3);
    VL_OUTW(__PVT__mst_reqs_o,650,0,21);
    VL_INW(__PVT__mst_resps_i,251,0,8);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        // Begin mtask footprint all: 
        VL_SIG8(__PVT__gen_demux__DOT__slv_aw_valid,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__slv_aw_ready,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__aw_push,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__atop_inject,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__w_fifo_pop,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__lock_aw_valid_d,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__lock_aw_valid_q,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__load_aw_lock,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__aw_valid,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__aw_ready,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__slv_w_ready,0,0);
        VL_SIG(__PVT__gen_demux__DOT__mst_b_chans,20,0);
        VL_SIG8(__PVT__gen_demux__DOT__mst_b_valids,2,0);
        VL_SIG8(__PVT__gen_demux__DOT__mst_b_readies,2,0);
        VL_SIG8(__PVT__gen_demux__DOT__slv_ar_valid,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__slv_ar_ready,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__ar_push,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__lock_ar_valid_d,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__lock_ar_valid_q,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__load_ar_lock,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__ar_valid,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__ar_ready,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__mst_r_valids,2,0);
        VL_SIG8(__PVT__gen_demux__DOT__mst_r_readies,2,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en_data,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n,3,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q,3,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n,3,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q,3,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n,4,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q,4,0);
        VL_SIG(__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n,19,0);
        VL_SIG(__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q,19,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes,5,0);
        VL_SIG(__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes,20,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes,2,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes,2,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__rr_q,1,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d,2,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__rr_d,1,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q,2,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en_data,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes,5,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes,2,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes,2,0);
    };
    struct {
        VL_SIG8(__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__rr_q,1,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d,2,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__rr_d,1,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q,2,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel,0,0);
        VL_SIG8(__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel,0,0);
        VL_SIGW(__PVT__gen_demux__DOT__mst_r_chans,215,0,7);
        VL_SIGW(__PVT__gen_demux__DOT__slv_aw_chan_select_in,73,0,3);
        VL_SIGW(__PVT__gen_demux__DOT__slv_ar_chan_select_in,67,0,3);
        VL_SIGW(__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q,73,0,3);
        VL_SIGW(__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q,73,0,3);
        VL_SIGW(__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q,67,0,3);
        VL_SIGW(__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q,67,0,3);
        VL_SIGW(__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes,215,0,7);
    };
    
    // LOCAL VARIABLES
    // Begin mtask footprint all: 
    VL_SIG8(__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o,0,0);
    VL_SIG8(__Vcellout__gen_demux__DOT__i_w_fifo__data_o,1,0);
    VL_SIG8(__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o,0,0);
    VL_SIG8(__Vlvbound6,0,0);
    VL_SIG8(__Vlvbound7,0,0);
    VL_SIG8(__Vlvbound11,0,0);
    VL_SIG8(gen_demux__DOT__i_w_fifo__DOT____Vlvbound1,1,0);
    VL_SIGW(__Vlvbound1,71,0,3);
    VL_SIGW(__Vlvbound4,73,0,3);
    VL_SIGW(__Vlvbound8,65,0,3);
    VL_SIGW(__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o,73,0,3);
    VL_SIGW(__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o,67,0,3);
    
    // INTERNAL VARIABLES
  private:
    Vrvfpgasim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrvfpgasim_axi_demux__pi3);  ///< Copying not allowed
  public:
    Vrvfpgasim_axi_demux__pi3(const char* name="TOP");
    ~Vrvfpgasim_axi_demux__pi3();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vrvfpgasim__Syms* symsp, bool first);
    void _combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__25(Vrvfpgasim__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _multiclk__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__19(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _multiclk__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__22(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _multiclk__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__20(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _multiclk__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__23(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _multiclk__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__21(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _multiclk__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__24(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__10(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__13(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__16(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__11(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__12(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__4(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__7(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__5(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__8(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__6(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__9(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef _Vrvfpgasim_axi_mux__pi5_H_
#define _Vrvfpgasim_axi_mux__pi5_H_

#include "verilated_heavy.h"
#include "Vrvfpgasim__Dpi.h"

class Vrvfpgasim__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vrvfpgasim_axi_mux__pi5) {
  public:
    
    // PORTS
    // Begin mtask footprint all: 
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_ni,0,0);
    VL_IN8(__PVT__test_i,0,0);
    VL_INW(__PVT__slv_reqs_i,650,0,21);
    VL_OUTW(__PVT__slv_resps_o,251,0,8);
    VL_OUTW(__PVT__mst_req_o,220,0,7);
    VL_INW(__PVT__mst_resp_i,87,0,3);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        // Begin mtask footprint all: 
        VL_SIG8(__PVT__gen_mux__DOT__slv_aw_valids,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__slv_aw_readies,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__slv_w_valids,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__slv_w_readies,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__slv_b_valids,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__slv_b_readies,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__slv_ar_valids,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__slv_ar_readies,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__slv_r_valids,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__slv_r_readies,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__mst_aw_valid,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__mst_aw_ready,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__aw_ready,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__lock_aw_valid_d,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__lock_aw_valid_q,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__load_aw_lock,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__w_fifo_push,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__w_fifo_pop,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__mst_w_valid,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__ar_ready,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__genblk2__DOT__index_nodes,5,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__genblk2__DOT__gnt_nodes,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__genblk2__DOT__req_nodes,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__genblk2__DOT__rr_q,1,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__genblk2__DOT__req_d,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__genblk2__DOT__gen_int_rr__DOT__rr_d,1,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n,3,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q,3,0);
        VL_SIG16(__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n,11,0);
        VL_SIG16(__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q,11,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en_data,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__genblk2__DOT__index_nodes,5,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__genblk2__DOT__gnt_nodes,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__genblk2__DOT__req_nodes,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__genblk2__DOT__rr_q,1,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__genblk2__DOT__req_d,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__genblk2__DOT__gen_int_rr__DOT__rr_d,1,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q,2,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en_data,0,0);
    };
    struct {
        VL_SIG8(__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill,0,0);
        VL_SIG8(__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain,0,0);
        VL_SIGW(__PVT__gen_mux__DOT__slv_aw_chans,221,0,7);
        VL_SIGW(__PVT__gen_mux__DOT__slv_w_chans,221,0,7);
        VL_SIGW(__PVT__gen_mux__DOT__slv_ar_chans,203,0,7);
        VL_SIGW(__PVT__gen_mux__DOT__mst_w_chan,73,0,3);
        VL_SIGW(__PVT__gen_mux__DOT__i_aw_arbiter__DOT__genblk2__DOT__data_nodes,221,0,7);
        VL_SIGW(__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q,73,0,3);
        VL_SIGW(__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q,73,0,3);
        VL_SIGW(__PVT__gen_mux__DOT__i_ar_arbiter__DOT__genblk2__DOT__data_nodes,203,0,7);
        VL_SIGW(__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q,67,0,3);
        VL_SIGW(__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q,67,0,3);
    };
    
    // LOCAL VARIABLES
    // Begin mtask footprint all: 
    VL_SIG8(__Vcellout__gen_mux__DOT__i_w_fifo__data_o,1,0);
    VL_SIG8(__Vlvbound1,0,0);
    VL_SIG8(gen_mux__DOT__i_w_fifo__DOT____Vlvbound1,1,0);
    VL_SIGW(__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o,67,0,3);
    VL_SIGW(__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o,73,0,3);
    VL_SIGW(__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o,67,0,3);
    VL_SIGW(__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o,73,0,3);
    VL_SIGW(__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o,67,0,3);
    VL_SIGW(__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o,73,0,3);
    
    // INTERNAL VARIABLES
  private:
    Vrvfpgasim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrvfpgasim_axi_mux__pi5);  ///< Copying not allowed
  public:
    Vrvfpgasim_axi_mux__pi5(const char* name="TOP");
    ~Vrvfpgasim_axi_mux__pi5();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vrvfpgasim__Syms* symsp, bool first);
    void _combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__13(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__5(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__9(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__14(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__6(Vrvfpgasim__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__11(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__15(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__7(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__12(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__16(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__1(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__3(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__4(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard

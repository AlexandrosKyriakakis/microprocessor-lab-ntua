// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_axi_demux__pi3.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vrvfpgasim_axi_demux__pi3) {
    VL_CELL(__PVT__gen_demux__DOT__i_aw_id_counter, Vrvfpgasim_axi_demux_id_counters__pi6);
    VL_CELL(__PVT__gen_demux__DOT__i_ar_id_counter, Vrvfpgasim_axi_demux_id_counters__pi6);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vrvfpgasim_axi_demux__pi3::__Vconfigure(Vrvfpgasim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vrvfpgasim_axi_demux__pi3::~Vrvfpgasim_axi_demux__pi3() {
}

//--------------------
// Internal Methods

void Vrvfpgasim_axi_demux__pi3::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi3::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes 
        = (0xfU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes 
        = (0xfU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes));
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o 
        = (1U & ((~ (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o 
        = (1U & ((~ (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o 
        = (3U & ((0x13U >= (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q) 
                                     << 1U))) ? (this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q) 
                                                     << 1U)))
                  : 0U));
    this->__PVT__gen_demux__DOT__slv_ar_valid = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    this->__PVT__gen_demux__DOT__slv_aw_valid = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
        = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
            ? this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
            : this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]);
    this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
        = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
            ? this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
            : this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]);
    this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
        = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
            ? this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
            : this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]);
    this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
        = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
            ? this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
            : this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]);
    this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
        = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
            ? this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
            : this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]);
    this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
        = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
            ? this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
            : this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]);
    this->__PVT__slv_resp_o[2U] = ((0x7ffffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0xfff80000U & 
                                      ((IData)(this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o) 
                                       << 0x13U)));
    this->__PVT__slv_resp_o[2U] = ((0xbffffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0xfffc0000U & 
                                      ((IData)(this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o) 
                                       << 0x12U)));
}

void Vrvfpgasim_axi_demux__pi3::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__4(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi3::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__4\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[4U] 
            >> 0x10U) & (IData)(this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U] 
            >> 1U) & (IData)(this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                    >> 4U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U]));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[0U] 
        = ((0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                            << 0x11U) | (0x1fffcU & 
                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                          >> 0xfU)))) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error)
               ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__idx_o)));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[1U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                  >> 0xfU)) | (0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                               << 0x11U) 
                                              | (0x1fffcU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                                                    >> 0xfU)))));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[2U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                  >> 0xfU)) | (0x3fcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                                          << 0x11U) 
                                         | (0x1fffcU 
                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                               >> 0xfU)))));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[0U] 
        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U]) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error)
               ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__idx_o)));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[1U] 
        = ((3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[1U]) 
           | (0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[1U]));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[2U] 
        = ((3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U]) 
           | (0xcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U]));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:168
    this->__PVT__gen_demux__DOT__aw_push = 0U;
    if ((1U & (~ (IData)(this->__PVT__gen_demux__DOT__lock_aw_valid_q)))) {
        if ((((~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                this->__PVT__gen_demux__DOT__aw_push = 1U;
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:168
    this->__PVT__gen_demux__DOT__aw_valid = 0U;
    if (this->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        this->__PVT__gen_demux__DOT__aw_valid = 1U;
    } else {
        if ((((~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                this->__PVT__gen_demux__DOT__aw_valid = 1U;
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:339
    this->__PVT__gen_demux__DOT__ar_valid = 0U;
    if (this->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        this->__PVT__gen_demux__DOT__ar_valid = 1U;
    } else {
        if ((1U & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                this->__PVT__gen_demux__DOT__ar_valid = 1U;
            }
        }
    }
    this->__PVT__gen_demux__DOT__mst_b_readies = ((3U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_b_readies)) 
                                                  | (4U 
                                                     & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes)));
    this->__PVT__gen_demux__DOT__mst_r_readies = ((3U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_r_readies)) 
                                                  | (4U 
                                                     & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n 
        = this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n 
            = (0xfU & ((9U == (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q))
                        ? 0U : ((IData)(1U) + (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n 
        = this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->gen_demux__DOT__i_w_fifo__DOT____Vlvbound1 
            = (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]);
        if ((0x13U >= (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                << 1U)))) {
            this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n 
                = (((~ ((IData)(3U) << (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                                 << 1U)))) 
                    & this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n) 
                   | ((IData)(this->gen_demux__DOT__i_w_fifo__DOT____Vlvbound1) 
                      << (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                   << 1U))));
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi3::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__7(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi3::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__7\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    VL_SIGW(__Vtemp76,95,0,3);
    // Body
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:447
    this->__PVT__gen_demux__DOT__w_fifo_pop = 0U;
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__PVT__gen_demux__DOT__w_fifo_pop = (1U 
                                                   & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                        >> 5U) 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
                                                          >> 0x11U)) 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                         >> 7U)));
    }
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__PVT__gen_demux__DOT__w_fifo_pop = (1U 
                                                   & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U]) 
                                                       >> 5U) 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                         >> 7U)));
    }
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__PVT__gen_demux__DOT__w_fifo_pop = (1U 
                                                   & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                        >> 5U) 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
                                                          >> 0x19U)) 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                                         >> 7U)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:447
    this->__PVT__gen_demux__DOT__slv_w_ready = 0U;
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__PVT__gen_demux__DOT__slv_w_ready = 
            (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
                   >> 0x11U));
    }
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__PVT__gen_demux__DOT__slv_w_ready = 
            (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U] 
                   >> 5U));
    }
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__PVT__gen_demux__DOT__slv_w_ready = 
            (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
                   >> 0x19U));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:447
    this->__PVT__gen_demux__DOT__ar_ready = 0U;
    if (((IData)(this->__PVT__gen_demux__DOT__ar_valid) 
         & (0U == (3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        this->__PVT__gen_demux__DOT__ar_ready = (1U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
                                                    >> 0x12U));
    }
    if (((IData)(this->__PVT__gen_demux__DOT__ar_valid) 
         & (1U == (3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        this->__PVT__gen_demux__DOT__ar_ready = (1U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U] 
                                                    >> 6U));
    }
    if (((IData)(this->__PVT__gen_demux__DOT__ar_valid) 
         & (2U == (3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        this->__PVT__gen_demux__DOT__ar_ready = (1U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
                                                    >> 0x1aU));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:447
    this->__PVT__gen_demux__DOT__aw_ready = 0U;
    if (((IData)(this->__PVT__gen_demux__DOT__aw_valid) 
         & (0U == (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        this->__PVT__gen_demux__DOT__aw_ready = (1U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
                                                    >> 0x13U));
    }
    if (((IData)(this->__PVT__gen_demux__DOT__aw_valid) 
         & (1U == (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        this->__PVT__gen_demux__DOT__aw_ready = (1U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U] 
                                                    >> 7U));
    }
    if (((IData)(this->__PVT__gen_demux__DOT__aw_valid) 
         & (2U == (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        this->__PVT__gen_demux__DOT__aw_ready = (1U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
                                                    >> 0x1bU));
    }
    this->__PVT__gen_demux__DOT__mst_b_chans = ((0x1fff80U 
                                                 & this->__PVT__gen_demux__DOT__mst_b_chans) 
                                                | (0x7fU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[3U] 
                                                       << 0x17U) 
                                                      | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
                                                         >> 9U))));
    this->__PVT__gen_demux__DOT__mst_b_chans = ((0x1fc07fU 
                                                 & this->__PVT__gen_demux__DOT__mst_b_chans) 
                                                | (0x3f80U 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U] 
                                                       << 0xaU) 
                                                      | (0x380U 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[4U] 
                                                            >> 0x16U)))));
    this->__PVT__gen_demux__DOT__mst_b_chans = ((0x3fffU 
                                                 & this->__PVT__gen_demux__DOT__mst_b_chans) 
                                                | (0x1fc000U 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[8U] 
                                                       << 0x1dU) 
                                                      | (0x1fffc000U 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
                                                            >> 3U)))));
    this->__PVT__gen_demux__DOT__mst_r_chans[0U] = 
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0U];
    this->__PVT__gen_demux__DOT__mst_r_chans[1U] = 
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[1U];
    this->__PVT__gen_demux__DOT__mst_r_chans[2U] = 
        ((0xffffff00U & this->__PVT__gen_demux__DOT__mst_r_chans[2U]) 
         | (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U]));
    this->__PVT__gen_demux__DOT__mst_r_chans[2U] = 
        ((0xffU & this->__PVT__gen_demux__DOT__mst_r_chans[2U]) 
         | (0xffffff00U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[3U] 
                            << 0x14U) | (0xfff00U & 
                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
                                          >> 0xcU)))));
    this->__PVT__gen_demux__DOT__mst_r_chans[3U] = 
        ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[3U] 
                   >> 0xcU)) | (0xffffff00U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[4U] 
                                                << 0x14U) 
                                               | (0xfff00U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[3U] 
                                                     >> 0xcU)))));
    this->__PVT__gen_demux__DOT__mst_r_chans[4U] = 
        ((0xffff0000U & this->__PVT__gen_demux__DOT__mst_r_chans[4U]) 
         | ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[4U] 
                      >> 0xcU)) | (0xff00U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U] 
                                               << 0x14U) 
                                              | (0xfff00U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[4U] 
                                                    >> 0xcU))))));
    this->__PVT__gen_demux__DOT__mst_r_chans[4U] = 
        ((0xffffU & this->__PVT__gen_demux__DOT__mst_r_chans[4U]) 
         | (0xffff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U] 
                           << 8U)));
    this->__PVT__gen_demux__DOT__mst_r_chans[5U] = 
        ((0xffffU & ((0xff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[6U] 
                                 << 8U)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U] 
                                            >> 0x18U))) 
         | (0xffff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[6U] 
                           << 8U)));
    this->__PVT__gen_demux__DOT__mst_r_chans[6U] = 
        ((0xffffU & ((0xff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
                                 << 8U)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[6U] 
                                            >> 0x18U))) 
         | (0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
                         << 8U)));
    this->__PVT__gen_demux__DOT__mst_b_valids = ((6U 
                                                  & (IData)(this->__PVT__gen_demux__DOT__mst_b_valids)) 
                                                 | (1U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
                                                       >> 0x10U)));
    this->__PVT__gen_demux__DOT__mst_b_valids = ((5U 
                                                  & (IData)(this->__PVT__gen_demux__DOT__mst_b_valids)) 
                                                 | (2U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U] 
                                                       >> 3U)));
    this->__PVT__gen_demux__DOT__mst_b_valids = ((3U 
                                                  & (IData)(this->__PVT__gen_demux__DOT__mst_b_valids)) 
                                                 | (4U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
                                                       >> 0x16U)));
    this->__PVT__gen_demux__DOT__mst_r_valids = ((6U 
                                                  & (IData)(this->__PVT__gen_demux__DOT__mst_r_valids)) 
                                                 | (1U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
                                                       >> 8U)));
    this->__PVT__gen_demux__DOT__mst_r_valids = ((5U 
                                                  & (IData)(this->__PVT__gen_demux__DOT__mst_r_valids)) 
                                                 | (2U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[4U] 
                                                       >> 0x1bU)));
    this->__PVT__gen_demux__DOT__mst_r_valids = ((3U 
                                                  & (IData)(this->__PVT__gen_demux__DOT__mst_r_valids)) 
                                                 | (4U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
                                                       >> 0xeU)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n 
        = this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__gen_demux__DOT__w_fifo_pop) 
         & (0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n 
            = (0xfU & ((9U == (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n))
                        ? 0U : ((IData)(1U) + (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
        = this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__gen_demux__DOT__w_fifo_pop) 
         & (0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__gen_demux__DOT__aw_push) 
           & (IData)(this->__PVT__gen_demux__DOT__w_fifo_pop)) 
          & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    this->__PVT__slv_resp_o[2U] = ((0xdffffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0xfffe0000U & 
                                      ((IData)(this->__PVT__gen_demux__DOT__slv_w_ready) 
                                       << 0x11U)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:339
    this->__PVT__gen_demux__DOT__lock_ar_valid_d = this->__PVT__gen_demux__DOT__lock_ar_valid_q;
    if (this->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        if (this->__PVT__gen_demux__DOT__ar_ready) {
            this->__PVT__gen_demux__DOT__lock_ar_valid_d = 0U;
        }
    } else {
        if ((1U & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(this->__PVT__gen_demux__DOT__ar_ready)))) {
                    this->__PVT__gen_demux__DOT__lock_ar_valid_d = 1U;
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:339
    this->__PVT__gen_demux__DOT__load_ar_lock = 0U;
    if (this->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        if (this->__PVT__gen_demux__DOT__ar_ready) {
            this->__PVT__gen_demux__DOT__load_ar_lock = 1U;
        }
    } else {
        if ((1U & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(this->__PVT__gen_demux__DOT__ar_ready)))) {
                    this->__PVT__gen_demux__DOT__load_ar_lock = 1U;
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:339
    this->__PVT__gen_demux__DOT__slv_ar_ready = 0U;
    if (this->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        if (this->__PVT__gen_demux__DOT__ar_ready) {
            this->__PVT__gen_demux__DOT__slv_ar_ready = 1U;
        }
    } else {
        if ((1U & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                if (this->__PVT__gen_demux__DOT__ar_ready) {
                    this->__PVT__gen_demux__DOT__slv_ar_ready = 1U;
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:339
    this->__PVT__gen_demux__DOT__ar_push = 0U;
    if (this->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        if (this->__PVT__gen_demux__DOT__ar_ready) {
            this->__PVT__gen_demux__DOT__ar_push = 1U;
        }
    } else {
        if ((1U & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                if (this->__PVT__gen_demux__DOT__ar_ready) {
                    this->__PVT__gen_demux__DOT__ar_push = 1U;
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:168
    this->__PVT__gen_demux__DOT__lock_aw_valid_d = this->__PVT__gen_demux__DOT__lock_aw_valid_q;
    if (this->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        if (this->__PVT__gen_demux__DOT__aw_ready) {
            this->__PVT__gen_demux__DOT__lock_aw_valid_d = 0U;
        }
    } else {
        if ((((~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(this->__PVT__gen_demux__DOT__aw_ready)))) {
                    this->__PVT__gen_demux__DOT__lock_aw_valid_d = 1U;
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:168
    this->__PVT__gen_demux__DOT__load_aw_lock = 0U;
    if (this->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        if (this->__PVT__gen_demux__DOT__aw_ready) {
            this->__PVT__gen_demux__DOT__load_aw_lock = 1U;
        }
    } else {
        if ((((~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(this->__PVT__gen_demux__DOT__aw_ready)))) {
                    this->__PVT__gen_demux__DOT__load_aw_lock = 1U;
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:168
    this->__PVT__gen_demux__DOT__slv_aw_ready = 0U;
    if (this->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        if (this->__PVT__gen_demux__DOT__aw_ready) {
            this->__PVT__gen_demux__DOT__slv_aw_ready = 1U;
        }
    } else {
        if ((((~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                if (this->__PVT__gen_demux__DOT__aw_ready) {
                    this->__PVT__gen_demux__DOT__slv_aw_ready = 1U;
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:168
    this->__PVT__gen_demux__DOT__atop_inject = 0U;
    if (this->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        if (this->__PVT__gen_demux__DOT__aw_ready) {
            this->__PVT__gen_demux__DOT__atop_inject 
                = (1U & (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                         >> 8U));
        }
    } else {
        if ((((~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                if (this->__PVT__gen_demux__DOT__aw_ready) {
                    this->__PVT__gen_demux__DOT__atop_inject 
                        = (1U & (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                 >> 8U));
                }
            }
        }
    }
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes 
        = ((0x3fffU & this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes) 
           | (0x1fc000U & this->__PVT__gen_demux__DOT__mst_b_chans));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[4U] 
        = ((0xffffU & this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[4U]) 
           | (0xffff0000U & this->__PVT__gen_demux__DOT__mst_r_chans[4U]));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[5U] 
        = ((0xffffU & this->__PVT__gen_demux__DOT__mst_r_chans[5U]) 
           | (0xffff0000U & this->__PVT__gen_demux__DOT__mst_r_chans[5U]));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[6U] 
        = ((0xffffU & this->__PVT__gen_demux__DOT__mst_r_chans[6U]) 
           | (0xff0000U & this->__PVT__gen_demux__DOT__mst_r_chans[6U]));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d 
        = ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(this->__PVT__gen_demux__DOT__mst_b_valids));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d 
        = ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(this->__PVT__gen_demux__DOT__mst_r_valids));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)(this->__PVT__gen_demux__DOT__slv_ar_ready)));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(this->__PVT__gen_demux__DOT__slv_ar_ready));
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)(this->__PVT__gen_demux__DOT__slv_aw_ready)));
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(this->__PVT__gen_demux__DOT__slv_aw_ready));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes 
        = ((5U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d) 
                     << 1U) | (0xfffffffeU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d)))));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes 
        = ((3U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes)) 
           | (4U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d)) 
                 | (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d) 
                     >> 1U) & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__rr_q))));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes 
        = ((5U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d) 
                     << 1U) | (0xfffffffeU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d)))));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes 
        = ((3U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes)) 
           | (4U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d)) 
                 | (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d) 
                     >> 1U) & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__rr_q))));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes)) 
           | (1U & (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes) 
                     >> 1U) | ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes) 
                               >> 2U))));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__rr_d 
        = (3U & ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                         >> 4U) & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes)))
                  ? ((2U == (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__rr_q))
                      ? 0U : ((IData)(1U) + (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__rr_q)))
                  : (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__rr_q)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes) 
                     >> 1U)) | (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes) 
                                 >> 2U) & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__rr_q) 
                                           >> 1U))));
    this->__PVT__slv_resp_o[2U] = ((0xeffffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0x10000U & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes) 
                                                  << 0x10U)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes 
        = ((0x33U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes)) 
           | ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
              << 2U));
    this->__PVT__gen_demux__DOT__mst_b_readies = ((6U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_b_readies)) 
                                                  | (1U 
                                                     & (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes) 
                                                         >> 1U) 
                                                        & (~ (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))));
    this->__PVT__gen_demux__DOT__mst_b_readies = ((5U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_b_readies)) 
                                                  | (0xfffffffeU 
                                                     & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes) 
                                                        & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                           << 1U))));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes 
        = ((0x1fc07fU & this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes) 
           | (0x3f80U & (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? (this->__PVT__gen_demux__DOT__mst_b_chans 
                              >> 7U) : this->__PVT__gen_demux__DOT__mst_b_chans) 
                         << 7U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes)) 
           | (1U & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes) 
                     >> 1U) | ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes) 
                               >> 2U))));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__rr_d 
        = (3U & ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U] 
                        & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes)))
                  ? ((2U == (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__rr_q))
                      ? 0U : ((IData)(1U) + (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__rr_q)))
                  : (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__rr_q)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes) 
                     >> 1U)) | (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes) 
                                 >> 2U) & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__rr_q) 
                                           >> 1U))));
    this->__PVT__slv_resp_o[2U] = ((0xffeffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0x100U & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes) 
                                                << 8U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes 
        = ((0x33U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes)) 
           | ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
              << 2U));
    this->__PVT__gen_demux__DOT__mst_r_readies = ((6U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_r_readies)) 
                                                  | (1U 
                                                     & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes) 
                                                         >> 1U) 
                                                        & (~ (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))));
    this->__PVT__gen_demux__DOT__mst_r_readies = ((5U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_r_readies)) 
                                                  | (0xfffffffeU 
                                                     & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes) 
                                                        & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                           << 1U))));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[2U] 
        = ((0xffU & this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[2U]) 
           | (0xffffff00U & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                               ? ((this->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                                   << 0x18U) | (this->__PVT__gen_demux__DOT__mst_r_chans[2U] 
                                                >> 8U))
                               : this->__PVT__gen_demux__DOT__mst_r_chans[0U]) 
                             << 8U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[3U] 
        = ((0xffU & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                       ? ((this->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                           << 0x18U) | (this->__PVT__gen_demux__DOT__mst_r_chans[2U] 
                                        >> 8U)) : this->__PVT__gen_demux__DOT__mst_r_chans[0U]) 
                     >> 0x18U)) | (0xffffff00U & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                    ? 
                                                   ((this->__PVT__gen_demux__DOT__mst_r_chans[4U] 
                                                     << 0x18U) 
                                                    | (this->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                                                       >> 8U))
                                                    : 
                                                   this->__PVT__gen_demux__DOT__mst_r_chans[1U]) 
                                                  << 8U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[4U] 
        = ((0xffff0000U & this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[4U]) 
           | ((0xffU & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                          ? ((this->__PVT__gen_demux__DOT__mst_r_chans[4U] 
                              << 0x18U) | (this->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                                           >> 8U)) : 
                         this->__PVT__gen_demux__DOT__mst_r_chans[1U]) 
                        >> 0x18U)) | (0xff00U & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((this->__PVT__gen_demux__DOT__mst_r_chans[5U] 
                                                    << 0x18U) 
                                                   | (this->__PVT__gen_demux__DOT__mst_r_chans[4U] 
                                                      >> 8U))
                                                   : 
                                                  this->__PVT__gen_demux__DOT__mst_r_chans[2U]) 
                                                 << 8U))));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((5U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes) 
                     & (~ (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                    << 1U)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((3U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes) 
               & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
              << 2U));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes 
        = ((0x3cU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes)) 
           | ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
               ? (2U | (1U & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes) 
                              >> 4U))) : (1U & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes) 
                                                >> 2U))));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes 
        = ((0x1fff80U & this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes) 
           | (0x7fU & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? (this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes 
                           >> 0xeU) : (this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes 
                                       >> 7U))));
    this->__PVT__slv_resp_o[2U] = ((0xf01ffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0xfe00U & (this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes 
                                                 << 9U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((5U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes) 
                     & (~ (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                    << 1U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((3U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes) 
               & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
              << 2U));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes 
        = ((0x3cU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes)) 
           | ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
               ? (2U | (1U & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes) 
                              >> 4U))) : (1U & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes) 
                                                >> 2U))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:447
    this->__PVT__mst_reqs_o[0U] = 0U;
    this->__PVT__mst_reqs_o[1U] = 0U;
    this->__PVT__mst_reqs_o[2U] = 0U;
    this->__PVT__mst_reqs_o[3U] = 0U;
    this->__PVT__mst_reqs_o[4U] = 0U;
    this->__PVT__mst_reqs_o[5U] = 0U;
    this->__PVT__mst_reqs_o[6U] = 0U;
    this->__PVT__mst_reqs_o[7U] = 0U;
    this->__PVT__mst_reqs_o[8U] = 0U;
    this->__PVT__mst_reqs_o[9U] = 0U;
    this->__PVT__mst_reqs_o[0xaU] = 0U;
    this->__PVT__mst_reqs_o[0xbU] = 0U;
    this->__PVT__mst_reqs_o[0xcU] = 0U;
    this->__PVT__mst_reqs_o[0xdU] = 0U;
    this->__PVT__mst_reqs_o[0xeU] = 0U;
    this->__PVT__mst_reqs_o[0xfU] = 0U;
    this->__PVT__mst_reqs_o[0x10U] = 0U;
    this->__PVT__mst_reqs_o[0x11U] = 0U;
    this->__PVT__mst_reqs_o[0x12U] = 0U;
    this->__PVT__mst_reqs_o[0x13U] = 0U;
    this->__PVT__mst_reqs_o[0x14U] = 0U;
    this->__Vlvbound1[0U] = ((this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                           >> 2U));
    this->__Vlvbound1[1U] = ((this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                           >> 2U));
    this->__Vlvbound1[2U] = (0xffU & (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                      >> 2U));
    this->__PVT__mst_reqs_o[4U] = ((0x1ffffU & this->__PVT__mst_reqs_o[4U]) 
                                   | (0xfffe0000U & 
                                      (this->__Vlvbound1[0U] 
                                       << 0x11U)));
    this->__PVT__mst_reqs_o[5U] = ((0x1ffffU & (this->__Vlvbound1[0U] 
                                                >> 0xfU)) 
                                   | (0xfffe0000U & 
                                      (this->__Vlvbound1[1U] 
                                       << 0x11U)));
    this->__PVT__mst_reqs_o[6U] = ((0xfe000000U & this->__PVT__mst_reqs_o[6U]) 
                                   | ((0x1ffffU & (
                                                   this->__Vlvbound1[1U] 
                                                   >> 0xfU)) 
                                      | (0xfffe0000U 
                                         & (this->__Vlvbound1[2U] 
                                            << 0x11U))));
    this->__PVT__mst_reqs_o[4U] = (0xfffeffffU & this->__PVT__mst_reqs_o[4U]);
    if (((IData)(this->__PVT__gen_demux__DOT__aw_valid) 
         & (0U == (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        this->__PVT__mst_reqs_o[4U] = (0x10000U | this->__PVT__mst_reqs_o[4U]);
    }
    this->__Vlvbound4[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                              << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                           >> 6U));
    this->__Vlvbound4[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                              << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                           >> 6U));
    this->__Vlvbound4[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                                        << 0x1aU) | 
                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                        >> 6U)));
    this->__PVT__mst_reqs_o[2U] = ((0x3fU & this->__PVT__mst_reqs_o[2U]) 
                                   | (0xffffffc0U & 
                                      (this->__Vlvbound4[0U] 
                                       << 6U)));
    this->__PVT__mst_reqs_o[3U] = ((0x3fU & (this->__Vlvbound4[0U] 
                                             >> 0x1aU)) 
                                   | (0xffffffc0U & 
                                      (this->__Vlvbound4[1U] 
                                       << 6U)));
    this->__PVT__mst_reqs_o[4U] = ((0xffff0000U & this->__PVT__mst_reqs_o[4U]) 
                                   | ((0x3fU & (this->__Vlvbound4[1U] 
                                                >> 0x1aU)) 
                                      | (0xffffffc0U 
                                         & (this->__Vlvbound4[2U] 
                                            << 6U))));
    this->__PVT__mst_reqs_o[2U] = (0xffffffdfU & this->__PVT__mst_reqs_o[2U]);
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__Vlvbound6 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                   >> 5U));
        this->__PVT__mst_reqs_o[2U] = ((0xffffffdfU 
                                        & this->__PVT__mst_reqs_o[2U]) 
                                       | (0xffffffe0U 
                                          & ((IData)(this->__Vlvbound6) 
                                             << 5U)));
    }
    this->__Vlvbound7 = (1U & (IData)(this->__PVT__gen_demux__DOT__mst_b_readies));
    this->__PVT__mst_reqs_o[2U] = ((0xffffffefU & this->__PVT__mst_reqs_o[2U]) 
                                   | (0xfffffff0U & 
                                      ((IData)(this->__Vlvbound7) 
                                       << 4U)));
    this->__Vlvbound8[0U] = ((this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                           >> 2U));
    this->__Vlvbound8[1U] = ((this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                           >> 2U));
    this->__Vlvbound8[2U] = (3U & (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                   >> 2U));
    this->__PVT__mst_reqs_o[0U] = ((3U & this->__PVT__mst_reqs_o[0U]) 
                                   | (0xfffffffcU & 
                                      (this->__Vlvbound8[0U] 
                                       << 2U)));
    this->__PVT__mst_reqs_o[1U] = ((3U & (this->__Vlvbound8[0U] 
                                          >> 0x1eU)) 
                                   | (0xfffffffcU & 
                                      (this->__Vlvbound8[1U] 
                                       << 2U)));
    this->__PVT__mst_reqs_o[2U] = ((0xfffffff0U & this->__PVT__mst_reqs_o[2U]) 
                                   | ((3U & (this->__Vlvbound8[1U] 
                                             >> 0x1eU)) 
                                      | (0xfffffffcU 
                                         & (this->__Vlvbound8[2U] 
                                            << 2U))));
    this->__PVT__mst_reqs_o[0U] = (0xfffffffdU & this->__PVT__mst_reqs_o[0U]);
    if (((IData)(this->__PVT__gen_demux__DOT__ar_valid) 
         & (0U == (3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        this->__PVT__mst_reqs_o[0U] = (2U | this->__PVT__mst_reqs_o[0U]);
    }
    this->__Vlvbound11 = (1U & (IData)(this->__PVT__gen_demux__DOT__mst_r_readies));
    this->__PVT__mst_reqs_o[0U] = ((0xfffffffeU & this->__PVT__mst_reqs_o[0U]) 
                                   | (IData)(this->__Vlvbound11));
    this->__Vlvbound1[0U] = ((this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                           >> 2U));
    this->__Vlvbound1[1U] = ((this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                           >> 2U));
    this->__Vlvbound1[2U] = (0xffU & (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                      >> 2U));
    this->__PVT__mst_reqs_o[0xbU] = ((0x3ffU & this->__PVT__mst_reqs_o[0xbU]) 
                                     | (0xfffffc00U 
                                        & (this->__Vlvbound1[0U] 
                                           << 0xaU)));
    this->__PVT__mst_reqs_o[0xcU] = ((0x3ffU & (this->__Vlvbound1[0U] 
                                                >> 0x16U)) 
                                     | (0xfffffc00U 
                                        & (this->__Vlvbound1[1U] 
                                           << 0xaU)));
    this->__PVT__mst_reqs_o[0xdU] = ((0xfffc0000U & 
                                      this->__PVT__mst_reqs_o[0xdU]) 
                                     | ((0x3ffU & (
                                                   this->__Vlvbound1[1U] 
                                                   >> 0x16U)) 
                                        | (0xfffffc00U 
                                           & (this->__Vlvbound1[2U] 
                                              << 0xaU))));
    this->__PVT__mst_reqs_o[0xbU] = (0xfffffdffU & 
                                     this->__PVT__mst_reqs_o[0xbU]);
    if (((IData)(this->__PVT__gen_demux__DOT__aw_valid) 
         & (1U == (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        this->__PVT__mst_reqs_o[0xbU] = (0x200U | this->__PVT__mst_reqs_o[0xbU]);
    }
    this->__Vlvbound4[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                              << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                           >> 6U));
    this->__Vlvbound4[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                              << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                           >> 6U));
    this->__Vlvbound4[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                                        << 0x1aU) | 
                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                        >> 6U)));
    this->__PVT__mst_reqs_o[8U] = ((0x7fffffffU & this->__PVT__mst_reqs_o[8U]) 
                                   | (0x80000000U & 
                                      (this->__Vlvbound4[0U] 
                                       << 0x1fU)));
    this->__PVT__mst_reqs_o[9U] = ((0x7fffffffU & (
                                                   this->__Vlvbound4[0U] 
                                                   >> 1U)) 
                                   | (0x80000000U & 
                                      (this->__Vlvbound4[1U] 
                                       << 0x1fU)));
    this->__PVT__mst_reqs_o[0xaU] = ((0x7fffffffU & 
                                      (this->__Vlvbound4[1U] 
                                       >> 1U)) | (0x80000000U 
                                                  & (this->__Vlvbound4[2U] 
                                                     << 0x1fU)));
    this->__PVT__mst_reqs_o[0xbU] = ((0xfffffe00U & 
                                      this->__PVT__mst_reqs_o[0xbU]) 
                                     | (0x7fffffffU 
                                        & (this->__Vlvbound4[2U] 
                                           >> 1U)));
    this->__PVT__mst_reqs_o[8U] = (0xbfffffffU & this->__PVT__mst_reqs_o[8U]);
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__Vlvbound6 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                   >> 5U));
        this->__PVT__mst_reqs_o[8U] = ((0xbfffffffU 
                                        & this->__PVT__mst_reqs_o[8U]) 
                                       | (0xc0000000U 
                                          & ((IData)(this->__Vlvbound6) 
                                             << 0x1eU)));
    }
    this->__Vlvbound7 = (1U & ((IData)(this->__PVT__gen_demux__DOT__mst_b_readies) 
                               >> 1U));
    this->__PVT__mst_reqs_o[8U] = ((0xdfffffffU & this->__PVT__mst_reqs_o[8U]) 
                                   | (0xe0000000U & 
                                      ((IData)(this->__Vlvbound7) 
                                       << 0x1dU)));
    this->__Vlvbound8[0U] = ((this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                           >> 2U));
    this->__Vlvbound8[1U] = ((this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                           >> 2U));
    this->__Vlvbound8[2U] = (3U & (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                   >> 2U));
    this->__PVT__mst_reqs_o[6U] = ((0x7ffffffU & this->__PVT__mst_reqs_o[6U]) 
                                   | (0xf8000000U & 
                                      (this->__Vlvbound8[0U] 
                                       << 0x1bU)));
    this->__PVT__mst_reqs_o[7U] = ((0x7ffffffU & (this->__Vlvbound8[0U] 
                                                  >> 5U)) 
                                   | (0xf8000000U & 
                                      (this->__Vlvbound8[1U] 
                                       << 0x1bU)));
    this->__PVT__mst_reqs_o[8U] = ((0xe0000000U & this->__PVT__mst_reqs_o[8U]) 
                                   | ((0x7ffffffU & 
                                       (this->__Vlvbound8[1U] 
                                        >> 5U)) | (0xf8000000U 
                                                   & (this->__Vlvbound8[2U] 
                                                      << 0x1bU))));
    this->__PVT__mst_reqs_o[6U] = (0xfbffffffU & this->__PVT__mst_reqs_o[6U]);
    if (((IData)(this->__PVT__gen_demux__DOT__ar_valid) 
         & (1U == (3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        this->__PVT__mst_reqs_o[6U] = (0x4000000U | 
                                       this->__PVT__mst_reqs_o[6U]);
    }
    this->__Vlvbound11 = (1U & ((IData)(this->__PVT__gen_demux__DOT__mst_r_readies) 
                                >> 1U));
    this->__PVT__mst_reqs_o[6U] = ((0xfdffffffU & this->__PVT__mst_reqs_o[6U]) 
                                   | (0xfe000000U & 
                                      ((IData)(this->__Vlvbound11) 
                                       << 0x19U)));
    this->__Vlvbound1[0U] = ((this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                           >> 2U));
    this->__Vlvbound1[1U] = ((this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                           >> 2U));
    this->__Vlvbound1[2U] = (0xffU & (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                      >> 2U));
    this->__PVT__mst_reqs_o[0x12U] = ((7U & this->__PVT__mst_reqs_o[0x12U]) 
                                      | (0xfffffff8U 
                                         & (this->__Vlvbound1[0U] 
                                            << 3U)));
    this->__PVT__mst_reqs_o[0x13U] = ((7U & (this->__Vlvbound1[0U] 
                                             >> 0x1dU)) 
                                      | (0xfffffff8U 
                                         & (this->__Vlvbound1[1U] 
                                            << 3U)));
    this->__PVT__mst_reqs_o[0x14U] = ((7U & (this->__Vlvbound1[1U] 
                                             >> 0x1dU)) 
                                      | (0xfffffff8U 
                                         & (this->__Vlvbound1[2U] 
                                            << 3U)));
    this->__PVT__mst_reqs_o[0x12U] = (0xfffffffbU & 
                                      this->__PVT__mst_reqs_o[0x12U]);
    if (((IData)(this->__PVT__gen_demux__DOT__aw_valid) 
         & (2U == (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        this->__PVT__mst_reqs_o[0x12U] = (4U | this->__PVT__mst_reqs_o[0x12U]);
    }
    this->__Vlvbound4[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                              << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                           >> 6U));
    this->__Vlvbound4[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                              << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[3U] 
                                           >> 6U));
    this->__Vlvbound4[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                                        << 0x1aU) | 
                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                        >> 6U)));
    this->__PVT__mst_reqs_o[0xfU] = ((0xffffffU & this->__PVT__mst_reqs_o[0xfU]) 
                                     | (0xff000000U 
                                        & (this->__Vlvbound4[0U] 
                                           << 0x18U)));
    this->__PVT__mst_reqs_o[0x10U] = ((0xffffffU & 
                                       (this->__Vlvbound4[0U] 
                                        >> 8U)) | (0xff000000U 
                                                   & (this->__Vlvbound4[1U] 
                                                      << 0x18U)));
    this->__PVT__mst_reqs_o[0x11U] = ((0xffffffU & 
                                       (this->__Vlvbound4[1U] 
                                        >> 8U)) | (0xff000000U 
                                                   & (this->__Vlvbound4[2U] 
                                                      << 0x18U)));
    this->__PVT__mst_reqs_o[0x12U] = ((0xfffffffcU 
                                       & this->__PVT__mst_reqs_o[0x12U]) 
                                      | (0xffffffU 
                                         & (this->__Vlvbound4[2U] 
                                            >> 8U)));
    this->__PVT__mst_reqs_o[0xfU] = (0xff7fffffU & 
                                     this->__PVT__mst_reqs_o[0xfU]);
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__Vlvbound6 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                   >> 5U));
        this->__PVT__mst_reqs_o[0xfU] = ((0xff7fffffU 
                                          & this->__PVT__mst_reqs_o[0xfU]) 
                                         | (0xff800000U 
                                            & ((IData)(this->__Vlvbound6) 
                                               << 0x17U)));
    }
    this->__Vlvbound7 = (1U & ((IData)(this->__PVT__gen_demux__DOT__mst_b_readies) 
                               >> 2U));
    this->__PVT__mst_reqs_o[0xfU] = ((0xffbfffffU & 
                                      this->__PVT__mst_reqs_o[0xfU]) 
                                     | (0xffc00000U 
                                        & ((IData)(this->__Vlvbound7) 
                                           << 0x16U)));
    this->__Vlvbound8[0U] = ((this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                           >> 2U));
    this->__Vlvbound8[1U] = ((this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                           >> 2U));
    this->__Vlvbound8[2U] = (3U & (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                   >> 2U));
    this->__PVT__mst_reqs_o[0xdU] = ((0xfffffU & this->__PVT__mst_reqs_o[0xdU]) 
                                     | (0xfff00000U 
                                        & (this->__Vlvbound8[0U] 
                                           << 0x14U)));
    this->__PVT__mst_reqs_o[0xeU] = ((0xfffffU & (this->__Vlvbound8[0U] 
                                                  >> 0xcU)) 
                                     | (0xfff00000U 
                                        & (this->__Vlvbound8[1U] 
                                           << 0x14U)));
    this->__PVT__mst_reqs_o[0xfU] = ((0xffc00000U & 
                                      this->__PVT__mst_reqs_o[0xfU]) 
                                     | ((0xfffffU & 
                                         (this->__Vlvbound8[1U] 
                                          >> 0xcU)) 
                                        | (0xfff00000U 
                                           & (this->__Vlvbound8[2U] 
                                              << 0x14U))));
    this->__PVT__mst_reqs_o[0xdU] = (0xfff7ffffU & 
                                     this->__PVT__mst_reqs_o[0xdU]);
    if (((IData)(this->__PVT__gen_demux__DOT__ar_valid) 
         & (2U == (3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        this->__PVT__mst_reqs_o[0xdU] = (0x80000U | 
                                         this->__PVT__mst_reqs_o[0xdU]);
    }
    this->__Vlvbound11 = (1U & ((IData)(this->__PVT__gen_demux__DOT__mst_r_readies) 
                                >> 2U));
    this->__PVT__mst_reqs_o[0xdU] = ((0xfffbffffU & 
                                      this->__PVT__mst_reqs_o[0xdU]) 
                                     | (0xfffc0000U 
                                        & ((IData)(this->__Vlvbound11) 
                                           << 0x12U)));
    __Vtemp76[1U] = ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                      ? ((this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[6U] 
                          << 0x10U) | (this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[5U] 
                                       >> 0x10U)) : 
                     ((this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[4U] 
                       << 0x18U) | (this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[3U] 
                                    >> 8U)));
    __Vtemp76[2U] = (0xffU & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                               ? (this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[6U] 
                                  >> 0x10U) : ((this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[5U] 
                                                << 0x18U) 
                                               | (this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[4U] 
                                                  >> 8U))));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[0U] 
        = ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[5U] 
                << 0x10U) | (this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[4U] 
                             >> 0x10U)) : ((this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[3U] 
                                            << 0x18U) 
                                           | (this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[2U] 
                                              >> 8U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[1U] 
        = __Vtemp76[1U];
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[2U] 
        = ((0xffffff00U & this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[2U]) 
           | __Vtemp76[2U]);
    this->__PVT__slv_resp_o[0U] = this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[0U];
    this->__PVT__slv_resp_o[1U] = this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[1U];
    this->__PVT__slv_resp_o[2U] = ((0xfff00U & this->__PVT__slv_resp_o[2U]) 
                                   | (0xffU & this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[2U]));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi3::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__10(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi3::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__10\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:111
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:111
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:129
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if ((1U & (~ (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock)))) {
            this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                = this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n;
        }
    } else {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/rr_arb_tree.sv:147
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__rr_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__rr_d)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/rr_arb_tree.sv:147
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__rr_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__rr_d)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:111
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:385
    this->__PVT__gen_demux__DOT__lock_ar_valid_q = 
        ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
         & ((IData)(this->__PVT__gen_demux__DOT__load_ar_lock)
             ? (IData)(this->__PVT__gen_demux__DOT__lock_ar_valid_d)
             : (IData)(this->__PVT__gen_demux__DOT__lock_ar_valid_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:220
    this->__PVT__gen_demux__DOT__lock_aw_valid_q = 
        ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
         & ((IData)(this->__PVT__gen_demux__DOT__load_aw_lock)
             ? (IData)(this->__PVT__gen_demux__DOT__lock_aw_valid_d)
             : (IData)(this->__PVT__gen_demux__DOT__lock_aw_valid_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:49
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
    } else {
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:49
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
    } else {
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/rr_arb_tree.sv:130
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/rr_arb_tree.sv:130
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:68
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
    } else {
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:68
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
    } else {
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/rr_arb_tree.sv:104
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
           & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes) 
              & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                    >> 4U))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/rr_arb_tree.sv:104
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
           & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes) 
              & (~ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U])));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:61
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
    } else {
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:61
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
    } else {
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o 
        = (3U & ((0x13U >= (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q) 
                                     << 1U))) ? (this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q) 
                                                     << 1U)))
                  : 0U));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o 
        = (1U & ((~ (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    this->__PVT__gen_demux__DOT__slv_ar_valid = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o 
        = (1U & ((~ (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    this->__PVT__gen_demux__DOT__slv_aw_valid = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:42
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[0U];
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[1U];
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[2U];
        }
    } else {
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:42
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[0U];
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[1U];
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[2U];
        }
    } else {
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    this->__PVT__slv_resp_o[2U] = ((0xbffffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0xfffc0000U & 
                                      ((IData)(this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o) 
                                       << 0x12U)));
    this->__PVT__slv_resp_o[2U] = ((0x7ffffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0xfff80000U & 
                                      ((IData)(this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o) 
                                       << 0x13U)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi3::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__13(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi3::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__13\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
        = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
            ? this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
            : this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]);
    this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
        = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
            ? this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
            : this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]);
    this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
        = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
            ? this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
            : this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]);
    this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
        = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
            ? this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
            : this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]);
    this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
        = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
            ? this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
            : this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]);
    this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
        = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
            ? this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
            : this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]);
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi3::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__16(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi3::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__16\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:168
    this->__PVT__gen_demux__DOT__aw_push = 0U;
    if ((1U & (~ (IData)(this->__PVT__gen_demux__DOT__lock_aw_valid_q)))) {
        if ((((~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                this->__PVT__gen_demux__DOT__aw_push = 1U;
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:168
    this->__PVT__gen_demux__DOT__aw_valid = 0U;
    if (this->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        this->__PVT__gen_demux__DOT__aw_valid = 1U;
    } else {
        if ((((~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                this->__PVT__gen_demux__DOT__aw_valid = 1U;
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:339
    this->__PVT__gen_demux__DOT__ar_valid = 0U;
    if (this->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        this->__PVT__gen_demux__DOT__ar_valid = 1U;
    } else {
        if ((1U & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                this->__PVT__gen_demux__DOT__ar_valid = 1U;
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n 
        = this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n 
            = (0xfU & ((9U == (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q))
                        ? 0U : ((IData)(1U) + (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n 
        = this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->gen_demux__DOT__i_w_fifo__DOT____Vlvbound1 
            = (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]);
        if ((0x13U >= (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                << 1U)))) {
            this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n 
                = (((~ ((IData)(3U) << (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                                 << 1U)))) 
                    & this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n) 
                   | ((IData)(this->gen_demux__DOT__i_w_fifo__DOT____Vlvbound1) 
                      << (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                   << 1U))));
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi3::_multiclk__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__19(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi3::_multiclk__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__19\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                    >> 4U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U]));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[0U] 
        = ((0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                            << 0x11U) | (0x1fffcU & 
                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[4U] 
                                          >> 0xfU)))) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error)
               ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__idx_o)));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[1U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                  >> 0xfU)) | (0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                               << 0x11U) 
                                              | (0x1fffcU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[5U] 
                                                    >> 0xfU)))));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[2U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                  >> 0xfU)) | (0x3fcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                                          << 0x11U) 
                                         | (0x1fffcU 
                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                               >> 0xfU)))));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[0U] 
        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U]) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error)
               ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__idx_o)));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[1U] 
        = ((3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[1U]) 
           | (0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[1U]));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[2U] 
        = ((3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U]) 
           | (0xcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U]));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi3::_multiclk__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__22(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi3::_multiclk__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__22\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[4U] 
            >> 0x10U) & (IData)(this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U] 
            >> 1U) & (IData)(this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi3::_combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__25(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi3::_combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__25\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_demux__DOT__mst_b_readies = ((3U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_b_readies)) 
                                                  | (4U 
                                                     & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes)));
    this->__PVT__gen_demux__DOT__mst_r_readies = ((3U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_r_readies)) 
                                                  | (4U 
                                                     & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes)));
}

void Vrvfpgasim_axi_demux__pi3::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__5(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi3::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__5\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
            >> 9U) & (IData)(this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
            >> 0x1aU) & (IData)(this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                    >> 0x1dU)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                    >> 0x19U)));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[0U] 
        = ((0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                            << 0x18U) | (0xfffffcU 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
                                            >> 8U)))) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error)
               ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__idx_o)));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[1U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                  >> 8U)) | (0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                             << 0x18U) 
                                            | (0xfffffcU 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                                  >> 8U)))));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[2U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                  >> 8U)) | (0x3fcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                        << 0x18U) | 
                                       (0xfffffcU & 
                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                         >> 8U)))));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[0U] 
        = ((0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                            << 7U) | (0x7cU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                               >> 0x19U)))) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error)
               ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__idx_o)));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[1U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                  >> 0x19U)) | (0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                                                     >> 0x19U)))));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[2U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                  >> 0x19U)) | (0xcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                         << 7U) | (0x7cU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                      >> 0x19U)))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:168
    this->__PVT__gen_demux__DOT__aw_push = 0U;
    if ((1U & (~ (IData)(this->__PVT__gen_demux__DOT__lock_aw_valid_q)))) {
        if ((((~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                this->__PVT__gen_demux__DOT__aw_push = 1U;
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:168
    this->__PVT__gen_demux__DOT__aw_valid = 0U;
    if (this->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        this->__PVT__gen_demux__DOT__aw_valid = 1U;
    } else {
        if ((((~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                this->__PVT__gen_demux__DOT__aw_valid = 1U;
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:339
    this->__PVT__gen_demux__DOT__ar_valid = 0U;
    if (this->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        this->__PVT__gen_demux__DOT__ar_valid = 1U;
    } else {
        if ((1U & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                this->__PVT__gen_demux__DOT__ar_valid = 1U;
            }
        }
    }
    this->__PVT__gen_demux__DOT__mst_b_readies = ((3U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_b_readies)) 
                                                  | (4U 
                                                     & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes)));
    this->__PVT__gen_demux__DOT__mst_r_readies = ((3U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_r_readies)) 
                                                  | (4U 
                                                     & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n 
        = this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n 
            = (0xfU & ((9U == (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q))
                        ? 0U : ((IData)(1U) + (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n 
        = this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->gen_demux__DOT__i_w_fifo__DOT____Vlvbound1 
            = (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]);
        if ((0x13U >= (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                << 1U)))) {
            this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n 
                = (((~ ((IData)(3U) << (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                                 << 1U)))) 
                    & this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n) 
                   | ((IData)(this->gen_demux__DOT__i_w_fifo__DOT____Vlvbound1) 
                      << (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                   << 1U))));
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi3::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__8(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi3::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__8\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    VL_SIGW(__Vtemp158,95,0,3);
    // Body
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:447
    this->__PVT__gen_demux__DOT__w_fifo_pop = 0U;
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__PVT__gen_demux__DOT__w_fifo_pop = (1U 
                                                   & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                        >> 0x1eU) 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
                                                          >> 0xdU)) 
                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U]));
    }
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__PVT__gen_demux__DOT__w_fifo_pop = (1U 
                                                   & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                        >> 0x1eU) 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU] 
                                                          >> 1U)) 
                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U]));
    }
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__PVT__gen_demux__DOT__w_fifo_pop = (1U 
                                                   & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                        >> 0x1eU) 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
                                                          >> 0x15U)) 
                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U]));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:447
    this->__PVT__gen_demux__DOT__slv_w_ready = 0U;
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__PVT__gen_demux__DOT__slv_w_ready = 
            (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
                   >> 0xdU));
    }
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__PVT__gen_demux__DOT__slv_w_ready = 
            (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU] 
                   >> 1U));
    }
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__PVT__gen_demux__DOT__slv_w_ready = 
            (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
                   >> 0x15U));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:447
    this->__PVT__gen_demux__DOT__ar_ready = 0U;
    if (((IData)(this->__PVT__gen_demux__DOT__ar_valid) 
         & (0U == (3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        this->__PVT__gen_demux__DOT__ar_ready = (1U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
                                                    >> 0xeU));
    }
    if (((IData)(this->__PVT__gen_demux__DOT__ar_valid) 
         & (1U == (3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        this->__PVT__gen_demux__DOT__ar_ready = (1U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU] 
                                                    >> 2U));
    }
    if (((IData)(this->__PVT__gen_demux__DOT__ar_valid) 
         & (2U == (3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        this->__PVT__gen_demux__DOT__ar_ready = (1U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
                                                    >> 0x16U));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:447
    this->__PVT__gen_demux__DOT__aw_ready = 0U;
    if (((IData)(this->__PVT__gen_demux__DOT__aw_valid) 
         & (0U == (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        this->__PVT__gen_demux__DOT__aw_ready = (1U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
                                                    >> 0xfU));
    }
    if (((IData)(this->__PVT__gen_demux__DOT__aw_valid) 
         & (1U == (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        this->__PVT__gen_demux__DOT__aw_ready = (1U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU] 
                                                    >> 3U));
    }
    if (((IData)(this->__PVT__gen_demux__DOT__aw_valid) 
         & (2U == (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        this->__PVT__gen_demux__DOT__aw_ready = (1U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
                                                    >> 0x17U));
    }
    this->__PVT__gen_demux__DOT__mst_b_chans = ((0x1fff80U 
                                                 & this->__PVT__gen_demux__DOT__mst_b_chans) 
                                                | (0x7fU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xbU] 
                                                       << 0x1bU) 
                                                      | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
                                                         >> 5U))));
    this->__PVT__gen_demux__DOT__mst_b_chans = ((0x1fc07fU 
                                                 & this->__PVT__gen_demux__DOT__mst_b_chans) 
                                                | (0x3f80U 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU] 
                                                       << 0xeU) 
                                                      | (0x3f80U 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xcU] 
                                                            >> 0x12U)))));
    this->__PVT__gen_demux__DOT__mst_b_chans = ((0x3fffU 
                                                 & this->__PVT__gen_demux__DOT__mst_b_chans) 
                                                | (0x1fc000U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
                                                      << 1U)));
    this->__PVT__gen_demux__DOT__mst_r_chans[0U] = 
        ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[8U] 
          << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
                    >> 0x1cU));
    this->__PVT__gen_demux__DOT__mst_r_chans[1U] = 
        ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[9U] 
          << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[8U] 
                    >> 0x1cU));
    this->__PVT__gen_demux__DOT__mst_r_chans[2U] = 
        ((0xffffff00U & this->__PVT__gen_demux__DOT__mst_r_chans[2U]) 
         | (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
                      << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[9U] 
                                >> 0x1cU))));
    this->__PVT__gen_demux__DOT__mst_r_chans[2U] = 
        ((0xffU & this->__PVT__gen_demux__DOT__mst_r_chans[2U]) 
         | (0xffffff00U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xbU] 
                            << 0x18U) | (0xffff00U 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
                                            >> 8U)))));
    this->__PVT__gen_demux__DOT__mst_r_chans[3U] = 
        ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xbU] 
                   >> 8U)) | (0xffffff00U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xcU] 
                                              << 0x18U) 
                                             | (0xffff00U 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xbU] 
                                                   >> 8U)))));
    this->__PVT__gen_demux__DOT__mst_r_chans[4U] = 
        ((0xffff0000U & this->__PVT__gen_demux__DOT__mst_r_chans[4U]) 
         | ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xcU] 
                      >> 8U)) | (0xff00U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU] 
                                             << 0x18U) 
                                            | (0xffff00U 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xcU] 
                                                  >> 8U))))));
    this->__PVT__gen_demux__DOT__mst_r_chans[4U] = 
        ((0xffffU & this->__PVT__gen_demux__DOT__mst_r_chans[4U]) 
         | (0xffff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU] 
                           << 0xcU)));
    this->__PVT__gen_demux__DOT__mst_r_chans[5U] = 
        ((0xffffU & ((0xf000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xeU] 
                                 << 0xcU)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU] 
                                              >> 0x14U))) 
         | (0xffff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xeU] 
                           << 0xcU)));
    this->__PVT__gen_demux__DOT__mst_r_chans[6U] = 
        ((0xffffU & ((0xf000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
                                 << 0xcU)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xeU] 
                                              >> 0x14U))) 
         | (0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
                         << 0xcU)));
    this->__PVT__gen_demux__DOT__mst_b_valids = ((6U 
                                                  & (IData)(this->__PVT__gen_demux__DOT__mst_b_valids)) 
                                                 | (1U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
                                                       >> 0xcU)));
    this->__PVT__gen_demux__DOT__mst_b_valids = ((5U 
                                                  & (IData)(this->__PVT__gen_demux__DOT__mst_b_valids)) 
                                                 | (2U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU] 
                                                       << 1U)));
    this->__PVT__gen_demux__DOT__mst_b_valids = ((3U 
                                                  & (IData)(this->__PVT__gen_demux__DOT__mst_b_valids)) 
                                                 | (4U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
                                                       >> 0x12U)));
    this->__PVT__gen_demux__DOT__mst_r_valids = ((6U 
                                                  & (IData)(this->__PVT__gen_demux__DOT__mst_r_valids)) 
                                                 | (1U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
                                                       >> 4U)));
    this->__PVT__gen_demux__DOT__mst_r_valids = ((5U 
                                                  & (IData)(this->__PVT__gen_demux__DOT__mst_r_valids)) 
                                                 | (2U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xcU] 
                                                       >> 0x17U)));
    this->__PVT__gen_demux__DOT__mst_r_valids = ((3U 
                                                  & (IData)(this->__PVT__gen_demux__DOT__mst_r_valids)) 
                                                 | (4U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
                                                       >> 0xaU)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n 
        = this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__gen_demux__DOT__w_fifo_pop) 
         & (0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n 
            = (0xfU & ((9U == (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n))
                        ? 0U : ((IData)(1U) + (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
        = this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__gen_demux__DOT__w_fifo_pop) 
         & (0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__gen_demux__DOT__aw_push) 
           & (IData)(this->__PVT__gen_demux__DOT__w_fifo_pop)) 
          & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    this->__PVT__slv_resp_o[2U] = ((0xdffffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0xfffe0000U & 
                                      ((IData)(this->__PVT__gen_demux__DOT__slv_w_ready) 
                                       << 0x11U)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:339
    this->__PVT__gen_demux__DOT__lock_ar_valid_d = this->__PVT__gen_demux__DOT__lock_ar_valid_q;
    if (this->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        if (this->__PVT__gen_demux__DOT__ar_ready) {
            this->__PVT__gen_demux__DOT__lock_ar_valid_d = 0U;
        }
    } else {
        if ((1U & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(this->__PVT__gen_demux__DOT__ar_ready)))) {
                    this->__PVT__gen_demux__DOT__lock_ar_valid_d = 1U;
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:339
    this->__PVT__gen_demux__DOT__load_ar_lock = 0U;
    if (this->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        if (this->__PVT__gen_demux__DOT__ar_ready) {
            this->__PVT__gen_demux__DOT__load_ar_lock = 1U;
        }
    } else {
        if ((1U & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(this->__PVT__gen_demux__DOT__ar_ready)))) {
                    this->__PVT__gen_demux__DOT__load_ar_lock = 1U;
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:339
    this->__PVT__gen_demux__DOT__slv_ar_ready = 0U;
    if (this->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        if (this->__PVT__gen_demux__DOT__ar_ready) {
            this->__PVT__gen_demux__DOT__slv_ar_ready = 1U;
        }
    } else {
        if ((1U & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                if (this->__PVT__gen_demux__DOT__ar_ready) {
                    this->__PVT__gen_demux__DOT__slv_ar_ready = 1U;
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:339
    this->__PVT__gen_demux__DOT__ar_push = 0U;
    if (this->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        if (this->__PVT__gen_demux__DOT__ar_ready) {
            this->__PVT__gen_demux__DOT__ar_push = 1U;
        }
    } else {
        if ((1U & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                if (this->__PVT__gen_demux__DOT__ar_ready) {
                    this->__PVT__gen_demux__DOT__ar_push = 1U;
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:168
    this->__PVT__gen_demux__DOT__lock_aw_valid_d = this->__PVT__gen_demux__DOT__lock_aw_valid_q;
    if (this->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        if (this->__PVT__gen_demux__DOT__aw_ready) {
            this->__PVT__gen_demux__DOT__lock_aw_valid_d = 0U;
        }
    } else {
        if ((((~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(this->__PVT__gen_demux__DOT__aw_ready)))) {
                    this->__PVT__gen_demux__DOT__lock_aw_valid_d = 1U;
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:168
    this->__PVT__gen_demux__DOT__load_aw_lock = 0U;
    if (this->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        if (this->__PVT__gen_demux__DOT__aw_ready) {
            this->__PVT__gen_demux__DOT__load_aw_lock = 1U;
        }
    } else {
        if ((((~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(this->__PVT__gen_demux__DOT__aw_ready)))) {
                    this->__PVT__gen_demux__DOT__load_aw_lock = 1U;
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:168
    this->__PVT__gen_demux__DOT__slv_aw_ready = 0U;
    if (this->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        if (this->__PVT__gen_demux__DOT__aw_ready) {
            this->__PVT__gen_demux__DOT__slv_aw_ready = 1U;
        }
    } else {
        if ((((~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                if (this->__PVT__gen_demux__DOT__aw_ready) {
                    this->__PVT__gen_demux__DOT__slv_aw_ready = 1U;
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:168
    this->__PVT__gen_demux__DOT__atop_inject = 0U;
    if (this->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        if (this->__PVT__gen_demux__DOT__aw_ready) {
            this->__PVT__gen_demux__DOT__atop_inject 
                = (1U & (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                         >> 8U));
        }
    } else {
        if ((((~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                if (this->__PVT__gen_demux__DOT__aw_ready) {
                    this->__PVT__gen_demux__DOT__atop_inject 
                        = (1U & (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                 >> 8U));
                }
            }
        }
    }
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes 
        = ((0x3fffU & this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes) 
           | (0x1fc000U & this->__PVT__gen_demux__DOT__mst_b_chans));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[4U] 
        = ((0xffffU & this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[4U]) 
           | (0xffff0000U & this->__PVT__gen_demux__DOT__mst_r_chans[4U]));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[5U] 
        = ((0xffffU & this->__PVT__gen_demux__DOT__mst_r_chans[5U]) 
           | (0xffff0000U & this->__PVT__gen_demux__DOT__mst_r_chans[5U]));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[6U] 
        = ((0xffffU & this->__PVT__gen_demux__DOT__mst_r_chans[6U]) 
           | (0xff0000U & this->__PVT__gen_demux__DOT__mst_r_chans[6U]));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d 
        = ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(this->__PVT__gen_demux__DOT__mst_b_valids));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d 
        = ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(this->__PVT__gen_demux__DOT__mst_r_valids));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)(this->__PVT__gen_demux__DOT__slv_ar_ready)));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(this->__PVT__gen_demux__DOT__slv_ar_ready));
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)(this->__PVT__gen_demux__DOT__slv_aw_ready)));
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(this->__PVT__gen_demux__DOT__slv_aw_ready));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes 
        = ((5U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d) 
                     << 1U) | (0xfffffffeU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d)))));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes 
        = ((3U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes)) 
           | (4U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d)) 
                 | (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d) 
                     >> 1U) & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__rr_q))));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes 
        = ((5U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d) 
                     << 1U) | (0xfffffffeU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d)))));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes 
        = ((3U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes)) 
           | (4U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d)) 
                 | (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d) 
                     >> 1U) & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__rr_q))));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes)) 
           | (1U & (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes) 
                     >> 1U) | ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes) 
                               >> 2U))));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__rr_d 
        = (3U & ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                         >> 0x1dU) & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes)))
                  ? ((2U == (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__rr_q))
                      ? 0U : ((IData)(1U) + (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__rr_q)))
                  : (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__rr_q)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes) 
                     >> 1U)) | (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes) 
                                 >> 2U) & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__rr_q) 
                                           >> 1U))));
    this->__PVT__slv_resp_o[2U] = ((0xeffffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0x10000U & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes) 
                                                  << 0x10U)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes 
        = ((0x33U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes)) 
           | ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
              << 2U));
    this->__PVT__gen_demux__DOT__mst_b_readies = ((6U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_b_readies)) 
                                                  | (1U 
                                                     & (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes) 
                                                         >> 1U) 
                                                        & (~ (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))));
    this->__PVT__gen_demux__DOT__mst_b_readies = ((5U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_b_readies)) 
                                                  | (0xfffffffeU 
                                                     & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes) 
                                                        & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                           << 1U))));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes 
        = ((0x1fc07fU & this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes) 
           | (0x3f80U & (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? (this->__PVT__gen_demux__DOT__mst_b_chans 
                              >> 7U) : this->__PVT__gen_demux__DOT__mst_b_chans) 
                         << 7U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes)) 
           | (1U & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes) 
                     >> 1U) | ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes) 
                               >> 2U))));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__rr_d 
        = (3U & ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                         >> 0x19U) & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes)))
                  ? ((2U == (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__rr_q))
                      ? 0U : ((IData)(1U) + (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__rr_q)))
                  : (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__rr_q)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes) 
                     >> 1U)) | (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes) 
                                 >> 2U) & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__rr_q) 
                                           >> 1U))));
    this->__PVT__slv_resp_o[2U] = ((0xffeffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0x100U & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes) 
                                                << 8U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes 
        = ((0x33U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes)) 
           | ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
              << 2U));
    this->__PVT__gen_demux__DOT__mst_r_readies = ((6U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_r_readies)) 
                                                  | (1U 
                                                     & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes) 
                                                         >> 1U) 
                                                        & (~ (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))));
    this->__PVT__gen_demux__DOT__mst_r_readies = ((5U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_r_readies)) 
                                                  | (0xfffffffeU 
                                                     & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes) 
                                                        & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                           << 1U))));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[2U] 
        = ((0xffU & this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[2U]) 
           | (0xffffff00U & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                               ? ((this->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                                   << 0x18U) | (this->__PVT__gen_demux__DOT__mst_r_chans[2U] 
                                                >> 8U))
                               : this->__PVT__gen_demux__DOT__mst_r_chans[0U]) 
                             << 8U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[3U] 
        = ((0xffU & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                       ? ((this->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                           << 0x18U) | (this->__PVT__gen_demux__DOT__mst_r_chans[2U] 
                                        >> 8U)) : this->__PVT__gen_demux__DOT__mst_r_chans[0U]) 
                     >> 0x18U)) | (0xffffff00U & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                    ? 
                                                   ((this->__PVT__gen_demux__DOT__mst_r_chans[4U] 
                                                     << 0x18U) 
                                                    | (this->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                                                       >> 8U))
                                                    : 
                                                   this->__PVT__gen_demux__DOT__mst_r_chans[1U]) 
                                                  << 8U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[4U] 
        = ((0xffff0000U & this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[4U]) 
           | ((0xffU & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                          ? ((this->__PVT__gen_demux__DOT__mst_r_chans[4U] 
                              << 0x18U) | (this->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                                           >> 8U)) : 
                         this->__PVT__gen_demux__DOT__mst_r_chans[1U]) 
                        >> 0x18U)) | (0xff00U & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((this->__PVT__gen_demux__DOT__mst_r_chans[5U] 
                                                    << 0x18U) 
                                                   | (this->__PVT__gen_demux__DOT__mst_r_chans[4U] 
                                                      >> 8U))
                                                   : 
                                                  this->__PVT__gen_demux__DOT__mst_r_chans[2U]) 
                                                 << 8U))));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((5U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes) 
                     & (~ (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                    << 1U)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((3U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes) 
               & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
              << 2U));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes 
        = ((0x3cU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes)) 
           | ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
               ? (2U | (1U & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes) 
                              >> 4U))) : (1U & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes) 
                                                >> 2U))));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes 
        = ((0x1fff80U & this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes) 
           | (0x7fU & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? (this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes 
                           >> 0xeU) : (this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes 
                                       >> 7U))));
    this->__PVT__slv_resp_o[2U] = ((0xf01ffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0xfe00U & (this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes 
                                                 << 9U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((5U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes) 
                     & (~ (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                    << 1U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((3U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes) 
               & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
              << 2U));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes 
        = ((0x3cU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes)) 
           | ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
               ? (2U | (1U & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes) 
                              >> 4U))) : (1U & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes) 
                                                >> 2U))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:447
    this->__PVT__mst_reqs_o[0U] = 0U;
    this->__PVT__mst_reqs_o[1U] = 0U;
    this->__PVT__mst_reqs_o[2U] = 0U;
    this->__PVT__mst_reqs_o[3U] = 0U;
    this->__PVT__mst_reqs_o[4U] = 0U;
    this->__PVT__mst_reqs_o[5U] = 0U;
    this->__PVT__mst_reqs_o[6U] = 0U;
    this->__PVT__mst_reqs_o[7U] = 0U;
    this->__PVT__mst_reqs_o[8U] = 0U;
    this->__PVT__mst_reqs_o[9U] = 0U;
    this->__PVT__mst_reqs_o[0xaU] = 0U;
    this->__PVT__mst_reqs_o[0xbU] = 0U;
    this->__PVT__mst_reqs_o[0xcU] = 0U;
    this->__PVT__mst_reqs_o[0xdU] = 0U;
    this->__PVT__mst_reqs_o[0xeU] = 0U;
    this->__PVT__mst_reqs_o[0xfU] = 0U;
    this->__PVT__mst_reqs_o[0x10U] = 0U;
    this->__PVT__mst_reqs_o[0x11U] = 0U;
    this->__PVT__mst_reqs_o[0x12U] = 0U;
    this->__PVT__mst_reqs_o[0x13U] = 0U;
    this->__PVT__mst_reqs_o[0x14U] = 0U;
    this->__Vlvbound1[0U] = ((this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                           >> 2U));
    this->__Vlvbound1[1U] = ((this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                           >> 2U));
    this->__Vlvbound1[2U] = (0xffU & (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                      >> 2U));
    this->__PVT__mst_reqs_o[4U] = ((0x1ffffU & this->__PVT__mst_reqs_o[4U]) 
                                   | (0xfffe0000U & 
                                      (this->__Vlvbound1[0U] 
                                       << 0x11U)));
    this->__PVT__mst_reqs_o[5U] = ((0x1ffffU & (this->__Vlvbound1[0U] 
                                                >> 0xfU)) 
                                   | (0xfffe0000U & 
                                      (this->__Vlvbound1[1U] 
                                       << 0x11U)));
    this->__PVT__mst_reqs_o[6U] = ((0xfe000000U & this->__PVT__mst_reqs_o[6U]) 
                                   | ((0x1ffffU & (
                                                   this->__Vlvbound1[1U] 
                                                   >> 0xfU)) 
                                      | (0xfffe0000U 
                                         & (this->__Vlvbound1[2U] 
                                            << 0x11U))));
    this->__PVT__mst_reqs_o[4U] = (0xfffeffffU & this->__PVT__mst_reqs_o[4U]);
    if (((IData)(this->__PVT__gen_demux__DOT__aw_valid) 
         & (0U == (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        this->__PVT__mst_reqs_o[4U] = (0x10000U | this->__PVT__mst_reqs_o[4U]);
    }
    this->__Vlvbound4[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                              << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                        >> 0x1fU));
    this->__Vlvbound4[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                              << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                        >> 0x1fU));
    this->__Vlvbound4[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
                                        << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                                  >> 0x1fU)));
    this->__PVT__mst_reqs_o[2U] = ((0x3fU & this->__PVT__mst_reqs_o[2U]) 
                                   | (0xffffffc0U & 
                                      (this->__Vlvbound4[0U] 
                                       << 6U)));
    this->__PVT__mst_reqs_o[3U] = ((0x3fU & (this->__Vlvbound4[0U] 
                                             >> 0x1aU)) 
                                   | (0xffffffc0U & 
                                      (this->__Vlvbound4[1U] 
                                       << 6U)));
    this->__PVT__mst_reqs_o[4U] = ((0xffff0000U & this->__PVT__mst_reqs_o[4U]) 
                                   | ((0x3fU & (this->__Vlvbound4[1U] 
                                                >> 0x1aU)) 
                                      | (0xffffffc0U 
                                         & (this->__Vlvbound4[2U] 
                                            << 6U))));
    this->__PVT__mst_reqs_o[2U] = (0xffffffdfU & this->__PVT__mst_reqs_o[2U]);
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__Vlvbound6 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                   >> 0x1eU));
        this->__PVT__mst_reqs_o[2U] = ((0xffffffdfU 
                                        & this->__PVT__mst_reqs_o[2U]) 
                                       | (0xffffffe0U 
                                          & ((IData)(this->__Vlvbound6) 
                                             << 5U)));
    }
    this->__Vlvbound7 = (1U & (IData)(this->__PVT__gen_demux__DOT__mst_b_readies));
    this->__PVT__mst_reqs_o[2U] = ((0xffffffefU & this->__PVT__mst_reqs_o[2U]) 
                                   | (0xfffffff0U & 
                                      ((IData)(this->__Vlvbound7) 
                                       << 4U)));
    this->__Vlvbound8[0U] = ((this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                           >> 2U));
    this->__Vlvbound8[1U] = ((this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                           >> 2U));
    this->__Vlvbound8[2U] = (3U & (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                   >> 2U));
    this->__PVT__mst_reqs_o[0U] = ((3U & this->__PVT__mst_reqs_o[0U]) 
                                   | (0xfffffffcU & 
                                      (this->__Vlvbound8[0U] 
                                       << 2U)));
    this->__PVT__mst_reqs_o[1U] = ((3U & (this->__Vlvbound8[0U] 
                                          >> 0x1eU)) 
                                   | (0xfffffffcU & 
                                      (this->__Vlvbound8[1U] 
                                       << 2U)));
    this->__PVT__mst_reqs_o[2U] = ((0xfffffff0U & this->__PVT__mst_reqs_o[2U]) 
                                   | ((3U & (this->__Vlvbound8[1U] 
                                             >> 0x1eU)) 
                                      | (0xfffffffcU 
                                         & (this->__Vlvbound8[2U] 
                                            << 2U))));
    this->__PVT__mst_reqs_o[0U] = (0xfffffffdU & this->__PVT__mst_reqs_o[0U]);
    if (((IData)(this->__PVT__gen_demux__DOT__ar_valid) 
         & (0U == (3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        this->__PVT__mst_reqs_o[0U] = (2U | this->__PVT__mst_reqs_o[0U]);
    }
    this->__Vlvbound11 = (1U & (IData)(this->__PVT__gen_demux__DOT__mst_r_readies));
    this->__PVT__mst_reqs_o[0U] = ((0xfffffffeU & this->__PVT__mst_reqs_o[0U]) 
                                   | (IData)(this->__Vlvbound11));
    this->__Vlvbound1[0U] = ((this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                           >> 2U));
    this->__Vlvbound1[1U] = ((this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                           >> 2U));
    this->__Vlvbound1[2U] = (0xffU & (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                      >> 2U));
    this->__PVT__mst_reqs_o[0xbU] = ((0x3ffU & this->__PVT__mst_reqs_o[0xbU]) 
                                     | (0xfffffc00U 
                                        & (this->__Vlvbound1[0U] 
                                           << 0xaU)));
    this->__PVT__mst_reqs_o[0xcU] = ((0x3ffU & (this->__Vlvbound1[0U] 
                                                >> 0x16U)) 
                                     | (0xfffffc00U 
                                        & (this->__Vlvbound1[1U] 
                                           << 0xaU)));
    this->__PVT__mst_reqs_o[0xdU] = ((0xfffc0000U & 
                                      this->__PVT__mst_reqs_o[0xdU]) 
                                     | ((0x3ffU & (
                                                   this->__Vlvbound1[1U] 
                                                   >> 0x16U)) 
                                        | (0xfffffc00U 
                                           & (this->__Vlvbound1[2U] 
                                              << 0xaU))));
    this->__PVT__mst_reqs_o[0xbU] = (0xfffffdffU & 
                                     this->__PVT__mst_reqs_o[0xbU]);
    if (((IData)(this->__PVT__gen_demux__DOT__aw_valid) 
         & (1U == (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        this->__PVT__mst_reqs_o[0xbU] = (0x200U | this->__PVT__mst_reqs_o[0xbU]);
    }
    this->__Vlvbound4[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                              << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                        >> 0x1fU));
    this->__Vlvbound4[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                              << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                        >> 0x1fU));
    this->__Vlvbound4[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
                                        << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                                  >> 0x1fU)));
    this->__PVT__mst_reqs_o[8U] = ((0x7fffffffU & this->__PVT__mst_reqs_o[8U]) 
                                   | (0x80000000U & 
                                      (this->__Vlvbound4[0U] 
                                       << 0x1fU)));
    this->__PVT__mst_reqs_o[9U] = ((0x7fffffffU & (
                                                   this->__Vlvbound4[0U] 
                                                   >> 1U)) 
                                   | (0x80000000U & 
                                      (this->__Vlvbound4[1U] 
                                       << 0x1fU)));
    this->__PVT__mst_reqs_o[0xaU] = ((0x7fffffffU & 
                                      (this->__Vlvbound4[1U] 
                                       >> 1U)) | (0x80000000U 
                                                  & (this->__Vlvbound4[2U] 
                                                     << 0x1fU)));
    this->__PVT__mst_reqs_o[0xbU] = ((0xfffffe00U & 
                                      this->__PVT__mst_reqs_o[0xbU]) 
                                     | (0x7fffffffU 
                                        & (this->__Vlvbound4[2U] 
                                           >> 1U)));
    this->__PVT__mst_reqs_o[8U] = (0xbfffffffU & this->__PVT__mst_reqs_o[8U]);
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__Vlvbound6 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                   >> 0x1eU));
        this->__PVT__mst_reqs_o[8U] = ((0xbfffffffU 
                                        & this->__PVT__mst_reqs_o[8U]) 
                                       | (0xc0000000U 
                                          & ((IData)(this->__Vlvbound6) 
                                             << 0x1eU)));
    }
    this->__Vlvbound7 = (1U & ((IData)(this->__PVT__gen_demux__DOT__mst_b_readies) 
                               >> 1U));
    this->__PVT__mst_reqs_o[8U] = ((0xdfffffffU & this->__PVT__mst_reqs_o[8U]) 
                                   | (0xe0000000U & 
                                      ((IData)(this->__Vlvbound7) 
                                       << 0x1dU)));
    this->__Vlvbound8[0U] = ((this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                           >> 2U));
    this->__Vlvbound8[1U] = ((this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                           >> 2U));
    this->__Vlvbound8[2U] = (3U & (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                   >> 2U));
    this->__PVT__mst_reqs_o[6U] = ((0x7ffffffU & this->__PVT__mst_reqs_o[6U]) 
                                   | (0xf8000000U & 
                                      (this->__Vlvbound8[0U] 
                                       << 0x1bU)));
    this->__PVT__mst_reqs_o[7U] = ((0x7ffffffU & (this->__Vlvbound8[0U] 
                                                  >> 5U)) 
                                   | (0xf8000000U & 
                                      (this->__Vlvbound8[1U] 
                                       << 0x1bU)));
    this->__PVT__mst_reqs_o[8U] = ((0xe0000000U & this->__PVT__mst_reqs_o[8U]) 
                                   | ((0x7ffffffU & 
                                       (this->__Vlvbound8[1U] 
                                        >> 5U)) | (0xf8000000U 
                                                   & (this->__Vlvbound8[2U] 
                                                      << 0x1bU))));
    this->__PVT__mst_reqs_o[6U] = (0xfbffffffU & this->__PVT__mst_reqs_o[6U]);
    if (((IData)(this->__PVT__gen_demux__DOT__ar_valid) 
         & (1U == (3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        this->__PVT__mst_reqs_o[6U] = (0x4000000U | 
                                       this->__PVT__mst_reqs_o[6U]);
    }
    this->__Vlvbound11 = (1U & ((IData)(this->__PVT__gen_demux__DOT__mst_r_readies) 
                                >> 1U));
    this->__PVT__mst_reqs_o[6U] = ((0xfdffffffU & this->__PVT__mst_reqs_o[6U]) 
                                   | (0xfe000000U & 
                                      ((IData)(this->__Vlvbound11) 
                                       << 0x19U)));
    this->__Vlvbound1[0U] = ((this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                           >> 2U));
    this->__Vlvbound1[1U] = ((this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                           >> 2U));
    this->__Vlvbound1[2U] = (0xffU & (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                      >> 2U));
    this->__PVT__mst_reqs_o[0x12U] = ((7U & this->__PVT__mst_reqs_o[0x12U]) 
                                      | (0xfffffff8U 
                                         & (this->__Vlvbound1[0U] 
                                            << 3U)));
    this->__PVT__mst_reqs_o[0x13U] = ((7U & (this->__Vlvbound1[0U] 
                                             >> 0x1dU)) 
                                      | (0xfffffff8U 
                                         & (this->__Vlvbound1[1U] 
                                            << 3U)));
    this->__PVT__mst_reqs_o[0x14U] = ((7U & (this->__Vlvbound1[1U] 
                                             >> 0x1dU)) 
                                      | (0xfffffff8U 
                                         & (this->__Vlvbound1[2U] 
                                            << 3U)));
    this->__PVT__mst_reqs_o[0x12U] = (0xfffffffbU & 
                                      this->__PVT__mst_reqs_o[0x12U]);
    if (((IData)(this->__PVT__gen_demux__DOT__aw_valid) 
         & (2U == (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        this->__PVT__mst_reqs_o[0x12U] = (4U | this->__PVT__mst_reqs_o[0x12U]);
    }
    this->__Vlvbound4[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                              << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                        >> 0x1fU));
    this->__Vlvbound4[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                              << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                        >> 0x1fU));
    this->__Vlvbound4[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
                                        << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xaU] 
                                                  >> 0x1fU)));
    this->__PVT__mst_reqs_o[0xfU] = ((0xffffffU & this->__PVT__mst_reqs_o[0xfU]) 
                                     | (0xff000000U 
                                        & (this->__Vlvbound4[0U] 
                                           << 0x18U)));
    this->__PVT__mst_reqs_o[0x10U] = ((0xffffffU & 
                                       (this->__Vlvbound4[0U] 
                                        >> 8U)) | (0xff000000U 
                                                   & (this->__Vlvbound4[1U] 
                                                      << 0x18U)));
    this->__PVT__mst_reqs_o[0x11U] = ((0xffffffU & 
                                       (this->__Vlvbound4[1U] 
                                        >> 8U)) | (0xff000000U 
                                                   & (this->__Vlvbound4[2U] 
                                                      << 0x18U)));
    this->__PVT__mst_reqs_o[0x12U] = ((0xfffffffcU 
                                       & this->__PVT__mst_reqs_o[0x12U]) 
                                      | (0xffffffU 
                                         & (this->__Vlvbound4[2U] 
                                            >> 8U)));
    this->__PVT__mst_reqs_o[0xfU] = (0xff7fffffU & 
                                     this->__PVT__mst_reqs_o[0xfU]);
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__Vlvbound6 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                   >> 0x1eU));
        this->__PVT__mst_reqs_o[0xfU] = ((0xff7fffffU 
                                          & this->__PVT__mst_reqs_o[0xfU]) 
                                         | (0xff800000U 
                                            & ((IData)(this->__Vlvbound6) 
                                               << 0x17U)));
    }
    this->__Vlvbound7 = (1U & ((IData)(this->__PVT__gen_demux__DOT__mst_b_readies) 
                               >> 2U));
    this->__PVT__mst_reqs_o[0xfU] = ((0xffbfffffU & 
                                      this->__PVT__mst_reqs_o[0xfU]) 
                                     | (0xffc00000U 
                                        & ((IData)(this->__Vlvbound7) 
                                           << 0x16U)));
    this->__Vlvbound8[0U] = ((this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                           >> 2U));
    this->__Vlvbound8[1U] = ((this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                           >> 2U));
    this->__Vlvbound8[2U] = (3U & (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                   >> 2U));
    this->__PVT__mst_reqs_o[0xdU] = ((0xfffffU & this->__PVT__mst_reqs_o[0xdU]) 
                                     | (0xfff00000U 
                                        & (this->__Vlvbound8[0U] 
                                           << 0x14U)));
    this->__PVT__mst_reqs_o[0xeU] = ((0xfffffU & (this->__Vlvbound8[0U] 
                                                  >> 0xcU)) 
                                     | (0xfff00000U 
                                        & (this->__Vlvbound8[1U] 
                                           << 0x14U)));
    this->__PVT__mst_reqs_o[0xfU] = ((0xffc00000U & 
                                      this->__PVT__mst_reqs_o[0xfU]) 
                                     | ((0xfffffU & 
                                         (this->__Vlvbound8[1U] 
                                          >> 0xcU)) 
                                        | (0xfff00000U 
                                           & (this->__Vlvbound8[2U] 
                                              << 0x14U))));
    this->__PVT__mst_reqs_o[0xdU] = (0xfff7ffffU & 
                                     this->__PVT__mst_reqs_o[0xdU]);
    if (((IData)(this->__PVT__gen_demux__DOT__ar_valid) 
         & (2U == (3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        this->__PVT__mst_reqs_o[0xdU] = (0x80000U | 
                                         this->__PVT__mst_reqs_o[0xdU]);
    }
    this->__Vlvbound11 = (1U & ((IData)(this->__PVT__gen_demux__DOT__mst_r_readies) 
                                >> 2U));
    this->__PVT__mst_reqs_o[0xdU] = ((0xfffbffffU & 
                                      this->__PVT__mst_reqs_o[0xdU]) 
                                     | (0xfffc0000U 
                                        & ((IData)(this->__Vlvbound11) 
                                           << 0x12U)));
    __Vtemp158[1U] = ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                       ? ((this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[6U] 
                           << 0x10U) | (this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[5U] 
                                        >> 0x10U)) : 
                      ((this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[4U] 
                        << 0x18U) | (this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[3U] 
                                     >> 8U)));
    __Vtemp158[2U] = (0xffU & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                ? (this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[6U] 
                                   >> 0x10U) : ((this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[5U] 
                                                 << 0x18U) 
                                                | (this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[4U] 
                                                   >> 8U))));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[0U] 
        = ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[5U] 
                << 0x10U) | (this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[4U] 
                             >> 0x10U)) : ((this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[3U] 
                                            << 0x18U) 
                                           | (this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[2U] 
                                              >> 8U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[1U] 
        = __Vtemp158[1U];
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[2U] 
        = ((0xffffff00U & this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[2U]) 
           | __Vtemp158[2U]);
    this->__PVT__slv_resp_o[0U] = this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[0U];
    this->__PVT__slv_resp_o[1U] = this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[1U];
    this->__PVT__slv_resp_o[2U] = ((0xfff00U & this->__PVT__slv_resp_o[2U]) 
                                   | (0xffU & this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[2U]));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi3::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__11(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi3::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__11\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:111
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:111
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:129
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if ((1U & (~ (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock)))) {
            this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                = this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n;
        }
    } else {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/rr_arb_tree.sv:147
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__rr_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__rr_d)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/rr_arb_tree.sv:147
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__rr_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__rr_d)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:111
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:385
    this->__PVT__gen_demux__DOT__lock_ar_valid_q = 
        ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
         & ((IData)(this->__PVT__gen_demux__DOT__load_ar_lock)
             ? (IData)(this->__PVT__gen_demux__DOT__lock_ar_valid_d)
             : (IData)(this->__PVT__gen_demux__DOT__lock_ar_valid_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:220
    this->__PVT__gen_demux__DOT__lock_aw_valid_q = 
        ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
         & ((IData)(this->__PVT__gen_demux__DOT__load_aw_lock)
             ? (IData)(this->__PVT__gen_demux__DOT__lock_aw_valid_d)
             : (IData)(this->__PVT__gen_demux__DOT__lock_aw_valid_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:49
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
    } else {
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:49
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
    } else {
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/rr_arb_tree.sv:130
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/rr_arb_tree.sv:130
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:68
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
    } else {
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:68
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
    } else {
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/rr_arb_tree.sv:104
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
           & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes) 
              & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                    >> 0x1dU))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/rr_arb_tree.sv:104
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
           & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes) 
              & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                    >> 0x19U))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:61
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
    } else {
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:61
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
    } else {
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o 
        = (3U & ((0x13U >= (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q) 
                                     << 1U))) ? (this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q) 
                                                     << 1U)))
                  : 0U));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o 
        = (1U & ((~ (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    this->__PVT__gen_demux__DOT__slv_ar_valid = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o 
        = (1U & ((~ (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    this->__PVT__gen_demux__DOT__slv_aw_valid = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:42
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[0U];
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[1U];
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[2U];
        }
    } else {
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:42
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[0U];
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[1U];
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[2U];
        }
    } else {
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    this->__PVT__slv_resp_o[2U] = ((0xbffffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0xfffc0000U & 
                                      ((IData)(this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o) 
                                       << 0x12U)));
    this->__PVT__slv_resp_o[2U] = ((0x7ffffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0xfff80000U & 
                                      ((IData)(this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o) 
                                       << 0x13U)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi3::_multiclk__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__20(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi3::_multiclk__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__20\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                    >> 0x1dU)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                    >> 0x19U)));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[0U] 
        = ((0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                            << 0x18U) | (0xfffffcU 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
                                            >> 8U)))) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error)
               ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__idx_o)));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[1U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                  >> 8U)) | (0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                             << 0x18U) 
                                            | (0xfffffcU 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                                  >> 8U)))));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[2U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                  >> 8U)) | (0x3fcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                        << 0x18U) | 
                                       (0xfffffcU & 
                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                         >> 8U)))));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[0U] 
        = ((0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                            << 7U) | (0x7cU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                               >> 0x19U)))) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error)
               ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__idx_o)));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[1U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                  >> 0x19U)) | (0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[7U] 
                                                     >> 0x19U)))));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[2U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                  >> 0x19U)) | (0xcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[9U] 
                                         << 7U) | (0x7cU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                                      >> 0x19U)))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi3::_multiclk__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__23(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi3::_multiclk__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__23\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xbU] 
            >> 9U) & (IData)(this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
            >> 0x1aU) & (IData)(this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
}

void Vrvfpgasim_axi_demux__pi3::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__6(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi3::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__6\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
            >> 2U) & (IData)(this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
            >> 0x13U) & (IData)(this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                    >> 0x16U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                    >> 0x12U)));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[0U] 
        = ((0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                            << 0x1fU) | (0x7ffffffcU 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
                                            >> 1U)))) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error)
               ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__idx_o)));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[1U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                  >> 1U)) | (0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                                             << 0x1fU) 
                                            | (0x7ffffffcU 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                                  >> 1U)))));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[2U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                  >> 1U)) | (0x3fcU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                                       >> 1U)));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[0U] 
        = ((0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                            << 0xeU) | (0x3ffcU & (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                                   >> 0x12U)))) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error)
               ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__idx_o)));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[1U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                  >> 0x12U)) | (0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                << 0xeU) 
                                               | (0x3ffcU 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                                     >> 0x12U)))));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[2U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                  >> 0x12U)) | (0xcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                         << 0xeU) | 
                                        (0x3ffcU & 
                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                          >> 0x12U)))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:168
    this->__PVT__gen_demux__DOT__aw_push = 0U;
    if ((1U & (~ (IData)(this->__PVT__gen_demux__DOT__lock_aw_valid_q)))) {
        if ((((~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                this->__PVT__gen_demux__DOT__aw_push = 1U;
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:168
    this->__PVT__gen_demux__DOT__aw_valid = 0U;
    if (this->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        this->__PVT__gen_demux__DOT__aw_valid = 1U;
    } else {
        if ((((~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                this->__PVT__gen_demux__DOT__aw_valid = 1U;
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:339
    this->__PVT__gen_demux__DOT__ar_valid = 0U;
    if (this->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        this->__PVT__gen_demux__DOT__ar_valid = 1U;
    } else {
        if ((1U & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                this->__PVT__gen_demux__DOT__ar_valid = 1U;
            }
        }
    }
    this->__PVT__gen_demux__DOT__mst_b_readies = ((3U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_b_readies)) 
                                                  | (4U 
                                                     & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes)));
    this->__PVT__gen_demux__DOT__mst_r_readies = ((3U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_r_readies)) 
                                                  | (4U 
                                                     & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n 
        = this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n 
            = (0xfU & ((9U == (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q))
                        ? 0U : ((IData)(1U) + (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n 
        = this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->gen_demux__DOT__i_w_fifo__DOT____Vlvbound1 
            = (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]);
        if ((0x13U >= (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                << 1U)))) {
            this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n 
                = (((~ ((IData)(3U) << (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                                 << 1U)))) 
                    & this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n) 
                   | ((IData)(this->gen_demux__DOT__i_w_fifo__DOT____Vlvbound1) 
                      << (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                   << 1U))));
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi3::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__9(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi3::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__9\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    VL_SIGW(__Vtemp238,95,0,3);
    // Body
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:447
    this->__PVT__gen_demux__DOT__w_fifo_pop = 0U;
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__PVT__gen_demux__DOT__w_fifo_pop = (1U 
                                                   & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                        >> 0x17U) 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U] 
                                                          >> 9U)) 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                         >> 0x19U)));
    }
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__PVT__gen_demux__DOT__w_fifo_pop = (1U 
                                                   & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                        >> 0x17U) 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
                                                          >> 0x1dU)) 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                         >> 0x19U)));
    }
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__PVT__gen_demux__DOT__w_fifo_pop = (1U 
                                                   & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                        >> 0x17U) 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x17U] 
                                                          >> 0x11U)) 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                         >> 0x19U)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:447
    this->__PVT__gen_demux__DOT__slv_w_ready = 0U;
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__PVT__gen_demux__DOT__slv_w_ready = 
            (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U] 
                   >> 9U));
    }
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__PVT__gen_demux__DOT__slv_w_ready = 
            (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
                   >> 0x1dU));
    }
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__PVT__gen_demux__DOT__slv_w_ready = 
            (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x17U] 
                   >> 0x11U));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:447
    this->__PVT__gen_demux__DOT__ar_ready = 0U;
    if (((IData)(this->__PVT__gen_demux__DOT__ar_valid) 
         & (0U == (3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        this->__PVT__gen_demux__DOT__ar_ready = (1U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U] 
                                                    >> 0xaU));
    }
    if (((IData)(this->__PVT__gen_demux__DOT__ar_valid) 
         & (1U == (3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        this->__PVT__gen_demux__DOT__ar_ready = (1U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
                                                    >> 0x1eU));
    }
    if (((IData)(this->__PVT__gen_demux__DOT__ar_valid) 
         & (2U == (3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        this->__PVT__gen_demux__DOT__ar_ready = (1U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x17U] 
                                                    >> 0x12U));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:447
    this->__PVT__gen_demux__DOT__aw_ready = 0U;
    if (((IData)(this->__PVT__gen_demux__DOT__aw_valid) 
         & (0U == (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        this->__PVT__gen_demux__DOT__aw_ready = (1U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U] 
                                                    >> 0xbU));
    }
    if (((IData)(this->__PVT__gen_demux__DOT__aw_valid) 
         & (1U == (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        this->__PVT__gen_demux__DOT__aw_ready = (1U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
                                                    >> 0x1fU));
    }
    if (((IData)(this->__PVT__gen_demux__DOT__aw_valid) 
         & (2U == (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        this->__PVT__gen_demux__DOT__aw_ready = (1U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x17U] 
                                                    >> 0x13U));
    }
    this->__PVT__gen_demux__DOT__mst_b_chans = ((0x1fff80U 
                                                 & this->__PVT__gen_demux__DOT__mst_b_chans) 
                                                | (0x7fU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x13U] 
                                                       << 0x1fU) 
                                                      | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U] 
                                                         >> 1U))));
    this->__PVT__gen_demux__DOT__mst_b_chans = ((0x1fc07fU 
                                                 & this->__PVT__gen_demux__DOT__mst_b_chans) 
                                                | (0x3f80U 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x15U] 
                                                       << 0x12U) 
                                                      | (0x3ff80U 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
                                                            >> 0xeU)))));
    this->__PVT__gen_demux__DOT__mst_b_chans = ((0x3fffU 
                                                 & this->__PVT__gen_demux__DOT__mst_b_chans) 
                                                | (0x1fc000U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x17U] 
                                                      << 5U)));
    this->__PVT__gen_demux__DOT__mst_r_chans[0U] = 
        ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x10U] 
          << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
                    >> 0x18U));
    this->__PVT__gen_demux__DOT__mst_r_chans[1U] = 
        ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x11U] 
          << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x10U] 
                    >> 0x18U));
    this->__PVT__gen_demux__DOT__mst_r_chans[2U] = 
        ((0xffffff00U & this->__PVT__gen_demux__DOT__mst_r_chans[2U]) 
         | (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U] 
                      << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x11U] 
                                >> 0x18U))));
    this->__PVT__gen_demux__DOT__mst_r_chans[2U] = 
        ((0xffU & this->__PVT__gen_demux__DOT__mst_r_chans[2U]) 
         | (0xffffff00U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x13U] 
                            << 0x1cU) | (0xfffff00U 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U] 
                                            >> 4U)))));
    this->__PVT__gen_demux__DOT__mst_r_chans[3U] = 
        ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x13U] 
                   >> 4U)) | (0xffffff00U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
                                              << 0x1cU) 
                                             | (0xfffff00U 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x13U] 
                                                   >> 4U)))));
    this->__PVT__gen_demux__DOT__mst_r_chans[4U] = 
        ((0xffff0000U & this->__PVT__gen_demux__DOT__mst_r_chans[4U]) 
         | ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
                      >> 4U)) | (0xff00U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x15U] 
                                             << 0x1cU) 
                                            | (0xfffff00U 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
                                                  >> 4U))))));
    this->__PVT__gen_demux__DOT__mst_r_chans[4U] = 
        ((0xffffU & this->__PVT__gen_demux__DOT__mst_r_chans[4U]) 
         | (0xffff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x15U] 
                           << 0x10U)));
    this->__PVT__gen_demux__DOT__mst_r_chans[5U] = 
        ((0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x15U] 
                     >> 0x10U)) | (0xffff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x16U] 
                                                  << 0x10U)));
    this->__PVT__gen_demux__DOT__mst_r_chans[6U] = 
        ((0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x16U] 
                     >> 0x10U)) | (0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x17U] 
                                                << 0x10U)));
    this->__PVT__gen_demux__DOT__mst_b_valids = ((6U 
                                                  & (IData)(this->__PVT__gen_demux__DOT__mst_b_valids)) 
                                                 | (1U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U] 
                                                       >> 8U)));
    this->__PVT__gen_demux__DOT__mst_b_valids = ((5U 
                                                  & (IData)(this->__PVT__gen_demux__DOT__mst_b_valids)) 
                                                 | (2U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
                                                       >> 0x1bU)));
    this->__PVT__gen_demux__DOT__mst_b_valids = ((3U 
                                                  & (IData)(this->__PVT__gen_demux__DOT__mst_b_valids)) 
                                                 | (4U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x17U] 
                                                       >> 0xeU)));
    this->__PVT__gen_demux__DOT__mst_r_valids = ((6U 
                                                  & (IData)(this->__PVT__gen_demux__DOT__mst_r_valids)) 
                                                 | (1U 
                                                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U]));
    this->__PVT__gen_demux__DOT__mst_r_valids = ((5U 
                                                  & (IData)(this->__PVT__gen_demux__DOT__mst_r_valids)) 
                                                 | (2U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
                                                       >> 0x13U)));
    this->__PVT__gen_demux__DOT__mst_r_valids = ((3U 
                                                  & (IData)(this->__PVT__gen_demux__DOT__mst_r_valids)) 
                                                 | (4U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x17U] 
                                                       >> 6U)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n 
        = this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__gen_demux__DOT__w_fifo_pop) 
         & (0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n 
            = (0xfU & ((9U == (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n))
                        ? 0U : ((IData)(1U) + (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
        = this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__gen_demux__DOT__w_fifo_pop) 
         & (0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__gen_demux__DOT__aw_push) 
           & (IData)(this->__PVT__gen_demux__DOT__w_fifo_pop)) 
          & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n 
            = this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    this->__PVT__slv_resp_o[2U] = ((0xdffffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0xfffe0000U & 
                                      ((IData)(this->__PVT__gen_demux__DOT__slv_w_ready) 
                                       << 0x11U)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:339
    this->__PVT__gen_demux__DOT__lock_ar_valid_d = this->__PVT__gen_demux__DOT__lock_ar_valid_q;
    if (this->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        if (this->__PVT__gen_demux__DOT__ar_ready) {
            this->__PVT__gen_demux__DOT__lock_ar_valid_d = 0U;
        }
    } else {
        if ((1U & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(this->__PVT__gen_demux__DOT__ar_ready)))) {
                    this->__PVT__gen_demux__DOT__lock_ar_valid_d = 1U;
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:339
    this->__PVT__gen_demux__DOT__load_ar_lock = 0U;
    if (this->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        if (this->__PVT__gen_demux__DOT__ar_ready) {
            this->__PVT__gen_demux__DOT__load_ar_lock = 1U;
        }
    } else {
        if ((1U & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(this->__PVT__gen_demux__DOT__ar_ready)))) {
                    this->__PVT__gen_demux__DOT__load_ar_lock = 1U;
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:339
    this->__PVT__gen_demux__DOT__slv_ar_ready = 0U;
    if (this->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        if (this->__PVT__gen_demux__DOT__ar_ready) {
            this->__PVT__gen_demux__DOT__slv_ar_ready = 1U;
        }
    } else {
        if ((1U & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                if (this->__PVT__gen_demux__DOT__ar_ready) {
                    this->__PVT__gen_demux__DOT__slv_ar_ready = 1U;
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:339
    this->__PVT__gen_demux__DOT__ar_push = 0U;
    if (this->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        if (this->__PVT__gen_demux__DOT__ar_ready) {
            this->__PVT__gen_demux__DOT__ar_push = 1U;
        }
    } else {
        if ((1U & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_ar_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
                if (this->__PVT__gen_demux__DOT__ar_ready) {
                    this->__PVT__gen_demux__DOT__ar_push = 1U;
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:168
    this->__PVT__gen_demux__DOT__lock_aw_valid_d = this->__PVT__gen_demux__DOT__lock_aw_valid_q;
    if (this->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        if (this->__PVT__gen_demux__DOT__aw_ready) {
            this->__PVT__gen_demux__DOT__lock_aw_valid_d = 0U;
        }
    } else {
        if ((((~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(this->__PVT__gen_demux__DOT__aw_ready)))) {
                    this->__PVT__gen_demux__DOT__lock_aw_valid_d = 1U;
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:168
    this->__PVT__gen_demux__DOT__load_aw_lock = 0U;
    if (this->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        if (this->__PVT__gen_demux__DOT__aw_ready) {
            this->__PVT__gen_demux__DOT__load_aw_lock = 1U;
        }
    } else {
        if ((((~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                if ((1U & (~ (IData)(this->__PVT__gen_demux__DOT__aw_ready)))) {
                    this->__PVT__gen_demux__DOT__load_aw_lock = 1U;
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:168
    this->__PVT__gen_demux__DOT__slv_aw_ready = 0U;
    if (this->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        if (this->__PVT__gen_demux__DOT__aw_ready) {
            this->__PVT__gen_demux__DOT__slv_aw_ready = 1U;
        }
    } else {
        if ((((~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                if (this->__PVT__gen_demux__DOT__aw_ready) {
                    this->__PVT__gen_demux__DOT__slv_aw_ready = 1U;
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:168
    this->__PVT__gen_demux__DOT__atop_inject = 0U;
    if (this->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        if (this->__PVT__gen_demux__DOT__aw_ready) {
            this->__PVT__gen_demux__DOT__atop_inject 
                = (1U & (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                         >> 8U));
        }
    } else {
        if ((((~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(this->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                if (this->__PVT__gen_demux__DOT__aw_ready) {
                    this->__PVT__gen_demux__DOT__atop_inject 
                        = (1U & (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                 >> 8U));
                }
            }
        }
    }
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes 
        = ((0x3fffU & this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes) 
           | (0x1fc000U & this->__PVT__gen_demux__DOT__mst_b_chans));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[4U] 
        = ((0xffffU & this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[4U]) 
           | (0xffff0000U & this->__PVT__gen_demux__DOT__mst_r_chans[4U]));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[5U] 
        = ((0xffffU & this->__PVT__gen_demux__DOT__mst_r_chans[5U]) 
           | (0xffff0000U & this->__PVT__gen_demux__DOT__mst_r_chans[5U]));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[6U] 
        = ((0xffffU & this->__PVT__gen_demux__DOT__mst_r_chans[6U]) 
           | (0xff0000U & this->__PVT__gen_demux__DOT__mst_r_chans[6U]));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d 
        = ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(this->__PVT__gen_demux__DOT__mst_b_valids));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d 
        = ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(this->__PVT__gen_demux__DOT__mst_r_valids));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)(this->__PVT__gen_demux__DOT__slv_ar_ready)));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(this->__PVT__gen_demux__DOT__slv_ar_ready));
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (IData)(this->__PVT__gen_demux__DOT__slv_aw_ready)));
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(this->__PVT__gen_demux__DOT__slv_aw_ready));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes 
        = ((5U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d) 
                     << 1U) | (0xfffffffeU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d)))));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes 
        = ((3U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes)) 
           | (4U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d)) 
                 | (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d) 
                     >> 1U) & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__rr_q))));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes 
        = ((5U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d) 
                     << 1U) | (0xfffffffeU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d)))));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes 
        = ((3U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes)) 
           | (4U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d)) 
                 | (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d) 
                     >> 1U) & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__rr_q))));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes)) 
           | (1U & (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes) 
                     >> 1U) | ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes) 
                               >> 2U))));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__rr_d 
        = (3U & ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                         >> 0x16U) & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes)))
                  ? ((2U == (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__rr_q))
                      ? 0U : ((IData)(1U) + (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__rr_q)))
                  : (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__rr_q)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes) 
                     >> 1U)) | (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes) 
                                 >> 2U) & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__rr_q) 
                                           >> 1U))));
    this->__PVT__slv_resp_o[2U] = ((0xeffffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0x10000U & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes) 
                                                  << 0x10U)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes 
        = ((0x33U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes)) 
           | ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
              << 2U));
    this->__PVT__gen_demux__DOT__mst_b_readies = ((6U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_b_readies)) 
                                                  | (1U 
                                                     & (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes) 
                                                         >> 1U) 
                                                        & (~ (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))));
    this->__PVT__gen_demux__DOT__mst_b_readies = ((5U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_b_readies)) 
                                                  | (0xfffffffeU 
                                                     & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes) 
                                                        & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                           << 1U))));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes 
        = ((0x1fc07fU & this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes) 
           | (0x3f80U & (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? (this->__PVT__gen_demux__DOT__mst_b_chans 
                              >> 7U) : this->__PVT__gen_demux__DOT__mst_b_chans) 
                         << 7U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes)) 
           | (1U & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes) 
                     >> 1U) | ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes) 
                               >> 2U))));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__rr_d 
        = (3U & ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                         >> 0x12U) & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes)))
                  ? ((2U == (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__rr_q))
                      ? 0U : ((IData)(1U) + (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__rr_q)))
                  : (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__rr_q)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes) 
                     >> 1U)) | (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes) 
                                 >> 2U) & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__rr_q) 
                                           >> 1U))));
    this->__PVT__slv_resp_o[2U] = ((0xffeffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0x100U & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes) 
                                                << 8U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes 
        = ((0x33U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes)) 
           | ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
              << 2U));
    this->__PVT__gen_demux__DOT__mst_r_readies = ((6U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_r_readies)) 
                                                  | (1U 
                                                     & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes) 
                                                         >> 1U) 
                                                        & (~ (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))));
    this->__PVT__gen_demux__DOT__mst_r_readies = ((5U 
                                                   & (IData)(this->__PVT__gen_demux__DOT__mst_r_readies)) 
                                                  | (0xfffffffeU 
                                                     & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes) 
                                                        & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                           << 1U))));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[2U] 
        = ((0xffU & this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[2U]) 
           | (0xffffff00U & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                               ? ((this->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                                   << 0x18U) | (this->__PVT__gen_demux__DOT__mst_r_chans[2U] 
                                                >> 8U))
                               : this->__PVT__gen_demux__DOT__mst_r_chans[0U]) 
                             << 8U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[3U] 
        = ((0xffU & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                       ? ((this->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                           << 0x18U) | (this->__PVT__gen_demux__DOT__mst_r_chans[2U] 
                                        >> 8U)) : this->__PVT__gen_demux__DOT__mst_r_chans[0U]) 
                     >> 0x18U)) | (0xffffff00U & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                    ? 
                                                   ((this->__PVT__gen_demux__DOT__mst_r_chans[4U] 
                                                     << 0x18U) 
                                                    | (this->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                                                       >> 8U))
                                                    : 
                                                   this->__PVT__gen_demux__DOT__mst_r_chans[1U]) 
                                                  << 8U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[4U] 
        = ((0xffff0000U & this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[4U]) 
           | ((0xffU & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                          ? ((this->__PVT__gen_demux__DOT__mst_r_chans[4U] 
                              << 0x18U) | (this->__PVT__gen_demux__DOT__mst_r_chans[3U] 
                                           >> 8U)) : 
                         this->__PVT__gen_demux__DOT__mst_r_chans[1U]) 
                        >> 0x18U)) | (0xff00U & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((this->__PVT__gen_demux__DOT__mst_r_chans[5U] 
                                                    << 0x18U) 
                                                   | (this->__PVT__gen_demux__DOT__mst_r_chans[4U] 
                                                      >> 8U))
                                                   : 
                                                  this->__PVT__gen_demux__DOT__mst_r_chans[2U]) 
                                                 << 8U))));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((5U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes) 
                     & (~ (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                    << 1U)));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((3U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes) 
               & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
              << 2U));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes 
        = ((0x3cU & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes)) 
           | ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
               ? (2U | (1U & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes) 
                              >> 4U))) : (1U & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes) 
                                                >> 2U))));
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes 
        = ((0x1fff80U & this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes) 
           | (0x7fU & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? (this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes 
                           >> 0xeU) : (this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes 
                                       >> 7U))));
    this->__PVT__slv_resp_o[2U] = ((0xf01ffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0xfe00U & (this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes 
                                                 << 9U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((5U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes) 
                     & (~ (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                    << 1U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((3U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes) 
               & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
              << 2U));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes 
        = ((0x3cU & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes)) 
           | ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
               ? (2U | (1U & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes) 
                              >> 4U))) : (1U & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes) 
                                                >> 2U))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:447
    this->__PVT__mst_reqs_o[0U] = 0U;
    this->__PVT__mst_reqs_o[1U] = 0U;
    this->__PVT__mst_reqs_o[2U] = 0U;
    this->__PVT__mst_reqs_o[3U] = 0U;
    this->__PVT__mst_reqs_o[4U] = 0U;
    this->__PVT__mst_reqs_o[5U] = 0U;
    this->__PVT__mst_reqs_o[6U] = 0U;
    this->__PVT__mst_reqs_o[7U] = 0U;
    this->__PVT__mst_reqs_o[8U] = 0U;
    this->__PVT__mst_reqs_o[9U] = 0U;
    this->__PVT__mst_reqs_o[0xaU] = 0U;
    this->__PVT__mst_reqs_o[0xbU] = 0U;
    this->__PVT__mst_reqs_o[0xcU] = 0U;
    this->__PVT__mst_reqs_o[0xdU] = 0U;
    this->__PVT__mst_reqs_o[0xeU] = 0U;
    this->__PVT__mst_reqs_o[0xfU] = 0U;
    this->__PVT__mst_reqs_o[0x10U] = 0U;
    this->__PVT__mst_reqs_o[0x11U] = 0U;
    this->__PVT__mst_reqs_o[0x12U] = 0U;
    this->__PVT__mst_reqs_o[0x13U] = 0U;
    this->__PVT__mst_reqs_o[0x14U] = 0U;
    this->__Vlvbound1[0U] = ((this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                           >> 2U));
    this->__Vlvbound1[1U] = ((this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                           >> 2U));
    this->__Vlvbound1[2U] = (0xffU & (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                      >> 2U));
    this->__PVT__mst_reqs_o[4U] = ((0x1ffffU & this->__PVT__mst_reqs_o[4U]) 
                                   | (0xfffe0000U & 
                                      (this->__Vlvbound1[0U] 
                                       << 0x11U)));
    this->__PVT__mst_reqs_o[5U] = ((0x1ffffU & (this->__Vlvbound1[0U] 
                                                >> 0xfU)) 
                                   | (0xfffe0000U & 
                                      (this->__Vlvbound1[1U] 
                                       << 0x11U)));
    this->__PVT__mst_reqs_o[6U] = ((0xfe000000U & this->__PVT__mst_reqs_o[6U]) 
                                   | ((0x1ffffU & (
                                                   this->__Vlvbound1[1U] 
                                                   >> 0xfU)) 
                                      | (0xfffe0000U 
                                         & (this->__Vlvbound1[2U] 
                                            << 0x11U))));
    this->__PVT__mst_reqs_o[4U] = (0xfffeffffU & this->__PVT__mst_reqs_o[4U]);
    if (((IData)(this->__PVT__gen_demux__DOT__aw_valid) 
         & (0U == (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        this->__PVT__mst_reqs_o[4U] = (0x10000U | this->__PVT__mst_reqs_o[4U]);
    }
    this->__Vlvbound4[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                              << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                        >> 0x18U));
    this->__Vlvbound4[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                              << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                        >> 0x18U));
    this->__Vlvbound4[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
                                        << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                                  >> 0x18U)));
    this->__PVT__mst_reqs_o[2U] = ((0x3fU & this->__PVT__mst_reqs_o[2U]) 
                                   | (0xffffffc0U & 
                                      (this->__Vlvbound4[0U] 
                                       << 6U)));
    this->__PVT__mst_reqs_o[3U] = ((0x3fU & (this->__Vlvbound4[0U] 
                                             >> 0x1aU)) 
                                   | (0xffffffc0U & 
                                      (this->__Vlvbound4[1U] 
                                       << 6U)));
    this->__PVT__mst_reqs_o[4U] = ((0xffff0000U & this->__PVT__mst_reqs_o[4U]) 
                                   | ((0x3fU & (this->__Vlvbound4[1U] 
                                                >> 0x1aU)) 
                                      | (0xffffffc0U 
                                         & (this->__Vlvbound4[2U] 
                                            << 6U))));
    this->__PVT__mst_reqs_o[2U] = (0xffffffdfU & this->__PVT__mst_reqs_o[2U]);
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (0U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__Vlvbound6 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                   >> 0x17U));
        this->__PVT__mst_reqs_o[2U] = ((0xffffffdfU 
                                        & this->__PVT__mst_reqs_o[2U]) 
                                       | (0xffffffe0U 
                                          & ((IData)(this->__Vlvbound6) 
                                             << 5U)));
    }
    this->__Vlvbound7 = (1U & (IData)(this->__PVT__gen_demux__DOT__mst_b_readies));
    this->__PVT__mst_reqs_o[2U] = ((0xffffffefU & this->__PVT__mst_reqs_o[2U]) 
                                   | (0xfffffff0U & 
                                      ((IData)(this->__Vlvbound7) 
                                       << 4U)));
    this->__Vlvbound8[0U] = ((this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                           >> 2U));
    this->__Vlvbound8[1U] = ((this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                           >> 2U));
    this->__Vlvbound8[2U] = (3U & (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                   >> 2U));
    this->__PVT__mst_reqs_o[0U] = ((3U & this->__PVT__mst_reqs_o[0U]) 
                                   | (0xfffffffcU & 
                                      (this->__Vlvbound8[0U] 
                                       << 2U)));
    this->__PVT__mst_reqs_o[1U] = ((3U & (this->__Vlvbound8[0U] 
                                          >> 0x1eU)) 
                                   | (0xfffffffcU & 
                                      (this->__Vlvbound8[1U] 
                                       << 2U)));
    this->__PVT__mst_reqs_o[2U] = ((0xfffffff0U & this->__PVT__mst_reqs_o[2U]) 
                                   | ((3U & (this->__Vlvbound8[1U] 
                                             >> 0x1eU)) 
                                      | (0xfffffffcU 
                                         & (this->__Vlvbound8[2U] 
                                            << 2U))));
    this->__PVT__mst_reqs_o[0U] = (0xfffffffdU & this->__PVT__mst_reqs_o[0U]);
    if (((IData)(this->__PVT__gen_demux__DOT__ar_valid) 
         & (0U == (3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        this->__PVT__mst_reqs_o[0U] = (2U | this->__PVT__mst_reqs_o[0U]);
    }
    this->__Vlvbound11 = (1U & (IData)(this->__PVT__gen_demux__DOT__mst_r_readies));
    this->__PVT__mst_reqs_o[0U] = ((0xfffffffeU & this->__PVT__mst_reqs_o[0U]) 
                                   | (IData)(this->__Vlvbound11));
    this->__Vlvbound1[0U] = ((this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                           >> 2U));
    this->__Vlvbound1[1U] = ((this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                           >> 2U));
    this->__Vlvbound1[2U] = (0xffU & (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                      >> 2U));
    this->__PVT__mst_reqs_o[0xbU] = ((0x3ffU & this->__PVT__mst_reqs_o[0xbU]) 
                                     | (0xfffffc00U 
                                        & (this->__Vlvbound1[0U] 
                                           << 0xaU)));
    this->__PVT__mst_reqs_o[0xcU] = ((0x3ffU & (this->__Vlvbound1[0U] 
                                                >> 0x16U)) 
                                     | (0xfffffc00U 
                                        & (this->__Vlvbound1[1U] 
                                           << 0xaU)));
    this->__PVT__mst_reqs_o[0xdU] = ((0xfffc0000U & 
                                      this->__PVT__mst_reqs_o[0xdU]) 
                                     | ((0x3ffU & (
                                                   this->__Vlvbound1[1U] 
                                                   >> 0x16U)) 
                                        | (0xfffffc00U 
                                           & (this->__Vlvbound1[2U] 
                                              << 0xaU))));
    this->__PVT__mst_reqs_o[0xbU] = (0xfffffdffU & 
                                     this->__PVT__mst_reqs_o[0xbU]);
    if (((IData)(this->__PVT__gen_demux__DOT__aw_valid) 
         & (1U == (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        this->__PVT__mst_reqs_o[0xbU] = (0x200U | this->__PVT__mst_reqs_o[0xbU]);
    }
    this->__Vlvbound4[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                              << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                        >> 0x18U));
    this->__Vlvbound4[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                              << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                        >> 0x18U));
    this->__Vlvbound4[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
                                        << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                                  >> 0x18U)));
    this->__PVT__mst_reqs_o[8U] = ((0x7fffffffU & this->__PVT__mst_reqs_o[8U]) 
                                   | (0x80000000U & 
                                      (this->__Vlvbound4[0U] 
                                       << 0x1fU)));
    this->__PVT__mst_reqs_o[9U] = ((0x7fffffffU & (
                                                   this->__Vlvbound4[0U] 
                                                   >> 1U)) 
                                   | (0x80000000U & 
                                      (this->__Vlvbound4[1U] 
                                       << 0x1fU)));
    this->__PVT__mst_reqs_o[0xaU] = ((0x7fffffffU & 
                                      (this->__Vlvbound4[1U] 
                                       >> 1U)) | (0x80000000U 
                                                  & (this->__Vlvbound4[2U] 
                                                     << 0x1fU)));
    this->__PVT__mst_reqs_o[0xbU] = ((0xfffffe00U & 
                                      this->__PVT__mst_reqs_o[0xbU]) 
                                     | (0x7fffffffU 
                                        & (this->__Vlvbound4[2U] 
                                           >> 1U)));
    this->__PVT__mst_reqs_o[8U] = (0xbfffffffU & this->__PVT__mst_reqs_o[8U]);
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (1U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__Vlvbound6 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                   >> 0x17U));
        this->__PVT__mst_reqs_o[8U] = ((0xbfffffffU 
                                        & this->__PVT__mst_reqs_o[8U]) 
                                       | (0xc0000000U 
                                          & ((IData)(this->__Vlvbound6) 
                                             << 0x1eU)));
    }
    this->__Vlvbound7 = (1U & ((IData)(this->__PVT__gen_demux__DOT__mst_b_readies) 
                               >> 1U));
    this->__PVT__mst_reqs_o[8U] = ((0xdfffffffU & this->__PVT__mst_reqs_o[8U]) 
                                   | (0xe0000000U & 
                                      ((IData)(this->__Vlvbound7) 
                                       << 0x1dU)));
    this->__Vlvbound8[0U] = ((this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                           >> 2U));
    this->__Vlvbound8[1U] = ((this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                           >> 2U));
    this->__Vlvbound8[2U] = (3U & (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                   >> 2U));
    this->__PVT__mst_reqs_o[6U] = ((0x7ffffffU & this->__PVT__mst_reqs_o[6U]) 
                                   | (0xf8000000U & 
                                      (this->__Vlvbound8[0U] 
                                       << 0x1bU)));
    this->__PVT__mst_reqs_o[7U] = ((0x7ffffffU & (this->__Vlvbound8[0U] 
                                                  >> 5U)) 
                                   | (0xf8000000U & 
                                      (this->__Vlvbound8[1U] 
                                       << 0x1bU)));
    this->__PVT__mst_reqs_o[8U] = ((0xe0000000U & this->__PVT__mst_reqs_o[8U]) 
                                   | ((0x7ffffffU & 
                                       (this->__Vlvbound8[1U] 
                                        >> 5U)) | (0xf8000000U 
                                                   & (this->__Vlvbound8[2U] 
                                                      << 0x1bU))));
    this->__PVT__mst_reqs_o[6U] = (0xfbffffffU & this->__PVT__mst_reqs_o[6U]);
    if (((IData)(this->__PVT__gen_demux__DOT__ar_valid) 
         & (1U == (3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        this->__PVT__mst_reqs_o[6U] = (0x4000000U | 
                                       this->__PVT__mst_reqs_o[6U]);
    }
    this->__Vlvbound11 = (1U & ((IData)(this->__PVT__gen_demux__DOT__mst_r_readies) 
                                >> 1U));
    this->__PVT__mst_reqs_o[6U] = ((0xfdffffffU & this->__PVT__mst_reqs_o[6U]) 
                                   | (0xfe000000U & 
                                      ((IData)(this->__Vlvbound11) 
                                       << 0x19U)));
    this->__Vlvbound1[0U] = ((this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U] 
                                           >> 2U));
    this->__Vlvbound1[1U] = ((this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[1U] 
                                           >> 2U));
    this->__Vlvbound1[2U] = (0xffU & (this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[2U] 
                                      >> 2U));
    this->__PVT__mst_reqs_o[0x12U] = ((7U & this->__PVT__mst_reqs_o[0x12U]) 
                                      | (0xfffffff8U 
                                         & (this->__Vlvbound1[0U] 
                                            << 3U)));
    this->__PVT__mst_reqs_o[0x13U] = ((7U & (this->__Vlvbound1[0U] 
                                             >> 0x1dU)) 
                                      | (0xfffffff8U 
                                         & (this->__Vlvbound1[1U] 
                                            << 3U)));
    this->__PVT__mst_reqs_o[0x14U] = ((7U & (this->__Vlvbound1[1U] 
                                             >> 0x1dU)) 
                                      | (0xfffffff8U 
                                         & (this->__Vlvbound1[2U] 
                                            << 3U)));
    this->__PVT__mst_reqs_o[0x12U] = (0xfffffffbU & 
                                      this->__PVT__mst_reqs_o[0x12U]);
    if (((IData)(this->__PVT__gen_demux__DOT__aw_valid) 
         & (2U == (3U & this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U])))) {
        this->__PVT__mst_reqs_o[0x12U] = (4U | this->__PVT__mst_reqs_o[0x12U]);
    }
    this->__Vlvbound4[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                              << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                        >> 0x18U));
    this->__Vlvbound4[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                              << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                        >> 0x18U));
    this->__Vlvbound4[2U] = (0x3ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
                                        << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x11U] 
                                                  >> 0x18U)));
    this->__PVT__mst_reqs_o[0xfU] = ((0xffffffU & this->__PVT__mst_reqs_o[0xfU]) 
                                     | (0xff000000U 
                                        & (this->__Vlvbound4[0U] 
                                           << 0x18U)));
    this->__PVT__mst_reqs_o[0x10U] = ((0xffffffU & 
                                       (this->__Vlvbound4[0U] 
                                        >> 8U)) | (0xff000000U 
                                                   & (this->__Vlvbound4[1U] 
                                                      << 0x18U)));
    this->__PVT__mst_reqs_o[0x11U] = ((0xffffffU & 
                                       (this->__Vlvbound4[1U] 
                                        >> 8U)) | (0xff000000U 
                                                   & (this->__Vlvbound4[2U] 
                                                      << 0x18U)));
    this->__PVT__mst_reqs_o[0x12U] = ((0xfffffffcU 
                                       & this->__PVT__mst_reqs_o[0x12U]) 
                                      | (0xffffffU 
                                         & (this->__Vlvbound4[2U] 
                                            >> 8U)));
    this->__PVT__mst_reqs_o[0xfU] = (0xff7fffffU & 
                                     this->__PVT__mst_reqs_o[0xfU]);
    if (((0U != (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (2U == (IData)(this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o)))) {
        this->__Vlvbound6 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                   >> 0x17U));
        this->__PVT__mst_reqs_o[0xfU] = ((0xff7fffffU 
                                          & this->__PVT__mst_reqs_o[0xfU]) 
                                         | (0xff800000U 
                                            & ((IData)(this->__Vlvbound6) 
                                               << 0x17U)));
    }
    this->__Vlvbound7 = (1U & ((IData)(this->__PVT__gen_demux__DOT__mst_b_readies) 
                               >> 2U));
    this->__PVT__mst_reqs_o[0xfU] = ((0xffbfffffU & 
                                      this->__PVT__mst_reqs_o[0xfU]) 
                                     | (0xffc00000U 
                                        & ((IData)(this->__Vlvbound7) 
                                           << 0x16U)));
    this->__Vlvbound8[0U] = ((this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U] 
                                           >> 2U));
    this->__Vlvbound8[1U] = ((this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                              << 0x1eU) | (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[1U] 
                                           >> 2U));
    this->__Vlvbound8[2U] = (3U & (this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[2U] 
                                   >> 2U));
    this->__PVT__mst_reqs_o[0xdU] = ((0xfffffU & this->__PVT__mst_reqs_o[0xdU]) 
                                     | (0xfff00000U 
                                        & (this->__Vlvbound8[0U] 
                                           << 0x14U)));
    this->__PVT__mst_reqs_o[0xeU] = ((0xfffffU & (this->__Vlvbound8[0U] 
                                                  >> 0xcU)) 
                                     | (0xfff00000U 
                                        & (this->__Vlvbound8[1U] 
                                           << 0x14U)));
    this->__PVT__mst_reqs_o[0xfU] = ((0xffc00000U & 
                                      this->__PVT__mst_reqs_o[0xfU]) 
                                     | ((0xfffffU & 
                                         (this->__Vlvbound8[1U] 
                                          >> 0xcU)) 
                                        | (0xfff00000U 
                                           & (this->__Vlvbound8[2U] 
                                              << 0x14U))));
    this->__PVT__mst_reqs_o[0xdU] = (0xfff7ffffU & 
                                     this->__PVT__mst_reqs_o[0xdU]);
    if (((IData)(this->__PVT__gen_demux__DOT__ar_valid) 
         & (2U == (3U & this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U])))) {
        this->__PVT__mst_reqs_o[0xdU] = (0x80000U | 
                                         this->__PVT__mst_reqs_o[0xdU]);
    }
    this->__Vlvbound11 = (1U & ((IData)(this->__PVT__gen_demux__DOT__mst_r_readies) 
                                >> 2U));
    this->__PVT__mst_reqs_o[0xdU] = ((0xfffbffffU & 
                                      this->__PVT__mst_reqs_o[0xdU]) 
                                     | (0xfffc0000U 
                                        & ((IData)(this->__Vlvbound11) 
                                           << 0x12U)));
    __Vtemp238[1U] = ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                       ? ((this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[6U] 
                           << 0x10U) | (this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[5U] 
                                        >> 0x10U)) : 
                      ((this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[4U] 
                        << 0x18U) | (this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[3U] 
                                     >> 8U)));
    __Vtemp238[2U] = (0xffU & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                ? (this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[6U] 
                                   >> 0x10U) : ((this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[5U] 
                                                 << 0x18U) 
                                                | (this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[4U] 
                                                   >> 8U))));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[0U] 
        = ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[5U] 
                << 0x10U) | (this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[4U] 
                             >> 0x10U)) : ((this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[3U] 
                                            << 0x18U) 
                                           | (this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[2U] 
                                              >> 8U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[1U] 
        = __Vtemp238[1U];
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[2U] 
        = ((0xffffff00U & this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[2U]) 
           | __Vtemp238[2U]);
    this->__PVT__slv_resp_o[0U] = this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[0U];
    this->__PVT__slv_resp_o[1U] = this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[1U];
    this->__PVT__slv_resp_o[2U] = ((0xfff00U & this->__PVT__slv_resp_o[2U]) 
                                   | (0xffU & this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes[2U]));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi3::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__12(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi3::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__12\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:111
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:111
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:129
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if ((1U & (~ (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock)))) {
            this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                = this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n;
        }
    } else {
        this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/rr_arb_tree.sv:147
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__rr_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__rr_d)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/rr_arb_tree.sv:147
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__rr_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__rr_d)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:111
    this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:385
    this->__PVT__gen_demux__DOT__lock_ar_valid_q = 
        ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
         & ((IData)(this->__PVT__gen_demux__DOT__load_ar_lock)
             ? (IData)(this->__PVT__gen_demux__DOT__lock_ar_valid_d)
             : (IData)(this->__PVT__gen_demux__DOT__lock_ar_valid_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_demux.sv:220
    this->__PVT__gen_demux__DOT__lock_aw_valid_q = 
        ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
         & ((IData)(this->__PVT__gen_demux__DOT__load_aw_lock)
             ? (IData)(this->__PVT__gen_demux__DOT__lock_aw_valid_d)
             : (IData)(this->__PVT__gen_demux__DOT__lock_aw_valid_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:49
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
    } else {
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:49
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
    } else {
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/rr_arb_tree.sv:130
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/rr_arb_tree.sv:130
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:68
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
    } else {
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:68
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
    } else {
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/rr_arb_tree.sv:104
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
           & ((IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes) 
              & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                    >> 0x16U))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/rr_arb_tree.sv:104
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
           & ((IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes) 
              & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                    >> 0x12U))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:61
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
    } else {
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:61
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
    } else {
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__Vcellout__gen_demux__DOT__i_w_fifo__data_o 
        = (3U & ((0x13U >= (0x1fU & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q) 
                                     << 1U))) ? (this->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(this->__PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q) 
                                                     << 1U)))
                  : 0U));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o 
        = (1U & ((~ (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    this->__PVT__gen_demux__DOT__slv_ar_valid = ((IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o 
        = (1U & ((~ (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                 | (~ (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    this->__PVT__gen_demux__DOT__slv_aw_valid = ((IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:42
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[0U];
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[1U];
            this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[2U];
        }
    } else {
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/spill_register.sv:42
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[0U];
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[1U];
            this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[2U];
        }
    } else {
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    this->__PVT__slv_resp_o[2U] = ((0xbffffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0xfffc0000U & 
                                      ((IData)(this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o) 
                                       << 0x12U)));
    this->__PVT__slv_resp_o[2U] = ((0x7ffffU & this->__PVT__slv_resp_o[2U]) 
                                   | (0xfff80000U & 
                                      ((IData)(this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o) 
                                       << 0x13U)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi3::_multiclk__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__21(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi3::_multiclk__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__21\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                    >> 0x16U)));
    this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes 
        = ((6U & (IData)(this->__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes)) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                    >> 0x12U)));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[0U] 
        = ((0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                            << 0x1fU) | (0x7ffffffcU 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
                                            >> 1U)))) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error)
               ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__idx_o)));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[1U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                  >> 1U)) | (0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                                             << 0x1fU) 
                                            | (0x7ffffffcU 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                                  >> 1U)))));
    this->__PVT__gen_demux__DOT__slv_aw_chan_select_in[2U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                  >> 1U)) | (0x3fcU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x14U] 
                                       >> 1U)));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[0U] 
        = ((0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                            << 0xeU) | (0x3ffcU & (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                                   >> 0x12U)))) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error)
               ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__idx_o)));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[1U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                  >> 0x12U)) | (0xfffffffcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                                << 0xeU) 
                                               | (0x3ffcU 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                                     >> 0x12U)))));
    this->__PVT__gen_demux__DOT__slv_ar_chan_select_in[2U] 
        = ((3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                  >> 0x12U)) | (0xcU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x10U] 
                                         << 0xeU) | 
                                        (0x3ffcU & 
                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                          >> 0x12U)))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_demux__pi3::_multiclk__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__24(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi3::_multiclk__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__24\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0x12U] 
            >> 2U) & (IData)(this->__Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o));
    this->__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
            >> 0x13U) & (IData)(this->__Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o));
}

void Vrvfpgasim_axi_demux__pi3::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_demux__pi3::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_ni = VL_RAND_RESET_I(1);
    __PVT__test_i = VL_RAND_RESET_I(1);
    VL_ZERO_RESET_W(217,__PVT__slv_req_i);
    __PVT__slv_aw_select_i = VL_RAND_RESET_I(2);
    __PVT__slv_ar_select_i = VL_RAND_RESET_I(2);
    VL_ZERO_RESET_W(84,__PVT__slv_resp_o);
    VL_ZERO_RESET_W(651,__PVT__mst_reqs_o);
    VL_ZERO_RESET_W(252,__PVT__mst_resps_i);
    __PVT__gen_demux__DOT__slv_aw_valid = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__slv_aw_ready = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__aw_push = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__atop_inject = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__w_fifo_pop = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__lock_aw_valid_d = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__lock_aw_valid_q = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__load_aw_lock = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__aw_valid = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__aw_ready = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__slv_w_ready = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__mst_b_chans = 0;
    __PVT__gen_demux__DOT__mst_b_valids = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__mst_b_readies = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__slv_ar_valid = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__slv_ar_ready = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__ar_push = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__lock_ar_valid_d = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__lock_ar_valid_q = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__load_ar_lock = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__ar_valid = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__ar_ready = VL_RAND_RESET_I(1);
    VL_ZERO_RESET_W(216,__PVT__gen_demux__DOT__mst_r_chans);
    __PVT__gen_demux__DOT__mst_r_valids = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__mst_r_readies = VL_RAND_RESET_I(3);
    VL_ZERO_RESET_W(74,__PVT__gen_demux__DOT__slv_aw_chan_select_in);
    VL_ZERO_RESET_W(74,__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o);
    __Vcellout__gen_demux__DOT__i_aw_spill_reg__ready_o = VL_RAND_RESET_I(1);
    __Vcellout__gen_demux__DOT__i_w_fifo__data_o = VL_RAND_RESET_I(2);
    VL_ZERO_RESET_W(68,__PVT__gen_demux__DOT__slv_ar_chan_select_in);
    VL_ZERO_RESET_W(68,__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o);
    __Vcellout__gen_demux__DOT__i_ar_spill_reg__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(72,__Vlvbound1);
    VL_RAND_RESET_W(74,__Vlvbound4);
    __Vlvbound6 = VL_RAND_RESET_I(1);
    __Vlvbound7 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66,__Vlvbound8);
    __Vlvbound11 = VL_RAND_RESET_I(1);
    VL_ZERO_RESET_W(74,__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q);
    __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en_data = VL_RAND_RESET_I(1);
    VL_ZERO_RESET_W(74,__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q);
    __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(4);
    __PVT__gen_demux__DOT__i_w_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(4);
    __PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(4);
    __PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(4);
    __PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(5);
    __PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(5);
    __PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n = VL_RAND_RESET_I(20);
    __PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q = VL_RAND_RESET_I(20);
    gen_demux__DOT__i_w_fifo__DOT____Vlvbound1 = VL_RAND_RESET_I(2);
    __PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__index_nodes = VL_RAND_RESET_I(6);
    __PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__data_nodes = 0;
    __PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gnt_nodes = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_nodes = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__rr_q = VL_RAND_RESET_I(2);
    __PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__req_d = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__rr_d = VL_RAND_RESET_I(2);
    __PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_b_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
    VL_ZERO_RESET_W(68,__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q);
    __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en_data = VL_RAND_RESET_I(1);
    VL_ZERO_RESET_W(68,__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q);
    __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__index_nodes = VL_RAND_RESET_I(6);
    VL_ZERO_RESET_W(216,__PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__data_nodes);
    __PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gnt_nodes = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_nodes = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__rr_q = VL_RAND_RESET_I(2);
    __PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__req_d = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__rr_d = VL_RAND_RESET_I(2);
    __PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = VL_RAND_RESET_I(3);
    __PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel = VL_RAND_RESET_I(1);
    __PVT__gen_demux__DOT__i_r_mux__DOT__genblk2__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel = VL_RAND_RESET_I(1);
}

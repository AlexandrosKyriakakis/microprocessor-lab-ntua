// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_axi_err_slv__pi4.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vrvfpgasim_axi_err_slv__pi4) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vrvfpgasim_axi_err_slv__pi4::__Vconfigure(Vrvfpgasim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vrvfpgasim_axi_err_slv__pi4::~Vrvfpgasim_axi_err_slv__pi4() {
}

//--------------------
// Internal Methods

void Vrvfpgasim_axi_err_slv__pi4::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__1(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_err_slv__pi4::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__1\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(this->__PVT__r_busy_q)))) {
        if ((0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) {
            this->__PVT__r_cnt_load = 1U;
        }
    }
    this->__PVT__err_resp[2U] = ((0x3ffffU & this->__PVT__err_resp[2U]) 
                                 | (0xfffc0000U & (
                                                   ((4U 
                                                     != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
                                                    << 0x13U) 
                                                   | ((4U 
                                                       != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)) 
                                                      << 0x12U))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:138
    this->__PVT__err_resp[2U] = (0xf01ffU & this->__PVT__err_resp[2U]);
    this->__PVT__err_resp[2U] = ((0xf0fffU & this->__PVT__err_resp[2U]) 
                                 | (0xf000U & (((IData)(this->__PVT__i_b_fifo__DOT__mem_q) 
                                                >> 
                                                (7U 
                                                 & ((IData)(this->__PVT__i_b_fifo__DOT__read_pointer_q) 
                                                    << 2U))) 
                                               << 0xcU)));
    this->__PVT__err_resp[2U] = (0xc00U | this->__PVT__err_resp[2U]);
    this->__PVT__err_resp[2U] = (0xeffffU & this->__PVT__err_resp[2U]);
    if ((0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q))) {
        this->__PVT__err_resp[2U] = (0x10000U | this->__PVT__err_resp[2U]);
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__Vcellout__i_r_fifo__data_o = (0xfffU & 
                                          ((0x2fU >= 
                                            (0x3fU 
                                             & ((IData)(0xcU) 
                                                * (IData)(this->__PVT__i_r_fifo__DOT__read_pointer_q))))
                                            ? (IData)(
                                                      (this->__PVT__i_r_fifo__DOT__mem_q 
                                                       >> 
                                                       (0x3fU 
                                                        & ((IData)(0xcU) 
                                                           * (IData)(this->__PVT__i_r_fifo__DOT__read_pointer_q)))))
                                            : 0U));
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream 
        = ((~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
               >> 3U)) & (0U < (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))));
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream 
        = (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
            >> 3U) & (7U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:246
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0x1ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]) 
           | (0xfffe0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                             << 0xeU)));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[5U] 
        = ((0x1ffffU & ((0x1c000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                                     << 0xeU)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                                  >> 0x12U))) 
           | (0xfffe0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                             << 0xeU)));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[6U] 
        = ((0x1ffffU & ((0x1c000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x14U] 
                                     << 0xeU)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                                                  >> 0x12U))) 
           | (0x1fe0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x14U] 
                            << 0xeU)));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = (0xff03ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0x3fU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0xffffffc0U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x10U] 
                              << 0xeU) | (0x3fc0U & 
                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                           >> 0x12U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0x3fU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x10U] 
                     >> 0x12U)) | (0xffffffc0U & ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x11U] 
                                                   << 0xeU) 
                                                  | (0x3fc0U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x10U] 
                                                        >> 0x12U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0xffff0000U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]) 
           | ((0x3fU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x11U] 
                        >> 0x12U)) | (0xffc0U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                                  << 0xeU) 
                                                 | (0x3fc0U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x11U] 
                                                       >> 0x12U))))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (0xfffffffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xeU] 
                              << 0xeU) | (0x3ffeU & 
                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU] 
                                           >> 0x12U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
        = ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xeU] 
                  >> 0x12U)) | (0xfffffffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                                << 0xeU) 
                                               | (0x3ffeU 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xeU] 
                                                     >> 0x12U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xfffffff0U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                     >> 0x12U)) | (0xeU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x10U] 
                                            << 0xeU) 
                                           | (0x3ffeU 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                                 >> 0x12U))))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q;
    if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                      >> 2U) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                                >> 8U)))))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d 
                        = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x15U] 
                                    << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x14U] 
                                                 >> 7U)));
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 0U;
    if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                      >> 2U) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                                >> 8U)))))) {
                    if ((1U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                                       << 0x18U) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                       >> 8U))))) {
                        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 1U;
                    }
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:254
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU] 
                    >> 0x12U)));
    if ((0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
            this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
                = (0xfffffffeU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]);
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__err_resp[0U] = 0U;
    this->__PVT__err_resp[1U] = 0U;
    this->__PVT__err_resp[2U] = (0xfff00U & this->__PVT__err_resp[2U]);
    this->__PVT__err_resp[2U] = ((0xfff0fU & this->__PVT__err_resp[2U]) 
                                 | (0xf0U & ((IData)(this->__Vcellout__i_r_fifo__data_o) 
                                             >> 4U)));
    this->__PVT__err_resp[0U] = (0xadcab1e0U | (0xfU 
                                                & this->__PVT__err_resp[0U]));
    this->__PVT__err_resp[1U] = 0xa11ab1ebU;
    this->__PVT__err_resp[2U] = (0xcU | (0xffff0U & 
                                         this->__PVT__err_resp[2U]));
    this->__PVT__err_resp[0U] = (0xcU | this->__PVT__err_resp[0U]);
    this->__PVT__err_resp[2U] = (0xffeffU & this->__PVT__err_resp[2U]);
    if (this->__PVT__r_busy_q) {
        this->__PVT__err_resp[2U] = (0x100U | this->__PVT__err_resp[2U]);
        this->__PVT__err_resp[0U] = ((0xfffffffdU & 
                                      this->__PVT__err_resp[0U]) 
                                     | (0xfffffffeU 
                                        & ((0U == (0xffU 
                                                   & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                                           << 1U)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = (0xfffeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = (0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffffffefU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0x10U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                       >> 0x12U)));
    if ((4U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                    = (0xffffffefU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]);
            }
        }
    } else {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if (this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                        = ((0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
                           | (0x20U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                       >> 0x12U)));
                }
            } else {
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
                     | (4U > (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                        = ((0xfffeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]) 
                           | (0x10000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                          << 0xeU)));
                }
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
                     | (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                          >> 2U) & (0U == (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                                                  << 0x18U) 
                                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                                    >> 8U))))) 
                        & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                        = ((0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
                           | (0x20U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                       >> 0x12U)));
                }
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                      >> 2U) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                                >> 8U)))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                        = (0xfffeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]);
                    if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream)))) {
                        this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                            = (0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]);
                    }
                }
            }
        }
    }
    this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i 
        = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid) 
           & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_busy_d = this->__PVT__r_busy_q;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_busy_d = 0U;
            }
        }
    } else {
        if ((0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) {
            this->__PVT__r_busy_d = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_busy_load = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_busy_load = 1U;
            }
        }
    } else {
        if ((0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) {
            this->__PVT__r_busy_load = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_cnt_en = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            this->__PVT__r_cnt_en = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_cnt_clear = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_cnt_clear = 1U;
            }
        }
    }
    this->__PVT__r_fifo_inp = ((0xf00U & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                                          << 8U)) | 
                               (0xffU & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
                                          << 8U) | 
                                         (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
                                          >> 0x18U))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:138
    this->__PVT__b_fifo_pop = 0U;
    if ((0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q))) {
        this->__PVT__b_fifo_pop = (1U & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                                         >> 4U));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_fifo_pop = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_fifo_pop = 1U;
            }
        }
    }
    this->__PVT__r_fifo_push = ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
                                 >> 1U) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)));
    this->__PVT__w_fifo_push = ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                                 >> 0x10U) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock = 1U;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n 
            = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n 
            = (((~ ((IData)(0xffU) << (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q) 
                                             << 3U)))) 
                & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n)) 
               | ((0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                             << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                       >> 0x1fU))) 
                  << (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q) 
                            << 3U))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/delta_counter.sv:51
    this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (this->__PVT__r_cnt_clear) {
        this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else {
        if (this->__PVT__r_cnt_load) {
            this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
                = (0xffU & (IData)(this->__Vcellout__i_r_fifo__data_o));
        } else {
            if (this->__PVT__r_cnt_en) {
                this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
                    = (0x1ffU & ((IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                                 - (IData)(1U)));
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__read_pointer_n = this->__PVT__i_b_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__b_fifo_pop) & (0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(this->__PVT__i_b_fifo__DOT__read_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__read_pointer_n = this->__PVT__i_r_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__r_fifo_pop) & (0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_r_fifo__DOT__read_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__write_pointer_n = this->__PVT__i_r_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__status_cnt_n = this->__PVT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(1U) + (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__r_fifo_pop) & (0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q) 
                   - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__r_fifo_push) & (IData)(this->__PVT__r_fifo_pop)) 
          & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__status_cnt_n = this->__PVT__i_r_fifo__DOT__status_cnt_q;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__mem_n = this->__PVT__i_r_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->i_r_fifo__DOT____Vlvbound1 = this->__PVT__r_fifo_inp;
        if ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q))))) {
            this->__PVT__i_r_fifo__DOT__mem_n = (((~ 
                                                   (VL_ULL(0xfff) 
                                                    << 
                                                    (0x3fU 
                                                     & ((IData)(0xcU) 
                                                        * (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q))))) 
                                                  & this->__PVT__i_r_fifo__DOT__mem_n) 
                                                 | ((QData)((IData)(this->i_r_fifo__DOT____Vlvbound1)) 
                                                    << 
                                                    (0x3fU 
                                                     & ((IData)(0xcU) 
                                                        * (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q)))));
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__mem_n = this->__PVT__i_w_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__mem_n = (((~ ((IData)(0xfU) 
                                                  << 
                                                  (0xfU 
                                                   & ((IData)(this->__PVT__i_w_fifo__DOT__write_pointer_q) 
                                                      << 2U)))) 
                                              & (IData)(this->__PVT__i_w_fifo__DOT__mem_n)) 
                                             | ((0xfU 
                                                 & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[6U] 
                                                    >> 0x15U)) 
                                                << 
                                                (0xfU 
                                                 & ((IData)(this->__PVT__i_w_fifo__DOT__write_pointer_q) 
                                                    << 2U))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__Vcellout__i_w_fifo__data_o = (0xfU & ((IData)(this->__PVT__i_w_fifo__DOT__mem_q) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(this->__PVT__i_w_fifo__DOT__read_pointer_q) 
                                                      << 2U))));
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        this->__Vcellout__i_w_fifo__data_o = (0xfU 
                                              & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[6U] 
                                                 >> 0x15U));
    }
    this->__PVT__w_fifo_empty = ((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
                                 & (~ (IData)(this->__PVT__w_fifo_push)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:105
    this->__PVT__w_fifo_pop = 0U;
    if (((~ (IData)(this->__PVT__w_fifo_empty)) & (2U 
                                                   != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                    >> 5U) & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                              >> 7U)))) {
            this->__PVT__w_fifo_pop = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:105
    this->__PVT__b_fifo_push = 0U;
    if (((~ (IData)(this->__PVT__w_fifo_empty)) & (2U 
                                                   != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                    >> 5U) & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                              >> 7U)))) {
            this->__PVT__b_fifo_push = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:105
    this->__PVT__err_resp[2U] = (0xdffffU & this->__PVT__err_resp[2U]);
    if (((~ (IData)(this->__PVT__w_fifo_empty)) & (2U 
                                                   != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__err_resp[2U] = (0x20000U | this->__PVT__err_resp[2U]);
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__write_pointer_n = this->__PVT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_w_fifo__DOT__write_pointer_q)));
    }
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        if (this->__PVT__w_fifo_pop) {
            this->__PVT__i_w_fifo__DOT__write_pointer_n 
                = this->__PVT__i_w_fifo__DOT__write_pointer_q;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__status_cnt_n = this->__PVT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(1U) + (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__w_fifo_pop) & (~ (IData)(this->__PVT__w_fifo_empty)))) {
        this->__PVT__i_w_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q) 
                   - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__w_fifo_push) & (IData)(this->__PVT__w_fifo_pop)) 
          & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(this->__PVT__w_fifo_empty)))) {
        this->__PVT__i_w_fifo__DOT__status_cnt_n = this->__PVT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        if (this->__PVT__w_fifo_pop) {
            this->__PVT__i_w_fifo__DOT__status_cnt_n 
                = this->__PVT__i_w_fifo__DOT__status_cnt_q;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__read_pointer_n = this->__PVT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__w_fifo_pop) & (~ (IData)(this->__PVT__w_fifo_empty)))) {
        this->__PVT__i_w_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        if (this->__PVT__w_fifo_pop) {
            this->__PVT__i_w_fifo__DOT__read_pointer_n 
                = this->__PVT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__write_pointer_n = this->__PVT__i_b_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(this->__PVT__i_b_fifo__DOT__write_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__status_cnt_n = this->__PVT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__status_cnt_n = 
            (3U & ((IData)(1U) + (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__b_fifo_pop) & (0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__status_cnt_n = 
            (3U & ((IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q) 
                   - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__b_fifo_push) & (IData)(this->__PVT__b_fifo_pop)) 
          & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__status_cnt_n = this->__PVT__i_b_fifo__DOT__status_cnt_q;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__mem_n = this->__PVT__i_b_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__mem_n = (((~ ((IData)(0xfU) 
                                                  << 
                                                  (7U 
                                                   & ((IData)(this->__PVT__i_b_fifo__DOT__write_pointer_q) 
                                                      << 2U)))) 
                                              & (IData)(this->__PVT__i_b_fifo__DOT__mem_n)) 
                                             | ((IData)(this->__Vcellout__i_w_fifo__data_o) 
                                                << 
                                                (7U 
                                                 & ((IData)(this->__PVT__i_b_fifo__DOT__write_pointer_q) 
                                                    << 2U))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:312
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q;
    if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                >> 0x10U) & (this->__PVT__err_resp[2U] 
                             >> 0x13U)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((8U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (7U & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))));
    }
    if ((1U & (((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                 >> 5U) & (this->__PVT__err_resp[2U] 
                           >> 0x11U)) & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                                         >> 7U)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((8U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d) 
                        - (IData)(1U))));
    }
    if ((((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
          >> 3U) & (0U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
    } else {
        if (((0U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))) 
             & (7U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
            this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
                = (8U | (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
        }
    }
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xbffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0x40000U & this->__PVT__err_resp[2U]));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:254
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] 
        = this->__PVT__err_resp[0U];
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[1U] 
        = this->__PVT__err_resp[1U];
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xfff00U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0xffU & this->__PVT__err_resp[2U]));
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xffeffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0x100U & this->__PVT__err_resp[2U]));
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 0U;
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q;
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q;
    if ((0U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U & ((this->__PVT__err_resp[2U] >> 8U) 
                   & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU] 
                         >> 0x12U))))) {
            this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 2U;
        } else {
            if ((0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) {
                this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                    = (0xffU & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q) 
                                >> (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q) 
                                          << 3U))));
                this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 1U;
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] = 0U;
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[1U] = 0U;
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                = (0xfff00U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                = ((0xfff0fU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                   | (0xfffffff0U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q) 
                                     << 4U)));
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] 
                = (8U | (0xfffffff3U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U]));
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] 
                = ((0xfffffffdU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U]) 
                   | (0xfffffffeU & ((0U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q)) 
                                     << 1U)));
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                = (0x100U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
            if ((0x40000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU])) {
                if ((2U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U])) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 1U;
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
                } else {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                        = (0xffU & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d) 
                                    - (IData)(1U)));
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
                if ((1U & ((this->__PVT__err_resp[2U] 
                            >> 8U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU] 
                                      >> 0x12U)))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
                }
            } else {
                this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
            }
        }
    }
    this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i 
        = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready) 
           & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = (0x7ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = (0xdffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0x10000U & this->__PVT__err_resp[2U]));
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xf01ffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0xfe00U & this->__PVT__err_resp[2U]));
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q;
    if ((4U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((2U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 0U;
        } else {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if ((0U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 0U;
                }
            } else {
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0xf01ffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                if ((0x400000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU])) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                        = (((0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
                            & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready)))
                            ? 5U : 0U);
                }
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = ((0xf0fffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                       | (0xfffff000U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q) 
                                         << 0xcU)));
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0x800U | (0xff3ffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]));
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0x10000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
            }
        }
    } else {
        if ((2U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                            >> 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                         >> 0x16U)))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 4U;
                }
            } else {
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0x20000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                if ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                            >> 0x17U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                         >> 0x19U)))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                        = ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                                   >> 0x10U) & (~ (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                                   >> 0x16U))))
                            ? 3U : 4U);
                }
            }
        } else {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if (this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = ((0xdffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                           | (0x20000U & this->__PVT__err_resp[2U]));
                } else {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = (0x20000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                        = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                   >> 0x17U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                                >> 0x19U)))
                            ? ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                                       >> 0x10U) & 
                                      (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                          >> 0x16U))))
                                ? 3U : 4U) : 2U);
                }
            } else {
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
                     | (4U > (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = ((0x7ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                           | (0x80000U & this->__PVT__err_resp[2U]));
                }
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
                     | (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                          >> 2U) & (0U == (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                                                  << 0x18U) 
                                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                                    >> 8U))))) 
                        & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = ((0xdffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                           | (0x20000U & this->__PVT__err_resp[2U]));
                }
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                      >> 2U) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                                >> 8U)))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = (0x80000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                    if (this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 1U;
                    } else {
                        this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                            = (0x20000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                            = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                       >> 0x17U) & 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                       >> 0x19U))) ? 
                               ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                                        >> 0x10U) & 
                                       (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                           >> 0x16U))))
                                 ? 3U : 4U) : 2U);
                    }
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i) 
         & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n 
            = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    }
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i) 
         & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = (3U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
           & (IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i)) 
          & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q;
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_err_slv__pi4::_combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__4(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_err_slv__pi4::_combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__4\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:246
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0x1ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]) 
           | (0xfffe0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                             << 0xeU)));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[5U] 
        = ((0x1ffffU & ((0x1c000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                                     << 0xeU)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                                  >> 0x12U))) 
           | (0xfffe0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                             << 0xeU)));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[6U] 
        = ((0x1ffffU & ((0x1c000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x14U] 
                                     << 0xeU)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                                                  >> 0x12U))) 
           | (0x1fe0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x14U] 
                            << 0xeU)));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = (0xff03ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0x3fU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0xffffffc0U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x10U] 
                              << 0xeU) | (0x3fc0U & 
                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                           >> 0x12U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0x3fU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x10U] 
                     >> 0x12U)) | (0xffffffc0U & ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x11U] 
                                                   << 0xeU) 
                                                  | (0x3fc0U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x10U] 
                                                        >> 0x12U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0xffff0000U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]) 
           | ((0x3fU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x11U] 
                        >> 0x12U)) | (0xffc0U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                                  << 0xeU) 
                                                 | (0x3fc0U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x11U] 
                                                       >> 0x12U))))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (0xfffffffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xeU] 
                              << 0xeU) | (0x3ffeU & 
                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU] 
                                           >> 0x12U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
        = ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xeU] 
                  >> 0x12U)) | (0xfffffffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                                << 0xeU) 
                                               | (0x3ffeU 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xeU] 
                                                     >> 0x12U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xfffffff0U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                     >> 0x12U)) | (0xeU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x10U] 
                                            << 0xeU) 
                                           | (0x3ffeU 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                                 >> 0x12U))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_err_slv__pi4::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__7(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_err_slv__pi4::_sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__7\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:111
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
           & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:111
    this->__PVT__i_b_fifo__DOT__write_pointer_q = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
                                                   & (IData)(this->__PVT__i_b_fifo__DOT__write_pointer_n));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:111
    this->__PVT__i_w_fifo__DOT__write_pointer_q = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                                    ? (IData)(this->__PVT__i_w_fifo__DOT__write_pointer_n)
                                                    : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:111
    this->__PVT__i_r_fifo__DOT__write_pointer_q = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                                    ? (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_n)
                                                    : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:111
    this->__PVT__i_w_fifo__DOT__read_pointer_q = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                                   ? (IData)(this->__PVT__i_w_fifo__DOT__read_pointer_n)
                                                   : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:129
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if ((1U & (~ (IData)(this->__PVT__i_w_fifo__DOT__gate_clock)))) {
            this->__PVT__i_w_fifo__DOT__mem_q = this->__PVT__i_w_fifo__DOT__mem_n;
        }
    } else {
        this->__PVT__i_w_fifo__DOT__mem_q = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:111
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
           & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:129
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock)))) {
            this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q 
                = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n;
        }
    } else {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:327
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:327
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:111
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:111
    this->__PVT__i_b_fifo__DOT__read_pointer_q = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
                                                  & (IData)(this->__PVT__i_b_fifo__DOT__read_pointer_n));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:129
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if ((1U & (~ (IData)(this->__PVT__i_b_fifo__DOT__gate_clock)))) {
            this->__PVT__i_b_fifo__DOT__mem_q = this->__PVT__i_b_fifo__DOT__mem_n;
        }
    } else {
        this->__PVT__i_b_fifo__DOT__mem_q = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/delta_counter.sv:67
    this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:220
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if (this->__PVT__r_busy_load) {
            this->__PVT__r_busy_q = this->__PVT__r_busy_d;
        }
    } else {
        this->__PVT__r_busy_q = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:111
    this->__PVT__i_r_fifo__DOT__status_cnt_q = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                                 ? (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_n)
                                                 : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:111
    this->__PVT__i_r_fifo__DOT__read_pointer_q = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                                   ? (IData)(this->__PVT__i_r_fifo__DOT__read_pointer_n)
                                                   : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:129
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        if ((1U & (~ (IData)(this->__PVT__i_r_fifo__DOT__gate_clock)))) {
            this->__PVT__i_r_fifo__DOT__mem_q = this->__PVT__i_r_fifo__DOT__mem_n;
        }
    } else {
        this->__PVT__i_r_fifo__DOT__mem_q = VL_ULL(0);
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:111
    this->__PVT__i_b_fifo__DOT__status_cnt_q = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                                 ? (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_n)
                                                 : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:111
    this->__PVT__i_w_fifo__DOT__status_cnt_q = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
                                                 ? (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_n)
                                                 : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:327
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:327
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:327
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)
            : 0U);
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(this->__PVT__r_busy_q)))) {
        if ((0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) {
            this->__PVT__r_cnt_load = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__Vcellout__i_r_fifo__data_o = (0xfffU & 
                                          ((0x2fU >= 
                                            (0x3fU 
                                             & ((IData)(0xcU) 
                                                * (IData)(this->__PVT__i_r_fifo__DOT__read_pointer_q))))
                                            ? (IData)(
                                                      (this->__PVT__i_r_fifo__DOT__mem_q 
                                                       >> 
                                                       (0x3fU 
                                                        & ((IData)(0xcU) 
                                                           * (IData)(this->__PVT__i_r_fifo__DOT__read_pointer_q)))))
                                            : 0U));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:138
    this->__PVT__err_resp[2U] = (0xf01ffU & this->__PVT__err_resp[2U]);
    this->__PVT__err_resp[2U] = ((0xf0fffU & this->__PVT__err_resp[2U]) 
                                 | (0xf000U & (((IData)(this->__PVT__i_b_fifo__DOT__mem_q) 
                                                >> 
                                                (7U 
                                                 & ((IData)(this->__PVT__i_b_fifo__DOT__read_pointer_q) 
                                                    << 2U))) 
                                               << 0xcU)));
    this->__PVT__err_resp[2U] = (0xc00U | this->__PVT__err_resp[2U]);
    this->__PVT__err_resp[2U] = (0xeffffU & this->__PVT__err_resp[2U]);
    if ((0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q))) {
        this->__PVT__err_resp[2U] = (0x10000U | this->__PVT__err_resp[2U]);
    }
    this->__PVT__err_resp[2U] = ((0x3ffffU & this->__PVT__err_resp[2U]) 
                                 | (0xfffc0000U & (
                                                   ((4U 
                                                     != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
                                                    << 0x13U) 
                                                   | ((4U 
                                                       != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)) 
                                                      << 0x12U))));
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream 
        = ((~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
               >> 3U)) & (0U < (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))));
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream 
        = (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
            >> 3U) & (7U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__err_resp[0U] = 0U;
    this->__PVT__err_resp[1U] = 0U;
    this->__PVT__err_resp[2U] = (0xfff00U & this->__PVT__err_resp[2U]);
    this->__PVT__err_resp[2U] = ((0xfff0fU & this->__PVT__err_resp[2U]) 
                                 | (0xf0U & ((IData)(this->__Vcellout__i_r_fifo__data_o) 
                                             >> 4U)));
    this->__PVT__err_resp[0U] = (0xadcab1e0U | (0xfU 
                                                & this->__PVT__err_resp[0U]));
    this->__PVT__err_resp[1U] = 0xa11ab1ebU;
    this->__PVT__err_resp[2U] = (0xcU | (0xffff0U & 
                                         this->__PVT__err_resp[2U]));
    this->__PVT__err_resp[0U] = (0xcU | this->__PVT__err_resp[0U]);
    this->__PVT__err_resp[2U] = (0xffeffU & this->__PVT__err_resp[2U]);
    if (this->__PVT__r_busy_q) {
        this->__PVT__err_resp[2U] = (0x100U | this->__PVT__err_resp[2U]);
        this->__PVT__err_resp[0U] = ((0xfffffffdU & 
                                      this->__PVT__err_resp[0U]) 
                                     | (0xfffffffeU 
                                        & ((0U == (0xffU 
                                                   & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                                           << 1U)));
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_err_slv__pi4::_combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__10(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_err_slv__pi4::_combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__10\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q;
    if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                      >> 2U) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                                >> 8U)))))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d 
                        = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x15U] 
                                    << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x14U] 
                                                 >> 7U)));
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 0U;
    if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                      >> 2U) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                                >> 8U)))))) {
                    if ((1U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                                       << 0x18U) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                       >> 8U))))) {
                        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 1U;
                    }
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:254
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU] 
                    >> 0x12U)));
    if ((0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
            this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
                = (0xfffffffeU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]);
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = (0xfffeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = (0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffffffefU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0x10U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                       >> 0x12U)));
    if ((4U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                    = (0xffffffefU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]);
            }
        }
    } else {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if (this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                        = ((0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
                           | (0x20U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                       >> 0x12U)));
                }
            } else {
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
                     | (4U > (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                        = ((0xfffeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]) 
                           | (0x10000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                          << 0xeU)));
                }
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
                     | (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                          >> 2U) & (0U == (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                                                  << 0x18U) 
                                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                                    >> 8U))))) 
                        & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                        = ((0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
                           | (0x20U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                       >> 0x12U)));
                }
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                      >> 2U) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                                >> 8U)))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                        = (0xfffeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]);
                    if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream)))) {
                        this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                            = (0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]);
                    }
                }
            }
        }
    }
    this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i 
        = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid) 
           & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_busy_d = this->__PVT__r_busy_q;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_busy_d = 0U;
            }
        }
    } else {
        if ((0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) {
            this->__PVT__r_busy_d = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_busy_load = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_busy_load = 1U;
            }
        }
    } else {
        if ((0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) {
            this->__PVT__r_busy_load = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_cnt_en = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            this->__PVT__r_cnt_en = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_cnt_clear = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_cnt_clear = 1U;
            }
        }
    }
    this->__PVT__r_fifo_inp = ((0xf00U & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                                          << 8U)) | 
                               (0xffU & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
                                          << 8U) | 
                                         (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
                                          >> 0x18U))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:138
    this->__PVT__b_fifo_pop = 0U;
    if ((0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q))) {
        this->__PVT__b_fifo_pop = (1U & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                                         >> 4U));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_fifo_pop = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_fifo_pop = 1U;
            }
        }
    }
    this->__PVT__r_fifo_push = ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
                                 >> 1U) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)));
    this->__PVT__w_fifo_push = ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                                 >> 0x10U) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock = 1U;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n 
            = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n 
            = (((~ ((IData)(0xffU) << (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q) 
                                             << 3U)))) 
                & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n)) 
               | ((0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                             << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                       >> 0x1fU))) 
                  << (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q) 
                            << 3U))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/delta_counter.sv:51
    this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (this->__PVT__r_cnt_clear) {
        this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else {
        if (this->__PVT__r_cnt_load) {
            this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
                = (0xffU & (IData)(this->__Vcellout__i_r_fifo__data_o));
        } else {
            if (this->__PVT__r_cnt_en) {
                this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
                    = (0x1ffU & ((IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                                 - (IData)(1U)));
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__read_pointer_n = this->__PVT__i_b_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__b_fifo_pop) & (0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(this->__PVT__i_b_fifo__DOT__read_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__read_pointer_n = this->__PVT__i_r_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__r_fifo_pop) & (0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_r_fifo__DOT__read_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__write_pointer_n = this->__PVT__i_r_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__status_cnt_n = this->__PVT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(1U) + (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__r_fifo_pop) & (0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q) 
                   - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__r_fifo_push) & (IData)(this->__PVT__r_fifo_pop)) 
          & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__status_cnt_n = this->__PVT__i_r_fifo__DOT__status_cnt_q;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__mem_n = this->__PVT__i_r_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->i_r_fifo__DOT____Vlvbound1 = this->__PVT__r_fifo_inp;
        if ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q))))) {
            this->__PVT__i_r_fifo__DOT__mem_n = (((~ 
                                                   (VL_ULL(0xfff) 
                                                    << 
                                                    (0x3fU 
                                                     & ((IData)(0xcU) 
                                                        * (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q))))) 
                                                  & this->__PVT__i_r_fifo__DOT__mem_n) 
                                                 | ((QData)((IData)(this->i_r_fifo__DOT____Vlvbound1)) 
                                                    << 
                                                    (0x3fU 
                                                     & ((IData)(0xcU) 
                                                        * (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q)))));
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__mem_n = this->__PVT__i_w_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__mem_n = (((~ ((IData)(0xfU) 
                                                  << 
                                                  (0xfU 
                                                   & ((IData)(this->__PVT__i_w_fifo__DOT__write_pointer_q) 
                                                      << 2U)))) 
                                              & (IData)(this->__PVT__i_w_fifo__DOT__mem_n)) 
                                             | ((0xfU 
                                                 & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[6U] 
                                                    >> 0x15U)) 
                                                << 
                                                (0xfU 
                                                 & ((IData)(this->__PVT__i_w_fifo__DOT__write_pointer_q) 
                                                    << 2U))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__Vcellout__i_w_fifo__data_o = (0xfU & ((IData)(this->__PVT__i_w_fifo__DOT__mem_q) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(this->__PVT__i_w_fifo__DOT__read_pointer_q) 
                                                      << 2U))));
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        this->__Vcellout__i_w_fifo__data_o = (0xfU 
                                              & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[6U] 
                                                 >> 0x15U));
    }
    this->__PVT__w_fifo_empty = ((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
                                 & (~ (IData)(this->__PVT__w_fifo_push)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:105
    this->__PVT__w_fifo_pop = 0U;
    if (((~ (IData)(this->__PVT__w_fifo_empty)) & (2U 
                                                   != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                    >> 5U) & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                              >> 7U)))) {
            this->__PVT__w_fifo_pop = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:105
    this->__PVT__b_fifo_push = 0U;
    if (((~ (IData)(this->__PVT__w_fifo_empty)) & (2U 
                                                   != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                    >> 5U) & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                              >> 7U)))) {
            this->__PVT__b_fifo_push = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:105
    this->__PVT__err_resp[2U] = (0xdffffU & this->__PVT__err_resp[2U]);
    if (((~ (IData)(this->__PVT__w_fifo_empty)) & (2U 
                                                   != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__err_resp[2U] = (0x20000U | this->__PVT__err_resp[2U]);
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__write_pointer_n = this->__PVT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_w_fifo__DOT__write_pointer_q)));
    }
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        if (this->__PVT__w_fifo_pop) {
            this->__PVT__i_w_fifo__DOT__write_pointer_n 
                = this->__PVT__i_w_fifo__DOT__write_pointer_q;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__status_cnt_n = this->__PVT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(1U) + (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__w_fifo_pop) & (~ (IData)(this->__PVT__w_fifo_empty)))) {
        this->__PVT__i_w_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q) 
                   - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__w_fifo_push) & (IData)(this->__PVT__w_fifo_pop)) 
          & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(this->__PVT__w_fifo_empty)))) {
        this->__PVT__i_w_fifo__DOT__status_cnt_n = this->__PVT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        if (this->__PVT__w_fifo_pop) {
            this->__PVT__i_w_fifo__DOT__status_cnt_n 
                = this->__PVT__i_w_fifo__DOT__status_cnt_q;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__read_pointer_n = this->__PVT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__w_fifo_pop) & (~ (IData)(this->__PVT__w_fifo_empty)))) {
        this->__PVT__i_w_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        if (this->__PVT__w_fifo_pop) {
            this->__PVT__i_w_fifo__DOT__read_pointer_n 
                = this->__PVT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__write_pointer_n = this->__PVT__i_b_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(this->__PVT__i_b_fifo__DOT__write_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__status_cnt_n = this->__PVT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__status_cnt_n = 
            (3U & ((IData)(1U) + (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__b_fifo_pop) & (0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__status_cnt_n = 
            (3U & ((IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q) 
                   - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__b_fifo_push) & (IData)(this->__PVT__b_fifo_pop)) 
          & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__status_cnt_n = this->__PVT__i_b_fifo__DOT__status_cnt_q;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__mem_n = this->__PVT__i_b_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__mem_n = (((~ ((IData)(0xfU) 
                                                  << 
                                                  (7U 
                                                   & ((IData)(this->__PVT__i_b_fifo__DOT__write_pointer_q) 
                                                      << 2U)))) 
                                              & (IData)(this->__PVT__i_b_fifo__DOT__mem_n)) 
                                             | ((IData)(this->__Vcellout__i_w_fifo__data_o) 
                                                << 
                                                (7U 
                                                 & ((IData)(this->__PVT__i_b_fifo__DOT__write_pointer_q) 
                                                    << 2U))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:312
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q;
    if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                >> 0x10U) & (this->__PVT__err_resp[2U] 
                             >> 0x13U)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((8U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (7U & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))));
    }
    if ((1U & (((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                 >> 5U) & (this->__PVT__err_resp[2U] 
                           >> 0x11U)) & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                                         >> 7U)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((8U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d) 
                        - (IData)(1U))));
    }
    if ((((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
          >> 3U) & (0U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
    } else {
        if (((0U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))) 
             & (7U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
            this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
                = (8U | (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
        }
    }
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xbffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0x40000U & this->__PVT__err_resp[2U]));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:254
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] 
        = this->__PVT__err_resp[0U];
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[1U] 
        = this->__PVT__err_resp[1U];
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xfff00U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0xffU & this->__PVT__err_resp[2U]));
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xffeffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0x100U & this->__PVT__err_resp[2U]));
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 0U;
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q;
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q;
    if ((0U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U & ((this->__PVT__err_resp[2U] >> 8U) 
                   & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU] 
                         >> 0x12U))))) {
            this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 2U;
        } else {
            if ((0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) {
                this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                    = (0xffU & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q) 
                                >> (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q) 
                                          << 3U))));
                this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 1U;
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] = 0U;
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[1U] = 0U;
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                = (0xfff00U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                = ((0xfff0fU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                   | (0xfffffff0U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q) 
                                     << 4U)));
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] 
                = (8U | (0xfffffff3U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U]));
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] 
                = ((0xfffffffdU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U]) 
                   | (0xfffffffeU & ((0U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q)) 
                                     << 1U)));
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                = (0x100U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
            if ((0x40000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU])) {
                if ((2U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U])) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 1U;
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
                } else {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                        = (0xffU & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d) 
                                    - (IData)(1U)));
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
                if ((1U & ((this->__PVT__err_resp[2U] 
                            >> 8U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU] 
                                      >> 0x12U)))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
                }
            } else {
                this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
            }
        }
    }
    this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i 
        = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready) 
           & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = (0x7ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = (0xdffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0x10000U & this->__PVT__err_resp[2U]));
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xf01ffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0xfe00U & this->__PVT__err_resp[2U]));
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q;
    if ((4U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((2U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 0U;
        } else {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if ((0U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 0U;
                }
            } else {
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0xf01ffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                if ((0x400000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU])) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                        = (((0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
                            & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready)))
                            ? 5U : 0U);
                }
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = ((0xf0fffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                       | (0xfffff000U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q) 
                                         << 0xcU)));
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0x800U | (0xff3ffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]));
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0x10000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
            }
        }
    } else {
        if ((2U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                            >> 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                         >> 0x16U)))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 4U;
                }
            } else {
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0x20000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                if ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                            >> 0x17U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                         >> 0x19U)))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                        = ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                                   >> 0x10U) & (~ (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                                   >> 0x16U))))
                            ? 3U : 4U);
                }
            }
        } else {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if (this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = ((0xdffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                           | (0x20000U & this->__PVT__err_resp[2U]));
                } else {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = (0x20000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                        = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                   >> 0x17U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                                >> 0x19U)))
                            ? ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                                       >> 0x10U) & 
                                      (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                          >> 0x16U))))
                                ? 3U : 4U) : 2U);
                }
            } else {
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
                     | (4U > (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = ((0x7ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                           | (0x80000U & this->__PVT__err_resp[2U]));
                }
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
                     | (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                          >> 2U) & (0U == (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                                                  << 0x18U) 
                                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                                    >> 8U))))) 
                        & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = ((0xdffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                           | (0x20000U & this->__PVT__err_resp[2U]));
                }
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                      >> 2U) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x13U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
                                                >> 8U)))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = (0x80000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                    if (this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 1U;
                    } else {
                        this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                            = (0x20000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                            = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                       >> 0x17U) & 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                       >> 0x19U))) ? 
                               ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                                        >> 0x10U) & 
                                       (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                                           >> 0x16U))))
                                 ? 3U : 4U) : 2U);
                    }
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i) 
         & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n 
            = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    }
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i) 
         & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = (3U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
           & (IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i)) 
          & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q;
    }
}

void Vrvfpgasim_axi_err_slv__pi4::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__2(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_err_slv__pi4::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__2\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(this->__PVT__r_busy_q)))) {
        if ((0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) {
            this->__PVT__r_cnt_load = 1U;
        }
    }
    this->__PVT__err_resp[2U] = ((0x3ffffU & this->__PVT__err_resp[2U]) 
                                 | (0xfffc0000U & (
                                                   ((4U 
                                                     != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
                                                    << 0x13U) 
                                                   | ((4U 
                                                       != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)) 
                                                      << 0x12U))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:138
    this->__PVT__err_resp[2U] = (0xf01ffU & this->__PVT__err_resp[2U]);
    this->__PVT__err_resp[2U] = ((0xf0fffU & this->__PVT__err_resp[2U]) 
                                 | (0xf000U & (((IData)(this->__PVT__i_b_fifo__DOT__mem_q) 
                                                >> 
                                                (7U 
                                                 & ((IData)(this->__PVT__i_b_fifo__DOT__read_pointer_q) 
                                                    << 2U))) 
                                               << 0xcU)));
    this->__PVT__err_resp[2U] = (0xc00U | this->__PVT__err_resp[2U]);
    this->__PVT__err_resp[2U] = (0xeffffU & this->__PVT__err_resp[2U]);
    if ((0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q))) {
        this->__PVT__err_resp[2U] = (0x10000U | this->__PVT__err_resp[2U]);
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__Vcellout__i_r_fifo__data_o = (0xfffU & 
                                          ((0x2fU >= 
                                            (0x3fU 
                                             & ((IData)(0xcU) 
                                                * (IData)(this->__PVT__i_r_fifo__DOT__read_pointer_q))))
                                            ? (IData)(
                                                      (this->__PVT__i_r_fifo__DOT__mem_q 
                                                       >> 
                                                       (0x3fU 
                                                        & ((IData)(0xcU) 
                                                           * (IData)(this->__PVT__i_r_fifo__DOT__read_pointer_q)))))
                                            : 0U));
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream 
        = ((~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
               >> 3U)) & (0U < (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))));
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream 
        = (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
            >> 3U) & (7U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:246
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0x1ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]) 
           | (0xfffe0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                             << 3U)));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[5U] 
        = ((0x1ffffU & ((0x1fff8U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                                     << 3U)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                                                >> 0x1dU))) 
           | (0xfffe0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                             << 3U)));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[6U] 
        = ((0x1ffffU & ((0x1fff8U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x28U] 
                                     << 3U)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                                                >> 0x1dU))) 
           | (0x1fe0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x28U] 
                            << 3U)));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = (0xff03ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0x3fU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0xffffffc0U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                             << 3U)));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0x3fU & ((0x38U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x25U] 
                               << 3U)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                          >> 0x1dU))) 
           | (0xffffffc0U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x25U] 
                             << 3U)));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0xffff0000U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]) 
           | ((0x3fU & ((0x38U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                                  << 3U)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x25U] 
                                             >> 0x1dU))) 
              | (0xffc0U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                            << 3U))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (0xfffffffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x22U] 
                              << 3U) | (6U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U] 
                                              >> 0x1dU)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
        = ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x22U] 
                  >> 0x1dU)) | (0xfffffffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x23U] 
                                                << 3U) 
                                               | (6U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x22U] 
                                                     >> 0x1dU)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xfffffff0U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x23U] 
                     >> 0x1dU)) | (0xeU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                            << 3U) 
                                           | (6U & 
                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x23U] 
                                               >> 0x1dU))))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q;
    if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                      >> 0xdU) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                                                << 0xdU) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                                                  >> 0x13U)))))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d 
                        = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x29U] 
                                    << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x28U] 
                                                >> 0x12U)));
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 0U;
    if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                      >> 0xdU) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                                                << 0xdU) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                                                  >> 0x13U)))))) {
                    if ((1U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                                       << 0xdU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                                                   >> 0x13U))))) {
                        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 1U;
                    }
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:254
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U] 
                    >> 0x1dU)));
    if ((0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
            this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
                = (0xfffffffeU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]);
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__err_resp[0U] = 0U;
    this->__PVT__err_resp[1U] = 0U;
    this->__PVT__err_resp[2U] = (0xfff00U & this->__PVT__err_resp[2U]);
    this->__PVT__err_resp[2U] = ((0xfff0fU & this->__PVT__err_resp[2U]) 
                                 | (0xf0U & ((IData)(this->__Vcellout__i_r_fifo__data_o) 
                                             >> 4U)));
    this->__PVT__err_resp[0U] = (0xadcab1e0U | (0xfU 
                                                & this->__PVT__err_resp[0U]));
    this->__PVT__err_resp[1U] = 0xa11ab1ebU;
    this->__PVT__err_resp[2U] = (0xcU | (0xffff0U & 
                                         this->__PVT__err_resp[2U]));
    this->__PVT__err_resp[0U] = (0xcU | this->__PVT__err_resp[0U]);
    this->__PVT__err_resp[2U] = (0xffeffU & this->__PVT__err_resp[2U]);
    if (this->__PVT__r_busy_q) {
        this->__PVT__err_resp[2U] = (0x100U | this->__PVT__err_resp[2U]);
        this->__PVT__err_resp[0U] = ((0xfffffffdU & 
                                      this->__PVT__err_resp[0U]) 
                                     | (0xfffffffeU 
                                        & ((0U == (0xffU 
                                                   & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                                           << 1U)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = (0xfffeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = (0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffffffefU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0x10U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                       << 3U)));
    if ((4U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                    = (0xffffffefU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]);
            }
        }
    } else {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if (this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                        = ((0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
                           | (0x20U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                       << 3U)));
                }
            } else {
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
                     | (4U > (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                        = ((0xfffeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]) 
                           | (0x10000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                                          << 3U)));
                }
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
                     | (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                          >> 0xdU) & (0U == (3U & (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                                                    << 0xdU) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                                                      >> 0x13U))))) 
                        & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                        = ((0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
                           | (0x20U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                       << 3U)));
                }
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                      >> 0xdU) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                                                << 0xdU) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                                                  >> 0x13U)))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                        = (0xfffeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]);
                    if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream)))) {
                        this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                            = (0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]);
                    }
                }
            }
        }
    }
    this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i 
        = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid) 
           & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_busy_d = this->__PVT__r_busy_q;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_busy_d = 0U;
            }
        }
    } else {
        if ((0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) {
            this->__PVT__r_busy_d = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_busy_load = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_busy_load = 1U;
            }
        }
    } else {
        if ((0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) {
            this->__PVT__r_busy_load = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_cnt_en = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            this->__PVT__r_cnt_en = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_cnt_clear = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_cnt_clear = 1U;
            }
        }
    }
    this->__PVT__r_fifo_inp = ((0xf00U & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                                          << 8U)) | 
                               (0xffU & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
                                          << 8U) | 
                                         (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
                                          >> 0x18U))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:138
    this->__PVT__b_fifo_pop = 0U;
    if ((0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q))) {
        this->__PVT__b_fifo_pop = (1U & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                                         >> 4U));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_fifo_pop = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_fifo_pop = 1U;
            }
        }
    }
    this->__PVT__r_fifo_push = ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
                                 >> 1U) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)));
    this->__PVT__w_fifo_push = ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                                 >> 0x10U) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock = 1U;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n 
            = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n 
            = (((~ ((IData)(0xffU) << (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q) 
                                             << 3U)))) 
                & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n)) 
               | ((0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x28U] 
                             << 0x16U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                                          >> 0xaU))) 
                  << (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q) 
                            << 3U))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/delta_counter.sv:51
    this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (this->__PVT__r_cnt_clear) {
        this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else {
        if (this->__PVT__r_cnt_load) {
            this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
                = (0xffU & (IData)(this->__Vcellout__i_r_fifo__data_o));
        } else {
            if (this->__PVT__r_cnt_en) {
                this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
                    = (0x1ffU & ((IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                                 - (IData)(1U)));
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__read_pointer_n = this->__PVT__i_b_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__b_fifo_pop) & (0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(this->__PVT__i_b_fifo__DOT__read_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__read_pointer_n = this->__PVT__i_r_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__r_fifo_pop) & (0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_r_fifo__DOT__read_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__write_pointer_n = this->__PVT__i_r_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__status_cnt_n = this->__PVT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(1U) + (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__r_fifo_pop) & (0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q) 
                   - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__r_fifo_push) & (IData)(this->__PVT__r_fifo_pop)) 
          & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__status_cnt_n = this->__PVT__i_r_fifo__DOT__status_cnt_q;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__mem_n = this->__PVT__i_r_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->i_r_fifo__DOT____Vlvbound1 = this->__PVT__r_fifo_inp;
        if ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q))))) {
            this->__PVT__i_r_fifo__DOT__mem_n = (((~ 
                                                   (VL_ULL(0xfff) 
                                                    << 
                                                    (0x3fU 
                                                     & ((IData)(0xcU) 
                                                        * (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q))))) 
                                                  & this->__PVT__i_r_fifo__DOT__mem_n) 
                                                 | ((QData)((IData)(this->i_r_fifo__DOT____Vlvbound1)) 
                                                    << 
                                                    (0x3fU 
                                                     & ((IData)(0xcU) 
                                                        * (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q)))));
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__mem_n = this->__PVT__i_w_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__mem_n = (((~ ((IData)(0xfU) 
                                                  << 
                                                  (0xfU 
                                                   & ((IData)(this->__PVT__i_w_fifo__DOT__write_pointer_q) 
                                                      << 2U)))) 
                                              & (IData)(this->__PVT__i_w_fifo__DOT__mem_n)) 
                                             | ((0xfU 
                                                 & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[6U] 
                                                    >> 0x15U)) 
                                                << 
                                                (0xfU 
                                                 & ((IData)(this->__PVT__i_w_fifo__DOT__write_pointer_q) 
                                                    << 2U))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__Vcellout__i_w_fifo__data_o = (0xfU & ((IData)(this->__PVT__i_w_fifo__DOT__mem_q) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(this->__PVT__i_w_fifo__DOT__read_pointer_q) 
                                                      << 2U))));
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        this->__Vcellout__i_w_fifo__data_o = (0xfU 
                                              & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[6U] 
                                                 >> 0x15U));
    }
    this->__PVT__w_fifo_empty = ((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
                                 & (~ (IData)(this->__PVT__w_fifo_push)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:105
    this->__PVT__w_fifo_pop = 0U;
    if (((~ (IData)(this->__PVT__w_fifo_empty)) & (2U 
                                                   != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                    >> 5U) & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                              >> 7U)))) {
            this->__PVT__w_fifo_pop = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:105
    this->__PVT__b_fifo_push = 0U;
    if (((~ (IData)(this->__PVT__w_fifo_empty)) & (2U 
                                                   != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                    >> 5U) & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                              >> 7U)))) {
            this->__PVT__b_fifo_push = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:105
    this->__PVT__err_resp[2U] = (0xdffffU & this->__PVT__err_resp[2U]);
    if (((~ (IData)(this->__PVT__w_fifo_empty)) & (2U 
                                                   != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__err_resp[2U] = (0x20000U | this->__PVT__err_resp[2U]);
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__write_pointer_n = this->__PVT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_w_fifo__DOT__write_pointer_q)));
    }
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        if (this->__PVT__w_fifo_pop) {
            this->__PVT__i_w_fifo__DOT__write_pointer_n 
                = this->__PVT__i_w_fifo__DOT__write_pointer_q;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__status_cnt_n = this->__PVT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(1U) + (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__w_fifo_pop) & (~ (IData)(this->__PVT__w_fifo_empty)))) {
        this->__PVT__i_w_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q) 
                   - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__w_fifo_push) & (IData)(this->__PVT__w_fifo_pop)) 
          & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(this->__PVT__w_fifo_empty)))) {
        this->__PVT__i_w_fifo__DOT__status_cnt_n = this->__PVT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        if (this->__PVT__w_fifo_pop) {
            this->__PVT__i_w_fifo__DOT__status_cnt_n 
                = this->__PVT__i_w_fifo__DOT__status_cnt_q;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__read_pointer_n = this->__PVT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__w_fifo_pop) & (~ (IData)(this->__PVT__w_fifo_empty)))) {
        this->__PVT__i_w_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        if (this->__PVT__w_fifo_pop) {
            this->__PVT__i_w_fifo__DOT__read_pointer_n 
                = this->__PVT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__write_pointer_n = this->__PVT__i_b_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(this->__PVT__i_b_fifo__DOT__write_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__status_cnt_n = this->__PVT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__status_cnt_n = 
            (3U & ((IData)(1U) + (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__b_fifo_pop) & (0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__status_cnt_n = 
            (3U & ((IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q) 
                   - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__b_fifo_push) & (IData)(this->__PVT__b_fifo_pop)) 
          & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__status_cnt_n = this->__PVT__i_b_fifo__DOT__status_cnt_q;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__mem_n = this->__PVT__i_b_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__mem_n = (((~ ((IData)(0xfU) 
                                                  << 
                                                  (7U 
                                                   & ((IData)(this->__PVT__i_b_fifo__DOT__write_pointer_q) 
                                                      << 2U)))) 
                                              & (IData)(this->__PVT__i_b_fifo__DOT__mem_n)) 
                                             | ((IData)(this->__Vcellout__i_w_fifo__data_o) 
                                                << 
                                                (7U 
                                                 & ((IData)(this->__PVT__i_b_fifo__DOT__write_pointer_q) 
                                                    << 2U))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:312
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q;
    if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                >> 0x10U) & (this->__PVT__err_resp[2U] 
                             >> 0x13U)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((8U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (7U & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))));
    }
    if ((1U & (((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                 >> 5U) & (this->__PVT__err_resp[2U] 
                           >> 0x11U)) & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                                         >> 7U)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((8U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d) 
                        - (IData)(1U))));
    }
    if ((((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
          >> 3U) & (0U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
    } else {
        if (((0U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))) 
             & (7U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
            this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
                = (8U | (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
        }
    }
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xbffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0x40000U & this->__PVT__err_resp[2U]));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:254
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] 
        = this->__PVT__err_resp[0U];
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[1U] 
        = this->__PVT__err_resp[1U];
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xfff00U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0xffU & this->__PVT__err_resp[2U]));
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xffeffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0x100U & this->__PVT__err_resp[2U]));
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 0U;
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q;
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q;
    if ((0U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U & ((this->__PVT__err_resp[2U] >> 8U) 
                   & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U] 
                         >> 0x1dU))))) {
            this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 2U;
        } else {
            if ((0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) {
                this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                    = (0xffU & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q) 
                                >> (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q) 
                                          << 3U))));
                this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 1U;
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] = 0U;
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[1U] = 0U;
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                = (0xfff00U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                = ((0xfff0fU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                   | (0xfffffff0U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q) 
                                     << 4U)));
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] 
                = (8U | (0xfffffff3U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U]));
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] 
                = ((0xfffffffdU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U]) 
                   | (0xfffffffeU & ((0U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q)) 
                                     << 1U)));
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                = (0x100U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
            if ((0x20000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U])) {
                if ((2U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U])) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 1U;
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
                } else {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                        = (0xffU & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d) 
                                    - (IData)(1U)));
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
                if ((1U & ((this->__PVT__err_resp[2U] 
                            >> 8U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U] 
                                      >> 0x1dU)))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
                }
            } else {
                this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
            }
        }
    }
    this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i 
        = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready) 
           & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = (0x7ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = (0xdffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0x10000U & this->__PVT__err_resp[2U]));
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xf01ffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0xfe00U & this->__PVT__err_resp[2U]));
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q;
    if ((4U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((2U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 0U;
        } else {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if ((0U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 0U;
                }
            } else {
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0xf01ffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                if ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U])) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                        = (((0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
                            & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready)))
                            ? 5U : 0U);
                }
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = ((0xf0fffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                       | (0xfffff000U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q) 
                                         << 0xcU)));
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0x800U | (0xff3ffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]));
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0x10000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
            }
        }
    } else {
        if ((2U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                            >> 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                         >> 1U)))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 4U;
                }
            } else {
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0x20000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                if ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                            >> 2U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                      >> 4U)))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                        = ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                                   >> 0x10U) & (~ (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                                   >> 1U))))
                            ? 3U : 4U);
                }
            }
        } else {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if (this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = ((0xdffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                           | (0x20000U & this->__PVT__err_resp[2U]));
                } else {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = (0x20000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                        = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                   >> 2U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                             >> 4U)))
                            ? ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                                       >> 0x10U) & 
                                      (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                          >> 1U))))
                                ? 3U : 4U) : 2U);
                }
            } else {
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
                     | (4U > (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = ((0x7ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                           | (0x80000U & this->__PVT__err_resp[2U]));
                }
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
                     | (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                          >> 0xdU) & (0U == (3U & (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                                                    << 0xdU) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                                                      >> 0x13U))))) 
                        & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = ((0xdffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                           | (0x20000U & this->__PVT__err_resp[2U]));
                }
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                      >> 0xdU) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                                                << 0xdU) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                                                  >> 0x13U)))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = (0x80000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                    if (this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 1U;
                    } else {
                        this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                            = (0x20000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                            = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                       >> 2U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                                 >> 4U)))
                                ? ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                                           >> 0x10U) 
                                          & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                                >> 1U))))
                                    ? 3U : 4U) : 2U);
                    }
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i) 
         & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n 
            = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    }
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i) 
         & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = (3U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
           & (IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i)) 
          & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q;
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_err_slv__pi4::_combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__5(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_err_slv__pi4::_combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__5\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:246
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0x1ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]) 
           | (0xfffe0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                             << 3U)));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[5U] 
        = ((0x1ffffU & ((0x1fff8U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                                     << 3U)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                                                >> 0x1dU))) 
           | (0xfffe0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                             << 3U)));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[6U] 
        = ((0x1ffffU & ((0x1fff8U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x28U] 
                                     << 3U)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                                                >> 0x1dU))) 
           | (0x1fe0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x28U] 
                            << 3U)));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = (0xff03ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0x3fU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0xffffffc0U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                             << 3U)));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0x3fU & ((0x38U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x25U] 
                               << 3U)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                          >> 0x1dU))) 
           | (0xffffffc0U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x25U] 
                             << 3U)));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0xffff0000U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]) 
           | ((0x3fU & ((0x38U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                                  << 3U)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x25U] 
                                             >> 0x1dU))) 
              | (0xffc0U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                            << 3U))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (0xfffffffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x22U] 
                              << 3U) | (6U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U] 
                                              >> 0x1dU)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
        = ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x22U] 
                  >> 0x1dU)) | (0xfffffffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x23U] 
                                                << 3U) 
                                               | (6U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x22U] 
                                                     >> 0x1dU)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xfffffff0U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x23U] 
                     >> 0x1dU)) | (0xeU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                            << 3U) 
                                           | (6U & 
                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x23U] 
                                               >> 0x1dU))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_err_slv__pi4::_combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__11(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_err_slv__pi4::_combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__11\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q;
    if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                      >> 0xdU) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                                                << 0xdU) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                                                  >> 0x13U)))))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d 
                        = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x29U] 
                                    << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x28U] 
                                                >> 0x12U)));
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 0U;
    if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                      >> 0xdU) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                                                << 0xdU) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                                                  >> 0x13U)))))) {
                    if ((1U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                                       << 0xdU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                                                   >> 0x13U))))) {
                        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 1U;
                    }
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:254
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U] 
                    >> 0x1dU)));
    if ((0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
            this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
                = (0xfffffffeU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]);
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = (0xfffeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = (0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffffffefU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0x10U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                       << 3U)));
    if ((4U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                    = (0xffffffefU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]);
            }
        }
    } else {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if (this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                        = ((0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
                           | (0x20U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                       << 3U)));
                }
            } else {
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
                     | (4U > (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                        = ((0xfffeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]) 
                           | (0x10000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                                          << 3U)));
                }
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
                     | (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                          >> 0xdU) & (0U == (3U & (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                                                    << 0xdU) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                                                      >> 0x13U))))) 
                        & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                        = ((0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
                           | (0x20U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                       << 3U)));
                }
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                      >> 0xdU) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                                                << 0xdU) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                                                  >> 0x13U)))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                        = (0xfffeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]);
                    if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream)))) {
                        this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                            = (0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]);
                    }
                }
            }
        }
    }
    this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i 
        = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid) 
           & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_busy_d = this->__PVT__r_busy_q;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_busy_d = 0U;
            }
        }
    } else {
        if ((0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) {
            this->__PVT__r_busy_d = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_busy_load = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_busy_load = 1U;
            }
        }
    } else {
        if ((0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) {
            this->__PVT__r_busy_load = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_cnt_en = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            this->__PVT__r_cnt_en = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_cnt_clear = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_cnt_clear = 1U;
            }
        }
    }
    this->__PVT__r_fifo_inp = ((0xf00U & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                                          << 8U)) | 
                               (0xffU & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
                                          << 8U) | 
                                         (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
                                          >> 0x18U))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:138
    this->__PVT__b_fifo_pop = 0U;
    if ((0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q))) {
        this->__PVT__b_fifo_pop = (1U & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                                         >> 4U));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_fifo_pop = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_fifo_pop = 1U;
            }
        }
    }
    this->__PVT__r_fifo_push = ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
                                 >> 1U) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)));
    this->__PVT__w_fifo_push = ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                                 >> 0x10U) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock = 1U;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n 
            = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n 
            = (((~ ((IData)(0xffU) << (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q) 
                                             << 3U)))) 
                & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n)) 
               | ((0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x28U] 
                             << 0x16U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                                          >> 0xaU))) 
                  << (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q) 
                            << 3U))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/delta_counter.sv:51
    this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (this->__PVT__r_cnt_clear) {
        this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else {
        if (this->__PVT__r_cnt_load) {
            this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
                = (0xffU & (IData)(this->__Vcellout__i_r_fifo__data_o));
        } else {
            if (this->__PVT__r_cnt_en) {
                this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
                    = (0x1ffU & ((IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                                 - (IData)(1U)));
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__read_pointer_n = this->__PVT__i_b_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__b_fifo_pop) & (0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(this->__PVT__i_b_fifo__DOT__read_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__read_pointer_n = this->__PVT__i_r_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__r_fifo_pop) & (0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_r_fifo__DOT__read_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__write_pointer_n = this->__PVT__i_r_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__status_cnt_n = this->__PVT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(1U) + (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__r_fifo_pop) & (0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q) 
                   - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__r_fifo_push) & (IData)(this->__PVT__r_fifo_pop)) 
          & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__status_cnt_n = this->__PVT__i_r_fifo__DOT__status_cnt_q;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__mem_n = this->__PVT__i_r_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->i_r_fifo__DOT____Vlvbound1 = this->__PVT__r_fifo_inp;
        if ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q))))) {
            this->__PVT__i_r_fifo__DOT__mem_n = (((~ 
                                                   (VL_ULL(0xfff) 
                                                    << 
                                                    (0x3fU 
                                                     & ((IData)(0xcU) 
                                                        * (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q))))) 
                                                  & this->__PVT__i_r_fifo__DOT__mem_n) 
                                                 | ((QData)((IData)(this->i_r_fifo__DOT____Vlvbound1)) 
                                                    << 
                                                    (0x3fU 
                                                     & ((IData)(0xcU) 
                                                        * (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q)))));
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__mem_n = this->__PVT__i_w_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__mem_n = (((~ ((IData)(0xfU) 
                                                  << 
                                                  (0xfU 
                                                   & ((IData)(this->__PVT__i_w_fifo__DOT__write_pointer_q) 
                                                      << 2U)))) 
                                              & (IData)(this->__PVT__i_w_fifo__DOT__mem_n)) 
                                             | ((0xfU 
                                                 & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[6U] 
                                                    >> 0x15U)) 
                                                << 
                                                (0xfU 
                                                 & ((IData)(this->__PVT__i_w_fifo__DOT__write_pointer_q) 
                                                    << 2U))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__Vcellout__i_w_fifo__data_o = (0xfU & ((IData)(this->__PVT__i_w_fifo__DOT__mem_q) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(this->__PVT__i_w_fifo__DOT__read_pointer_q) 
                                                      << 2U))));
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        this->__Vcellout__i_w_fifo__data_o = (0xfU 
                                              & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[6U] 
                                                 >> 0x15U));
    }
    this->__PVT__w_fifo_empty = ((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
                                 & (~ (IData)(this->__PVT__w_fifo_push)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:105
    this->__PVT__w_fifo_pop = 0U;
    if (((~ (IData)(this->__PVT__w_fifo_empty)) & (2U 
                                                   != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                    >> 5U) & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                              >> 7U)))) {
            this->__PVT__w_fifo_pop = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:105
    this->__PVT__b_fifo_push = 0U;
    if (((~ (IData)(this->__PVT__w_fifo_empty)) & (2U 
                                                   != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                    >> 5U) & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                              >> 7U)))) {
            this->__PVT__b_fifo_push = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:105
    this->__PVT__err_resp[2U] = (0xdffffU & this->__PVT__err_resp[2U]);
    if (((~ (IData)(this->__PVT__w_fifo_empty)) & (2U 
                                                   != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__err_resp[2U] = (0x20000U | this->__PVT__err_resp[2U]);
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__write_pointer_n = this->__PVT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_w_fifo__DOT__write_pointer_q)));
    }
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        if (this->__PVT__w_fifo_pop) {
            this->__PVT__i_w_fifo__DOT__write_pointer_n 
                = this->__PVT__i_w_fifo__DOT__write_pointer_q;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__status_cnt_n = this->__PVT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(1U) + (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__w_fifo_pop) & (~ (IData)(this->__PVT__w_fifo_empty)))) {
        this->__PVT__i_w_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q) 
                   - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__w_fifo_push) & (IData)(this->__PVT__w_fifo_pop)) 
          & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(this->__PVT__w_fifo_empty)))) {
        this->__PVT__i_w_fifo__DOT__status_cnt_n = this->__PVT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        if (this->__PVT__w_fifo_pop) {
            this->__PVT__i_w_fifo__DOT__status_cnt_n 
                = this->__PVT__i_w_fifo__DOT__status_cnt_q;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__read_pointer_n = this->__PVT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__w_fifo_pop) & (~ (IData)(this->__PVT__w_fifo_empty)))) {
        this->__PVT__i_w_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        if (this->__PVT__w_fifo_pop) {
            this->__PVT__i_w_fifo__DOT__read_pointer_n 
                = this->__PVT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__write_pointer_n = this->__PVT__i_b_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(this->__PVT__i_b_fifo__DOT__write_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__status_cnt_n = this->__PVT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__status_cnt_n = 
            (3U & ((IData)(1U) + (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__b_fifo_pop) & (0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__status_cnt_n = 
            (3U & ((IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q) 
                   - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__b_fifo_push) & (IData)(this->__PVT__b_fifo_pop)) 
          & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__status_cnt_n = this->__PVT__i_b_fifo__DOT__status_cnt_q;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__mem_n = this->__PVT__i_b_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__mem_n = (((~ ((IData)(0xfU) 
                                                  << 
                                                  (7U 
                                                   & ((IData)(this->__PVT__i_b_fifo__DOT__write_pointer_q) 
                                                      << 2U)))) 
                                              & (IData)(this->__PVT__i_b_fifo__DOT__mem_n)) 
                                             | ((IData)(this->__Vcellout__i_w_fifo__data_o) 
                                                << 
                                                (7U 
                                                 & ((IData)(this->__PVT__i_b_fifo__DOT__write_pointer_q) 
                                                    << 2U))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:312
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q;
    if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                >> 0x10U) & (this->__PVT__err_resp[2U] 
                             >> 0x13U)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((8U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (7U & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))));
    }
    if ((1U & (((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                 >> 5U) & (this->__PVT__err_resp[2U] 
                           >> 0x11U)) & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                                         >> 7U)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((8U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d) 
                        - (IData)(1U))));
    }
    if ((((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
          >> 3U) & (0U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
    } else {
        if (((0U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))) 
             & (7U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
            this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
                = (8U | (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
        }
    }
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xbffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0x40000U & this->__PVT__err_resp[2U]));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:254
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] 
        = this->__PVT__err_resp[0U];
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[1U] 
        = this->__PVT__err_resp[1U];
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xfff00U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0xffU & this->__PVT__err_resp[2U]));
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xffeffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0x100U & this->__PVT__err_resp[2U]));
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 0U;
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q;
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q;
    if ((0U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U & ((this->__PVT__err_resp[2U] >> 8U) 
                   & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U] 
                         >> 0x1dU))))) {
            this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 2U;
        } else {
            if ((0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) {
                this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                    = (0xffU & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q) 
                                >> (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q) 
                                          << 3U))));
                this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 1U;
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] = 0U;
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[1U] = 0U;
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                = (0xfff00U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                = ((0xfff0fU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                   | (0xfffffff0U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q) 
                                     << 4U)));
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] 
                = (8U | (0xfffffff3U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U]));
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] 
                = ((0xfffffffdU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U]) 
                   | (0xfffffffeU & ((0U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q)) 
                                     << 1U)));
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                = (0x100U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
            if ((0x20000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U])) {
                if ((2U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U])) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 1U;
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
                } else {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                        = (0xffU & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d) 
                                    - (IData)(1U)));
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
                if ((1U & ((this->__PVT__err_resp[2U] 
                            >> 8U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U] 
                                      >> 0x1dU)))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
                }
            } else {
                this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
            }
        }
    }
    this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i 
        = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready) 
           & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = (0x7ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = (0xdffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0x10000U & this->__PVT__err_resp[2U]));
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xf01ffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0xfe00U & this->__PVT__err_resp[2U]));
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q;
    if ((4U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((2U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 0U;
        } else {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if ((0U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 0U;
                }
            } else {
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0xf01ffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                if ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U])) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                        = (((0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
                            & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready)))
                            ? 5U : 0U);
                }
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = ((0xf0fffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                       | (0xfffff000U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q) 
                                         << 0xcU)));
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0x800U | (0xff3ffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]));
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0x10000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
            }
        }
    } else {
        if ((2U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                            >> 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                         >> 1U)))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 4U;
                }
            } else {
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0x20000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                if ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                            >> 2U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                      >> 4U)))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                        = ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                                   >> 0x10U) & (~ (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                                   >> 1U))))
                            ? 3U : 4U);
                }
            }
        } else {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if (this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = ((0xdffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                           | (0x20000U & this->__PVT__err_resp[2U]));
                } else {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = (0x20000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                        = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                   >> 2U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                             >> 4U)))
                            ? ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                                       >> 0x10U) & 
                                      (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                          >> 1U))))
                                ? 3U : 4U) : 2U);
                }
            } else {
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
                     | (4U > (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = ((0x7ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                           | (0x80000U & this->__PVT__err_resp[2U]));
                }
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
                     | (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                          >> 0xdU) & (0U == (3U & (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                                                    << 0xdU) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                                                      >> 0x13U))))) 
                        & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = ((0xdffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                           | (0x20000U & this->__PVT__err_resp[2U]));
                }
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                      >> 0xdU) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x27U] 
                                                << 0xdU) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
                                                  >> 0x13U)))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = (0x80000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                    if (this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 1U;
                    } else {
                        this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                            = (0x20000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                            = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                       >> 2U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                                 >> 4U)))
                                ? ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                                           >> 0x10U) 
                                          & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                                                >> 1U))))
                                    ? 3U : 4U) : 2U);
                    }
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i) 
         & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n 
            = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    }
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i) 
         & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = (3U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
           & (IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i)) 
          & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q;
    }
}

void Vrvfpgasim_axi_err_slv__pi4::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__3(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_err_slv__pi4::_settle__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__3\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_cnt_load = 0U;
    if ((1U & (~ (IData)(this->__PVT__r_busy_q)))) {
        if ((0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) {
            this->__PVT__r_cnt_load = 1U;
        }
    }
    this->__PVT__err_resp[2U] = ((0x3ffffU & this->__PVT__err_resp[2U]) 
                                 | (0xfffc0000U & (
                                                   ((4U 
                                                     != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
                                                    << 0x13U) 
                                                   | ((4U 
                                                       != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)) 
                                                      << 0x12U))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:138
    this->__PVT__err_resp[2U] = (0xf01ffU & this->__PVT__err_resp[2U]);
    this->__PVT__err_resp[2U] = ((0xf0fffU & this->__PVT__err_resp[2U]) 
                                 | (0xf000U & (((IData)(this->__PVT__i_b_fifo__DOT__mem_q) 
                                                >> 
                                                (7U 
                                                 & ((IData)(this->__PVT__i_b_fifo__DOT__read_pointer_q) 
                                                    << 2U))) 
                                               << 0xcU)));
    this->__PVT__err_resp[2U] = (0xc00U | this->__PVT__err_resp[2U]);
    this->__PVT__err_resp[2U] = (0xeffffU & this->__PVT__err_resp[2U]);
    if ((0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q))) {
        this->__PVT__err_resp[2U] = (0x10000U | this->__PVT__err_resp[2U]);
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__Vcellout__i_r_fifo__data_o = (0xfffU & 
                                          ((0x2fU >= 
                                            (0x3fU 
                                             & ((IData)(0xcU) 
                                                * (IData)(this->__PVT__i_r_fifo__DOT__read_pointer_q))))
                                            ? (IData)(
                                                      (this->__PVT__i_r_fifo__DOT__mem_q 
                                                       >> 
                                                       (0x3fU 
                                                        & ((IData)(0xcU) 
                                                           * (IData)(this->__PVT__i_r_fifo__DOT__read_pointer_q)))))
                                            : 0U));
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream 
        = ((~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
               >> 3U)) & (0U < (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))));
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream 
        = (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
            >> 3U) & (7U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:246
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0x1ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]) 
           | (0xfffe0000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                              << 0x18U) | (0xfe0000U 
                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                              >> 8U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[5U] 
        = ((0x1ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                        >> 8U)) | (0xfffe0000U & ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3cU] 
                                                   << 0x18U) 
                                                  | (0xfe0000U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                                                        >> 8U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[6U] 
        = ((0x1ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3cU] 
                        >> 8U)) | (0x1fe0000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3dU] 
                                                  << 0x18U) 
                                                 | (0xfe0000U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3cU] 
                                                       >> 8U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = (0xff03ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0x3fU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0xffffffc0U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x39U] 
                              << 0x18U) | (0xffffc0U 
                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                              >> 8U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0x3fU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x39U] 
                     >> 8U)) | (0xffffffc0U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                                << 0x18U) 
                                               | (0xffffc0U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x39U] 
                                                     >> 8U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0xffff0000U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]) 
           | ((0x3fU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                        >> 8U)) | (0xffc0U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                                               << 0x18U) 
                                              | (0xffffc0U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                                    >> 8U))))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (0xfffffffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x37U] 
                              << 0x18U) | (0xfffffeU 
                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U] 
                                              >> 8U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
        = ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x37U] 
                  >> 8U)) | (0xfffffffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                             << 0x18U) 
                                            | (0xfffffeU 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x37U] 
                                                  >> 8U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xfffffff0U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                     >> 8U)) | (0xeU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x39U] 
                                         << 0x18U) 
                                        | (0xfffffeU 
                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                              >> 8U))))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q;
    if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                      >> 0x18U) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                                   >> 0x1eU)))))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d 
                        = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3dU] 
                                    << 3U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3cU] 
                                              >> 0x1dU)));
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 0U;
    if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                      >> 0x18U) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                                   >> 0x1eU)))))) {
                    if ((1U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                                       << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                                 >> 0x1eU))))) {
                        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 1U;
                    }
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:254
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U] 
                    >> 8U)));
    if ((0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
            this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
                = (0xfffffffeU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]);
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__err_resp[0U] = 0U;
    this->__PVT__err_resp[1U] = 0U;
    this->__PVT__err_resp[2U] = (0xfff00U & this->__PVT__err_resp[2U]);
    this->__PVT__err_resp[2U] = ((0xfff0fU & this->__PVT__err_resp[2U]) 
                                 | (0xf0U & ((IData)(this->__Vcellout__i_r_fifo__data_o) 
                                             >> 4U)));
    this->__PVT__err_resp[0U] = (0xadcab1e0U | (0xfU 
                                                & this->__PVT__err_resp[0U]));
    this->__PVT__err_resp[1U] = 0xa11ab1ebU;
    this->__PVT__err_resp[2U] = (0xcU | (0xffff0U & 
                                         this->__PVT__err_resp[2U]));
    this->__PVT__err_resp[0U] = (0xcU | this->__PVT__err_resp[0U]);
    this->__PVT__err_resp[2U] = (0xffeffU & this->__PVT__err_resp[2U]);
    if (this->__PVT__r_busy_q) {
        this->__PVT__err_resp[2U] = (0x100U | this->__PVT__err_resp[2U]);
        this->__PVT__err_resp[0U] = ((0xfffffffdU & 
                                      this->__PVT__err_resp[0U]) 
                                     | (0xfffffffeU 
                                        & ((0U == (0xffU 
                                                   & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                                           << 1U)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = (0xfffeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = (0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffffffefU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0x10U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                       >> 8U)));
    if ((4U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                    = (0xffffffefU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]);
            }
        }
    } else {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if (this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                        = ((0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
                           | (0x20U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                       >> 8U)));
                }
            } else {
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
                     | (4U > (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                        = ((0xfffeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]) 
                           | (0x10000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                          >> 8U)));
                }
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
                     | (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                          >> 0x18U) & (0U == (3U & 
                                              ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                                                << 2U) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                                  >> 0x1eU))))) 
                        & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                        = ((0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
                           | (0x20U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                       >> 8U)));
                }
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                      >> 0x18U) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                                   >> 0x1eU)))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                        = (0xfffeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]);
                    if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream)))) {
                        this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                            = (0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]);
                    }
                }
            }
        }
    }
    this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i 
        = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid) 
           & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_busy_d = this->__PVT__r_busy_q;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_busy_d = 0U;
            }
        }
    } else {
        if ((0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) {
            this->__PVT__r_busy_d = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_busy_load = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_busy_load = 1U;
            }
        }
    } else {
        if ((0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) {
            this->__PVT__r_busy_load = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_cnt_en = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            this->__PVT__r_cnt_en = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_cnt_clear = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_cnt_clear = 1U;
            }
        }
    }
    this->__PVT__r_fifo_inp = ((0xf00U & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                                          << 8U)) | 
                               (0xffU & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
                                          << 8U) | 
                                         (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
                                          >> 0x18U))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:138
    this->__PVT__b_fifo_pop = 0U;
    if ((0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q))) {
        this->__PVT__b_fifo_pop = (1U & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                                         >> 4U));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_fifo_pop = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_fifo_pop = 1U;
            }
        }
    }
    this->__PVT__r_fifo_push = ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
                                 >> 1U) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)));
    this->__PVT__w_fifo_push = ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                                 >> 0x10U) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock = 1U;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n 
            = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n 
            = (((~ ((IData)(0xffU) << (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q) 
                                             << 3U)))) 
                & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n)) 
               | ((0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3cU] 
                             << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                                         >> 0x15U))) 
                  << (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q) 
                            << 3U))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/delta_counter.sv:51
    this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (this->__PVT__r_cnt_clear) {
        this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else {
        if (this->__PVT__r_cnt_load) {
            this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
                = (0xffU & (IData)(this->__Vcellout__i_r_fifo__data_o));
        } else {
            if (this->__PVT__r_cnt_en) {
                this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
                    = (0x1ffU & ((IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                                 - (IData)(1U)));
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__read_pointer_n = this->__PVT__i_b_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__b_fifo_pop) & (0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(this->__PVT__i_b_fifo__DOT__read_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__read_pointer_n = this->__PVT__i_r_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__r_fifo_pop) & (0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_r_fifo__DOT__read_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__write_pointer_n = this->__PVT__i_r_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__status_cnt_n = this->__PVT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(1U) + (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__r_fifo_pop) & (0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q) 
                   - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__r_fifo_push) & (IData)(this->__PVT__r_fifo_pop)) 
          & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__status_cnt_n = this->__PVT__i_r_fifo__DOT__status_cnt_q;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__mem_n = this->__PVT__i_r_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->i_r_fifo__DOT____Vlvbound1 = this->__PVT__r_fifo_inp;
        if ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q))))) {
            this->__PVT__i_r_fifo__DOT__mem_n = (((~ 
                                                   (VL_ULL(0xfff) 
                                                    << 
                                                    (0x3fU 
                                                     & ((IData)(0xcU) 
                                                        * (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q))))) 
                                                  & this->__PVT__i_r_fifo__DOT__mem_n) 
                                                 | ((QData)((IData)(this->i_r_fifo__DOT____Vlvbound1)) 
                                                    << 
                                                    (0x3fU 
                                                     & ((IData)(0xcU) 
                                                        * (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q)))));
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__mem_n = this->__PVT__i_w_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__mem_n = (((~ ((IData)(0xfU) 
                                                  << 
                                                  (0xfU 
                                                   & ((IData)(this->__PVT__i_w_fifo__DOT__write_pointer_q) 
                                                      << 2U)))) 
                                              & (IData)(this->__PVT__i_w_fifo__DOT__mem_n)) 
                                             | ((0xfU 
                                                 & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[6U] 
                                                    >> 0x15U)) 
                                                << 
                                                (0xfU 
                                                 & ((IData)(this->__PVT__i_w_fifo__DOT__write_pointer_q) 
                                                    << 2U))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__Vcellout__i_w_fifo__data_o = (0xfU & ((IData)(this->__PVT__i_w_fifo__DOT__mem_q) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(this->__PVT__i_w_fifo__DOT__read_pointer_q) 
                                                      << 2U))));
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        this->__Vcellout__i_w_fifo__data_o = (0xfU 
                                              & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[6U] 
                                                 >> 0x15U));
    }
    this->__PVT__w_fifo_empty = ((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
                                 & (~ (IData)(this->__PVT__w_fifo_push)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:105
    this->__PVT__w_fifo_pop = 0U;
    if (((~ (IData)(this->__PVT__w_fifo_empty)) & (2U 
                                                   != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                    >> 5U) & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                              >> 7U)))) {
            this->__PVT__w_fifo_pop = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:105
    this->__PVT__b_fifo_push = 0U;
    if (((~ (IData)(this->__PVT__w_fifo_empty)) & (2U 
                                                   != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                    >> 5U) & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                              >> 7U)))) {
            this->__PVT__b_fifo_push = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:105
    this->__PVT__err_resp[2U] = (0xdffffU & this->__PVT__err_resp[2U]);
    if (((~ (IData)(this->__PVT__w_fifo_empty)) & (2U 
                                                   != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__err_resp[2U] = (0x20000U | this->__PVT__err_resp[2U]);
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__write_pointer_n = this->__PVT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_w_fifo__DOT__write_pointer_q)));
    }
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        if (this->__PVT__w_fifo_pop) {
            this->__PVT__i_w_fifo__DOT__write_pointer_n 
                = this->__PVT__i_w_fifo__DOT__write_pointer_q;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__status_cnt_n = this->__PVT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(1U) + (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__w_fifo_pop) & (~ (IData)(this->__PVT__w_fifo_empty)))) {
        this->__PVT__i_w_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q) 
                   - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__w_fifo_push) & (IData)(this->__PVT__w_fifo_pop)) 
          & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(this->__PVT__w_fifo_empty)))) {
        this->__PVT__i_w_fifo__DOT__status_cnt_n = this->__PVT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        if (this->__PVT__w_fifo_pop) {
            this->__PVT__i_w_fifo__DOT__status_cnt_n 
                = this->__PVT__i_w_fifo__DOT__status_cnt_q;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__read_pointer_n = this->__PVT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__w_fifo_pop) & (~ (IData)(this->__PVT__w_fifo_empty)))) {
        this->__PVT__i_w_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        if (this->__PVT__w_fifo_pop) {
            this->__PVT__i_w_fifo__DOT__read_pointer_n 
                = this->__PVT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__write_pointer_n = this->__PVT__i_b_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(this->__PVT__i_b_fifo__DOT__write_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__status_cnt_n = this->__PVT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__status_cnt_n = 
            (3U & ((IData)(1U) + (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__b_fifo_pop) & (0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__status_cnt_n = 
            (3U & ((IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q) 
                   - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__b_fifo_push) & (IData)(this->__PVT__b_fifo_pop)) 
          & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__status_cnt_n = this->__PVT__i_b_fifo__DOT__status_cnt_q;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__mem_n = this->__PVT__i_b_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__mem_n = (((~ ((IData)(0xfU) 
                                                  << 
                                                  (7U 
                                                   & ((IData)(this->__PVT__i_b_fifo__DOT__write_pointer_q) 
                                                      << 2U)))) 
                                              & (IData)(this->__PVT__i_b_fifo__DOT__mem_n)) 
                                             | ((IData)(this->__Vcellout__i_w_fifo__data_o) 
                                                << 
                                                (7U 
                                                 & ((IData)(this->__PVT__i_b_fifo__DOT__write_pointer_q) 
                                                    << 2U))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:312
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q;
    if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                >> 0x10U) & (this->__PVT__err_resp[2U] 
                             >> 0x13U)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((8U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (7U & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))));
    }
    if ((1U & (((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                 >> 5U) & (this->__PVT__err_resp[2U] 
                           >> 0x11U)) & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                                         >> 7U)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((8U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d) 
                        - (IData)(1U))));
    }
    if ((((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
          >> 3U) & (0U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
    } else {
        if (((0U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))) 
             & (7U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
            this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
                = (8U | (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
        }
    }
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xbffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0x40000U & this->__PVT__err_resp[2U]));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:254
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] 
        = this->__PVT__err_resp[0U];
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[1U] 
        = this->__PVT__err_resp[1U];
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xfff00U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0xffU & this->__PVT__err_resp[2U]));
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xffeffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0x100U & this->__PVT__err_resp[2U]));
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 0U;
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q;
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q;
    if ((0U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U & ((this->__PVT__err_resp[2U] >> 8U) 
                   & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U] 
                         >> 8U))))) {
            this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 2U;
        } else {
            if ((0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) {
                this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                    = (0xffU & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q) 
                                >> (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q) 
                                          << 3U))));
                this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 1U;
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] = 0U;
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[1U] = 0U;
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                = (0xfff00U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                = ((0xfff0fU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                   | (0xfffffff0U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q) 
                                     << 4U)));
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] 
                = (8U | (0xfffffff3U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U]));
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] 
                = ((0xfffffffdU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U]) 
                   | (0xfffffffeU & ((0U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q)) 
                                     << 1U)));
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                = (0x100U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
            if ((0x100U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U])) {
                if ((2U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U])) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 1U;
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
                } else {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                        = (0xffU & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d) 
                                    - (IData)(1U)));
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
                if ((0x100U & (this->__PVT__err_resp[2U] 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U]))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
                }
            } else {
                this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
            }
        }
    }
    this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i 
        = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready) 
           & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = (0x7ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = (0xdffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0x10000U & this->__PVT__err_resp[2U]));
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xf01ffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0xfe00U & this->__PVT__err_resp[2U]));
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q;
    if ((4U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((2U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 0U;
        } else {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if ((0U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 0U;
                }
            } else {
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0xf01ffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                if ((0x1000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U])) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                        = (((0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
                            & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready)))
                            ? 5U : 0U);
                }
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = ((0xf0fffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                       | (0xfffff000U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q) 
                                         << 0xcU)));
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0x800U | (0xff3ffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]));
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0x10000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
            }
        }
    } else {
        if ((2U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                            >> 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                         >> 0xcU)))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 4U;
                }
            } else {
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0x20000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                if ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                            >> 0xdU) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                        >> 0xfU)))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                        = ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                                   >> 0x10U) & (~ (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                                   >> 0xcU))))
                            ? 3U : 4U);
                }
            }
        } else {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if (this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = ((0xdffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                           | (0x20000U & this->__PVT__err_resp[2U]));
                } else {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = (0x20000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                        = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                   >> 0xdU) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                               >> 0xfU)))
                            ? ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                                       >> 0x10U) & 
                                      (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                          >> 0xcU))))
                                ? 3U : 4U) : 2U);
                }
            } else {
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
                     | (4U > (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = ((0x7ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                           | (0x80000U & this->__PVT__err_resp[2U]));
                }
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
                     | (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                          >> 0x18U) & (0U == (3U & 
                                              ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                                                << 2U) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                                  >> 0x1eU))))) 
                        & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = ((0xdffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                           | (0x20000U & this->__PVT__err_resp[2U]));
                }
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                      >> 0x18U) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                                   >> 0x1eU)))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = (0x80000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                    if (this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 1U;
                    } else {
                        this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                            = (0x20000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                            = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                       >> 0xdU) & (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                                   >> 0xfU)))
                                ? ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                                           >> 0x10U) 
                                          & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                                >> 0xcU))))
                                    ? 3U : 4U) : 2U);
                    }
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i) 
         & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n 
            = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    }
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i) 
         & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = (3U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
           & (IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i)) 
          & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q;
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_err_slv__pi4::_combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__6(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_err_slv__pi4::_combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__6\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:246
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0x1ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]) 
           | (0xfffe0000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                              << 0x18U) | (0xfe0000U 
                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                              >> 8U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[5U] 
        = ((0x1ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                        >> 8U)) | (0xfffe0000U & ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3cU] 
                                                   << 0x18U) 
                                                  | (0xfe0000U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                                                        >> 8U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[6U] 
        = ((0x1ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3cU] 
                        >> 8U)) | (0x1fe0000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3dU] 
                                                  << 0x18U) 
                                                 | (0xfe0000U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3cU] 
                                                       >> 8U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = (0xff03ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0x3fU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0xffffffc0U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x39U] 
                              << 0x18U) | (0xffffc0U 
                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                              >> 8U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[3U] 
        = ((0x3fU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x39U] 
                     >> 8U)) | (0xffffffc0U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                                << 0x18U) 
                                               | (0xffffc0U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x39U] 
                                                     >> 8U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = ((0xffff0000U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]) 
           | ((0x3fU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                        >> 8U)) | (0xffc0U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                                               << 0x18U) 
                                              | (0xffffc0U 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                                    >> 8U))))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (0xfffffffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x37U] 
                              << 0x18U) | (0xfffffeU 
                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U] 
                                              >> 8U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
        = ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x37U] 
                  >> 8U)) | (0xfffffffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                             << 0x18U) 
                                            | (0xfffffeU 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x37U] 
                                                  >> 8U)))));
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xfffffff0U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                     >> 8U)) | (0xeU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x39U] 
                                         << 0x18U) 
                                        | (0xfffffeU 
                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                              >> 8U))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_err_slv__pi4::_combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__12(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_err_slv__pi4::_combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__12\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q;
    if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                      >> 0x18U) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                                   >> 0x1eU)))))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_d 
                        = (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3dU] 
                                    << 3U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3cU] 
                                              >> 0x1dU)));
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 0U;
    if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                      >> 0x18U) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                                   >> 0x1eU)))))) {
                    if ((1U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                                       << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                                 >> 0x1eU))))) {
                        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 1U;
                    }
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:254
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
        = ((0xfffffffeU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U] 
                    >> 8U)));
    if ((0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
            this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
                = (0xfffffffeU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U]);
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
        = (0xfffeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = (0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
        = ((0xffffffefU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
           | (0x10U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                       >> 8U)));
    if ((4U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
                this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                    = (0xffffffefU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]);
            }
        }
    } else {
        if ((1U & (~ ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if (this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                        = ((0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
                           | (0x20U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                       >> 8U)));
                }
            } else {
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
                     | (4U > (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                        = ((0xfffeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]) 
                           | (0x10000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                          >> 8U)));
                }
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
                     | (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                          >> 0x18U) & (0U == (3U & 
                                              ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                                                << 2U) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                                  >> 0x1eU))))) 
                        & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                        = ((0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]) 
                           | (0x20U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                       >> 8U)));
                }
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                      >> 0x18U) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                                   >> 0x1eU)))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                        = (0xfffeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U]);
                    if ((1U & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream)))) {
                        this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                            = (0xffffffdfU & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U]);
                    }
                }
            }
        }
    }
    this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i 
        = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid) 
           & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_busy_d = this->__PVT__r_busy_q;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_busy_d = 0U;
            }
        }
    } else {
        if ((0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) {
            this->__PVT__r_busy_d = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_busy_load = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_busy_load = 1U;
            }
        }
    } else {
        if ((0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) {
            this->__PVT__r_busy_load = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_cnt_en = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            this->__PVT__r_cnt_en = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_cnt_clear = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_cnt_clear = 1U;
            }
        }
    }
    this->__PVT__r_fifo_inp = ((0xf00U & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                                          << 8U)) | 
                               (0xffU & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[1U] 
                                          << 8U) | 
                                         (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
                                          >> 0x18U))));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:138
    this->__PVT__b_fifo_pop = 0U;
    if ((0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q))) {
        this->__PVT__b_fifo_pop = (1U & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                                         >> 4U));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:180
    this->__PVT__r_fifo_pop = 0U;
    if (this->__PVT__r_busy_q) {
        if ((1U & this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U])) {
            if ((0U == (0xffU & (IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                this->__PVT__r_fifo_pop = 1U;
            }
        }
    }
    this->__PVT__r_fifo_push = ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[0U] 
                                 >> 1U) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)));
    this->__PVT__w_fifo_push = ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                                 >> 0x10U) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock = 1U;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n 
            = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n 
            = (((~ ((IData)(0xffU) << (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q) 
                                             << 3U)))) 
                & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n)) 
               | ((0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3cU] 
                             << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                                         >> 0x15U))) 
                  << (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q) 
                            << 3U))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/delta_counter.sv:51
    this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (this->__PVT__r_cnt_clear) {
        this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else {
        if (this->__PVT__r_cnt_load) {
            this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
                = (0xffU & (IData)(this->__Vcellout__i_r_fifo__data_o));
        } else {
            if (this->__PVT__r_cnt_en) {
                this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_d 
                    = (0x1ffU & ((IData)(this->__PVT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                                 - (IData)(1U)));
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__read_pointer_n = this->__PVT__i_b_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__b_fifo_pop) & (0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(this->__PVT__i_b_fifo__DOT__read_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__read_pointer_n = this->__PVT__i_r_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__r_fifo_pop) & (0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_r_fifo__DOT__read_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__write_pointer_n = this->__PVT__i_r_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__status_cnt_n = this->__PVT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(1U) + (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__r_fifo_pop) & (0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q) 
                   - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__r_fifo_push) & (IData)(this->__PVT__r_fifo_pop)) 
          & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_r_fifo__DOT__status_cnt_n = this->__PVT__i_r_fifo__DOT__status_cnt_q;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_r_fifo__DOT__mem_n = this->__PVT__i_r_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__r_fifo_push) & (4U != (IData)(this->__PVT__i_r_fifo__DOT__status_cnt_q)))) {
        this->i_r_fifo__DOT____Vlvbound1 = this->__PVT__r_fifo_inp;
        if ((0x2fU >= (0x3fU & ((IData)(0xcU) * (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q))))) {
            this->__PVT__i_r_fifo__DOT__mem_n = (((~ 
                                                   (VL_ULL(0xfff) 
                                                    << 
                                                    (0x3fU 
                                                     & ((IData)(0xcU) 
                                                        * (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q))))) 
                                                  & this->__PVT__i_r_fifo__DOT__mem_n) 
                                                 | ((QData)((IData)(this->i_r_fifo__DOT____Vlvbound1)) 
                                                    << 
                                                    (0x3fU 
                                                     & ((IData)(0xcU) 
                                                        * (IData)(this->__PVT__i_r_fifo__DOT__write_pointer_q)))));
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__mem_n = this->__PVT__i_w_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__mem_n = (((~ ((IData)(0xfU) 
                                                  << 
                                                  (0xfU 
                                                   & ((IData)(this->__PVT__i_w_fifo__DOT__write_pointer_q) 
                                                      << 2U)))) 
                                              & (IData)(this->__PVT__i_w_fifo__DOT__mem_n)) 
                                             | ((0xfU 
                                                 & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[6U] 
                                                    >> 0x15U)) 
                                                << 
                                                (0xfU 
                                                 & ((IData)(this->__PVT__i_w_fifo__DOT__write_pointer_q) 
                                                    << 2U))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__Vcellout__i_w_fifo__data_o = (0xfU & ((IData)(this->__PVT__i_w_fifo__DOT__mem_q) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(this->__PVT__i_w_fifo__DOT__read_pointer_q) 
                                                      << 2U))));
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        this->__Vcellout__i_w_fifo__data_o = (0xfU 
                                              & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[6U] 
                                                 >> 0x15U));
    }
    this->__PVT__w_fifo_empty = ((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
                                 & (~ (IData)(this->__PVT__w_fifo_push)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:105
    this->__PVT__w_fifo_pop = 0U;
    if (((~ (IData)(this->__PVT__w_fifo_empty)) & (2U 
                                                   != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                    >> 5U) & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                              >> 7U)))) {
            this->__PVT__w_fifo_pop = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:105
    this->__PVT__b_fifo_push = 0U;
    if (((~ (IData)(this->__PVT__w_fifo_empty)) & (2U 
                                                   != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                    >> 5U) & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                              >> 7U)))) {
            this->__PVT__b_fifo_push = 1U;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_err_slv.sv:105
    this->__PVT__err_resp[2U] = (0xdffffU & this->__PVT__err_resp[2U]);
    if (((~ (IData)(this->__PVT__w_fifo_empty)) & (2U 
                                                   != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__err_resp[2U] = (0x20000U | this->__PVT__err_resp[2U]);
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__write_pointer_n = this->__PVT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_w_fifo__DOT__write_pointer_q)));
    }
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        if (this->__PVT__w_fifo_pop) {
            this->__PVT__i_w_fifo__DOT__write_pointer_n 
                = this->__PVT__i_w_fifo__DOT__write_pointer_q;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__status_cnt_n = this->__PVT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__w_fifo_push) & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_w_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(1U) + (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__w_fifo_pop) & (~ (IData)(this->__PVT__w_fifo_empty)))) {
        this->__PVT__i_w_fifo__DOT__status_cnt_n = 
            (7U & ((IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q) 
                   - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__w_fifo_push) & (IData)(this->__PVT__w_fifo_pop)) 
          & (4U != (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(this->__PVT__w_fifo_empty)))) {
        this->__PVT__i_w_fifo__DOT__status_cnt_n = this->__PVT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        if (this->__PVT__w_fifo_pop) {
            this->__PVT__i_w_fifo__DOT__status_cnt_n 
                = this->__PVT__i_w_fifo__DOT__status_cnt_q;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_w_fifo__DOT__read_pointer_n = this->__PVT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__w_fifo_pop) & (~ (IData)(this->__PVT__w_fifo_empty)))) {
        this->__PVT__i_w_fifo__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(this->__PVT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(this->__PVT__w_fifo_push))) {
        if (this->__PVT__w_fifo_pop) {
            this->__PVT__i_w_fifo__DOT__read_pointer_n 
                = this->__PVT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__gate_clock = 0U;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__write_pointer_n = this->__PVT__i_b_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(this->__PVT__i_b_fifo__DOT__write_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__status_cnt_n = this->__PVT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__status_cnt_n = 
            (3U & ((IData)(1U) + (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__b_fifo_pop) & (0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__status_cnt_n = 
            (3U & ((IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q) 
                   - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__b_fifo_push) & (IData)(this->__PVT__b_fifo_pop)) 
          & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__status_cnt_n = this->__PVT__i_b_fifo__DOT__status_cnt_q;
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__i_b_fifo__DOT__mem_n = this->__PVT__i_b_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__b_fifo_push) & (2U != (IData)(this->__PVT__i_b_fifo__DOT__status_cnt_q)))) {
        this->__PVT__i_b_fifo__DOT__mem_n = (((~ ((IData)(0xfU) 
                                                  << 
                                                  (7U 
                                                   & ((IData)(this->__PVT__i_b_fifo__DOT__write_pointer_q) 
                                                      << 2U)))) 
                                              & (IData)(this->__PVT__i_b_fifo__DOT__mem_n)) 
                                             | ((IData)(this->__Vcellout__i_w_fifo__data_o) 
                                                << 
                                                (7U 
                                                 & ((IData)(this->__PVT__i_b_fifo__DOT__write_pointer_q) 
                                                    << 2U))));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:312
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q;
    if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[4U] 
                >> 0x10U) & (this->__PVT__err_resp[2U] 
                             >> 0x13U)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((8U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (7U & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))));
    }
    if ((1U & (((this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                 >> 5U) & (this->__PVT__err_resp[2U] 
                           >> 0x11U)) & (this->__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o[2U] 
                                         >> 7U)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((8U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d) 
                        - (IData)(1U))));
    }
    if ((((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
          >> 3U) & (0U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
    } else {
        if (((0U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))) 
             & (7U == (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
            this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
                = (8U | (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
        }
    }
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xbffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0x40000U & this->__PVT__err_resp[2U]));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:254
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] 
        = this->__PVT__err_resp[0U];
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[1U] 
        = this->__PVT__err_resp[1U];
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xfff00U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0xffU & this->__PVT__err_resp[2U]));
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xffeffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0x100U & this->__PVT__err_resp[2U]));
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 0U;
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q;
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q;
    if ((0U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U & ((this->__PVT__err_resp[2U] >> 8U) 
                   & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U] 
                         >> 8U))))) {
            this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 2U;
        } else {
            if ((0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) {
                this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                    = (0xffU & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q) 
                                >> (7U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q) 
                                          << 3U))));
                this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 1U;
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] = 0U;
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[1U] = 0U;
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                = (0xfff00U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                = ((0xfff0fU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                   | (0xfffffff0U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q) 
                                     << 4U)));
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] 
                = (8U | (0xfffffff3U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U]));
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U] 
                = ((0xfffffffdU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U]) 
                   | (0xfffffffeU & ((0U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q)) 
                                     << 1U)));
            this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                = (0x100U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
            if ((0x100U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U])) {
                if ((2U & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[0U])) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 1U;
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
                } else {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                        = (0xffU & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d) 
                                    - (IData)(1U)));
                }
            }
        } else {
            if ((2U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
                if ((0x100U & (this->__PVT__err_resp[2U] 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U]))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
                }
            } else {
                this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 0U;
            }
        }
    }
    this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i 
        = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready) 
           & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__axi_0.23.0-r1/src/axi_atop_filter.sv:99
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = (0x7ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = (0xdffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xeffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0x10000U & this->__PVT__err_resp[2U]));
    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
        = ((0xf01ffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
           | (0xfe00U & this->__PVT__err_resp[2U]));
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q;
    if ((4U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((2U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 0U;
        } else {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if ((0U == (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 0U;
                }
            } else {
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0xf01ffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                if ((0x1000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U])) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                        = (((0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
                            & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready)))
                            ? 5U : 0U);
                }
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = ((0xf0fffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                       | (0xfffff000U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__id_q) 
                                         << 0xcU)));
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0x800U | (0xff3ffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]));
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0x10000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
            }
        }
    } else {
        if ((2U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                            >> 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                         >> 0xcU)))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 4U;
                }
            } else {
                this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                    = (0x20000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                if ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                            >> 0xdU) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                        >> 0xfU)))) {
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                        = ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                                   >> 0x10U) & (~ (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                                   >> 0xcU))))
                            ? 3U : 4U);
                }
            }
        } else {
            if ((1U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if (this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = ((0xdffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                           | (0x20000U & this->__PVT__err_resp[2U]));
                } else {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = (0x20000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                    this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                        = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                   >> 0xdU) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                               >> 0xfU)))
                            ? ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                                       >> 0x10U) & 
                                      (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                          >> 0xcU))))
                                ? 3U : 4U) : 2U);
                }
            } else {
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
                     | (4U > (7U & (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = ((0x7ffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                           | (0x80000U & this->__PVT__err_resp[2U]));
                }
                if (((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
                     | (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                          >> 0x18U) & (0U == (3U & 
                                              ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                                                << 2U) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                                  >> 0x1eU))))) 
                        & (~ (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = ((0xdffffU & this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]) 
                           | (0x20000U & this->__PVT__err_resp[2U]));
                }
                if (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                      >> 0x18U) & (0U != (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3bU] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
                                                   >> 0x1eU)))))) {
                    this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                        = (0x80000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                    if (this->__PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 1U;
                    } else {
                        this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                            = (0x20000U | this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U]);
                        this->__PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                            = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                       >> 0xdU) & (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                                   >> 0xfU)))
                                ? ((1U & ((this->__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o[2U] 
                                           >> 0x10U) 
                                          & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                                                >> 0xcU))))
                                    ? 3U : 4U) : 2U);
                    }
                }
            }
        }
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i) 
         & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n 
            = ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q)));
    }
    // ALWAYS at ../src/OtherSources/PulpPlatform/pulp-platform.org__common_cells_1.16.4/src/fifo_v3.sv:60
    this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
        = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q;
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)));
    }
    if (((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i) 
         & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = (3U & ((IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i) 
           & (IData)(this->genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i)) 
          & (1U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
        this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n 
            = this->__PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q;
    }
}

void Vrvfpgasim_axi_err_slv__pi4::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_err_slv__pi4::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_ni = VL_RAND_RESET_I(1);
    __PVT__test_i = VL_RAND_RESET_I(1);
    VL_ZERO_RESET_W(217,__PVT__slv_req_i);
    VL_ZERO_RESET_W(84,__PVT__slv_resp_o);
    VL_ZERO_RESET_W(84,__PVT__err_resp);
    __PVT__w_fifo_empty = VL_RAND_RESET_I(1);
    __PVT__w_fifo_push = VL_RAND_RESET_I(1);
    __PVT__w_fifo_pop = VL_RAND_RESET_I(1);
    __PVT__b_fifo_push = VL_RAND_RESET_I(1);
    __PVT__b_fifo_pop = VL_RAND_RESET_I(1);
    __PVT__r_fifo_inp = 0;
    __PVT__r_fifo_push = VL_RAND_RESET_I(1);
    __PVT__r_fifo_pop = VL_RAND_RESET_I(1);
    __PVT__r_cnt_clear = VL_RAND_RESET_I(1);
    __PVT__r_cnt_en = VL_RAND_RESET_I(1);
    __PVT__r_cnt_load = VL_RAND_RESET_I(1);
    __PVT__r_busy_d = VL_RAND_RESET_I(1);
    __PVT__r_busy_q = VL_RAND_RESET_I(1);
    __PVT__r_busy_load = VL_RAND_RESET_I(1);
    __Vcellout__i_w_fifo__data_o = VL_RAND_RESET_I(4);
    __Vcellout__i_r_fifo__data_o = 0;
    VL_ZERO_RESET_W(217,__Vcellout__genblk1__DOT__i_atop_filter__mst_req_o);
    VL_ZERO_RESET_W(84,__Vcellout__genblk1__DOT__i_atop_filter__slv_resp_o);
    __PVT__i_w_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    __PVT__i_w_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    __PVT__i_w_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    __PVT__i_w_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    __PVT__i_w_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    __PVT__i_w_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    __PVT__i_w_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    __PVT__i_w_fifo__DOT__mem_n = VL_RAND_RESET_I(16);
    __PVT__i_w_fifo__DOT__mem_q = VL_RAND_RESET_I(16);
    __PVT__i_b_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    __PVT__i_b_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    __PVT__i_b_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    __PVT__i_b_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    __PVT__i_b_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    __PVT__i_b_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    __PVT__i_b_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    __PVT__i_b_fifo__DOT__mem_n = VL_RAND_RESET_I(8);
    __PVT__i_b_fifo__DOT__mem_q = VL_RAND_RESET_I(8);
    __PVT__i_r_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    __PVT__i_r_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    __PVT__i_r_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    __PVT__i_r_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    __PVT__i_r_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    __PVT__i_r_fifo__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    __PVT__i_r_fifo__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    __PVT__i_r_fifo__DOT__mem_n = 0;
    __PVT__i_r_fifo__DOT__mem_q = 0;
    i_r_fifo__DOT____Vlvbound1 = 0;
    __PVT__i_r_counter__DOT__i_counter__DOT__counter_q = VL_RAND_RESET_I(9);
    __PVT__i_r_counter__DOT__i_counter__DOT__counter_d = VL_RAND_RESET_I(9);
    __PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d = 0;
    __PVT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q = 0;
    __PVT__genblk1__DOT__i_atop_filter__DOT__w_state_d = VL_RAND_RESET_I(3);
    __PVT__genblk1__DOT__i_atop_filter__DOT__w_state_q = VL_RAND_RESET_I(3);
    __PVT__genblk1__DOT__i_atop_filter__DOT__r_state_d = VL_RAND_RESET_I(2);
    __PVT__genblk1__DOT__i_atop_filter__DOT__r_state_q = VL_RAND_RESET_I(2);
    __PVT__genblk1__DOT__i_atop_filter__DOT__id_d = VL_RAND_RESET_I(4);
    __PVT__genblk1__DOT__i_atop_filter__DOT__id_q = VL_RAND_RESET_I(4);
    __PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_d = VL_RAND_RESET_I(8);
    __PVT__genblk1__DOT__i_atop_filter__DOT__r_beats_q = VL_RAND_RESET_I(8);
    __PVT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream = VL_RAND_RESET_I(1);
    __PVT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream = VL_RAND_RESET_I(1);
    __PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = VL_RAND_RESET_I(1);
    __PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = VL_RAND_RESET_I(1);
    genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__pop_i = VL_RAND_RESET_I(1);
    genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT____Vcellinp__i_fifo__push_i = VL_RAND_RESET_I(1);
    __PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock = VL_RAND_RESET_I(1);
    __PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    __PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    __PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    __PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    __PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    __PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    __PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n = 0;
    __PVT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q = 0;
}

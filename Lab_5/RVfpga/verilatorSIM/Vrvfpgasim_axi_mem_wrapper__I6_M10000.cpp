// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_axi_mem_wrapper__I6_M10000.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vrvfpgasim_axi_mem_wrapper__I6_M10000) {
    VL_CELL(ram, Vrvfpgasim_dpram64__S10000_MB0);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vrvfpgasim_axi_mem_wrapper__I6_M10000::__Vconfigure(Vrvfpgasim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vrvfpgasim_axi_mem_wrapper__I6_M10000::~Vrvfpgasim_axi_mem_wrapper__I6_M10000() {
}

//--------------------
// Internal Methods

void Vrvfpgasim_axi_mem_wrapper__I6_M10000::_initial__TOP__rvfpgasim__ram__1(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_axi_mem_wrapper__I6_M10000::_initial__TOP__rvfpgasim__ram__1\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at ../src/SweRVolfSoC/Interconnect/AxiToWb/axi2wb.v:97
    vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__aw_req = 0U;
    // INITIAL at ../src/SweRVolfSoC/Interconnect/AxiToWb/axi2wb.v:98
    vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__w_req = 0U;
    // INITIAL at ../src/SweRVolfSoC/Interconnect/AxiToWb/axi2wb.v:99
    vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__ar_req = 0U;
    // INITIAL at ../src/SweRVolfSoC/Interconnect/AxiToWb/axi2wb.v:95
    vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_we = 0U;
    // INITIAL at ../src/SweRVolfSoC/Interconnect/AxiToWb/axi2wb.v:93
    vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb = 0U;
    // INITIAL at ../src/SweRVolfSoC/Interconnect/AxiToWb/axi2wb.v:94
    vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc = 0U;
    // INITIAL at ../src/SweRVolfSoC/Interconnect/AxiToWb/axi2wb.v:91
    vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rvalid = 0U;
    // INITIAL at ../src/SweRVolfSoC/Interconnect/AxiToWb/axi2wb.v:92
    vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bvalid = 0U;
    // INITIAL at ../src/SweRVolfSoC/Interconnect/AxiToWb/axi2wb.v:96
    vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs = 0U;
}

void Vrvfpgasim_axi_mem_wrapper__I6_M10000::_settle__TOP__rvfpgasim__ram__2(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_axi_mem_wrapper__I6_M10000::_settle__TOP__rvfpgasim__ram__2\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_rdt = ((1U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr))
                                                   ? (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__ram__ram.__PVT__dout 
                                                              >> 0x20U))
                                                   : (IData)(vlSymsp->TOP__rvfpgasim__ram__ram.__PVT__dout));
    vlSymsp->TOP__rvfpgasim__ram.__PVT__mem_we = ((0xf0U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__mem_we)) 
                                                  | (((((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb)) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_we)) 
                                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr)))
                                                      ? (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel)
                                                      : 0U));
    vlSymsp->TOP__rvfpgasim__ram.__PVT__mem_we = ((0xfU 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__mem_we)) 
                                                  | ((((((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb)) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_we)) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr))
                                                       ? (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel)
                                                       : 0U) 
                                                     << 4U));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mem_wrapper__I6_M10000::_sequent__TOP__rvfpgasim__ram__3(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_axi_mem_wrapper__I6_M10000::_sequent__TOP__rvfpgasim__ram__3\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__wb_rdt_low 
        = vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__wb_rdt_low;
    vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__arbiter 
        = vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__arbiter;
    vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs 
        = vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs;
    vlSymsp->TOP__rvfpgasim__ram.__Vdly__wb_ack = vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_ack;
    // ALWAYS at ../src/SweRVolfSoC/OtherSources/axi_mem_wrapper.v:81
    if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
          >> 0xfU) & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_awready))) {
        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bid = 
            (0x3fU & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xdU] 
                      >> 0x14U));
    }
    // ALWAYS at ../src/SweRVolfSoC/OtherSources/axi_mem_wrapper.v:85
    if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
          >> 0x1eU) & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_arready))) {
        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rid = 
            (0x3fU & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                       << 3U) | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[8U] 
                                 >> 0x1dU)));
    }
    // ALWAYS at ../src/SweRVolfSoC/OtherSources/axi_mem_wrapper.v:139
    vlSymsp->TOP__rvfpgasim__ram.__Vdly__wb_ack = (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb)) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_ack)));
    if (vlTOPp->rst) {
        vlSymsp->TOP__rvfpgasim__ram.__Vdly__wb_ack = 0U;
    }
    // ALWAYS at ../src/SweRVolfSoC/Interconnect/AxiToWb/axi2wb.v:102
    if (vlTOPp->rst) {
        vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__ar_req = 0U;
    } else {
        if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
              >> 0x1eU) & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_arready))) {
            vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__ar_req = 1U;
        } else {
            if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                  >> 0x1dU) & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rvalid))) {
                vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__ar_req = 0U;
            }
        }
    }
    // ALWAYS at ../src/SweRVolfSoC/Interconnect/AxiToWb/axi2wb.v:102
    if (vlTOPp->rst) {
        vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__aw_req = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__w_req = 0U;
    } else {
        if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
              >> 0xfU) & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_awready))) {
            vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__aw_req = 1U;
        } else {
            if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                  >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bvalid))) {
                vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__aw_req = 0U;
            }
        }
        if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
              >> 4U) & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_wready))) {
            vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__w_req = 1U;
        } else {
            if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                  >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bvalid))) {
                vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__w_req = 0U;
            }
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_mem_wrapper__I6_M10000::_sequent__TOP__rvfpgasim__ram__4(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_axi_mem_wrapper__I6_M10000::_sequent__TOP__rvfpgasim__ram__4\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../src/SweRVolfSoC/Interconnect/AxiToWb/axi2wb.v:102
    if (vlTOPp->rst) {
        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_awready = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_wready = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_arready = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rvalid = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bvalid = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_we = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__arbiter = 1U;
        vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__wb_rdt_low = 0xdeadbeefU;
        vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 0U;
    } else {
        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_awready = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_wready = 0U;
        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_arready = 0U;
        if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs))) {
            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_awready = 0U;
            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_wready = 0U;
            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_arready = 0U;
            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rvalid = 0U;
            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bvalid = 0U;
            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr = 0U;
            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc = 0U;
            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb = 0U;
            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel = 0U;
            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_we = 0U;
            vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__arbiter = 1U;
            vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 0U;
        } else {
            if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs))) {
                if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs))) {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs))) {
                        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rvalid = 1U;
                        if ((0x20000000U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U])) {
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rvalid = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 0U;
                        }
                    } else {
                        vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bvalid = 1U;
                        if ((8U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U])) {
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bvalid = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 0U;
                        }
                    }
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs))) {
                        if (vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_ack) {
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rvalid = 1U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata 
                                = (((QData)((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_rdt)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__wb_rdt_low)));
                            vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 7U;
                        }
                    } else {
                        vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr 
                            = (1U | (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr));
                        vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel = 0xfU;
                        vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc = 1U;
                        vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb = 1U;
                        vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 5U;
                    }
                }
            } else {
                if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs))) {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs))) {
                        if (vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_ack) {
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__wb_rdt_low 
                                = vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_rdt;
                            vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 4U;
                        }
                    } else {
                        if (vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_ack) {
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_we = 0U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bvalid = 1U;
                            vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 6U;
                        }
                    }
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs))) {
                        if ((0x10U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U])) {
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__hi_32b_w 
                                = (0U == (0xfU & ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                   << 0x19U) 
                                                  | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                     >> 7U))));
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr 
                                = ((0x3ffeU & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr)) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__hi_32b_w));
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc = 1U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb = 1U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_we = 1U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_wready = 1U;
                            vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 2U;
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel 
                                = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__hi_32b_w)
                                            ? ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                << 0x15U) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                  >> 0xbU))
                                            : ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                << 0x19U) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                  >> 7U))));
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_dat 
                                = ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__hi_32b_w)
                                    ? ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                                        << 0x11U) | 
                                       (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                        >> 0xfU)) : 
                                   ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                     << 0x11U) | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                  >> 0xfU)));
                        }
                    } else {
                        vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__arbiter = 1U;
                        if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                              >> 0xfU) & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__arbiter))) {
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr 
                                = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr)) 
                                   | (0x3ffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xdU] 
                                                  << 0xaU) 
                                                 | (0x3feU 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xcU] 
                                                       >> 0x16U)))));
                            vlSymsp->TOP__rvfpgasim__ram.__PVT__o_awready = 1U;
                            vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__arbiter = 0U;
                            if ((0x10U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U])) {
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__hi_32b_w 
                                    = (0U == (0xfU 
                                              & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                  << 0x19U) 
                                                 | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                    >> 7U))));
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr 
                                    = ((0x3ffeU & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr)) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__hi_32b_w));
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc = 1U;
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb = 1U;
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_we = 1U;
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__o_wready = 1U;
                                vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 2U;
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel 
                                    = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__hi_32b_w)
                                                ? (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                    << 0x15U) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                      >> 0xbU))
                                                : (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                    << 0x19U) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                      >> 7U))));
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_dat 
                                    = ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__hi_32b_w)
                                        ? ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                                            << 0x11U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                              >> 0xfU))
                                        : ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                            << 0x11U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                              >> 0xfU)));
                            } else {
                                vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 1U;
                            }
                        } else {
                            if ((0x40000000U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U])) {
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr 
                                    = (0x3fffU & ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[8U] 
                                                   << 1U) 
                                                  | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[7U] 
                                                     >> 0x1fU)));
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel = 0xfU;
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc = 1U;
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb = 1U;
                                vlSymsp->TOP__rvfpgasim__ram.__PVT__o_arready = 1U;
                                vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs = 3U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__arbiter 
        = vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__arbiter;
    vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__wb_rdt_low 
        = vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__wb_rdt_low;
    vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_ack = vlSymsp->TOP__rvfpgasim__ram.__Vdly__wb_ack;
    vlSymsp->TOP__rvfpgasim__ram.__PVT__axi2wb__DOT__cs 
        = vlSymsp->TOP__rvfpgasim__ram.__Vdly__axi2wb__DOT__cs;
    vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_rdt = ((1U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr))
                                                   ? (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__ram__ram.__PVT__dout 
                                                              >> 0x20U))
                                                   : (IData)(vlSymsp->TOP__rvfpgasim__ram__ram.__PVT__dout));
    vlSymsp->TOP__rvfpgasim__ram.__PVT__mem_we = ((0xf0U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__mem_we)) 
                                                  | (((((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb)) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_we)) 
                                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr)))
                                                      ? (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel)
                                                      : 0U));
    vlSymsp->TOP__rvfpgasim__ram.__PVT__mem_we = ((0xfU 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__mem_we)) 
                                                  | ((((((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_cyc) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_stb)) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_we)) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_adr))
                                                       ? (IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__wb_sel)
                                                       : 0U) 
                                                     << 4U));
}

void Vrvfpgasim_axi_mem_wrapper__I6_M10000::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_axi_mem_wrapper__I6_M10000::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst_n = VL_RAND_RESET_I(1);
    __PVT__i_awid = VL_RAND_RESET_I(6);
    __PVT__i_awaddr = VL_RAND_RESET_I(32);
    __PVT__i_awlen = VL_RAND_RESET_I(8);
    __PVT__i_awsize = VL_RAND_RESET_I(3);
    __PVT__i_awburst = VL_RAND_RESET_I(2);
    __PVT__i_awvalid = VL_RAND_RESET_I(1);
    __PVT__o_awready = VL_RAND_RESET_I(1);
    __PVT__i_arid = VL_RAND_RESET_I(6);
    __PVT__i_araddr = VL_RAND_RESET_I(32);
    __PVT__i_arlen = VL_RAND_RESET_I(8);
    __PVT__i_arsize = VL_RAND_RESET_I(3);
    __PVT__i_arburst = VL_RAND_RESET_I(2);
    __PVT__i_arvalid = VL_RAND_RESET_I(1);
    __PVT__o_arready = VL_RAND_RESET_I(1);
    __PVT__i_wdata = VL_RAND_RESET_Q(64);
    __PVT__i_wstrb = VL_RAND_RESET_I(8);
    __PVT__i_wlast = VL_RAND_RESET_I(1);
    __PVT__i_wvalid = VL_RAND_RESET_I(1);
    __PVT__o_wready = VL_RAND_RESET_I(1);
    __PVT__o_bid = VL_RAND_RESET_I(6);
    __PVT__o_bresp = VL_RAND_RESET_I(2);
    __PVT__o_bvalid = VL_RAND_RESET_I(1);
    __PVT__i_bready = VL_RAND_RESET_I(1);
    __PVT__o_rid = VL_RAND_RESET_I(6);
    __PVT__o_rdata = VL_RAND_RESET_Q(64);
    __PVT__o_rresp = VL_RAND_RESET_I(2);
    __PVT__o_rlast = VL_RAND_RESET_I(1);
    __PVT__o_rvalid = VL_RAND_RESET_I(1);
    __PVT__i_rready = VL_RAND_RESET_I(1);
    __PVT__wb_adr = VL_RAND_RESET_I(14);
    __PVT__wb_dat = VL_RAND_RESET_I(32);
    __PVT__wb_sel = VL_RAND_RESET_I(4);
    __PVT__wb_we = VL_RAND_RESET_I(1);
    __PVT__wb_cyc = VL_RAND_RESET_I(1);
    __PVT__wb_stb = VL_RAND_RESET_I(1);
    __PVT__wb_ack = VL_RAND_RESET_I(1);
    __PVT__wb_rdt = VL_RAND_RESET_I(32);
    __PVT__mem_addr = VL_RAND_RESET_I(32);
    __PVT__mem_we = VL_RAND_RESET_I(8);
    __PVT__axi2wb__DOT__hi_32b_w = VL_RAND_RESET_I(1);
    __PVT__axi2wb__DOT__arbiter = VL_RAND_RESET_I(1);
    __PVT__axi2wb__DOT__wb_rdt_low = VL_RAND_RESET_I(32);
    __PVT__axi2wb__DOT__cs = VL_RAND_RESET_I(4);
    __PVT__axi2wb__DOT__aw_req = VL_RAND_RESET_I(1);
    __PVT__axi2wb__DOT__w_req = VL_RAND_RESET_I(1);
    __PVT__axi2wb__DOT__ar_req = VL_RAND_RESET_I(1);
    __Vdly__wb_ack = VL_RAND_RESET_I(1);
    __Vdly__axi2wb__DOT__arbiter = VL_RAND_RESET_I(1);
    __Vdly__axi2wb__DOT__wb_rdt_low = VL_RAND_RESET_I(32);
    __Vdly__axi2wb__DOT__cs = VL_RAND_RESET_I(4);
}

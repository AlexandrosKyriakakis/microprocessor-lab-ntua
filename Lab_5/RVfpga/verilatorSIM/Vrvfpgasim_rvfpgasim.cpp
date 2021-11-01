// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_rvfpgasim.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES

// Begin mtask footprint all: 
VL_ST_SIG8(Vrvfpgasim_rvfpgasim::__Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[32],3,0);

//--------------------

VL_CTOR_IMP(Vrvfpgasim_rvfpgasim) {
    VL_CELL(ram, Vrvfpgasim_axi_mem_wrapper__I6_M10000);
    VL_CELL(swervolf, Vrvfpgasim_swervolf_core__B0);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vrvfpgasim_rvfpgasim::__Vconfigure(Vrvfpgasim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vrvfpgasim_rvfpgasim::~Vrvfpgasim_rvfpgasim() {
}

//--------------------
// Internal Methods

void Vrvfpgasim_rvfpgasim::_initial__TOP__rvfpgasim__1(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_initial__TOP__rvfpgasim__1\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    VL_SIGW(__Vtemp1,127,0,4);
    VL_SIGW(__Vtemp2,127,0,4);
    // Body
    // INITIAL at ../src/rvfpgasim.v:61
    if (VL_UNLIKELY((0U != VL_TESTPLUSARGS_I("jtag_vpi_enable")))) {
        VL_WRITEF("JTAG VPI enabled. Not loading RAM\n");
    } else {
        __Vtemp1[0U] = 0x653d2573U;
        __Vtemp1[1U] = 0x5f66696cU;
        __Vtemp1[2U] = 0x696e6974U;
        __Vtemp1[3U] = 0x72616d5fU;
        if (VL_UNLIKELY(VL_VALUEPLUSARGS_INW(1024,VL_CVT_PACK_STR_NW(4,__Vtemp1),
                                             vlSymsp->TOP__rvfpgasim.__PVT__ram_init_file))) {
            VL_WRITEF("Loading RAM contents from %0s\n",
                      1024,vlSymsp->TOP__rvfpgasim.__PVT__ram_init_file);
            VL_READMEM_W(true,64,8192, 0,32, vlSymsp->TOP__rvfpgasim.__PVT__ram_init_file
                         , vlSymsp->TOP__rvfpgasim__ram__ram.mem
                         ,0,~0);
        }
    }
    // INITIAL at ../src/rvfpgasim.v:71
    __Vtemp2[0U] = 0x653d2573U;
    __Vtemp2[1U] = 0x5f66696cU;
    __Vtemp2[2U] = 0x696e6974U;
    __Vtemp2[3U] = 0x726f6d5fU;
    if (VL_UNLIKELY(VL_VALUEPLUSARGS_INW(1024,VL_CVT_PACK_STR_NW(4,__Vtemp2),
                                         vlSymsp->TOP__rvfpgasim.__PVT__rom_init_file))) {
        VL_WRITEF("Loading ROM contents from %0s\n",
                  1024,vlSymsp->TOP__rvfpgasim.__PVT__rom_init_file);
        VL_READMEM_W(true,64,512, 0,32, vlSymsp->TOP__rvfpgasim.__PVT__rom_init_file
                     , vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem
                     ,0,~0);
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem[0U] = VL_ULL(0x67);
    }
}

void Vrvfpgasim_rvfpgasim::_settle__TOP__rvfpgasim__2(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_settle__TOP__rvfpgasim__2\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
           | (0x10U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)));
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
           | ((0x11U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)) 
              << 1U));
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren) 
                  >> 1U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren) 
                               >> 2U))));
    // ALWAYS at ../src/SweRVolfSoC/SweRVEh1CoreComplex/dmi/rvjtag_tap.sv:93
    vlSymsp->TOP__rvfpgasim.__Vtableidx1 = (((IData)(vlTOPp->i_jtag_tms) 
                                             << 4U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state));
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate 
        = vlSymsp->TOP__rvfpgasim.__Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate
        [vlSymsp->TOP__rvfpgasim.__Vtableidx1];
    vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn 
        = (1U & (~ (IData)(vlTOPp->rst)));
    // ALWAYS at ../src/SweRVolfSoC/SweRVEh1CoreComplex/dmi/rvjtag_tap.sv:163
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
        = vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr;
    if ((4U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = ((2U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))
                ? (((QData)((IData)(vlTOPp->i_jtag_tdi)) 
                    << 0x28U) | (VL_ULL(0xffffffffff) 
                                 & (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                    >> 1U))) : ((1U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en) 
                                                    | (1U 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))))
                                                 ? 
                                                (((QData)((IData)(vlTOPp->i_jtag_tdi)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (0x7fffffffU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                                               >> 1U))))))
                                                 : (QData)((IData)(vlTOPp->i_jtag_tdi))));
    } else {
        if ((3U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
                vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = VL_ULL(0x71);
            } else {
                if ((2U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
                    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
                        = ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__dmi_reg_rdata)) 
                           << 2U);
                } else {
                    if ((1U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))) {
                        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = VL_ULL(1);
                    }
                }
            }
        } else {
            if ((0xbU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
                vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
                    = (((QData)((IData)(vlTOPp->i_jtag_tdi)) 
                        << 4U) | (QData)((IData)((0xfU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                             >> 1U))))));
            } else {
                if ((0xaU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
                    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = VL_ULL(1);
                }
            }
        }
    }
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en = (1U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en) 
                                                    | (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden) 
                                                        >> 1U) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden) 
                                                           >> 2U)))));
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__3(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__3\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../src/SweRVolfSoC/SweRVEh1CoreComplex/dmi/dmi_jtag_to_core_sync.v:49
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? ((6U & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden) 
                      << 1U)) | (1U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)))
            : 0U);
    // ALWAYS at ../src/SweRVolfSoC/SweRVEh1CoreComplex/dmi/dmi_jtag_to_core_sync.v:49
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)
            ? ((6U & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren) 
                      << 1U)) | (1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                               >> 1U))))
            : 0U);
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren) 
                  >> 1U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren) 
                               >> 2U))));
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en = (1U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en) 
                                                    | (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden) 
                                                        >> 1U) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden) 
                                                           >> 2U)))));
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__4(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__4\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim.__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
        = vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;
    // ALWAYS at ../src/SweRVolfSoC/SweRVEh1CoreComplex/dmi/rvjtag_tap.sv:191
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__dmireset 
        = ((IData)(vlTOPp->i_jtag_trst_n) & (((8U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
                                             & (IData)(
                                                       (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                        >> 0x10U))));
    // ALWAYS at ../src/SweRVolfSoC/SweRVEh1CoreComplex/dmi/rvjtag_tap.sv:191
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_hard_reset = 
        ((IData)(vlTOPp->i_jtag_trst_n) & (((8U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
                                           & (IData)(
                                                     (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                      >> 0x11U))));
    // ALWAYS at ../src/SweRVolfSoC/SweRVEh1CoreComplex/dmi/rvjtag_tap.sv:207
    vlSymsp->TOP__rvfpgasim.__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
        = ((IData)(vlTOPp->i_jtag_trst_n) ? (((8U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en) 
                                                 >> 1U))
                                              ? vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr
                                              : (VL_ULL(0x1fffffffffc) 
                                                 & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))
            : VL_ULL(0));
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__5(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__5\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../src/SweRVolfSoC/SweRVEh1CoreComplex/dmi/rvjtag_tap.sv:188
    vlSymsp->TOP__rvfpgasim.o_jtag_tdo = (1U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr));
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__6(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__6\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../src/SweRVolfSoC/SweRVEh1CoreComplex/dmi/rvjtag_tap.sv:137
    if (vlTOPp->i_jtag_trst_n) {
        if ((0U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
            vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir = 1U;
        } else {
            if ((0xfU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
                vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir 
                    = (0x1fU & ((0U == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr)))
                                 ? 0x1fU : (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr)));
            }
        }
    } else {
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir = 1U;
    }
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
           | (0x10U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)));
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en)) 
           | ((0x11U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)) 
              << 1U));
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__7(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_sequent__TOP__rvfpgasim__7\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
        = vlSymsp->TOP__rvfpgasim.__Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;
    // ALWAYS at ../src/SweRVolfSoC/SweRVEh1CoreComplex/dmi/rvjtag_tap.sv:153
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
        = ((IData)(vlTOPp->i_jtag_trst_n) ? vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr
            : VL_ULL(0));
    // ALWAYS at ../src/SweRVolfSoC/SweRVEh1CoreComplex/dmi/rvjtag_tap.sv:116
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state 
        = ((IData)(vlTOPp->i_jtag_trst_n) ? (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate)
            : 0U);
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_combo__TOP__rvfpgasim__8(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_combo__TOP__rvfpgasim__8\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../src/SweRVolfSoC/SweRVEh1CoreComplex/dmi/rvjtag_tap.sv:93
    vlSymsp->TOP__rvfpgasim.__Vtableidx1 = (((IData)(vlTOPp->i_jtag_tms) 
                                             << 4U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state));
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate 
        = vlSymsp->TOP__rvfpgasim.__Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate
        [vlSymsp->TOP__rvfpgasim.__Vtableidx1];
    // ALWAYS at ../src/SweRVolfSoC/SweRVEh1CoreComplex/dmi/rvjtag_tap.sv:163
    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
        = vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr;
    if ((4U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = ((2U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))
                ? (((QData)((IData)(vlTOPp->i_jtag_tdi)) 
                    << 0x28U) | (VL_ULL(0xffffffffff) 
                                 & (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                    >> 1U))) : ((1U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en) 
                                                    | (1U 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))))
                                                 ? 
                                                (((QData)((IData)(vlTOPp->i_jtag_tdi)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (0x7fffffffU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                                               >> 1U))))))
                                                 : (QData)((IData)(vlTOPp->i_jtag_tdi))));
    } else {
        if ((3U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
                vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = VL_ULL(0x71);
            } else {
                if ((2U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
                    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
                        = ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__dmi_reg_rdata)) 
                           << 2U);
                } else {
                    if ((1U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))) {
                        vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = VL_ULL(1);
                    }
                }
            }
        } else {
            if ((0xbU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
                vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
                    = (((QData)((IData)(vlTOPp->i_jtag_tdi)) 
                        << 4U) | (QData)((IData)((0xfU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                             >> 1U))))));
            } else {
                if ((0xaU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
                    vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = VL_ULL(1);
                }
            }
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_rvfpgasim::_combo__TOP__rvfpgasim__9(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_combo__TOP__rvfpgasim__9\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn 
        = (1U & (~ (IData)(vlTOPp->rst)));
}

void Vrvfpgasim_rvfpgasim::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    i_jtag_tck = VL_RAND_RESET_I(1);
    i_jtag_tms = VL_RAND_RESET_I(1);
    i_jtag_tdi = VL_RAND_RESET_I(1);
    i_jtag_trst_n = VL_RAND_RESET_I(1);
    o_jtag_tdo = VL_RAND_RESET_I(1);
    o_uart_tx = VL_RAND_RESET_I(1);
    o_gpio = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024,__PVT__ram_init_file);
    VL_RAND_RESET_W(1024,__PVT__rom_init_file);
    __PVT__dmi_reg_en = VL_RAND_RESET_I(1);
    __PVT__dmi_hard_reset = VL_RAND_RESET_I(1);
    __Vcellinp__swervolf__rstn = VL_RAND_RESET_I(1);
    __PVT__dmi_wrapper__DOT__dmireset = VL_RAND_RESET_I(1);
    __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr = VL_RAND_RESET_Q(41);
    __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = VL_RAND_RESET_Q(41);
    __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr = VL_RAND_RESET_Q(41);
    __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state = VL_RAND_RESET_I(4);
    __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate = VL_RAND_RESET_I(4);
    __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir = VL_RAND_RESET_I(5);
    __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en = VL_RAND_RESET_I(2);
    __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en = VL_RAND_RESET_I(1);
    __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden = VL_RAND_RESET_I(3);
    __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren = VL_RAND_RESET_I(3);
    __Vtableidx1 = VL_RAND_RESET_I(5);
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[0] = 1U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[1] = 1U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[2] = 3U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[3] = 4U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[4] = 4U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[5] = 6U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[6] = 6U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[7] = 4U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[8] = 1U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[9] = 0xaU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[10] = 0xbU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[11] = 0xbU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[12] = 0xdU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[13] = 0xdU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[14] = 0xbU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[15] = 1U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[16] = 0U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[17] = 2U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[18] = 9U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[19] = 5U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[20] = 5U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[21] = 8U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[22] = 7U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[23] = 8U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[24] = 2U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[25] = 0U;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[26] = 0xcU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[27] = 0xcU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[28] = 0xfU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[29] = 0xeU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[30] = 0xfU;
    __Vtable1___PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate[31] = 2U;
    __Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr = VL_RAND_RESET_Q(41);
}

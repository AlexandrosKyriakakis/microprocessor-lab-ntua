// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_dpram64__S1000_MB0.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vrvfpgasim_dpram64__S1000_MB0) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vrvfpgasim_dpram64__S1000_MB0::__Vconfigure(Vrvfpgasim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vrvfpgasim_dpram64__S1000_MB0::~Vrvfpgasim_dpram64__S1000_MB0() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vrvfpgasim_dpram64__S1000_MB0::_sequent__TOP__rvfpgasim__swervolf__bootrom__ram__1(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrvfpgasim_dpram64__S1000_MB0::_sequent__TOP__rvfpgasim__swervolf__bootrom__ram__1\n"); );
    Vrvfpgasim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    VL_SIG8(__Vdlyvlsb__mem__v0,5,0);
    VL_SIG8(__Vdlyvval__mem__v0,7,0);
    VL_SIG8(__Vdlyvset__mem__v0,0,0);
    VL_SIG8(__Vdlyvlsb__mem__v1,5,0);
    VL_SIG8(__Vdlyvval__mem__v1,7,0);
    VL_SIG8(__Vdlyvset__mem__v1,0,0);
    VL_SIG8(__Vdlyvlsb__mem__v2,5,0);
    VL_SIG8(__Vdlyvval__mem__v2,7,0);
    VL_SIG8(__Vdlyvset__mem__v2,0,0);
    VL_SIG8(__Vdlyvlsb__mem__v3,5,0);
    VL_SIG8(__Vdlyvval__mem__v3,7,0);
    VL_SIG8(__Vdlyvset__mem__v3,0,0);
    VL_SIG8(__Vdlyvlsb__mem__v4,5,0);
    VL_SIG8(__Vdlyvval__mem__v4,7,0);
    VL_SIG8(__Vdlyvset__mem__v4,0,0);
    VL_SIG8(__Vdlyvlsb__mem__v5,5,0);
    VL_SIG8(__Vdlyvval__mem__v5,7,0);
    VL_SIG8(__Vdlyvset__mem__v5,0,0);
    VL_SIG8(__Vdlyvlsb__mem__v6,5,0);
    VL_SIG8(__Vdlyvval__mem__v6,7,0);
    VL_SIG8(__Vdlyvset__mem__v6,0,0);
    VL_SIG8(__Vdlyvlsb__mem__v7,5,0);
    VL_SIG8(__Vdlyvval__mem__v7,7,0);
    VL_SIG8(__Vdlyvset__mem__v7,0,0);
    VL_SIG16(__Vdlyvdim0__mem__v0,8,0);
    VL_SIG16(__Vdlyvdim0__mem__v1,8,0);
    VL_SIG16(__Vdlyvdim0__mem__v2,8,0);
    VL_SIG16(__Vdlyvdim0__mem__v3,8,0);
    VL_SIG16(__Vdlyvdim0__mem__v4,8,0);
    VL_SIG16(__Vdlyvdim0__mem__v5,8,0);
    VL_SIG16(__Vdlyvdim0__mem__v6,8,0);
    VL_SIG16(__Vdlyvdim0__mem__v7,8,0);
    // Body
    __Vdlyvset__mem__v0 = 0U;
    __Vdlyvset__mem__v1 = 0U;
    __Vdlyvset__mem__v2 = 0U;
    __Vdlyvset__mem__v3 = 0U;
    __Vdlyvset__mem__v4 = 0U;
    __Vdlyvset__mem__v5 = 0U;
    __Vdlyvset__mem__v6 = 0U;
    __Vdlyvset__mem__v7 = 0U;
    // ALWAYS at ../src/SweRVolfSoC/Peripherals/BootROM/dpram64.v:42
    vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout 
        = vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem
        [(0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                    >> 1U))];
    // ALWAYS at ../src/SweRVolfSoC/Peripherals/BootROM/dpram64.v:42
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we))) {
        __Vdlyvval__mem__v0 = (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat);
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvlsb__mem__v0 = 0U;
        __Vdlyvdim0__mem__v0 = (0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          >> 1U));
    }
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we))) {
        __Vdlyvval__mem__v1 = (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                        >> 8U));
        __Vdlyvset__mem__v1 = 1U;
        __Vdlyvlsb__mem__v1 = 8U;
        __Vdlyvdim0__mem__v1 = (0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          >> 1U));
    }
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we))) {
        __Vdlyvval__mem__v2 = (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                        >> 0x10U));
        __Vdlyvset__mem__v2 = 1U;
        __Vdlyvlsb__mem__v2 = 0x10U;
        __Vdlyvdim0__mem__v2 = (0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          >> 1U));
    }
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we))) {
        __Vdlyvval__mem__v3 = (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                        >> 0x18U));
        __Vdlyvset__mem__v3 = 1U;
        __Vdlyvlsb__mem__v3 = 0x18U;
        __Vdlyvdim0__mem__v3 = (0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          >> 1U));
    }
    if ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we))) {
        __Vdlyvval__mem__v4 = (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat);
        __Vdlyvset__mem__v4 = 1U;
        __Vdlyvlsb__mem__v4 = 0x20U;
        __Vdlyvdim0__mem__v4 = (0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          >> 1U));
    }
    if ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we))) {
        __Vdlyvval__mem__v5 = (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                        >> 8U));
        __Vdlyvset__mem__v5 = 1U;
        __Vdlyvlsb__mem__v5 = 0x28U;
        __Vdlyvdim0__mem__v5 = (0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          >> 1U));
    }
    if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we))) {
        __Vdlyvval__mem__v6 = (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                        >> 0x10U));
        __Vdlyvset__mem__v6 = 1U;
        __Vdlyvlsb__mem__v6 = 0x30U;
        __Vdlyvdim0__mem__v6 = (0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          >> 1U));
    }
    if ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we))) {
        __Vdlyvval__mem__v7 = (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat 
                                        >> 0x18U));
        __Vdlyvset__mem__v7 = 1U;
        __Vdlyvlsb__mem__v7 = 0x38U;
        __Vdlyvdim0__mem__v7 = (0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          >> 1U));
    }
    // ALWAYSPOST at ../src/SweRVolfSoC/Peripherals/BootROM/dpram64.v:43
    if (__Vdlyvset__mem__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem[__Vdlyvdim0__mem__v0] 
            = (((~ (VL_ULL(0xff) << (IData)(__Vdlyvlsb__mem__v0))) 
                & vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem
                [__Vdlyvdim0__mem__v0]) | ((QData)((IData)(__Vdlyvval__mem__v0)) 
                                           << (IData)(__Vdlyvlsb__mem__v0)));
    }
    if (__Vdlyvset__mem__v1) {
        vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem[__Vdlyvdim0__mem__v1] 
            = (((~ (VL_ULL(0xff) << (IData)(__Vdlyvlsb__mem__v1))) 
                & vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem
                [__Vdlyvdim0__mem__v1]) | ((QData)((IData)(__Vdlyvval__mem__v1)) 
                                           << (IData)(__Vdlyvlsb__mem__v1)));
    }
    if (__Vdlyvset__mem__v2) {
        vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem[__Vdlyvdim0__mem__v2] 
            = (((~ (VL_ULL(0xff) << (IData)(__Vdlyvlsb__mem__v2))) 
                & vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem
                [__Vdlyvdim0__mem__v2]) | ((QData)((IData)(__Vdlyvval__mem__v2)) 
                                           << (IData)(__Vdlyvlsb__mem__v2)));
    }
    if (__Vdlyvset__mem__v3) {
        vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem[__Vdlyvdim0__mem__v3] 
            = (((~ (VL_ULL(0xff) << (IData)(__Vdlyvlsb__mem__v3))) 
                & vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem
                [__Vdlyvdim0__mem__v3]) | ((QData)((IData)(__Vdlyvval__mem__v3)) 
                                           << (IData)(__Vdlyvlsb__mem__v3)));
    }
    if (__Vdlyvset__mem__v4) {
        vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem[__Vdlyvdim0__mem__v4] 
            = (((~ (VL_ULL(0xff) << (IData)(__Vdlyvlsb__mem__v4))) 
                & vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem
                [__Vdlyvdim0__mem__v4]) | ((QData)((IData)(__Vdlyvval__mem__v4)) 
                                           << (IData)(__Vdlyvlsb__mem__v4)));
    }
    if (__Vdlyvset__mem__v5) {
        vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem[__Vdlyvdim0__mem__v5] 
            = (((~ (VL_ULL(0xff) << (IData)(__Vdlyvlsb__mem__v5))) 
                & vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem
                [__Vdlyvdim0__mem__v5]) | ((QData)((IData)(__Vdlyvval__mem__v5)) 
                                           << (IData)(__Vdlyvlsb__mem__v5)));
    }
    if (__Vdlyvset__mem__v6) {
        vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem[__Vdlyvdim0__mem__v6] 
            = (((~ (VL_ULL(0xff) << (IData)(__Vdlyvlsb__mem__v6))) 
                & vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem
                [__Vdlyvdim0__mem__v6]) | ((QData)((IData)(__Vdlyvval__mem__v6)) 
                                           << (IData)(__Vdlyvlsb__mem__v6)));
    }
    if (__Vdlyvset__mem__v7) {
        vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem[__Vdlyvdim0__mem__v7] 
            = (((~ (VL_ULL(0xff) << (IData)(__Vdlyvlsb__mem__v7))) 
                & vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem
                [__Vdlyvdim0__mem__v7]) | ((QData)((IData)(__Vdlyvval__mem__v7)) 
                                           << (IData)(__Vdlyvlsb__mem__v7)));
    }
}

void Vrvfpgasim_dpram64__S1000_MB0::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrvfpgasim_dpram64__S1000_MB0::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__we = VL_RAND_RESET_I(8);
    __PVT__din = VL_RAND_RESET_Q(64);
    __PVT__waddr = VL_RAND_RESET_I(12);
    __PVT__raddr = VL_RAND_RESET_I(12);
    __PVT__dout = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
            mem[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    __PVT__i = VL_RAND_RESET_I(32);
}

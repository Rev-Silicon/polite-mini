// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_ctrl.h for the primary calling header

#include "Vtb_polite_ctrl__pch.h"
#include "Vtb_polite_ctrl__Syms.h"
#include "Vtb_polite_ctrl___024root.h"

VL_ATTR_COLD void Vtb_polite_ctrl___024root___eval_static__TOP(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval_static__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_polite_ctrl__DOT__test_step = 0U;
    ++(vlSymsp->__Vcoverage[51]);
    vlSelfRef.tb_polite_ctrl__DOT__err_count = 0U;
    ++(vlSymsp->__Vcoverage[104]);
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = 0U;
    ++(vlSymsp->__Vcoverage[105]);
}

VL_ATTR_COLD void Vtb_polite_ctrl___024root___eval_initial__TOP(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_polite_ctrl__DOT__clk = 0U;
    ++(vlSymsp->__Vcoverage[59]);
    if (vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__no_ob) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__no_ob = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_polite_ctrl___024root___dump_triggers__stl(Vtb_polite_ctrl___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_polite_ctrl___024root___eval_triggers__stl(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_polite_ctrl___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb_polite_ctrl___024root___stl_sequent__TOP__0(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT____VdfgRegularize_hf29a7531_0_1;
    tb_polite_ctrl__DOT__dut__DOT____VdfgRegularize_hf29a7531_0_1 = 0;
    // Body
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__clk) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__clk 
            = vlSelfRef.tb_polite_ctrl__DOT__clk;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__rst_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__rst_n 
            = vlSelfRef.tb_polite_ctrl__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__en 
            = vlSelfRef.tb_polite_ctrl__DOT__en;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__dump_busy))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__dump_busy 
            = vlSelfRef.tb_polite_ctrl__DOT__dump_busy;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__fz_open))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__fz_open 
            = vlSelfRef.tb_polite_ctrl__DOT__fz_open;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__pe_ovf_any))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__pe_ovf_any 
            = vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__phase) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__phase))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__phase 
            = vlSelfRef.tb_polite_ctrl__DOT__phase;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__run_busy) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__run_busy))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__run_busy 
            = vlSelfRef.tb_polite_ctrl__DOT__run_busy;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__illegal) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__illegal))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__illegal 
            = vlSelfRef.tb_polite_ctrl__DOT__illegal;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__ovf) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ovf))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ovf 
            = vlSelfRef.tb_polite_ctrl__DOT__ovf;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_phase))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_phase 
            = vlSelfRef.tb_polite_ctrl__DOT__m_phase;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_run_busy))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_run_busy 
            = vlSelfRef.tb_polite_ctrl__DOT__m_run_busy;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_illegal))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_illegal 
            = vlSelfRef.tb_polite_ctrl__DOT__m_illegal;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_ovf))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_ovf 
            = vlSelfRef.tb_polite_ctrl__DOT__m_ovf;
    }
    if (((1U == (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                         >> 4U))) ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_load))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_load 
            = (1U == (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                              >> 4U)));
    }
    if (((2U == (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                         >> 4U))) ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_run))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_run 
            = (2U == (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                              >> 4U)));
    }
    if (((3U == (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                         >> 4U))) ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_dload))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_dload 
            = (3U == (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                              >> 4U)));
    }
    if (((5U == (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                         >> 4U))) ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_clear))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_clear 
            = (5U == (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                              >> 4U)));
    }
    if (((0xbU < (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                          >> 4U))) ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_rsvd))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_rsvd 
            = (0xbU < (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                               >> 4U)));
    }
    if (((4U == (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                         >> 4U))) ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_dabrt))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_dabrt 
            = (4U == (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                              >> 4U)));
    }
    vlSelfRef.tb_polite_ctrl__DOT__dbg_op = (0xfU & 
                                             ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                                              >> 4U));
    vlSelfRef.tb_polite_ctrl__DOT__dbg_pe = (3U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    if ((1U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__d) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d)) 
               | (1U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__d) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d)) 
               | (2U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__d) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d)) 
               | (4U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__d) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d)) 
               | (8U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__d) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__d) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__d) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__d) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__d)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins)) 
               | (1U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins)) 
               | (2U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins)) 
               | (4U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins)) 
               | (8U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ins)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf)) 
               | (1U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf)) 
               | (2U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf)) 
               | (4U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf)) 
               | (8U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__inbuf)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf)))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf)) 
               | (1U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf)))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf)) 
               | (2U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf)))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf)) 
               | (4U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf)) 
               | (8U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__m_inbuf)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf)));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                        ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x3fffffffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x40000000U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                        ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x5fffffffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x20000000U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                        ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x6fffffffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x10000000U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                       ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x77ffffffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x8000000U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                       ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7bffffffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x4000000U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                       ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7dffffffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x2000000U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                       ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7effffffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x1000000U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                      ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7f7fffffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x800000U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                      ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7fbfffffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x400000U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                     ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7ffbffffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x40000U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                     ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7ff7ffffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x80000U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                      ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7fefffffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x100000U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                      ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7fdfffffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x200000U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                     ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7ffeffffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x10000U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                     ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7ffdffffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x20000U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x100U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                   ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7ffffeffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x100U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x200U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                   ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7ffffdffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x200U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x400U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                   ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7ffffbffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x400U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x800U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                   ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7ffff7ffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x800U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                    ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7fffefffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x1000U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                    ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7fffdfffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x2000U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                    ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7fffbfffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x4000U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                    ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7fff7fffU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x8000U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
               ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7ffffffeU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (1U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((2U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
               ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7ffffffdU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (2U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((4U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
               ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7ffffffbU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (4U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((8U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
               ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7ffffff7U & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (8U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x10U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                  ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7fffffefU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x10U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x20U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                  ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7fffffdfU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x20U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x40U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                  ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7fffffbfU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x40U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    if ((0x80U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                  ^ vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now 
            = ((0x7fffff7fU & vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__exp_now) 
               | (0x80U & vlSelfRef.tb_polite_ctrl__DOT__exp_now));
    }
    vlSelfRef.tb_polite_ctrl__DOT__acc_en = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(vlSelfRef.tb_polite_ctrl__DOT__run_busy));
    vlSelfRef.tb_polite_ctrl__DOT__dump_abort = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                                 & (0x40U 
                                                    == 
                                                    (0xf0U 
                                                     & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins))));
    vlSelfRef.tb_polite_ctrl__DOT__run_now = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                              & ((~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                                                 & (0x20U 
                                                    == 
                                                    (0xf0U 
                                                     & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins)))));
    vlSelfRef.tb_polite_ctrl__DOT__dump_load = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                                & ((~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy)) 
                                                   & (0x30U 
                                                      == 
                                                      (0xf0U 
                                                       & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins)))));
    vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__run_busy));
    vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__is_dbg 
        = ((6U <= (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                           >> 4U))) & (0xbU >= (0xfU 
                                                & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                                                   >> 4U))));
    vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__bad_bank 
        = (IData)(((0x60U == (0xf0U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins))) 
                   & (0U != (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins)))));
    vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_coll 
        = ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__run_busy)) 
           | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
               >> 2U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy)));
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__acc_en) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__acc_en))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__acc_en 
            = vlSelfRef.tb_polite_ctrl__DOT__acc_en;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_abort) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__dump_abort))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__dump_abort 
            = vlSelfRef.tb_polite_ctrl__DOT__dump_abort;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__run_now) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__run_now))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__run_now 
            = vlSelfRef.tb_polite_ctrl__DOT__run_now;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_load) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__dump_load))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__dump_load 
            = vlSelfRef.tb_polite_ctrl__DOT__dump_load;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__acc_ovf) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__acc_ovf))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__acc_ovf 
            = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__acc_ovf;
    }
    vlSelfRef.tb_polite_ctrl__DOT__status = (0x80U 
                                             | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                                  << 6U) 
                                                 | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__illegal) 
                                                     << 5U) 
                                                    | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__ovf) 
                                                        | (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__acc_ovf)) 
                                                       << 4U))) 
                                                | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__phase) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.tb_polite_ctrl__DOT__run_busy)))));
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__is_dbg) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_dbg))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__is_dbg 
            = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__is_dbg;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__bad_bank) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__bad_bank))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__bad_bank 
            = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__bad_bank;
    }
    vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__dbg_req 
        = ((~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__bad_bank)) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__is_dbg));
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_coll) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__clr_coll))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__clr_coll 
            = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_coll;
    }
    vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_ok 
        = ((~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_coll)) 
           & (0x50U == (0xf0U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins))));
    if ((1U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__status) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status)) 
               | (1U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__status)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__status) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status)) 
               | (2U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__status)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__status) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status)) 
               | (4U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__status)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__status) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status)) 
               | (8U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__status)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__status) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__status)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__status) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__status)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__status) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__status)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__status) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__status)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__status)));
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__dbg_req) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__dbg_req))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__dbg_req 
            = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__dbg_req;
    }
    vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__ill_set 
        = ((IData)(((0x20U == (0xf0U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins))) 
                    & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | ((IData)(((0x30U == (0xf0U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins))) 
                       & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
              | ((IData)(((0x50U == (0xf0U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins))) 
                          & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_coll))) 
                 | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__bad_bank) 
                    | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__dbg_req) 
                        & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                       | (0xbU < (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                                          >> 4U))))))));
    vlSelfRef.tb_polite_ctrl__DOT__dbg_start = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                                & ((~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                                                   & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__dbg_req)));
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_ok) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__clr_ok))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__clr_ok 
            = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_ok;
    }
    vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_flg 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_ok) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__inbuf_d 
        = ((1U == (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                           >> 4U))) ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
            : (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_ok) 
                & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf)));
    tb_polite_ctrl__DOT__dut__DOT____VdfgRegularize_hf29a7531_0_1 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_ok));
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__ill_set) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__ill_set))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__ill_set 
            = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__ill_set;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dbg_start) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__dbg_start))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__dbg_start 
            = vlSelfRef.tb_polite_ctrl__DOT__dbg_start;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_flg) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__clr_flg))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__clr_flg 
            = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_flg;
    }
    vlSelfRef.tb_polite_ctrl__DOT__illegal_d = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__ill_set) 
                                                | ((~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_flg)) 
                                                   & (IData)(vlSelfRef.tb_polite_ctrl__DOT__illegal)));
    vlSelfRef.tb_polite_ctrl__DOT__ovf_d = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__acc_ovf) 
                                            | ((~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_flg)) 
                                               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ovf)));
    if ((1U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__inbuf_d) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d)))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d)) 
               | (1U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__inbuf_d)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__inbuf_d) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d)) 
               | (2U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__inbuf_d)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__inbuf_d) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d)) 
               | (4U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__inbuf_d)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__inbuf_d) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d)) 
               | (8U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__inbuf_d)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__inbuf_d) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d)))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__inbuf_d)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__inbuf_d) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d)))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__inbuf_d)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__inbuf_d) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d)))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__inbuf_d)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__inbuf_d) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d)))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__inbuf_d)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__inbuf_d)));
    }
    vlSelfRef.tb_polite_ctrl__DOT__clr_psum = ((IData)(tb_polite_ctrl__DOT__dut__DOT____VdfgRegularize_hf29a7531_0_1) 
                                               & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                                                  >> 3U));
    vlSelfRef.tb_polite_ctrl__DOT__clr_outbuf = ((IData)(tb_polite_ctrl__DOT__dut__DOT____VdfgRegularize_hf29a7531_0_1) 
                                                 & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                                                    >> 2U));
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__illegal_d) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__illegal_d))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__illegal_d 
            = vlSelfRef.tb_polite_ctrl__DOT__illegal_d;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__ovf_d) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ovf_d))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__ovf_d 
            = vlSelfRef.tb_polite_ctrl__DOT__ovf_d;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__clr_psum) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__clr_psum))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__clr_psum 
            = vlSelfRef.tb_polite_ctrl__DOT__clr_psum;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__clr_outbuf) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__clr_outbuf))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__clr_outbuf 
            = vlSelfRef.tb_polite_ctrl__DOT__clr_outbuf;
    }
    vlSelfRef.tb_polite_ctrl__DOT__cmd_strobes = ((
                                                   (((IData)(vlSelfRef.tb_polite_ctrl__DOT__run_now) 
                                                     << 6U) 
                                                    | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__acc_en) 
                                                       << 5U)) 
                                                   | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__clr_psum) 
                                                       << 4U) 
                                                      | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__clr_outbuf) 
                                                         << 3U))) 
                                                  | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_load) 
                                                      << 2U) 
                                                     | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_abort) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.tb_polite_ctrl__DOT__dbg_start))));
    if ((1U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__cmd_strobes) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__cmd_strobes)))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__cmd_strobes 
            = ((0x7eU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__cmd_strobes)) 
               | (1U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__cmd_strobes)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__cmd_strobes) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__cmd_strobes)))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__cmd_strobes 
            = ((0x7dU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__cmd_strobes)) 
               | (2U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__cmd_strobes)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__cmd_strobes) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__cmd_strobes)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__cmd_strobes 
            = ((0x7bU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__cmd_strobes)) 
               | (4U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__cmd_strobes)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__cmd_strobes) 
               ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__cmd_strobes)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__cmd_strobes 
            = ((0x77U & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__cmd_strobes)) 
               | (8U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__cmd_strobes)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__cmd_strobes) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__cmd_strobes)))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__cmd_strobes 
            = ((0x6fU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__cmd_strobes)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__cmd_strobes)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__cmd_strobes) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__cmd_strobes)))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__cmd_strobes 
            = ((0x5fU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__cmd_strobes)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__cmd_strobes)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__cmd_strobes) 
                  ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__cmd_strobes)))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__cmd_strobes 
            = ((0x3fU & (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__cmd_strobes)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__cmd_strobes)));
    }
}

VL_ATTR_COLD void Vtb_polite_ctrl___024root___configure_coverage(Vtb_polite_ctrl___024root* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___configure_coverage\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "polite_ctrl_tb.sv", 38, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "polite_ctrl_tb.sv", 39, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "polite_ctrl_tb.sv", 40, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "polite_ctrl_tb.sv", 41, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "polite_ctrl_tb.sv", 41, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "polite_ctrl_tb.sv", 41, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "polite_ctrl_tb.sv", 41, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "polite_ctrl_tb.sv", 41, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "polite_ctrl_tb.sv", 41, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "polite_ctrl_tb.sv", 41, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "polite_ctrl_tb.sv", 41, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "polite_ctrl_tb.sv", 42, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "ins[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "polite_ctrl_tb.sv", 42, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "ins[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "polite_ctrl_tb.sv", 42, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "ins[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "polite_ctrl_tb.sv", 42, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "ins[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "polite_ctrl_tb.sv", 42, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "ins[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "polite_ctrl_tb.sv", 42, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "ins[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "polite_ctrl_tb.sv", 42, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "ins[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "polite_ctrl_tb.sv", 42, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "ins[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "polite_ctrl_tb.sv", 43, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "dump_busy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "polite_ctrl_tb.sv", 44, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "fz_open", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "polite_ctrl_tb.sv", 45, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "pe_ovf_any", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "polite_ctrl_tb.sv", 47, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "phase", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "polite_ctrl_tb.sv", 48, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "run_busy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "polite_ctrl_tb.sv", 49, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "inbuf[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "polite_ctrl_tb.sv", 49, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "inbuf[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "polite_ctrl_tb.sv", 49, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "inbuf[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "polite_ctrl_tb.sv", 49, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "inbuf[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "polite_ctrl_tb.sv", 49, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "inbuf[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "polite_ctrl_tb.sv", 49, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "inbuf[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "polite_ctrl_tb.sv", 49, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "inbuf[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "polite_ctrl_tb.sv", 49, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "inbuf[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "polite_ctrl_tb.sv", 50, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "illegal", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "polite_ctrl_tb.sv", 51, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "ovf", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "polite_ctrl_tb.sv", 52, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "illegal_d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "polite_ctrl_tb.sv", 53, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "ovf_d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "polite_ctrl_tb.sv", 54, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "run_now", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "polite_ctrl_tb.sv", 55, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "acc_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "polite_ctrl_tb.sv", 56, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "clr_psum", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "polite_ctrl_tb.sv", 57, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "clr_outbuf", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "polite_ctrl_tb.sv", 58, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "dump_load", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "polite_ctrl_tb.sv", 59, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "dump_abort", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "polite_ctrl_tb.sv", 60, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "dbg_start", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "polite_ctrl_tb.sv", 61, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "dbg_op[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "polite_ctrl_tb.sv", 61, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "dbg_op[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "polite_ctrl_tb.sv", 61, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "dbg_op[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "polite_ctrl_tb.sv", 61, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "dbg_op[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "polite_ctrl_tb.sv", 62, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "dbg_pe[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "polite_ctrl_tb.sv", 62, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "dbg_pe[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "polite_ctrl_tb.sv", 63, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "status[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "polite_ctrl_tb.sv", 63, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "status[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "polite_ctrl_tb.sv", 63, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "status[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "polite_ctrl_tb.sv", 63, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "status[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "polite_ctrl_tb.sv", 63, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "status[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "polite_ctrl_tb.sv", 63, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "status[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "polite_ctrl_tb.sv", 63, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "status[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "polite_ctrl_tb.sv", 63, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "status[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "polite_ctrl_tb.sv", 96, 29, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "polite_ctrl_tb.sv", 97, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "cmd_strobes[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "polite_ctrl_tb.sv", 97, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "cmd_strobes[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "polite_ctrl_tb.sv", 97, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "cmd_strobes[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "polite_ctrl_tb.sv", 97, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "cmd_strobes[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "polite_ctrl_tb.sv", 97, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "cmd_strobes[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "polite_ctrl_tb.sv", 97, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "cmd_strobes[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "polite_ctrl_tb.sv", 97, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "cmd_strobes[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "polite_ctrl_tb.sv", 103, 5, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "103");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "polite_ctrl_tb.sv", 104, 5, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "polite_ctrl_tb.sv", 124, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "m_phase", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "polite_ctrl_tb.sv", 125, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "m_run_busy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "polite_ctrl_tb.sv", 126, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "m_inbuf[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "polite_ctrl_tb.sv", 126, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "m_inbuf[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "polite_ctrl_tb.sv", 126, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "m_inbuf[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "polite_ctrl_tb.sv", 126, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "m_inbuf[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "polite_ctrl_tb.sv", 126, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "m_inbuf[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "polite_ctrl_tb.sv", 126, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "m_inbuf[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "polite_ctrl_tb.sv", 126, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "m_inbuf[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "polite_ctrl_tb.sv", 126, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "m_inbuf[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "polite_ctrl_tb.sv", 127, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "m_illegal", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "polite_ctrl_tb.sv", 128, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "m_ovf", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.illegal_d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.ovf_d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.run_now", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.acc_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.clr_psum", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.clr_outbuf", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.dump_load", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.dump_abort", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.dbg_start", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.dbg_op[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.dbg_op[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.dbg_op[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.dbg_op[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.dbg_pe[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.dbg_pe[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.status[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.status[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.status[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.status[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.status[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.status[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.status[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.status[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.inbuf_d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.inbuf_d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.inbuf_d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.inbuf_d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.inbuf_d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.inbuf_d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.inbuf_d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "polite_ctrl_tb.sv", 130, 17, ".tb_polite_ctrl", "v_toggle/tb_polite_ctrl", "exp_now.inbuf_d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "polite_ctrl_tb.sv", 131, 29, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "131");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "polite_ctrl_tb.sv", 132, 29, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "polite_ctrl_tb.sv", 134, 35, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "134,136-138,142-148,150-156,160-175");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "polite_ctrl_tb.sv", 178, 20, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "178-183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "polite_ctrl_tb.sv", 187, 9, ".tb_polite_ctrl", "v_branch/tb_polite_ctrl", "if", "187-192");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "polite_ctrl_tb.sv", 187, 10, ".tb_polite_ctrl", "v_branch/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "polite_ctrl_tb.sv", 186, 20, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "polite_ctrl_tb.sv", 209, 14, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "polite_ctrl_tb.sv", 210, 14, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "polite_ctrl_tb.sv", 211, 14, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "polite_ctrl_tb.sv", 212, 14, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "polite_ctrl_tb.sv", 213, 14, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "polite_ctrl_tb.sv", 214, 14, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "polite_ctrl_tb.sv", 215, 14, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "polite_ctrl_tb.sv", 216, 14, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "polite_ctrl_tb.sv", 217, 14, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "polite_ctrl_tb.sv", 218, 14, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "polite_ctrl_tb.sv", 219, 14, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "polite_ctrl_tb.sv", 220, 14, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "polite_ctrl_tb.sv", 207, 20, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "207-220");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "polite_ctrl_tb.sv", 225, 9, ".tb_polite_ctrl", "v_branch/tb_polite_ctrl", "if", "225");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "polite_ctrl_tb.sv", 225, 10, ".tb_polite_ctrl", "v_branch/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "polite_ctrl_tb.sv", 227, 10, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "polite_ctrl_tb.sv", 224, 20, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "224,226");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "polite_ctrl_tb.sv", 236, 14, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "polite_ctrl_tb.sv", 237, 14, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "polite_ctrl_tb.sv", 238, 14, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "polite_ctrl_tb.sv", 239, 14, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "polite_ctrl_tb.sv", 240, 14, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "polite_ctrl_tb.sv", 235, 20, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "235-240");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "polite_ctrl_tb.sv", 245, 20, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "245,252-263");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "polite_ctrl_tb.sv", 275, 9, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "275");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "polite_ctrl_tb.sv", 266, 20, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "266-278");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "polite_ctrl_tb.sv", 281, 20, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "248-251,281-293");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "polite_ctrl_tb.sv", 308, 9, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "249-251,308");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "polite_ctrl_tb.sv", 314, 9, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "248-251,314");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "polite_ctrl_tb.sv", 320, 9, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "248-251,320");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "polite_ctrl_tb.sv", 326, 9, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "250-251,326");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "polite_ctrl_tb.sv", 332, 9, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "248-251,332");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "polite_ctrl_tb.sv", 335, 9, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "248-251,335");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "polite_ctrl_tb.sv", 342, 9, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "249-251,342");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "polite_ctrl_tb.sv", 352, 9, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "352");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "polite_ctrl_tb.sv", 300, 20, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "248-251,300-301,305-310,313-316,319-322,325-328,331-337,340-345,349-354,356");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "polite_ctrl_tb.sv", 363, 14, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "polite_ctrl_tb.sv", 362, 9, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "362,364-365");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "polite_ctrl_tb.sv", 359, 20, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "359-362");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "polite_ctrl_tb.sv", 372, 9, ".tb_polite_ctrl", "v_branch/tb_polite_ctrl", "if", "372-373");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "polite_ctrl_tb.sv", 372, 10, ".tb_polite_ctrl", "v_branch/tb_polite_ctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "polite_ctrl_tb.sv", 370, 5, ".tb_polite_ctrl", "v_line/tb_polite_ctrl", "block", "248-251,370,374-375,379-387,389-393");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "../design/polite_ctrl.sv", 16, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "../design/polite_ctrl.sv", 17, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "../design/polite_ctrl.sv", 18, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "../design/polite_ctrl.sv", 19, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "../design/polite_ctrl.sv", 19, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "../design/polite_ctrl.sv", 19, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../design/polite_ctrl.sv", 19, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "../design/polite_ctrl.sv", 19, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "../design/polite_ctrl.sv", 19, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "../design/polite_ctrl.sv", 19, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "../design/polite_ctrl.sv", 19, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../design/polite_ctrl.sv", 20, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "ins[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../design/polite_ctrl.sv", 20, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "ins[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../design/polite_ctrl.sv", 20, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "ins[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../design/polite_ctrl.sv", 20, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "ins[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../design/polite_ctrl.sv", 20, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "ins[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "../design/polite_ctrl.sv", 20, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "ins[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "../design/polite_ctrl.sv", 20, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "ins[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "../design/polite_ctrl.sv", 20, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "ins[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "../design/polite_ctrl.sv", 21, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "dump_busy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "../design/polite_ctrl.sv", 22, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "fz_open", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "../design/polite_ctrl.sv", 23, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "pe_ovf_any", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "../design/polite_ctrl.sv", 25, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "phase", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "../design/polite_ctrl.sv", 26, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "run_busy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "../design/polite_ctrl.sv", 27, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "inbuf[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "../design/polite_ctrl.sv", 27, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "inbuf[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../design/polite_ctrl.sv", 27, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "inbuf[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../design/polite_ctrl.sv", 27, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "inbuf[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../design/polite_ctrl.sv", 27, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "inbuf[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../design/polite_ctrl.sv", 27, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "inbuf[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../design/polite_ctrl.sv", 27, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "inbuf[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "../design/polite_ctrl.sv", 27, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "inbuf[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../design/polite_ctrl.sv", 28, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "illegal", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../design/polite_ctrl.sv", 29, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "ovf", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../design/polite_ctrl.sv", 30, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "illegal_d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../design/polite_ctrl.sv", 31, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "ovf_d", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../design/polite_ctrl.sv", 33, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "run_now", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../design/polite_ctrl.sv", 34, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "acc_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../design/polite_ctrl.sv", 35, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "clr_psum", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../design/polite_ctrl.sv", 36, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "clr_outbuf", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "../design/polite_ctrl.sv", 37, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "dump_load", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "../design/polite_ctrl.sv", 38, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "dump_abort", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../design/polite_ctrl.sv", 39, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "dbg_start", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../design/polite_ctrl.sv", 40, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "dbg_op[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "../design/polite_ctrl.sv", 40, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "dbg_op[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "../design/polite_ctrl.sv", 40, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "dbg_op[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "../design/polite_ctrl.sv", 40, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "dbg_op[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../design/polite_ctrl.sv", 41, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "dbg_pe[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../design/polite_ctrl.sv", 41, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "dbg_pe[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../design/polite_ctrl.sv", 42, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "status[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../design/polite_ctrl.sv", 42, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "status[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../design/polite_ctrl.sv", 42, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "status[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../design/polite_ctrl.sv", 42, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "status[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../design/polite_ctrl.sv", 42, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "status[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../design/polite_ctrl.sv", 42, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "status[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "../design/polite_ctrl.sv", 42, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "status[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "../design/polite_ctrl.sv", 42, 23, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "status[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../design/polite_ctrl.sv", 48, 16, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "op[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "../design/polite_ctrl.sv", 48, 16, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "op[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "../design/polite_ctrl.sv", 48, 16, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "op[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "../design/polite_ctrl.sv", 48, 16, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "op[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../design/polite_ctrl.sv", 49, 16, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../design/polite_ctrl.sv", 49, 16, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../design/polite_ctrl.sv", 49, 16, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../design/polite_ctrl.sv", 49, 16, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "../design/polite_ctrl.sv", 51, 10, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "is_load", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "../design/polite_ctrl.sv", 52, 10, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "is_run", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "../design/polite_ctrl.sv", 53, 10, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "is_dload", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "../design/polite_ctrl.sv", 54, 10, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "is_clear", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "../design/polite_ctrl.sv", 55, 10, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "is_rsvd", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "../design/polite_ctrl.sv", 56, 10, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "is_dbg", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "../design/polite_ctrl.sv", 57, 10, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "bad_bank", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "../design/polite_ctrl.sv", 58, 10, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "dbg_req", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "../design/polite_ctrl.sv", 62, 10, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "no_ob", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "../design/polite_ctrl.sv", 63, 10, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "is_dabrt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "../design/polite_ctrl.sv", 66, 10, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "clr_coll", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "../design/polite_ctrl.sv", 67, 10, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "clr_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "../design/polite_ctrl.sv", 68, 10, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "clr_flg", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "../design/polite_ctrl.sv", 80, 10, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "ill_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "../design/polite_ctrl.sv", 89, 10, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "acc_ovf", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "../design/polite_ctrl.sv", 101, 16, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "inbuf_d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "../design/polite_ctrl.sv", 101, 16, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "inbuf_d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "../design/polite_ctrl.sv", 101, 16, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "inbuf_d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "../design/polite_ctrl.sv", 101, 16, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "inbuf_d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "../design/polite_ctrl.sv", 101, 16, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "inbuf_d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "../design/polite_ctrl.sv", 101, 16, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "inbuf_d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "../design/polite_ctrl.sv", 101, 16, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "inbuf_d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "../design/polite_ctrl.sv", 101, 16, ".tb_polite_ctrl.dut", "v_toggle/polite_ctrl__Hz1", "inbuf_d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "../design/polite_ctrl.sv", 110, 18, ".tb_polite_ctrl.dut", "v_branch/polite_ctrl__Hz1", "if", "110-115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "../design/polite_ctrl.sv", 110, 19, ".tb_polite_ctrl.dut", "v_branch/polite_ctrl__Hz1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "../design/polite_ctrl.sv", 104, 9, ".tb_polite_ctrl.dut", "v_line/polite_ctrl__Hz1", "elsif", "104-109");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "../design/polite_ctrl.sv", 103, 5, ".tb_polite_ctrl.dut", "v_line/polite_ctrl__Hz1", "block", "103");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "polite_ctrl_tb.sv", 401, 37, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "polite_ctrl_tb.sv", 401, 42, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "polite_ctrl_tb.sv", 401, 49, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "polite_ctrl_tb.sv", 401, 53, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "fz_open", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "polite_ctrl_tb.sv", 401, 62, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "dump_busy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "polite_ctrl_tb.sv", 401, 73, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "pe_ovf_any", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "polite_ctrl_tb.sv", 402, 37, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "phase", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "polite_ctrl_tb.sv", 402, 44, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "run_busy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "polite_ctrl_tb.sv", 402, 54, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "illegal", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "polite_ctrl_tb.sv", 402, 63, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "ovf", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "polite_ctrl_tb.sv", 402, 68, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "run_now", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "polite_ctrl_tb.sv", 402, 77, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "acc_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "polite_ctrl_tb.sv", 403, 37, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "clr_psum", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "polite_ctrl_tb.sv", 403, 47, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "clr_outbuf", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "polite_ctrl_tb.sv", 403, 59, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "dump_load", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "polite_ctrl_tb.sv", 403, 70, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "dump_abort", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "polite_ctrl_tb.sv", 403, 82, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "dbg_start", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "polite_ctrl_tb.sv", 404, 43, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "inbuf[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "polite_ctrl_tb.sv", 404, 43, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "inbuf[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "polite_ctrl_tb.sv", 404, 43, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "inbuf[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "polite_ctrl_tb.sv", 404, 43, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "inbuf[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "polite_ctrl_tb.sv", 404, 43, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "inbuf[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "polite_ctrl_tb.sv", 404, 43, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "inbuf[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "polite_ctrl_tb.sv", 404, 43, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "inbuf[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "polite_ctrl_tb.sv", 404, 43, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "inbuf[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "polite_ctrl_tb.sv", 404, 50, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "status[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "polite_ctrl_tb.sv", 404, 50, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "status[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "polite_ctrl_tb.sv", 404, 50, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "status[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "polite_ctrl_tb.sv", 404, 50, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "status[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "polite_ctrl_tb.sv", 404, 50, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "status[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "polite_ctrl_tb.sv", 404, 50, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "status[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "polite_ctrl_tb.sv", 404, 50, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "status[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "polite_ctrl_tb.sv", 404, 50, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "status[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "polite_ctrl_tb.sv", 404, 70, ".tb_polite_ctrl.dut.u_sva", "v_toggle/polite_ctrl_sva", "clr_flg", "");
}

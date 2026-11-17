// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_polite_ctrl__Syms.h"


void Vtb_polite_ctrl___024root__trace_chg_0_sub_0(Vtb_polite_ctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_polite_ctrl___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root__trace_chg_0\n"); );
    // Init
    Vtb_polite_ctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_polite_ctrl___024root*>(voidSelf);
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_polite_ctrl___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_polite_ctrl___024root__trace_chg_0_sub_0(Vtb_polite_ctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [2U]) | vlSelfRef.__Vm_traceActivity
                      [3U]) | vlSelfRef.__Vm_traceActivity
                     [4U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_polite_ctrl__DOT__en));
        bufp->chgCData(oldp+1,(vlSelfRef.tb_polite_ctrl__DOT__d),8);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_polite_ctrl__DOT__ins),8);
        bufp->chgBit(oldp+3,(vlSelfRef.tb_polite_ctrl__DOT__dump_busy));
        bufp->chgBit(oldp+4,(vlSelfRef.tb_polite_ctrl__DOT__fz_open));
        bufp->chgBit(oldp+5,(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
        bufp->chgCData(oldp+6,((0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                                        >> 4U))),4);
        bufp->chgCData(oldp+7,((3U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins))),2);
        bufp->chgBit(oldp+8,(vlSelfRef.tb_polite_ctrl__DOT__m_phase));
        bufp->chgBit(oldp+9,(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy));
        bufp->chgCData(oldp+10,(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf),8);
        bufp->chgBit(oldp+11,(vlSelfRef.tb_polite_ctrl__DOT__m_illegal));
        bufp->chgBit(oldp+12,(vlSelfRef.tb_polite_ctrl__DOT__m_ovf));
        bufp->chgBit(oldp+13,((1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+14,((1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+15,((1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+16,((1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+17,((1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+18,((1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                     >> 0x19U))));
        bufp->chgBit(oldp+19,((1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                     >> 0x18U))));
        bufp->chgBit(oldp+20,((1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                     >> 0x17U))));
        bufp->chgBit(oldp+21,((1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                     >> 0x16U))));
        bufp->chgCData(oldp+22,((0xfU & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                         >> 0x12U))),4);
        bufp->chgCData(oldp+23,((3U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                       >> 0x10U))),2);
        bufp->chgCData(oldp+24,((0xffU & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                          >> 8U))),8);
        bufp->chgCData(oldp+25,((0xffU & vlSelfRef.tb_polite_ctrl__DOT__exp_now)),8);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_polite_ctrl__DOT__err_count),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_polite_ctrl__DOT__chk_count),32);
        bufp->chgCData(oldp+28,((0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins))),4);
        bufp->chgBit(oldp+29,((1U == (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                                              >> 4U)))));
        bufp->chgBit(oldp+30,((2U == (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                                              >> 4U)))));
        bufp->chgBit(oldp+31,((3U == (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                                              >> 4U)))));
        bufp->chgBit(oldp+32,((5U == (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                                              >> 4U)))));
        bufp->chgBit(oldp+33,((0xbU < (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                                               >> 4U)))));
        bufp->chgBit(oldp+34,((4U == (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                                              >> 4U)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U] 
                     | vlSelfRef.__Vm_traceActivity
                     [7U]))) {
        bufp->chgBit(oldp+35,(vlSelfRef.tb_polite_ctrl__DOT__run_now));
        bufp->chgBit(oldp+36,(vlSelfRef.tb_polite_ctrl__DOT__dump_load));
        bufp->chgBit(oldp+37,(vlSelfRef.tb_polite_ctrl__DOT__dump_abort));
        bufp->chgBit(oldp+38,(vlSelfRef.tb_polite_ctrl__DOT__dbg_start));
        bufp->chgBit(oldp+39,(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__is_dbg));
        bufp->chgBit(oldp+40,(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__bad_bank));
        bufp->chgBit(oldp+41,(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__dbg_req));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U] 
                     | vlSelfRef.__Vm_traceActivity
                     [8U]))) {
        bufp->chgBit(oldp+42,(vlSelfRef.tb_polite_ctrl__DOT__illegal_d));
        bufp->chgBit(oldp+43,(vlSelfRef.tb_polite_ctrl__DOT__ovf_d));
        bufp->chgBit(oldp+44,(vlSelfRef.tb_polite_ctrl__DOT__acc_en));
        bufp->chgBit(oldp+45,(vlSelfRef.tb_polite_ctrl__DOT__clr_psum));
        bufp->chgBit(oldp+46,(vlSelfRef.tb_polite_ctrl__DOT__clr_outbuf));
        bufp->chgCData(oldp+47,(vlSelfRef.tb_polite_ctrl__DOT__status),8);
        bufp->chgCData(oldp+48,(vlSelfRef.tb_polite_ctrl__DOT__cmd_strobes),7);
        bufp->chgBit(oldp+49,(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_coll));
        bufp->chgBit(oldp+50,(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_ok));
        bufp->chgBit(oldp+51,(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_flg));
        bufp->chgBit(oldp+52,(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__ill_set));
        bufp->chgBit(oldp+53,(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__acc_ovf));
        bufp->chgCData(oldp+54,(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__inbuf_d),8);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+55,(vlSelfRef.tb_polite_ctrl__DOT__phase));
        bufp->chgBit(oldp+56,(vlSelfRef.tb_polite_ctrl__DOT__run_busy));
        bufp->chgCData(oldp+57,(vlSelfRef.tb_polite_ctrl__DOT__inbuf),8);
        bufp->chgBit(oldp+58,(vlSelfRef.tb_polite_ctrl__DOT__illegal));
        bufp->chgBit(oldp+59,(vlSelfRef.tb_polite_ctrl__DOT__ovf));
    }
    bufp->chgBit(oldp+60,(vlSelfRef.tb_polite_ctrl__DOT__clk));
    bufp->chgBit(oldp+61,(vlSelfRef.tb_polite_ctrl__DOT__rst_n));
    bufp->chgIData(oldp+62,(vlSelfRef.tb_polite_ctrl__DOT__test_step),32);
}

void Vtb_polite_ctrl___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root__trace_cleanup\n"); );
    // Init
    Vtb_polite_ctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_polite_ctrl___024root*>(voidSelf);
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
}

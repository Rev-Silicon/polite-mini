// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_polite_dbg__Syms.h"


void Vtb_polite_dbg___024root__trace_chg_0_sub_0(Vtb_polite_dbg___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_polite_dbg___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root__trace_chg_0\n"); );
    // Init
    Vtb_polite_dbg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_polite_dbg___024root*>(voidSelf);
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_polite_dbg___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_polite_dbg___024root__trace_chg_0_sub_0(Vtb_polite_dbg___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U]) | vlSelfRef.__Vm_traceActivity
                     [3U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_polite_dbg__DOT__en));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_polite_dbg__DOT__start));
        bufp->chgCData(oldp+2,(vlSelfRef.tb_polite_dbg__DOT__op),4);
        bufp->chgCData(oldp+3,(vlSelfRef.tb_polite_dbg__DOT__pe),2);
        bufp->chgBit(oldp+4,(vlSelfRef.tb_polite_dbg__DOT__run_busy));
        bufp->chgCData(oldp+5,(vlSelfRef.tb_polite_dbg__DOT__status),8);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_polite_dbg__DOT__inbuf),8);
        bufp->chgCData(oldp+7,(vlSelfRef.tb_polite_dbg__DOT__d),8);
        bufp->chgWData(oldp+8,(vlSelfRef.tb_polite_dbg__DOT__psum_all),96);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_polite_dbg__DOT__mul_all),32);
        bufp->chgWData(oldp+12,(vlSelfRef.tb_polite_dbg__DOT__sum_all),96);
        bufp->chgCData(oldp+15,(vlSelfRef.tb_polite_dbg__DOT__m_left),4);
        bufp->chgCData(oldp+16,(vlSelfRef.tb_polite_dbg__DOT__m_k),3);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_polite_dbg__DOT__m_val),24);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_polite_dbg__DOT__err_count),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_polite_dbg__DOT__chk_count),32);
        bufp->chgBit(oldp+20,(vlSelfRef.tb_polite_dbg__DOT__sb_active));
        bufp->chgBit(oldp+21,(vlSelfRef.tb_polite_dbg__DOT__prev_open));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U] 
                     | vlSelfRef.__Vm_traceActivity
                     [3U]))) {
        bufp->chgBit(oldp+22,(vlSelfRef.tb_polite_dbg__DOT__s_en));
        bufp->chgBit(oldp+23,(vlSelfRef.tb_polite_dbg__DOT__s_start));
        bufp->chgBit(oldp+24,(vlSelfRef.tb_polite_dbg__DOT__s_tick));
        bufp->chgCData(oldp+25,(vlSelfRef.tb_polite_dbg__DOT__s_len),4);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_polite_dbg__DOT__s_val),24);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_polite_dbg__DOT__sb_exp),24);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_polite_dbg__DOT__sb_got),24);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_polite_dbg__DOT__sb_need),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_polite_dbg__DOT__sb_cnt),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_polite_dbg__DOT__n_reads),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                                [0U][0U]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                                [0U][1U]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                                [1U][0U]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                                [1U][1U]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                                [2U][0U]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                                [2U][1U]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                                [3U][0U]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                                [3U][1U]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                                [4U][0U]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                                [4U][1U]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                                [5U][0U]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                                [5U][1U]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.tb_polite_dbg__DOT__cov_add_rb[0]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.tb_polite_dbg__DOT__cov_add_rb[1]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.tb_polite_dbg__DOT__cov_pe[0]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.tb_polite_dbg__DOT__cov_pe[1]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.tb_polite_dbg__DOT__cov_pe[2]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.tb_polite_dbg__DOT__cov_pe[3]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.tb_polite_dbg__DOT__cov_hold_in_freeze),32);
        bufp->chgIData(oldp+51,(vlSelfRef.tb_polite_dbg__DOT__cov_b2b_min),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U] 
                     | vlSelfRef.__Vm_traceActivity
                     [6U]))) {
        bufp->chgIData(oldp+52,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps),24);
        bufp->chgCData(oldp+53,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu),8);
        bufp->chgIData(oldp+54,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm),24);
        bufp->chgIData(oldp+55,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v),24);
        bufp->chgBit(oldp+56,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__wide));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U] 
                     | vlSelfRef.__Vm_traceActivity
                     [7U]))) {
        bufp->chgBit(oldp+57,(vlSelfRef.tb_polite_dbg__DOT__ofz));
        bufp->chgBit(oldp+58,(vlSelfRef.tb_polite_dbg__DOT__dbg_tick));
        bufp->chgCData(oldp+59,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn),4);
        bufp->chgCData(oldp+60,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e),4);
        bufp->chgCData(oldp+61,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e),3);
        bufp->chgIData(oldp+62,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e),24);
        bufp->chgCData(oldp+63,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk_raw),3);
        bufp->chgCData(oldp+64,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk),3);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+65,(vlSelfRef.tb_polite_dbg__DOT__phase));
        bufp->chgBit(oldp+66,((0U != (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left))));
        bufp->chgCData(oldp+67,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left),4);
        bufp->chgCData(oldp+68,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k),3);
        bufp->chgIData(oldp+69,(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val),24);
    }
    bufp->chgBit(oldp+70,(vlSelfRef.tb_polite_dbg__DOT__clk));
    bufp->chgBit(oldp+71,(vlSelfRef.tb_polite_dbg__DOT__rst_n));
    bufp->chgIData(oldp+72,(vlSelfRef.tb_polite_dbg__DOT__unnamedblk11__DOT__n_rand),32);
}

void Vtb_polite_dbg___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root__trace_cleanup\n"); );
    // Init
    Vtb_polite_dbg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_polite_dbg___024root*>(voidSelf);
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
}

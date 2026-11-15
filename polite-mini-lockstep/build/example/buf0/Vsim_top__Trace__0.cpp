// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim_top__Syms.h"


void Vsim_top___024root__trace_chg_0_sub_0(Vsim_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsim_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_chg_0\n"); );
    // Init
    Vsim_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim_top___024root*>(voidSelf);
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsim_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsim_top___024root__trace_chg_0_sub_0(Vsim_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->sim_top__DOT__dut__DOT__ena_q));
        bufp->chgCData(oldp+1,(vlSelf->sim_top__DOT__dut__DOT__in_d_q),8);
        bufp->chgCData(oldp+2,(vlSelf->sim_top__DOT__dut__DOT__in_i_q),8);
        bufp->chgCData(oldp+3,(vlSelf->sim_top__DOT__dut__DOT__uo_q),8);
        bufp->chgCData(oldp+4,(vlSelf->sim_top__DOT__dut__DOT__uo_pad),8);
        bufp->chgBit(oldp+5,(vlSelf->sim_top__DOT__dut__DOT__otick_q));
        bufp->chgCData(oldp+6,(vlSelf->sim_top__DOT__dut__DOT__core_uo),8);
        bufp->chgBit(oldp+7,(vlSelf->sim_top__DOT__dut__DOT__phase));
        bufp->chgBit(oldp+8,(vlSelf->sim_top__DOT__dut__DOT__run_busy));
        bufp->chgBit(oldp+9,(vlSelf->sim_top__DOT__dut__DOT__illegal));
        bufp->chgBit(oldp+10,(vlSelf->sim_top__DOT__dut__DOT__ovf));
        bufp->chgBit(oldp+11,(vlSelf->sim_top__DOT__dut__DOT__illegal_d));
        bufp->chgBit(oldp+12,(vlSelf->sim_top__DOT__dut__DOT__ovf_d));
        bufp->chgBit(oldp+13,(vlSelf->sim_top__DOT__dut__DOT__run_now));
        bufp->chgBit(oldp+14,(vlSelf->sim_top__DOT__dut__DOT__clr_psum));
        bufp->chgBit(oldp+15,(vlSelf->sim_top__DOT__dut__DOT__clr_outbuf));
        bufp->chgBit(oldp+16,(vlSelf->sim_top__DOT__dut__DOT__dump_load));
        bufp->chgBit(oldp+17,(vlSelf->sim_top__DOT__dut__DOT__dump_abort));
        bufp->chgBit(oldp+18,(vlSelf->sim_top__DOT__dut__DOT__dbg_start));
        bufp->chgBit(oldp+19,((0U != (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining))));
        bufp->chgBit(oldp+20,(vlSelf->sim_top__DOT__dut__DOT__ofz));
        bufp->chgBit(oldp+21,(vlSelf->sim_top__DOT__dut__DOT__dbg_tick));
        bufp->chgCData(oldp+22,((0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+23,(vlSelf->sim_top__DOT__dut__DOT__dbg_nib),4);
        bufp->chgCData(oldp+24,((3U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))),2);
        bufp->chgCData(oldp+25,(vlSelf->sim_top__DOT__dut__DOT__inbuf),8);
        bufp->chgCData(oldp+26,(vlSelf->sim_top__DOT__dut__DOT__status),8);
        bufp->chgCData(oldp+27,(vlSelf->sim_top__DOT__dut__DOT__pe_ovf),4);
        bufp->chgWData(oldp+28,(vlSelf->sim_top__DOT__dut__DOT__psum_all),96);
        bufp->chgWData(oldp+31,(vlSelf->sim_top__DOT__dut__DOT__sum_all),96);
        bufp->chgIData(oldp+34,(vlSelf->sim_top__DOT__dut__DOT__mul_all),32);
        bufp->chgWData(oldp+35,(vlSelf->sim_top__DOT__dut__DOT__cap),96);
        bufp->chgIData(oldp+38,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.psum),24);
        bufp->chgCData(oldp+39,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.mul),8);
        bufp->chgIData(oldp+40,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.psum),24);
        bufp->chgCData(oldp+41,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.mul),8);
        bufp->chgIData(oldp+42,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.psum),24);
        bufp->chgCData(oldp+43,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.mul),8);
        bufp->chgIData(oldp+44,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.psum),24);
        bufp->chgCData(oldp+45,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.mul),8);
        bufp->chgBit(oldp+46,((0U != (IData)(vlSelf->sim_top__DOT__dut__DOT__pe_ovf))));
        bufp->chgBit(oldp+47,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__debug_read));
        bufp->chgBit(oldp+48,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__bad));
        bufp->chgBit(oldp+49,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clear_ok));
        bufp->chgBit(oldp+50,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clear_flags));
        bufp->chgIData(oldp+51,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved),24);
        bufp->chgCData(oldp+52,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining),4);
        bufp->chgCData(oldp+53,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__index),3);
        bufp->chgIData(oldp+54,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture),24);
        bufp->chgCData(oldp+55,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__duration),4);
        bufp->chgCData(oldp+56,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__previous_index),3);
        bufp->chgCData(oldp+57,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__effective_index),3);
        bufp->chgCData(oldp+58,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__limited_index),3);
        bufp->chgIData(oldp+59,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now),24);
        bufp->chgCData(oldp+60,((0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+61,((0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q) 
                                         >> 4U))),4);
        bufp->chgIData(oldp+62,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.sum),24);
        bufp->chgBit(oldp+63,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.ovf));
        bufp->chgCData(oldp+64,((0xfU & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q))),4);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.sum),24);
        bufp->chgBit(oldp+66,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.ovf));
        bufp->chgCData(oldp+67,((0xfU & (IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf))),4);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.sum),24);
        bufp->chgBit(oldp+69,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.ovf));
        bufp->chgIData(oldp+70,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.sum),24);
        bufp->chgBit(oldp+71,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.ovf));
    }
    bufp->chgBit(oldp+72,(vlSelf->clk));
    bufp->chgBit(oldp+73,(vlSelf->rst_n));
    bufp->chgBit(oldp+74,(vlSelf->ena));
    bufp->chgCData(oldp+75,(vlSelf->ui_in),8);
    bufp->chgCData(oldp+76,(vlSelf->uio_in),8);
    bufp->chgCData(oldp+77,(vlSelf->uo_out),8);
    bufp->chgCData(oldp+78,(vlSelf->uio_out),8);
    bufp->chgCData(oldp+79,(vlSelf->uio_oe),8);
    bufp->chgBit(oldp+80,(vlSelf->ena_q));
    bufp->chgBit(oldp+81,(vlSelf->phase));
    bufp->chgBit(oldp+82,(vlSelf->otick_q));
    bufp->chgBit(oldp+83,(vlSelf->run_busy));
    bufp->chgBit(oldp+84,(vlSelf->illegal));
    bufp->chgBit(oldp+85,(vlSelf->ovf));
    bufp->chgBit(oldp+86,(vlSelf->dump_busy));
    bufp->chgBit(oldp+87,(vlSelf->fz_open));
    bufp->chgCData(oldp+88,(vlSelf->in_i_q),8);
    bufp->chgCData(oldp+89,(vlSelf->in_d_q),8);
    bufp->chgCData(oldp+90,(vlSelf->uo_q),8);
    bufp->chgCData(oldp+91,(vlSelf->core_uo),8);
    bufp->chgCData(oldp+92,(vlSelf->inbuf),8);
    bufp->chgIData(oldp+93,(vlSelf->psum[0]),24);
    bufp->chgIData(oldp+94,(vlSelf->psum[1]),24);
    bufp->chgIData(oldp+95,(vlSelf->psum[2]),24);
    bufp->chgIData(oldp+96,(vlSelf->psum[3]),24);
    bufp->chgCData(oldp+97,(vlSelf->product[0]),8);
    bufp->chgCData(oldp+98,(vlSelf->product[1]),8);
    bufp->chgCData(oldp+99,(vlSelf->product[2]),8);
    bufp->chgCData(oldp+100,(vlSelf->product[3]),8);
}

void Vsim_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_cleanup\n"); );
    // Init
    Vsim_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim_top___024root*>(voidSelf);
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

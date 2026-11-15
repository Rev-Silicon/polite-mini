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
        bufp->chgBit(oldp+19,(vlSelf->sim_top__DOT__dut__DOT__dump_busy));
        bufp->chgBit(oldp+20,((0U != (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining))));
        bufp->chgBit(oldp+21,(vlSelf->sim_top__DOT__dut__DOT__ofz));
        bufp->chgBit(oldp+22,(vlSelf->sim_top__DOT__dut__DOT__dbg_tick));
        bufp->chgCData(oldp+23,((0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+24,(vlSelf->sim_top__DOT__dut__DOT__dbg_nib),4);
        bufp->chgCData(oldp+25,(vlSelf->sim_top__DOT__dut__DOT__dump_nib),4);
        bufp->chgCData(oldp+26,((3U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))),2);
        bufp->chgCData(oldp+27,(vlSelf->sim_top__DOT__dut__DOT__inbuf),8);
        bufp->chgCData(oldp+28,(vlSelf->sim_top__DOT__dut__DOT__status),8);
        bufp->chgCData(oldp+29,(vlSelf->sim_top__DOT__dut__DOT__pe_ovf),4);
        bufp->chgWData(oldp+30,(vlSelf->sim_top__DOT__dut__DOT__psum_all),96);
        bufp->chgWData(oldp+33,(vlSelf->sim_top__DOT__dut__DOT__sum_all),96);
        bufp->chgIData(oldp+36,(vlSelf->sim_top__DOT__dut__DOT__mul_all),32);
        bufp->chgWData(oldp+37,(vlSelf->sim_top__DOT__dut__DOT__cap),96);
        bufp->chgWData(oldp+40,(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__saved),96);
        bufp->chgCData(oldp+43,(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx),5);
        bufp->chgIData(oldp+44,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.psum),24);
        bufp->chgCData(oldp+45,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.mul),8);
        bufp->chgIData(oldp+46,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.psum),24);
        bufp->chgCData(oldp+47,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.mul),8);
        bufp->chgIData(oldp+48,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.psum),24);
        bufp->chgCData(oldp+49,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.mul),8);
        bufp->chgIData(oldp+50,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.psum),24);
        bufp->chgCData(oldp+51,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.mul),8);
        bufp->chgBit(oldp+52,((0U != (IData)(vlSelf->sim_top__DOT__dut__DOT__pe_ovf))));
        bufp->chgBit(oldp+53,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__debug_read));
        bufp->chgBit(oldp+54,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__bad));
        bufp->chgBit(oldp+55,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clear_ok));
        bufp->chgBit(oldp+56,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clear_flags));
        bufp->chgIData(oldp+57,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__saved),24);
        bufp->chgCData(oldp+58,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__remaining),4);
        bufp->chgCData(oldp+59,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__index),3);
        bufp->chgIData(oldp+60,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__capture),24);
        bufp->chgCData(oldp+61,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__duration),4);
        bufp->chgCData(oldp+62,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__previous_index),3);
        bufp->chgCData(oldp+63,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__effective_index),3);
        bufp->chgCData(oldp+64,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__limited_index),3);
        bufp->chgIData(oldp+65,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__value_now),24);
        bufp->chgCData(oldp+66,((0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+67,((0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q) 
                                         >> 4U))),4);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.sum),24);
        bufp->chgBit(oldp+69,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.ovf));
        bufp->chgCData(oldp+70,((0xfU & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q))),4);
        bufp->chgIData(oldp+71,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.sum),24);
        bufp->chgBit(oldp+72,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.ovf));
        bufp->chgCData(oldp+73,((0xfU & (IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf))),4);
        bufp->chgIData(oldp+74,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.sum),24);
        bufp->chgBit(oldp+75,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.ovf));
        bufp->chgIData(oldp+76,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.sum),24);
        bufp->chgBit(oldp+77,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.ovf));
    }
    bufp->chgBit(oldp+78,(vlSelf->clk));
    bufp->chgBit(oldp+79,(vlSelf->rst_n));
    bufp->chgBit(oldp+80,(vlSelf->ena));
    bufp->chgCData(oldp+81,(vlSelf->ui_in),8);
    bufp->chgCData(oldp+82,(vlSelf->uio_in),8);
    bufp->chgCData(oldp+83,(vlSelf->uo_out),8);
    bufp->chgCData(oldp+84,(vlSelf->uio_out),8);
    bufp->chgCData(oldp+85,(vlSelf->uio_oe),8);
    bufp->chgBit(oldp+86,(vlSelf->ena_q));
    bufp->chgBit(oldp+87,(vlSelf->phase));
    bufp->chgBit(oldp+88,(vlSelf->otick_q));
    bufp->chgBit(oldp+89,(vlSelf->run_busy));
    bufp->chgBit(oldp+90,(vlSelf->illegal));
    bufp->chgBit(oldp+91,(vlSelf->ovf));
    bufp->chgBit(oldp+92,(vlSelf->dump_busy));
    bufp->chgBit(oldp+93,(vlSelf->fz_open));
    bufp->chgCData(oldp+94,(vlSelf->in_i_q),8);
    bufp->chgCData(oldp+95,(vlSelf->in_d_q),8);
    bufp->chgCData(oldp+96,(vlSelf->uo_q),8);
    bufp->chgCData(oldp+97,(vlSelf->core_uo),8);
    bufp->chgCData(oldp+98,(vlSelf->inbuf),8);
    bufp->chgIData(oldp+99,(vlSelf->psum[0]),24);
    bufp->chgIData(oldp+100,(vlSelf->psum[1]),24);
    bufp->chgIData(oldp+101,(vlSelf->psum[2]),24);
    bufp->chgIData(oldp+102,(vlSelf->psum[3]),24);
    bufp->chgCData(oldp+103,(vlSelf->product[0]),8);
    bufp->chgCData(oldp+104,(vlSelf->product[1]),8);
    bufp->chgCData(oldp+105,(vlSelf->product[2]),8);
    bufp->chgCData(oldp+106,(vlSelf->product[3]),8);
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

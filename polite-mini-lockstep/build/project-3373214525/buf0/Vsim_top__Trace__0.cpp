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
        bufp->chgBit(oldp+16,(vlSelf->sim_top__DOT__dut__DOT__dbg_start));
        bufp->chgBit(oldp+17,((0U != (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__fz_left))));
        bufp->chgBit(oldp+18,(vlSelf->sim_top__DOT__dut__DOT__ofz));
        bufp->chgBit(oldp+19,(vlSelf->sim_top__DOT__dut__DOT__dbg_tick));
        bufp->chgCData(oldp+20,((0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+21,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__vn),4);
        bufp->chgCData(oldp+22,((3U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))),2);
        bufp->chgCData(oldp+23,(vlSelf->sim_top__DOT__dut__DOT__inbuf),8);
        bufp->chgCData(oldp+24,(vlSelf->sim_top__DOT__dut__DOT__status),8);
        bufp->chgCData(oldp+25,(vlSelf->sim_top__DOT__dut__DOT__pe_ovf),4);
        bufp->chgWData(oldp+26,(vlSelf->sim_top__DOT__dut__DOT__psum_all),96);
        bufp->chgWData(oldp+29,(vlSelf->sim_top__DOT__dut__DOT__sum_all),96);
        bufp->chgIData(oldp+32,(vlSelf->sim_top__DOT__dut__DOT__mul_all),32);
        bufp->chgWData(oldp+33,(vlSelf->sim_top__DOT__dut__DOT__cap),96);
        bufp->chgIData(oldp+36,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.psum),24);
        bufp->chgCData(oldp+37,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.mul),8);
        bufp->chgIData(oldp+38,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.psum),24);
        bufp->chgCData(oldp+39,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.mul),8);
        bufp->chgIData(oldp+40,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.psum),24);
        bufp->chgCData(oldp+41,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.mul),8);
        bufp->chgIData(oldp+42,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.psum),24);
        bufp->chgCData(oldp+43,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.mul),8);
        bufp->chgBit(oldp+44,((0U != (IData)(vlSelf->sim_top__DOT__dut__DOT__pe_ovf))));
        bufp->chgCData(oldp+45,((0xfU & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))),4);
        bufp->chgBit(oldp+46,((1U == (0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                              >> 4U)))));
        bufp->chgBit(oldp+47,((2U == (0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                              >> 4U)))));
        bufp->chgBit(oldp+48,((3U == (0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                              >> 4U)))));
        bufp->chgBit(oldp+49,((5U == (0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                              >> 4U)))));
        bufp->chgBit(oldp+50,((0xbU < (0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                               >> 4U)))));
        bufp->chgBit(oldp+51,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__is_dbg));
        bufp->chgBit(oldp+52,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__bad_bank));
        bufp->chgBit(oldp+53,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__dbg_req));
        bufp->chgBit(oldp+54,((4U == (0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                              >> 4U)))));
        bufp->chgBit(oldp+55,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clr_coll));
        bufp->chgBit(oldp+56,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clr_ok));
        bufp->chgBit(oldp+57,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clr_flg));
        bufp->chgBit(oldp+58,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__ill_set));
        bufp->chgBit(oldp+59,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__acc_ovf));
        bufp->chgCData(oldp+60,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__inbuf_d),8);
        bufp->chgCData(oldp+61,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__fz_left),4);
        bufp->chgCData(oldp+62,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__fz_k),3);
        bufp->chgIData(oldp+63,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__fz_val),24);
        bufp->chgIData(oldp+64,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__ps),24);
        bufp->chgCData(oldp+65,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__mu),8);
        bufp->chgIData(oldp+66,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__sm),24);
        bufp->chgIData(oldp+67,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__v),24);
        bufp->chgBit(oldp+68,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__wide));
        bufp->chgCData(oldp+69,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__left_e),4);
        bufp->chgCData(oldp+70,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__k_e),3);
        bufp->chgIData(oldp+71,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__val_e),24);
        bufp->chgCData(oldp+72,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__fk_raw),3);
        bufp->chgCData(oldp+73,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__fk),3);
        bufp->chgCData(oldp+74,((0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+75,((0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q) 
                                         >> 4U))),4);
        bufp->chgIData(oldp+76,((0xffffffU & vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.__PVT__full)),24);
        bufp->chgBit(oldp+77,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.ovf));
        bufp->chgCData(oldp+78,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.__PVT__prod),8);
        bufp->chgIData(oldp+79,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.__PVT__full),25);
        bufp->chgCData(oldp+80,((0xfU & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q))),4);
        bufp->chgIData(oldp+81,((0xffffffU & vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.__PVT__full)),24);
        bufp->chgBit(oldp+82,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.ovf));
        bufp->chgCData(oldp+83,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.__PVT__prod),8);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.__PVT__full),25);
        bufp->chgCData(oldp+85,((0xfU & (IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf))),4);
        bufp->chgIData(oldp+86,((0xffffffU & vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.__PVT__full)),24);
        bufp->chgBit(oldp+87,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.ovf));
        bufp->chgCData(oldp+88,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.__PVT__prod),8);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.__PVT__full),25);
        bufp->chgIData(oldp+90,((0xffffffU & vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.__PVT__full)),24);
        bufp->chgBit(oldp+91,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.ovf));
        bufp->chgCData(oldp+92,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.__PVT__prod),8);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.__PVT__full),25);
    }
    bufp->chgBit(oldp+94,(vlSelf->clk));
    bufp->chgBit(oldp+95,(vlSelf->rst_n));
    bufp->chgBit(oldp+96,(vlSelf->ena));
    bufp->chgCData(oldp+97,(vlSelf->ui_in),8);
    bufp->chgCData(oldp+98,(vlSelf->uio_in),8);
    bufp->chgCData(oldp+99,(vlSelf->uo_out),8);
    bufp->chgCData(oldp+100,(vlSelf->uio_out),8);
    bufp->chgCData(oldp+101,(vlSelf->uio_oe),8);
    bufp->chgBit(oldp+102,(vlSelf->ena_q));
    bufp->chgBit(oldp+103,(vlSelf->phase));
    bufp->chgBit(oldp+104,(vlSelf->otick_q));
    bufp->chgBit(oldp+105,(vlSelf->run_busy));
    bufp->chgBit(oldp+106,(vlSelf->illegal));
    bufp->chgBit(oldp+107,(vlSelf->ovf));
    bufp->chgBit(oldp+108,(vlSelf->dump_busy));
    bufp->chgBit(oldp+109,(vlSelf->fz_open));
    bufp->chgCData(oldp+110,(vlSelf->in_i_q),8);
    bufp->chgCData(oldp+111,(vlSelf->in_d_q),8);
    bufp->chgCData(oldp+112,(vlSelf->uo_q),8);
    bufp->chgCData(oldp+113,(vlSelf->core_uo),8);
    bufp->chgCData(oldp+114,(vlSelf->inbuf),8);
    bufp->chgIData(oldp+115,(vlSelf->psum[0]),24);
    bufp->chgIData(oldp+116,(vlSelf->psum[1]),24);
    bufp->chgIData(oldp+117,(vlSelf->psum[2]),24);
    bufp->chgIData(oldp+118,(vlSelf->psum[3]),24);
    bufp->chgCData(oldp+119,(vlSelf->product[0]),8);
    bufp->chgCData(oldp+120,(vlSelf->product[1]),8);
    bufp->chgCData(oldp+121,(vlSelf->product[2]),8);
    bufp->chgCData(oldp+122,(vlSelf->product[3]),8);
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

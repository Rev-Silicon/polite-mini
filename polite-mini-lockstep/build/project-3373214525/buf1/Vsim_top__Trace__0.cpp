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
        bufp->chgBit(oldp+17,((4U == (0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                              >> 4U)))));
        bufp->chgBit(oldp+18,(vlSelf->sim_top__DOT__dut__DOT__dbg_start));
        bufp->chgBit(oldp+19,(vlSelf->sim_top__DOT__dut__DOT__dump_busy));
        bufp->chgBit(oldp+20,((0U != (IData)(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__fz_left))));
        bufp->chgBit(oldp+21,(vlSelf->sim_top__DOT__dut__DOT__ofz));
        bufp->chgBit(oldp+22,(vlSelf->sim_top__DOT__dut__DOT__dbg_tick));
        bufp->chgCData(oldp+23,((0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+24,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__vn),4);
        bufp->chgCData(oldp+25,(vlSelf->sim_top__DOT__dut__DOT__dump_nib),4);
        bufp->chgCData(oldp+26,((3U & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))),2);
        bufp->chgCData(oldp+27,(vlSelf->sim_top__DOT__dut__DOT__inbuf),8);
        bufp->chgCData(oldp+28,(vlSelf->sim_top__DOT__dut__DOT__status),8);
        bufp->chgCData(oldp+29,(vlSelf->sim_top__DOT__dut__DOT__pe_ovf),4);
        bufp->chgWData(oldp+30,(vlSelf->sim_top__DOT__dut__DOT__psum_all),96);
        bufp->chgWData(oldp+33,(vlSelf->sim_top__DOT__dut__DOT__sum_all),96);
        bufp->chgIData(oldp+36,(vlSelf->sim_top__DOT__dut__DOT__mul_all),32);
        bufp->chgWData(oldp+37,(vlSelf->sim_top__DOT__dut__DOT__cap),96);
        bufp->chgIData(oldp+40,(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[0]),24);
        bufp->chgIData(oldp+41,(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[1]),24);
        bufp->chgIData(oldp+42,(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[2]),24);
        bufp->chgIData(oldp+43,(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[3]),24);
        bufp->chgCData(oldp+44,(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx),5);
        bufp->chgCData(oldp+45,(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__pe_sel),2);
        bufp->chgCData(oldp+46,(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub),5);
        bufp->chgIData(oldp+47,(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w),24);
        bufp->chgCData(oldp+48,(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn),4);
        bufp->chgBit(oldp+49,(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__step));
        bufp->chgIData(oldp+50,(vlSelf->sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__k),32);
        bufp->chgIData(oldp+51,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.psum),24);
        bufp->chgCData(oldp+52,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.mul),8);
        bufp->chgIData(oldp+53,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.psum),24);
        bufp->chgCData(oldp+54,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.mul),8);
        bufp->chgIData(oldp+55,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.psum),24);
        bufp->chgCData(oldp+56,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.mul),8);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.psum),24);
        bufp->chgCData(oldp+58,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.mul),8);
        bufp->chgBit(oldp+59,((0U != (IData)(vlSelf->sim_top__DOT__dut__DOT__pe_ovf))));
        bufp->chgCData(oldp+60,((0xfU & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q))),4);
        bufp->chgBit(oldp+61,((1U == (0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                              >> 4U)))));
        bufp->chgBit(oldp+62,((2U == (0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                              >> 4U)))));
        bufp->chgBit(oldp+63,((3U == (0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                              >> 4U)))));
        bufp->chgBit(oldp+64,((5U == (0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                              >> 4U)))));
        bufp->chgBit(oldp+65,((0xbU < (0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_i_q) 
                                               >> 4U)))));
        bufp->chgBit(oldp+66,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__is_dbg));
        bufp->chgBit(oldp+67,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__bad_bank));
        bufp->chgBit(oldp+68,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__dbg_req));
        bufp->chgBit(oldp+69,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clr_coll));
        bufp->chgBit(oldp+70,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clr_ok));
        bufp->chgBit(oldp+71,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__clr_flg));
        bufp->chgBit(oldp+72,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__ill_set));
        bufp->chgBit(oldp+73,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__acc_ovf));
        bufp->chgCData(oldp+74,(vlSelf->sim_top__DOT__dut__DOT__u_ctrl__DOT__inbuf_d),8);
        bufp->chgCData(oldp+75,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__fz_left),4);
        bufp->chgCData(oldp+76,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__fz_k),3);
        bufp->chgIData(oldp+77,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__fz_val),24);
        bufp->chgIData(oldp+78,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__ps),24);
        bufp->chgCData(oldp+79,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__mu),8);
        bufp->chgIData(oldp+80,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__sm),24);
        bufp->chgIData(oldp+81,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__v),24);
        bufp->chgBit(oldp+82,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__wide));
        bufp->chgCData(oldp+83,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__left_e),4);
        bufp->chgCData(oldp+84,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__k_e),3);
        bufp->chgIData(oldp+85,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__val_e),24);
        bufp->chgCData(oldp+86,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__fk_raw),3);
        bufp->chgCData(oldp+87,(vlSelf->sim_top__DOT__dut__DOT__u_dbg__DOT__fk),3);
        bufp->chgCData(oldp+88,((0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+89,((0xfU & ((IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q) 
                                         >> 4U))),4);
        bufp->chgIData(oldp+90,((0xffffffU & vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.__PVT__full)),24);
        bufp->chgBit(oldp+91,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.ovf));
        bufp->chgCData(oldp+92,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.__PVT__prod),8);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.__PVT__full),25);
        bufp->chgCData(oldp+94,((0xfU & (IData)(vlSelf->sim_top__DOT__dut__DOT__in_d_q))),4);
        bufp->chgIData(oldp+95,((0xffffffU & vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.__PVT__full)),24);
        bufp->chgBit(oldp+96,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.ovf));
        bufp->chgCData(oldp+97,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.__PVT__prod),8);
        bufp->chgIData(oldp+98,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.__PVT__full),25);
        bufp->chgCData(oldp+99,((0xfU & (IData)(vlSelf->sim_top__DOT__dut__DOT__inbuf))),4);
        bufp->chgIData(oldp+100,((0xffffffU & vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.__PVT__full)),24);
        bufp->chgBit(oldp+101,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.ovf));
        bufp->chgCData(oldp+102,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.__PVT__prod),8);
        bufp->chgIData(oldp+103,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.__PVT__full),25);
        bufp->chgIData(oldp+104,((0xffffffU & vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.__PVT__full)),24);
        bufp->chgBit(oldp+105,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.ovf));
        bufp->chgCData(oldp+106,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.__PVT__prod),8);
        bufp->chgIData(oldp+107,(vlSymsp->TOP__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.__PVT__full),25);
    }
    bufp->chgBit(oldp+108,(vlSelf->clk));
    bufp->chgBit(oldp+109,(vlSelf->rst_n));
    bufp->chgBit(oldp+110,(vlSelf->ena));
    bufp->chgCData(oldp+111,(vlSelf->ui_in),8);
    bufp->chgCData(oldp+112,(vlSelf->uio_in),8);
    bufp->chgCData(oldp+113,(vlSelf->uo_out),8);
    bufp->chgCData(oldp+114,(vlSelf->uio_out),8);
    bufp->chgCData(oldp+115,(vlSelf->uio_oe),8);
    bufp->chgBit(oldp+116,(vlSelf->ena_q));
    bufp->chgBit(oldp+117,(vlSelf->phase));
    bufp->chgBit(oldp+118,(vlSelf->otick_q));
    bufp->chgBit(oldp+119,(vlSelf->run_busy));
    bufp->chgBit(oldp+120,(vlSelf->illegal));
    bufp->chgBit(oldp+121,(vlSelf->ovf));
    bufp->chgBit(oldp+122,(vlSelf->dump_busy));
    bufp->chgBit(oldp+123,(vlSelf->fz_open));
    bufp->chgCData(oldp+124,(vlSelf->in_i_q),8);
    bufp->chgCData(oldp+125,(vlSelf->in_d_q),8);
    bufp->chgCData(oldp+126,(vlSelf->uo_q),8);
    bufp->chgCData(oldp+127,(vlSelf->core_uo),8);
    bufp->chgCData(oldp+128,(vlSelf->inbuf),8);
    bufp->chgIData(oldp+129,(vlSelf->psum[0]),24);
    bufp->chgIData(oldp+130,(vlSelf->psum[1]),24);
    bufp->chgIData(oldp+131,(vlSelf->psum[2]),24);
    bufp->chgIData(oldp+132,(vlSelf->psum[3]),24);
    bufp->chgCData(oldp+133,(vlSelf->product[0]),8);
    bufp->chgCData(oldp+134,(vlSelf->product[1]),8);
    bufp->chgCData(oldp+135,(vlSelf->product[2]),8);
    bufp->chgCData(oldp+136,(vlSelf->product[3]),8);
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

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_polite_mini__Syms.h"


void Vtb_polite_mini___024root__trace_chg_0_sub_0(Vtb_polite_mini___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_polite_mini___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root__trace_chg_0\n"); );
    // Init
    Vtb_polite_mini___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_polite_mini___024root*>(voidSelf);
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_polite_mini___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_polite_mini___024root__trace_chg_0_sub_0(Vtb_polite_mini___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_polite_mini__DOT__rst_n));
        bufp->chgIData(oldp+1,(vlSelfRef.tb_polite_mini__DOT__exp_psum[0]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_polite_mini__DOT__exp_psum[1]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_polite_mini__DOT__exp_psum[2]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_polite_mini__DOT__exp_psum[3]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_polite_mini__DOT__exp_mul[0]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_polite_mini__DOT__exp_mul[1]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_polite_mini__DOT__exp_mul[2]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_polite_mini__DOT__exp_mul[3]),32);
        bufp->chgCData(oldp+9,(vlSelfRef.tb_polite_mini__DOT__exp_buf),8);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+10,(vlSelfRef.tb_polite_mini__DOT__dump_snapshot[0]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_polite_mini__DOT__dump_snapshot[1]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_polite_mini__DOT__dump_snapshot[2]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_polite_mini__DOT__dump_snapshot[3]),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgQData(oldp+14,(vlSelfRef.tb_polite_mini__DOT__edge_n),64);
        bufp->chgBit(oldp+16,(vlSelfRef.tb_polite_mini__DOT__m_ena_q));
        bufp->chgCData(oldp+17,(vlSelfRef.tb_polite_mini__DOT__m_in_d),8);
        bufp->chgCData(oldp+18,(vlSelfRef.tb_polite_mini__DOT__m_in_i),8);
        bufp->chgCData(oldp+19,(vlSelfRef.tb_polite_mini__DOT__m_uo_q),8);
        bufp->chgCData(oldp+20,(vlSelfRef.tb_polite_mini__DOT__m_uo_pad),8);
        bufp->chgBit(oldp+21,(vlSelfRef.tb_polite_mini__DOT__m_otick));
        bufp->chgBit(oldp+22,(vlSelfRef.tb_polite_mini__DOT__m_pad_loaded));
        bufp->chgBit(oldp+23,(vlSelfRef.tb_polite_mini__DOT__m_exec_phase));
        bufp->chgBit(oldp+24,(vlSelfRef.tb_polite_mini__DOT__m_phase));
        bufp->chgBit(oldp+25,(vlSelfRef.tb_polite_mini__DOT__m_rb));
        bufp->chgCData(oldp+26,(vlSelfRef.tb_polite_mini__DOT__m_inbuf),8);
        bufp->chgBit(oldp+27,(vlSelfRef.tb_polite_mini__DOT__m_ill));
        bufp->chgBit(oldp+28,(vlSelfRef.tb_polite_mini__DOT__m_ovf));
        bufp->chgIData(oldp+29,(vlSelfRef.tb_polite_mini__DOT__m_psum[0]),24);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_polite_mini__DOT__m_psum[1]),24);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_polite_mini__DOT__m_psum[2]),24);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_polite_mini__DOT__m_psum[3]),24);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_polite_mini__DOT__m_mul[0]),8);
        bufp->chgCData(oldp+34,(vlSelfRef.tb_polite_mini__DOT__m_mul[1]),8);
        bufp->chgCData(oldp+35,(vlSelfRef.tb_polite_mini__DOT__m_mul[2]),8);
        bufp->chgCData(oldp+36,(vlSelfRef.tb_polite_mini__DOT__m_mul[3]),8);
        bufp->chgBit(oldp+37,(vlSelfRef.tb_polite_mini__DOT__m_busy));
        bufp->chgIData(oldp+38,(vlSelfRef.tb_polite_mini__DOT__m_idx),32);
        bufp->chgIData(oldp+39,(vlSelfRef.tb_polite_mini__DOT__m_word[0]),24);
        bufp->chgIData(oldp+40,(vlSelfRef.tb_polite_mini__DOT__m_word[1]),24);
        bufp->chgIData(oldp+41,(vlSelfRef.tb_polite_mini__DOT__m_word[2]),24);
        bufp->chgIData(oldp+42,(vlSelfRef.tb_polite_mini__DOT__m_word[3]),24);
        bufp->chgIData(oldp+43,(vlSelfRef.tb_polite_mini__DOT__m_fz_left),32);
        bufp->chgIData(oldp+44,(vlSelfRef.tb_polite_mini__DOT__m_fz_k),32);
        bufp->chgIData(oldp+45,(vlSelfRef.tb_polite_mini__DOT__m_fz_val),24);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+46,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_pad),8);
        bufp->chgBit(oldp+47,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ena_q));
        bufp->chgCData(oldp+48,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q),8);
        bufp->chgCData(oldp+49,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q),8);
        bufp->chgCData(oldp+50,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__uo_q),8);
        bufp->chgBit(oldp+51,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__otick_q));
        bufp->chgCData(oldp+52,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__core_uo),8);
        bufp->chgBit(oldp+53,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__phase));
        bufp->chgBit(oldp+54,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__run_busy));
        bufp->chgBit(oldp+55,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__illegal));
        bufp->chgBit(oldp+56,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ovf));
        bufp->chgBit(oldp+57,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__illegal_d));
        bufp->chgBit(oldp+58,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ovf_d));
        bufp->chgBit(oldp+59,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__run_now));
        bufp->chgBit(oldp+60,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__acc_en));
        bufp->chgBit(oldp+61,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__clr_psum));
        bufp->chgBit(oldp+62,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__clr_outbuf));
        bufp->chgBit(oldp+63,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_load));
        bufp->chgBit(oldp+64,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_abort));
        bufp->chgBit(oldp+65,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dbg_start));
        bufp->chgBit(oldp+66,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_busy));
        bufp->chgBit(oldp+67,((0U != (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left))));
        bufp->chgBit(oldp+68,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__ofz));
        bufp->chgBit(oldp+69,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dbg_tick));
        bufp->chgCData(oldp+70,((0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+71,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__vn),4);
        bufp->chgCData(oldp+72,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__dump_nib),4);
        bufp->chgCData(oldp+73,((3U & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))),2);
        bufp->chgCData(oldp+74,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf),8);
        bufp->chgCData(oldp+75,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__status),8);
        bufp->chgCData(oldp+76,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__pe_ovf),4);
        bufp->chgWData(oldp+77,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__psum_all),96);
        bufp->chgWData(oldp+80,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__sum_all),96);
        bufp->chgIData(oldp+83,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__mul_all),32);
        bufp->chgWData(oldp+84,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__cap),96);
        bufp->chgIData(oldp+87,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[0]),24);
        bufp->chgIData(oldp+88,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[1]),24);
        bufp->chgIData(oldp+89,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[2]),24);
        bufp->chgIData(oldp+90,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word[3]),24);
        bufp->chgCData(oldp+91,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx),5);
        bufp->chgCData(oldp+92,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__pe_sel),2);
        bufp->chgCData(oldp+93,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub),5);
        bufp->chgIData(oldp+94,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w),24);
        bufp->chgCData(oldp+95,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn),4);
        bufp->chgBit(oldp+96,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__step));
        bufp->chgIData(oldp+97,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__k),32);
        bufp->chgIData(oldp+98,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.psum),24);
        bufp->chgCData(oldp+99,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.mul),8);
        bufp->chgIData(oldp+100,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.psum),24);
        bufp->chgCData(oldp+101,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.mul),8);
        bufp->chgIData(oldp+102,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.psum),24);
        bufp->chgCData(oldp+103,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.mul),8);
        bufp->chgIData(oldp+104,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.psum),24);
        bufp->chgCData(oldp+105,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.mul),8);
        bufp->chgBit(oldp+106,((0U != (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__pe_ovf))));
        bufp->chgCData(oldp+107,((0xfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q))),4);
        bufp->chgBit(oldp+108,((1U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                                               >> 4U)))));
        bufp->chgBit(oldp+109,((2U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                                               >> 4U)))));
        bufp->chgBit(oldp+110,((3U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                                               >> 4U)))));
        bufp->chgBit(oldp+111,((5U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                                               >> 4U)))));
        bufp->chgBit(oldp+112,((0xbU < (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                                                >> 4U)))));
        bufp->chgBit(oldp+113,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__is_dbg));
        bufp->chgBit(oldp+114,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__bad_bank));
        bufp->chgBit(oldp+115,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__dbg_req));
        bufp->chgBit(oldp+116,((4U == (0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_i_q) 
                                               >> 4U)))));
        bufp->chgBit(oldp+117,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_coll));
        bufp->chgBit(oldp+118,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_ok));
        bufp->chgBit(oldp+119,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_flg));
        bufp->chgBit(oldp+120,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__ill_set));
        bufp->chgBit(oldp+121,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__acc_ovf));
        bufp->chgCData(oldp+122,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d),8);
        bufp->chgCData(oldp+123,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left),4);
        bufp->chgCData(oldp+124,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_k),3);
        bufp->chgIData(oldp+125,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val),24);
        bufp->chgIData(oldp+126,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps),24);
        bufp->chgCData(oldp+127,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu),8);
        bufp->chgIData(oldp+128,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm),24);
        bufp->chgIData(oldp+129,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v),24);
        bufp->chgBit(oldp+130,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__wide));
        bufp->chgCData(oldp+131,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__left_e),4);
        bufp->chgCData(oldp+132,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__k_e),3);
        bufp->chgIData(oldp+133,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e),24);
        bufp->chgCData(oldp+134,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk_raw),3);
        bufp->chgCData(oldp+135,(vlSelfRef.tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk),3);
        bufp->chgCData(oldp+136,((0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+137,((0xfU & ((IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q) 
                                          >> 4U))),4);
        bufp->chgIData(oldp+138,((0xffffffU & vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.__PVT__full)),24);
        bufp->chgBit(oldp+139,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.ovf));
        bufp->chgCData(oldp+140,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.__PVT__prod),8);
        bufp->chgIData(oldp+141,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe.__PVT__full),25);
        bufp->chgCData(oldp+142,((0xfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__in_d_q))),4);
        bufp->chgIData(oldp+143,((0xffffffU & vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.__PVT__full)),24);
        bufp->chgBit(oldp+144,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.ovf));
        bufp->chgCData(oldp+145,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.__PVT__prod),8);
        bufp->chgIData(oldp+146,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe.__PVT__full),25);
        bufp->chgCData(oldp+147,((0xfU & (IData)(vlSelfRef.tb_polite_mini__DOT__dut__DOT__inbuf))),4);
        bufp->chgIData(oldp+148,((0xffffffU & vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.__PVT__full)),24);
        bufp->chgBit(oldp+149,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.ovf));
        bufp->chgCData(oldp+150,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.__PVT__prod),8);
        bufp->chgIData(oldp+151,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe.__PVT__full),25);
        bufp->chgIData(oldp+152,((0xffffffU & vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.__PVT__full)),24);
        bufp->chgBit(oldp+153,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.ovf));
        bufp->chgCData(oldp+154,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.__PVT__prod),8);
        bufp->chgIData(oldp+155,(vlSymsp->TOP__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe.__PVT__full),25);
    }
    bufp->chgBit(oldp+156,(vlSelfRef.tb_polite_mini__DOT__clk));
    bufp->chgBit(oldp+157,(vlSelfRef.tb_polite_mini__DOT__ena));
    bufp->chgCData(oldp+158,(vlSelfRef.tb_polite_mini__DOT__ui_in),8);
    bufp->chgCData(oldp+159,(vlSelfRef.tb_polite_mini__DOT__uio_in),8);
    bufp->chgIData(oldp+160,(vlSelfRef.tb_polite_mini__DOT__cfg_num_items),32);
    bufp->chgIData(oldp+161,(vlSelfRef.tb_polite_mini__DOT__error_count),32);
    bufp->chgIData(oldp+162,(vlSelfRef.tb_polite_mini__DOT__check_count),32);
}

void Vtb_polite_mini___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_mini___024root__trace_cleanup\n"); );
    // Init
    Vtb_polite_mini___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_polite_mini___024root*>(voidSelf);
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}

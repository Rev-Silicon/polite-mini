// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_ctrl.h for the primary calling header

#include "Vtb_polite_ctrl__pch.h"
#include "Vtb_polite_ctrl__Syms.h"
#include "Vtb_polite_ctrl___024root.h"

VlCoroutine Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__0__3(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__0__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__263__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__263__Vfuncout = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__269__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__269__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__269__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__269__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__269__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__269__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__269__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__269__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__269__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__269__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__269__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__269__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__269__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__269__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__272__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__272__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__272__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__272__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__272__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__272__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__272__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__272__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__272__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__272__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__272__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__272__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__acc_ovf = 0;
    // Body
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e 
        = ((0x73ffffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__arg_v) 
                                              << 0x17U)))));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e 
        = ((0x7dffffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__clr_ok)) 
                              << 0x19U) & ((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__arg_v) 
                                           << 0x17U))));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e 
        = ((0x7effffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__no_ob))) 
              << 0x18U));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e 
        = ((0x7f7fffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__op_v))) 
               & (~ (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__no_ob))) 
              << 0x17U));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e 
        = ((0x7f83ffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__op_v) 
                            << 0x12U)));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e 
        = ((0x7ffcffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e) 
           | (0x30000U & ((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__arg_v) 
                          << 0x10U)));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e 
        = ((0x3fffffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e) 
           | (((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__clr_flg)))) 
              << 0x1eU));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e 
        = ((0x5fffffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e) 
           | (((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__clr_flg)))) 
              << 0x1dU));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e 
        = ((0x7fff00ffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e 
        = ((0x7fffff00U & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e) 
           | ((1U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__clr_ok) 
                   & ((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__263__Vfuncout 
        = vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__263__Vfuncout;
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__illegal_d) 
                     != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                               >> 0x1eU))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:209: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] illegal_d mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__illegal_d),
                     1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                              >> 0x1eU)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 209, "");
    } else {
        ++(vlSymsp->__Vcoverage[111]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__ovf_d) 
                     != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                               >> 0x1dU))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:210: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] ovf_d mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__ovf_d),
                     1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                              >> 0x1dU)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 210, "");
    } else {
        ++(vlSymsp->__Vcoverage[112]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__run_now) 
                     != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                               >> 0x1cU))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:211: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] run_now mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__run_now),
                     1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                              >> 0x1cU)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 211, "");
    } else {
        ++(vlSymsp->__Vcoverage[113]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__acc_en) 
                     != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                               >> 0x1bU))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:212: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] acc_en mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__acc_en),
                     1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                              >> 0x1bU)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 212, "");
    } else {
        ++(vlSymsp->__Vcoverage[114]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__clr_psum) 
                     != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                               >> 0x1aU))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:213: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] clr_psum mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__clr_psum),
                     1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                              >> 0x1aU)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 213, "");
    } else {
        ++(vlSymsp->__Vcoverage[115]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__clr_outbuf) 
                     != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                               >> 0x19U))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:214: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] clr_outbuf mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__clr_outbuf),
                     1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                              >> 0x19U)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 214, "");
    } else {
        ++(vlSymsp->__Vcoverage[116]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_load) 
                     != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                               >> 0x18U))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:215: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] dump_load mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_load),
                     1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                              >> 0x18U)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 215, "");
    } else {
        ++(vlSymsp->__Vcoverage[117]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_abort) 
                     != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                               >> 0x17U))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:216: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] dump_abort mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_abort),
                     1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                              >> 0x17U)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 216, "");
    } else {
        ++(vlSymsp->__Vcoverage[118]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__dbg_start) 
                     != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                               >> 0x16U))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:217: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] dbg_start mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__dbg_start),
                     1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                              >> 0x16U)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 217, "");
    } else {
        ++(vlSymsp->__Vcoverage[119]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__dbg_op) 
                     != (0xfU & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                 >> 0x12U))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:218: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] dbg_op mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__dbg_op),
                     4,(0xfU & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                >> 0x12U)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 218, "");
    } else {
        ++(vlSymsp->__Vcoverage[120]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__dbg_pe) 
                     != (3U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                               >> 0x10U))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:219: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] dbg_pe mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,2,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__dbg_pe),
                     2,(3U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                              >> 0x10U)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 219, "");
    } else {
        ++(vlSymsp->__Vcoverage[121]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__status) 
                     != (0xffU & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                  >> 8U))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:220: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] status mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,8,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__status),
                     8,(0xffU & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                 >> 8U)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 220, "");
    } else {
        ++(vlSymsp->__Vcoverage[122]);
    }
    ++(vlSymsp->__Vcoverage[123]);
    {
        if (vlSelfRef.tb_polite_ctrl__DOT__en) {
            goto __Vlabel39;
        } else {
            ++(vlSymsp->__Vcoverage[125]);
        }
        vlSelfRef.tb_polite_ctrl__DOT__chk_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
        if (VL_UNLIKELY((0U != (IData)(vlSelfRef.tb_polite_ctrl__DOT__cmd_strobes)))) {
            vlSelfRef.tb_polite_ctrl__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:229: Assertion failed in %Ntb_polite_ctrl.check_hold_quiet: [%0t] step %0d: command output asserted on a hold edge (ins=%02x): run_now=%b acc_en=%b clr_psum=%b clr_outbuf=%b dump_load=%b dump_abort=%b dbg_start=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.tb_polite_ctrl__DOT__test_step,
                         8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                         1,vlSelfRef.tb_polite_ctrl__DOT__run_now,
                         1,(IData)(vlSelfRef.tb_polite_ctrl__DOT__acc_en),
                         1,vlSelfRef.tb_polite_ctrl__DOT__clr_psum,
                         1,(IData)(vlSelfRef.tb_polite_ctrl__DOT__clr_outbuf),
                         1,vlSelfRef.tb_polite_ctrl__DOT__dump_load,
                         1,(IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_abort),
                         1,vlSelfRef.tb_polite_ctrl__DOT__dbg_start);
            VL_STOP_MT("polite_ctrl_tb.sv", 229, "");
        } else {
            ++(vlSymsp->__Vcoverage[126]);
        }
        __Vlabel39: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    if (vlSelfRef.tb_polite_ctrl__DOT__en) {
        vlSelfRef.tb_polite_ctrl__DOT__m_phase = (1U 
                                                  & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase)));
        vlSelfRef.tb_polite_ctrl__DOT__m_run_busy = 
            (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                   >> 0x1cU));
        vlSelfRef.tb_polite_ctrl__DOT__m_inbuf = (0xffU 
                                                  & vlSelfRef.tb_polite_ctrl__DOT__exp_now);
        vlSelfRef.tb_polite_ctrl__DOT__m_illegal = 
            (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                   >> 0x1eU));
        vlSelfRef.tb_polite_ctrl__DOT__m_ovf = (1U 
                                                & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                                   >> 0x1dU));
        ++(vlSymsp->__Vcoverage[108]);
    } else {
        ++(vlSymsp->__Vcoverage[109]);
    }
    ++(vlSymsp->__Vcoverage[110]);
    ++(vlSymsp->__Vcoverage[134]);
    vlSelfRef.tb_polite_ctrl__DOT__rst_n = 0U;
    vlSelfRef.tb_polite_ctrl__DOT__en = 0U;
    vlSelfRef.tb_polite_ctrl__DOT__d = 0U;
    vlSelfRef.tb_polite_ctrl__DOT__ins = 0U;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = 0U;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = 0U;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = 0U;
    vlSelfRef.tb_polite_ctrl__DOT__m_phase = 0U;
    vlSelfRef.tb_polite_ctrl__DOT__m_run_busy = 0U;
    vlSelfRef.tb_polite_ctrl__DOT__m_inbuf = 0U;
    vlSelfRef.tb_polite_ctrl__DOT__m_illegal = 0U;
    vlSelfRef.tb_polite_ctrl__DOT__m_ovf = 0U;
    ++(vlSymsp->__Vcoverage[107]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         275);
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    ++(vlSymsp->__Vcoverage[135]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         275);
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    ++(vlSymsp->__Vcoverage[135]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         275);
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    ++(vlSymsp->__Vcoverage[135]);
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.tb_polite_ctrl__DOT__rst_n = 1U;
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__phase) 
                     != (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase)))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:236: Assertion failed in %Ntb_polite_ctrl.check_regs: [%0t] phase mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__phase),
                     1,vlSelfRef.tb_polite_ctrl__DOT__m_phase,
                     8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 236, "");
    } else {
        ++(vlSymsp->__Vcoverage[128]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__run_busy) 
                     != (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:237: Assertion failed in %Ntb_polite_ctrl.check_regs: [%0t] run_busy mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__run_busy),
                     1,vlSelfRef.tb_polite_ctrl__DOT__m_run_busy,
                     8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 237, "");
    } else {
        ++(vlSymsp->__Vcoverage[129]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf) 
                     != (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf)))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:238: Assertion failed in %Ntb_polite_ctrl.check_regs: [%0t] inbuf mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,8,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf),
                     8,vlSelfRef.tb_polite_ctrl__DOT__m_inbuf,
                     8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 238, "");
    } else {
        ++(vlSymsp->__Vcoverage[130]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__illegal) 
                     != (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal)))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:239: Assertion failed in %Ntb_polite_ctrl.check_regs: [%0t] illegal mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__illegal),
                     1,vlSelfRef.tb_polite_ctrl__DOT__m_illegal,
                     8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 239, "");
    } else {
        ++(vlSymsp->__Vcoverage[131]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__ovf) 
                     != (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf)))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:240: Assertion failed in %Ntb_polite_ctrl.check_regs: [%0t] ovf mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__ovf),
                     1,vlSelfRef.tb_polite_ctrl__DOT__m_ovf,
                     8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 240, "");
    } else {
        ++(vlSymsp->__Vcoverage[132]);
    }
    ++(vlSymsp->__Vcoverage[133]);
    ++(vlSymsp->__Vcoverage[136]);
    __Vtask_tb_polite_ctrl__DOT__tick__269__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__269__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__269__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__269__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__269__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__269__op_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__269__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__phase) 
                     != (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase)))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:236: Assertion failed in %Ntb_polite_ctrl.check_regs: [%0t] phase mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__phase),
                     1,vlSelfRef.tb_polite_ctrl__DOT__m_phase,
                     8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 236, "");
    } else {
        ++(vlSymsp->__Vcoverage[128]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__run_busy) 
                     != (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:237: Assertion failed in %Ntb_polite_ctrl.check_regs: [%0t] run_busy mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__run_busy),
                     1,vlSelfRef.tb_polite_ctrl__DOT__m_run_busy,
                     8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 237, "");
    } else {
        ++(vlSymsp->__Vcoverage[129]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf) 
                     != (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf)))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:238: Assertion failed in %Ntb_polite_ctrl.check_regs: [%0t] inbuf mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,8,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf),
                     8,vlSelfRef.tb_polite_ctrl__DOT__m_inbuf,
                     8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 238, "");
    } else {
        ++(vlSymsp->__Vcoverage[130]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__illegal) 
                     != (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal)))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:239: Assertion failed in %Ntb_polite_ctrl.check_regs: [%0t] illegal mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__illegal),
                     1,vlSelfRef.tb_polite_ctrl__DOT__m_illegal,
                     8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 239, "");
    } else {
        ++(vlSymsp->__Vcoverage[131]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__ovf) 
                     != (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf)))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:240: Assertion failed in %Ntb_polite_ctrl.check_regs: [%0t] ovf mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__ovf),
                     1,vlSelfRef.tb_polite_ctrl__DOT__m_ovf,
                     8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 240, "");
    } else {
        ++(vlSymsp->__Vcoverage[132]);
    }
    ++(vlSymsp->__Vcoverage[133]);
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__269__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__269__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__269__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__269__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__269__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__269__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__269__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__272__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__272__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__272__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__272__Vfuncout;
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__illegal_d) 
                     != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                               >> 0x1eU))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:209: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] illegal_d mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__illegal_d),
                     1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                              >> 0x1eU)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 209, "");
    } else {
        ++(vlSymsp->__Vcoverage[111]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__ovf_d) 
                     != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                               >> 0x1dU))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:210: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] ovf_d mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__ovf_d),
                     1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                              >> 0x1dU)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 210, "");
    } else {
        ++(vlSymsp->__Vcoverage[112]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__run_now) 
                     != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                               >> 0x1cU))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:211: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] run_now mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__run_now),
                     1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                              >> 0x1cU)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 211, "");
    } else {
        ++(vlSymsp->__Vcoverage[113]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__acc_en) 
                     != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                               >> 0x1bU))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:212: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] acc_en mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__acc_en),
                     1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                              >> 0x1bU)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 212, "");
    } else {
        ++(vlSymsp->__Vcoverage[114]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__clr_psum) 
                     != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                               >> 0x1aU))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:213: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] clr_psum mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__clr_psum),
                     1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                              >> 0x1aU)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 213, "");
    } else {
        ++(vlSymsp->__Vcoverage[115]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__clr_outbuf) 
                     != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                               >> 0x19U))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:214: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] clr_outbuf mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__clr_outbuf),
                     1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                              >> 0x19U)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 214, "");
    } else {
        ++(vlSymsp->__Vcoverage[116]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_load) 
                     != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                               >> 0x18U))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:215: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] dump_load mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_load),
                     1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                              >> 0x18U)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 215, "");
    } else {
        ++(vlSymsp->__Vcoverage[117]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_abort) 
                     != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                               >> 0x17U))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:216: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] dump_abort mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_abort),
                     1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                              >> 0x17U)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 216, "");
    } else {
        ++(vlSymsp->__Vcoverage[118]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__dbg_start) 
                     != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                               >> 0x16U))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:217: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] dbg_start mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__dbg_start),
                     1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                              >> 0x16U)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 217, "");
    } else {
        ++(vlSymsp->__Vcoverage[119]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__dbg_op) 
                     != (0xfU & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                 >> 0x12U))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:218: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] dbg_op mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__dbg_op),
                     4,(0xfU & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                >> 0x12U)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 218, "");
    } else {
        ++(vlSymsp->__Vcoverage[120]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__dbg_pe) 
                     != (3U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                               >> 0x10U))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:219: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] dbg_pe mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,2,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__dbg_pe),
                     2,(3U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                              >> 0x10U)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 219, "");
    } else {
        ++(vlSymsp->__Vcoverage[121]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__status) 
                     != (0xffU & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                  >> 8U))))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:220: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] status mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,8,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__status),
                     8,(0xffU & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                 >> 8U)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 220, "");
    } else {
        ++(vlSymsp->__Vcoverage[122]);
    }
    ++(vlSymsp->__Vcoverage[123]);
    {
        if (vlSelfRef.tb_polite_ctrl__DOT__en) {
            goto __Vlabel40;
        } else {
            ++(vlSymsp->__Vcoverage[125]);
        }
        vlSelfRef.tb_polite_ctrl__DOT__chk_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
        if (VL_UNLIKELY((0U != (IData)(vlSelfRef.tb_polite_ctrl__DOT__cmd_strobes)))) {
            vlSelfRef.tb_polite_ctrl__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:229: Assertion failed in %Ntb_polite_ctrl.check_hold_quiet: [%0t] step %0d: command output asserted on a hold edge (ins=%02x): run_now=%b acc_en=%b clr_psum=%b clr_outbuf=%b dump_load=%b dump_abort=%b dbg_start=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.tb_polite_ctrl__DOT__test_step,
                         8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                         1,vlSelfRef.tb_polite_ctrl__DOT__run_now,
                         1,(IData)(vlSelfRef.tb_polite_ctrl__DOT__acc_en),
                         1,vlSelfRef.tb_polite_ctrl__DOT__clr_psum,
                         1,(IData)(vlSelfRef.tb_polite_ctrl__DOT__clr_outbuf),
                         1,vlSelfRef.tb_polite_ctrl__DOT__dump_load,
                         1,(IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_abort),
                         1,vlSelfRef.tb_polite_ctrl__DOT__dbg_start);
            VL_STOP_MT("polite_ctrl_tb.sv", 229, "");
        } else {
            ++(vlSymsp->__Vcoverage[126]);
        }
        __Vlabel40: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    if (vlSelfRef.tb_polite_ctrl__DOT__en) {
        vlSelfRef.tb_polite_ctrl__DOT__m_phase = (1U 
                                                  & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase)));
        vlSelfRef.tb_polite_ctrl__DOT__m_run_busy = 
            (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                   >> 0x1cU));
        vlSelfRef.tb_polite_ctrl__DOT__m_inbuf = (0xffU 
                                                  & vlSelfRef.tb_polite_ctrl__DOT__exp_now);
        vlSelfRef.tb_polite_ctrl__DOT__m_illegal = 
            (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                   >> 0x1eU));
        vlSelfRef.tb_polite_ctrl__DOT__m_ovf = (1U 
                                                & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                                   >> 0x1dU));
        ++(vlSymsp->__Vcoverage[108]);
    } else {
        ++(vlSymsp->__Vcoverage[109]);
    }
    ++(vlSymsp->__Vcoverage[110]);
    ++(vlSymsp->__Vcoverage[134]);
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         386);
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__phase) 
                     != (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase)))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:236: Assertion failed in %Ntb_polite_ctrl.check_regs: [%0t] phase mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__phase),
                     1,vlSelfRef.tb_polite_ctrl__DOT__m_phase,
                     8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 236, "");
    } else {
        ++(vlSymsp->__Vcoverage[128]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__run_busy) 
                     != (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:237: Assertion failed in %Ntb_polite_ctrl.check_regs: [%0t] run_busy mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__run_busy),
                     1,vlSelfRef.tb_polite_ctrl__DOT__m_run_busy,
                     8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 237, "");
    } else {
        ++(vlSymsp->__Vcoverage[129]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf) 
                     != (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf)))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:238: Assertion failed in %Ntb_polite_ctrl.check_regs: [%0t] inbuf mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,8,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf),
                     8,vlSelfRef.tb_polite_ctrl__DOT__m_inbuf,
                     8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 238, "");
    } else {
        ++(vlSymsp->__Vcoverage[130]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__illegal) 
                     != (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal)))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:239: Assertion failed in %Ntb_polite_ctrl.check_regs: [%0t] illegal mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__illegal),
                     1,vlSelfRef.tb_polite_ctrl__DOT__m_illegal,
                     8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 239, "");
    } else {
        ++(vlSymsp->__Vcoverage[131]);
    }
    vlSelfRef.tb_polite_ctrl__DOT__chk_count = ((IData)(1U) 
                                                + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__ovf) 
                     != (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf)))) {
        vlSelfRef.tb_polite_ctrl__DOT__err_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:240: Assertion failed in %Ntb_polite_ctrl.check_regs: [%0t] ovf mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_ctrl__DOT__ovf),
                     1,vlSelfRef.tb_polite_ctrl__DOT__m_ovf,
                     8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                     8,vlSelfRef.tb_polite_ctrl__DOT__d);
        VL_STOP_MT("polite_ctrl_tb.sv", 240, "");
    } else {
        ++(vlSymsp->__Vcoverage[132]);
    }
    ++(vlSymsp->__Vcoverage[133]);
    VL_WRITEF_NX("------------------------------------------------\n polite_ctrl_tb (hold gating): %0d checks, %0d errors -> %s\n------------------------------------------------\n",0,
                 32,vlSelfRef.tb_polite_ctrl__DOT__chk_count,
                 32,vlSelfRef.tb_polite_ctrl__DOT__err_count,
                 32,((0U == vlSelfRef.tb_polite_ctrl__DOT__err_count)
                      ? 0x50415353U : 0x4641494cU));
    VL_FINISH_MT("polite_ctrl_tb.sv", 393, "");
    ++(vlSymsp->__Vcoverage[152]);
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__1(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1d98ULL, 
                                             nullptr, 
                                             "polite_ctrl_tb.sv", 
                                             104);
        vlSelfRef.tb_polite_ctrl__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__clk)));
        ++(vlSymsp->__Vcoverage[60]);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_polite_ctrl___024root___dump_triggers__act(Vtb_polite_ctrl___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_polite_ctrl___024root___eval_triggers__act(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_polite_ctrl__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_polite_ctrl__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__rst_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_polite_ctrl__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_polite_ctrl__DOT__clk__0)));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_polite_ctrl__DOT__clk__0 
        = vlSelfRef.tb_polite_ctrl__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_polite_ctrl__DOT__rst_n__0 
        = vlSelfRef.tb_polite_ctrl__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_polite_ctrl___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_polite_ctrl___024root___act_sequent__TOP__0(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___act_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__clk) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__clk 
            = vlSelfRef.tb_polite_ctrl__DOT__clk;
    }
}

VL_INLINE_OPT void Vtb_polite_ctrl___024root___act_comb__TOP__0(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT____VdfgRegularize_hf29a7531_0_1;
    tb_polite_ctrl__DOT__dut__DOT____VdfgRegularize_hf29a7531_0_1 = 0;
    // Body
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

VL_INLINE_OPT void Vtb_polite_ctrl___024root___nba_sequent__TOP__0(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__rst_n)) 
                                  | ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__status) 
                                     >> 7U)))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:423: Assertion failed in %Ntb_polite_ctrl.dut.u_sva.a_status7: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("polite_ctrl_tb.sv", 423, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_6_0)) 
                                     | (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__illegal))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:420: Assertion failed in %Ntb_polite_ctrl.dut.u_sva.a_ill_sticky: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("polite_ctrl_tb.sv", 420, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_2_0)) 
                                     | ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__phase) 
                                        != (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_3_0)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:411: Assertion failed in %Ntb_polite_ctrl.dut.u_sva.a_phase: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("polite_ctrl_tb.sv", 411, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_4_0)) 
                                     | ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__run_busy) 
                                        == (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_5_0)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:412: Assertion failed in %Ntb_polite_ctrl.dut.u_sva.a_run_busy: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("polite_ctrl_tb.sv", 412, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_7_0)) 
                                     | (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__ovf))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:421: Assertion failed in %Ntb_polite_ctrl.dut.u_sva.a_ovf_sticky: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("polite_ctrl_tb.sv", 421, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_8_0)) 
                                     | (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__ovf))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:422: Assertion failed in %Ntb_polite_ctrl.dut.u_sva.a_ovf_new: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("polite_ctrl_tb.sv", 422, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dump_busy)) 
                                     | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dump_load)) 
                                        & (~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__clr_outbuf))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:415: Assertion failed in %Ntb_polite_ctrl.dut.u_sva.a_no_dload: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("polite_ctrl_tb.sv", 415, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__run_busy)) 
                                     | (~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__clr_psum)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:416: Assertion failed in %Ntb_polite_ctrl.dut.u_sva.a_no_clr_ps: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("polite_ctrl_tb.sv", 416, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__fz_open)) 
                                     | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__run_now)) 
                                        & (~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dbg_start))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:414: Assertion failed in %Ntb_polite_ctrl.dut.u_sva.a_no_run_fz: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("polite_ctrl_tb.sv", 414, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__rst_n)) 
                                  | VL_ONEHOT0_I(((
                                                   ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__run_now) 
                                                    << 4U) 
                                                   | (((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dump_load) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dump_abort) 
                                                         << 2U))) 
                                                  | (((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dbg_start) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__clr_psum) 
                                                        | (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__clr_outbuf)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:417: Assertion failed in %Ntb_polite_ctrl.dut.u_sva.a_one_cmd: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("polite_ctrl_tb.sv", 417, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_0_0)) 
                                     | ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_1_0) 
                                        == ((((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__phase) 
                                              << 0xbU) 
                                             | ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__run_busy) 
                                                << 0xaU)) 
                                            | (((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__inbuf) 
                                                << 2U) 
                                               | (((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__illegal) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__ovf))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:409: Assertion failed in %Ntb_polite_ctrl.dut.u_sva.a_hold_regs: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("polite_ctrl_tb.sv", 409, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__rst_n)) 
                                  | ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__en) 
                                     | (~ (((((((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__run_now) 
                                                | (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__acc_en)) 
                                               | (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__clr_psum)) 
                                              | (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__clr_outbuf)) 
                                             | (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dump_load)) 
                                            | (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dump_abort)) 
                                           | (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dbg_start))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:407: Assertion failed in %Ntb_polite_ctrl.dut.u_sva.a_hold_quiet: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("polite_ctrl_tb.sv", 407, "");
        }
    }
    vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_3_0 
        = vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__phase;
    vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_5_0 
        = vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__run_now;
    vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_1_0 
        = ((((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__phase) 
             << 0xbU) | ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__run_busy) 
                         << 0xaU)) | (((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__inbuf) 
                                       << 2U) | (((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__illegal) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__ovf))));
    vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_0_0 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__rst_n) 
           & (~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__en)));
    vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_2_0 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__rst_n) 
           & (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__en));
    vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_4_0 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__rst_n) 
           & (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__en));
    vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_6_0 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__rst_n) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__illegal) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__clr_flg))));
    vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_7_0 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__rst_n) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__ovf) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__dut__DOT__clr_flg))));
    vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__u_sva__DOT___Vpast_8_0 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__rst_n) 
           & (((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__en) 
               & (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__acc_en)) 
              & (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_ctrl__DOT__pe_ovf_any)));
}

VL_INLINE_OPT void Vtb_polite_ctrl___024root___nba_sequent__TOP__1(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_polite_ctrl__DOT__rst_n) {
        if (vlSelfRef.tb_polite_ctrl__DOT__en) {
            vlSelfRef.tb_polite_ctrl__DOT__phase = 
                (1U & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__phase)));
            ++(vlSymsp->__Vcoverage[176]);
            vlSelfRef.tb_polite_ctrl__DOT__run_busy 
                = vlSelfRef.tb_polite_ctrl__DOT__run_now;
            vlSelfRef.tb_polite_ctrl__DOT__inbuf = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__inbuf_d;
            vlSelfRef.tb_polite_ctrl__DOT__illegal 
                = vlSelfRef.tb_polite_ctrl__DOT__illegal_d;
            vlSelfRef.tb_polite_ctrl__DOT__ovf = vlSelfRef.tb_polite_ctrl__DOT__ovf_d;
        } else {
            ++(vlSymsp->__Vcoverage[177]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelfRef.tb_polite_ctrl__DOT__phase = 0U;
        vlSelfRef.tb_polite_ctrl__DOT__run_busy = 0U;
        vlSelfRef.tb_polite_ctrl__DOT__inbuf = 0U;
        vlSelfRef.tb_polite_ctrl__DOT__illegal = 0U;
        vlSelfRef.tb_polite_ctrl__DOT__ovf = 0U;
    }
    ++(vlSymsp->__Vcoverage[179]);
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__phase) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__phase))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__phase 
            = vlSelfRef.tb_polite_ctrl__DOT__phase;
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
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__run_busy) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__run_busy))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__run_busy 
            = vlSelfRef.tb_polite_ctrl__DOT__run_busy;
    }
}

VL_INLINE_OPT void Vtb_polite_ctrl___024root___nba_comb__TOP__0(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.tb_polite_ctrl__DOT__dump_abort = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                                 & (0x40U 
                                                    == 
                                                    (0xf0U 
                                                     & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins))));
    vlSelfRef.tb_polite_ctrl__DOT__dump_load = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                                & ((~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy)) 
                                                   & (0x30U 
                                                      == 
                                                      (0xf0U 
                                                       & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins)))));
    vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__is_dbg 
        = ((6U <= (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                           >> 4U))) & (0xbU >= (0xfU 
                                                & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                                                   >> 4U))));
    vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__bad_bank 
        = (IData)(((0x60U == (0xf0U & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins))) 
                   & (0U != (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins)))));
    vlSelfRef.tb_polite_ctrl__DOT__run_now = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                              & ((~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                                                 & (0x20U 
                                                    == 
                                                    (0xf0U 
                                                     & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins)))));
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_abort) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__dump_abort))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__dump_abort 
            = vlSelfRef.tb_polite_ctrl__DOT__dump_abort;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_load) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__dump_load))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__dump_load 
            = vlSelfRef.tb_polite_ctrl__DOT__dump_load;
    }
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
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__run_now) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__run_now))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__run_now 
            = vlSelfRef.tb_polite_ctrl__DOT__run_now;
    }
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__dbg_req) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__dbg_req))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__dbg_req 
            = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__dbg_req;
    }
    vlSelfRef.tb_polite_ctrl__DOT__dbg_start = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                                & ((~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                                                   & (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__dbg_req)));
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dbg_start) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__dbg_start))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.tb_polite_ctrl__DOT____Vtogcov__dbg_start 
            = vlSelfRef.tb_polite_ctrl__DOT__dbg_start;
    }
}

VL_INLINE_OPT void Vtb_polite_ctrl___024root___nba_comb__TOP__1(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___nba_comb__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_polite_ctrl__DOT__dut__DOT____VdfgRegularize_hf29a7531_0_1;
    tb_polite_ctrl__DOT__dut__DOT____VdfgRegularize_hf29a7531_0_1 = 0;
    // Body
    vlSelfRef.tb_polite_ctrl__DOT__acc_en = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(vlSelfRef.tb_polite_ctrl__DOT__run_busy));
    vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__run_busy));
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
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_coll) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__clr_coll))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__clr_coll 
            = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__clr_coll;
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
    if (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__ill_set) 
         ^ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__ill_set))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelfRef.tb_polite_ctrl__DOT__dut__DOT____Vtogcov__ill_set 
            = vlSelfRef.tb_polite_ctrl__DOT__dut__DOT__ill_set;
    }
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

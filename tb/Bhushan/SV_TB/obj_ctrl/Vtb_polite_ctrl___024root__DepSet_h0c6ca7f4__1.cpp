// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_ctrl.h for the primary calling header

#include "Vtb_polite_ctrl__pch.h"
#include "Vtb_polite_ctrl__Syms.h"
#include "Vtb_polite_ctrl___024root.h"

VlCoroutine Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__0__1(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__0__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__70__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__70__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__70__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__70__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__70__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__70__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__70__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__70__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__70__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__70__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__70__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__70__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__70__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__70__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__73__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__73__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__73__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__73__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__73__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__73__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__73__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__73__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__76__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__76__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__76__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__76__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__76__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__76__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__76__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__76__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__76__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__76__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__76__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__76__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__76__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__76__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__79__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__79__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__79__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__79__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__79__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__79__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__79__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__79__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__79__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__79__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__79__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__79__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__82__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__82__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__82__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__82__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__82__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__82__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__82__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__82__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__82__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__82__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__82__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__82__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__82__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__82__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__85__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__85__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__85__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__85__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__85__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__85__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__85__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__85__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__85__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__85__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__85__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__85__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__88__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__88__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__88__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__88__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__88__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__88__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__88__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__88__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__88__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__88__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__88__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__88__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__88__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__88__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__91__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__91__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__91__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__91__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__91__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__91__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__91__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__94__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__94__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__94__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__94__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__94__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__94__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__94__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__94__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__94__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__94__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__94__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__94__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__94__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__94__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__97__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__97__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__97__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__97__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__97__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__97__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__97__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__97__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__97__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__97__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__97__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__97__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__100__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__100__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__100__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__100__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__100__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__100__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__100__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__100__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__100__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__100__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__100__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__100__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__100__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__100__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__103__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__103__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__103__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__103__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__103__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__103__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__103__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__103__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__103__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__103__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__103__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__103__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__106__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__106__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__106__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__106__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__106__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__106__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__106__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__106__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__106__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__106__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__106__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__106__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__106__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__106__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__109__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__109__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__109__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__109__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__109__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__109__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__109__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__112__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__112__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__112__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__112__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__112__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__112__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__112__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__112__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__112__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__112__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__112__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__112__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__112__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__112__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__115__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__115__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__115__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__115__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__115__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__115__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__115__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__115__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__115__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__115__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__115__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__115__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__118__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__118__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__118__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__118__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__118__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__118__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__118__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__118__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__118__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__118__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__118__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__118__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__118__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__118__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__121__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__121__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__121__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__121__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__121__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__121__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__121__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__121__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__121__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__121__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__121__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__121__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__124__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__124__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__124__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__124__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__124__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__124__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__124__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__124__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__124__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__124__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__124__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__124__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__124__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__124__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__127__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__127__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__127__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__127__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__127__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__127__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__127__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__127__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__127__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__127__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__127__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__127__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__130__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__130__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__130__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__130__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__130__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__130__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__130__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__130__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__130__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__130__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__130__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__130__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__130__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__130__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__133__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__133__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__133__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__133__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__133__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__133__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__133__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__133__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__136__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__136__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__136__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__136__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__136__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__136__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__136__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__136__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__136__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__136__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__136__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__136__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__136__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__136__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__139__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__139__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__139__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__139__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__139__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__139__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__139__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__139__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__139__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__139__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__139__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__139__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__142__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__142__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__142__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__142__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__142__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__142__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__142__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__142__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__142__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__142__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__142__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__142__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__142__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__142__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__145__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__145__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__145__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__145__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__145__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__145__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__145__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__145__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__145__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__145__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__145__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__145__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__148__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__148__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__148__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__148__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__148__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__148__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__148__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__148__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__148__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__148__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__148__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__148__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__148__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__148__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__151__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__151__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__151__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__151__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__151__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__151__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__151__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__151__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__151__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__151__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__151__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__151__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__acc_ovf = 0;
    // Body
    __Vfunc_tb_polite_ctrl__DOT__model_comb__73__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__73__ill_set 
        = ((((((((2U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__no_ob)))) 
               | ((4U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v)) 
                  & (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__no_ob))) 
              | ((5U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v)) 
                 & (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_coll))) 
             | (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__bad_bank)) 
            | ((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v)));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x6fffffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x73ffffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__arg_v) 
                                              << 0x17U)))));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x7dffffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_ok)) 
                              << 0x19U) & ((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__arg_v) 
                                           << 0x17U))));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x7effffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__no_ob))) 
              << 0x18U));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x7f7fffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v))) 
               & (~ (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__no_ob))) 
              << 0x17U));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x7f83ffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v) 
                            << 0x12U)));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x7ffcffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | (0x30000U & ((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__arg_v) 
                          << 0x10U)));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x3fffffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__73__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_flg)))) 
              << 0x1eU));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x5fffffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__73__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_flg)))) 
              << 0x1dU));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x7fff00ffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__73__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x7fffff00U & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | ((1U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_ok) 
                   & ((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__73__Vfuncout 
        = vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__73__Vfuncout;
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
            goto __Vlabel20;
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
        __Vlabel20: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    ++(vlSymsp->__Vcoverage[141]);
    __Vtask_tb_polite_ctrl__DOT__tick__70__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__70__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__70__dump_v = 1U;
    __Vtask_tb_polite_ctrl__DOT__tick__70__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__70__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__70__op_v = 4U;
    __Vtask_tb_polite_ctrl__DOT__tick__70__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__70__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__70__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__70__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__70__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__70__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__70__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__70__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__73__is_dbg 
        = ((6U <= (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v)) 
           & (0xbU >= (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v)));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__bad_bank 
        = ((6U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v)) 
           & (0U != (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__arg_v)));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__73__is_dbg) 
           & (~ (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__bad_bank)));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_coll 
        = ((((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__no_ob))));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_ok 
        = ((5U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v)) 
           & (~ (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_coll)));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_flg 
        = ((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_ok) 
           & (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__73__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__73__ill_set 
        = ((((((((2U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__no_ob)))) 
               | ((4U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v)) 
                  & (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__no_ob))) 
              | ((5U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v)) 
                 & (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_coll))) 
             | (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__bad_bank)) 
            | ((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v)));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x6fffffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x73ffffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__arg_v) 
                                              << 0x17U)))));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x7dffffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_ok)) 
                              << 0x19U) & ((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__arg_v) 
                                           << 0x17U))));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x7effffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__no_ob))) 
              << 0x18U));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x7f7fffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v))) 
               & (~ (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__no_ob))) 
              << 0x17U));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x7f83ffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v) 
                            << 0x12U)));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x7ffcffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | (0x30000U & ((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__arg_v) 
                          << 0x10U)));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x3fffffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__73__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_flg)))) 
              << 0x1eU));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x5fffffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__73__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_flg)))) 
              << 0x1dU));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x7fff00ffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__73__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e 
        = ((0x7fffff00U & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e) 
           | ((1U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__clr_ok) 
                   & ((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__73__Vfuncout 
        = vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__73__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__73__Vfuncout;
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
            goto __Vlabel21;
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
        __Vlabel21: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    ++(vlSymsp->__Vcoverage[141]);
    __Vtask_tb_polite_ctrl__DOT__tick__76__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__76__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__76__dump_v = 1U;
    __Vtask_tb_polite_ctrl__DOT__tick__76__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__76__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__76__op_v = 4U;
    __Vtask_tb_polite_ctrl__DOT__tick__76__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__76__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__76__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__76__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__76__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__76__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__76__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__76__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__79__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__79__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__79__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__79__Vfuncout;
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
            goto __Vlabel22;
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
        __Vlabel22: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__82__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__82__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__82__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__82__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__82__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__82__op_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__82__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__82__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__82__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__82__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__82__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__82__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__82__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__82__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__85__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__85__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__85__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__85__Vfuncout;
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
            goto __Vlabel23;
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
        __Vlabel23: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__test_step = 5U;
    __Vtask_tb_polite_ctrl__DOT__tick__88__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__88__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__88__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__88__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__88__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__88__op_v = 6U;
    __Vtask_tb_polite_ctrl__DOT__tick__88__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__88__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__88__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__88__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__88__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__88__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__88__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__88__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__91__Vfuncout;
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
            goto __Vlabel24;
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
        __Vlabel24: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    ++(vlSymsp->__Vcoverage[142]);
    __Vtask_tb_polite_ctrl__DOT__tick__88__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__88__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__88__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__88__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__88__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__88__op_v = 6U;
    __Vtask_tb_polite_ctrl__DOT__tick__88__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__88__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__88__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__88__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__88__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__88__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__88__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__88__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__91__Vfuncout;
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
            goto __Vlabel25;
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
        __Vlabel25: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    ++(vlSymsp->__Vcoverage[142]);
    __Vtask_tb_polite_ctrl__DOT__tick__88__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__88__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__88__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__88__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__88__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__88__op_v = 6U;
    __Vtask_tb_polite_ctrl__DOT__tick__88__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__88__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__88__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__88__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__88__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__88__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__88__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__88__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__91__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__91__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__91__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__91__Vfuncout;
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
            goto __Vlabel26;
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
        __Vlabel26: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    ++(vlSymsp->__Vcoverage[142]);
    __Vtask_tb_polite_ctrl__DOT__tick__94__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__94__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__94__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__94__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__94__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__94__op_v = 6U;
    __Vtask_tb_polite_ctrl__DOT__tick__94__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__94__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__94__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__94__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__94__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__94__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__94__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__94__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__97__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__97__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__97__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__97__Vfuncout;
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
            goto __Vlabel27;
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
        __Vlabel27: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__100__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__100__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__100__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__100__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__100__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__100__op_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__100__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__100__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__100__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__100__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__100__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__100__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__100__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__100__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__103__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__103__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__103__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__103__Vfuncout;
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
            goto __Vlabel28;
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
        __Vlabel28: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__106__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__106__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__106__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__106__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__106__arg_v = 2U;
    __Vtask_tb_polite_ctrl__DOT__tick__106__op_v = 8U;
    __Vtask_tb_polite_ctrl__DOT__tick__106__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__106__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__106__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__106__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__106__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__106__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__106__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__106__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__109__Vfuncout;
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
            goto __Vlabel29;
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
        __Vlabel29: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    ++(vlSymsp->__Vcoverage[143]);
    __Vtask_tb_polite_ctrl__DOT__tick__106__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__106__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__106__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__106__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__106__arg_v = 2U;
    __Vtask_tb_polite_ctrl__DOT__tick__106__op_v = 8U;
    __Vtask_tb_polite_ctrl__DOT__tick__106__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__106__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__106__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__106__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__106__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__106__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__106__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__106__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__109__Vfuncout;
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
            goto __Vlabel30;
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
        __Vlabel30: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    ++(vlSymsp->__Vcoverage[143]);
    __Vtask_tb_polite_ctrl__DOT__tick__106__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__106__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__106__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__106__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__106__arg_v = 2U;
    __Vtask_tb_polite_ctrl__DOT__tick__106__op_v = 8U;
    __Vtask_tb_polite_ctrl__DOT__tick__106__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__106__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__106__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__106__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__106__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__106__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__106__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__106__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__109__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__109__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__109__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__109__Vfuncout;
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
            goto __Vlabel31;
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
        __Vlabel31: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    ++(vlSymsp->__Vcoverage[143]);
    __Vtask_tb_polite_ctrl__DOT__tick__112__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__112__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__112__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__112__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__112__arg_v = 2U;
    __Vtask_tb_polite_ctrl__DOT__tick__112__op_v = 8U;
    __Vtask_tb_polite_ctrl__DOT__tick__112__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__112__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__112__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__112__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__112__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__112__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__112__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__112__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__115__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__115__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__115__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__115__Vfuncout;
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
            goto __Vlabel32;
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
        __Vlabel32: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__118__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__118__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__118__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__118__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__118__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__118__op_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__118__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__118__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__118__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__118__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__118__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__118__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__118__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__118__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__121__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__121__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__121__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__121__Vfuncout;
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
            goto __Vlabel33;
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
        __Vlabel33: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__test_step = 6U;
    __Vtask_tb_polite_ctrl__DOT__tick__124__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__124__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__124__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__124__d_v = 0x21U;
    __Vtask_tb_polite_ctrl__DOT__tick__124__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__124__op_v = 2U;
    __Vtask_tb_polite_ctrl__DOT__tick__124__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__124__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__124__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__124__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__124__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__124__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__124__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__124__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__127__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__127__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__127__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__127__Vfuncout;
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
            goto __Vlabel34;
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
        __Vlabel34: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__130__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__130__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__130__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__130__d_v = 0x21U;
    __Vtask_tb_polite_ctrl__DOT__tick__130__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__130__op_v = 2U;
    __Vtask_tb_polite_ctrl__DOT__tick__130__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__130__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__130__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__130__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__130__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__130__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__130__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__130__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__133__Vfuncout;
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
            goto __Vlabel35;
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
        __Vlabel35: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    ++(vlSymsp->__Vcoverage[144]);
    __Vtask_tb_polite_ctrl__DOT__tick__130__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__130__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__130__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__130__d_v = 0x21U;
    __Vtask_tb_polite_ctrl__DOT__tick__130__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__130__op_v = 2U;
    __Vtask_tb_polite_ctrl__DOT__tick__130__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__130__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__130__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__130__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__130__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__130__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__130__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__130__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__133__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__133__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__133__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__133__Vfuncout;
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
            goto __Vlabel36;
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
        __Vlabel36: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    ++(vlSymsp->__Vcoverage[144]);
    __Vtask_tb_polite_ctrl__DOT__tick__136__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__136__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__136__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__136__d_v = 0x43U;
    __Vtask_tb_polite_ctrl__DOT__tick__136__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__136__op_v = 2U;
    __Vtask_tb_polite_ctrl__DOT__tick__136__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__136__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__136__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__136__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__136__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__136__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__136__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__136__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__139__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__139__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__139__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__139__Vfuncout;
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
            goto __Vlabel37;
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
        __Vlabel37: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__142__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__142__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__142__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__142__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__142__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__142__op_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__142__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__142__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__142__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__142__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__142__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__142__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__142__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__142__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__145__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__145__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__145__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__145__Vfuncout;
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
            goto __Vlabel38;
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
        __Vlabel38: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__148__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__148__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__148__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__148__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__148__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__148__op_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__148__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__148__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__148__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__148__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__148__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__148__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__148__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__148__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__151__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__151__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__151__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__151__Vfuncout;
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
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

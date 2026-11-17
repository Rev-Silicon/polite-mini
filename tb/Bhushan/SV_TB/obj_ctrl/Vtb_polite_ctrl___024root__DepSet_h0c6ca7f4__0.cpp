// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_ctrl.h for the primary calling header

#include "Vtb_polite_ctrl__pch.h"
#include "Vtb_polite_ctrl__Syms.h"
#include "Vtb_polite_ctrl___024root.h"

VlCoroutine Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__0__0(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__4__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__4__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__4__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__4__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__4__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__4__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__4__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__4__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__4__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__4__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__4__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__4__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__4__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__4__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__7__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__7__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__7__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__7__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__7__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__7__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__7__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__7__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__7__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__7__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__7__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__7__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__10__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__10__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__10__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__10__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__10__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__10__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__10__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__10__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__10__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__10__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__10__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__10__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__10__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__10__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__13__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__13__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__13__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__13__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__13__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__13__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__13__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__13__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__13__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__13__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__13__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__13__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__16__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__16__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__16__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__16__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__16__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__16__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__16__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__16__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__16__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__16__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__16__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__16__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__16__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__16__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__19__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__19__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__19__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__19__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__19__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__19__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__22__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__22__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__22__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__22__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__22__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__22__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__22__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__22__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__22__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__22__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__22__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__22__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__22__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__22__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__25__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__25__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__25__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__25__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__25__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__25__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__25__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__25__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__25__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__25__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__25__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__25__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__28__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__28__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__28__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__28__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__28__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__28__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__28__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__28__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__28__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__28__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__28__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__28__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__28__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__28__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__31__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__31__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__31__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__31__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__31__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__31__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__31__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__31__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__31__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__31__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__31__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__31__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__34__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__34__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__34__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__34__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__34__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__34__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__34__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__34__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__34__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__34__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__34__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__34__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__34__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__34__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__37__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__37__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__37__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__37__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__37__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__37__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__37__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__40__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__40__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__40__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__40__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__40__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__40__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__40__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__40__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__40__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__40__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__40__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__40__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__40__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__40__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__43__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__43__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__43__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__43__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__43__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__43__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__43__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__43__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__43__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__43__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__43__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__43__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__46__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__46__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__46__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__46__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__46__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__46__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__46__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__46__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__46__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__46__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__46__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__46__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__46__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__46__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__49__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__49__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__49__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__49__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__49__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__49__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__49__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__49__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__49__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__49__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__49__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__49__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__52__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__52__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__52__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__52__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__52__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__52__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__52__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__52__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__52__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__52__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__52__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__52__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__52__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__52__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__55__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__55__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__55__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__55__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__55__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__55__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__55__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__58__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__58__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__58__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__58__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__58__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__58__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__58__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__58__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__58__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__58__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__58__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__58__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__58__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__58__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__61__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__61__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__61__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__61__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__61__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__61__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__61__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__61__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__61__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__61__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__61__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__61__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__64__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__64__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__64__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__64__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__64__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__64__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__64__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__64__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__64__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__64__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__64__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__64__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__64__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__64__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__67__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__67__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__67__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__67__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__67__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__67__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__67__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__67__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__67__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__67__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__67__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__67__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__acc_ovf = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x653d2573U;
    __Vtemp_1[1U] = 0x7066696cU;
    __Vtemp_1[2U] = 0x64756dU;
    if (VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                             vlSelfRef.tb_polite_ctrl__DOT__unnamedblk2__DOT__dumpfile)) {
        ++(vlSymsp->__Vcoverage[151]);
    } else {
        vlSelfRef.tb_polite_ctrl__DOT__unnamedblk2__DOT__dumpfile = 
            std::string{"../logs_waveforms/tb_polite_ctrl.vcd"};
        ++(vlSymsp->__Vcoverage[150]);
    }
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NN(vlSelfRef.tb_polite_ctrl__DOT__unnamedblk2__DOT__dumpfile));
    vlSymsp->_traceDumpOpen();
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    ++(vlSymsp->__Vcoverage[135]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         275);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    ++(vlSymsp->__Vcoverage[135]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         275);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    ++(vlSymsp->__Vcoverage[135]);
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    VL_WRITEF_NX("[%0t] Hold-gating test\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    vlSelfRef.tb_polite_ctrl__DOT__test_step = 1U;
    __Vtask_tb_polite_ctrl__DOT__tick__4__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__4__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__4__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__4__d_v = 0x77U;
    __Vtask_tb_polite_ctrl__DOT__tick__4__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__4__op_v = 1U;
    __Vtask_tb_polite_ctrl__DOT__tick__4__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__4__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__4__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__4__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__4__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__4__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__4__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__4__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e = 
        ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e) 
         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
              & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__op_v))) 
             & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
            << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e = 
        ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e) 
         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
              & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
             << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__clr_ok)) 
                                          << 0x1aU) 
                                         & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__arg_v) 
                                            << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e = 
        ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e) 
         | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__clr_ok)) 
                            << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__arg_v) 
                                         << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e = 
        ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e) 
         | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
               & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__op_v))) 
              & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
             & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__no_ob))) 
            << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e = 
        ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e) 
         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
              & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__op_v))) 
             & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__no_ob))) 
            << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e = 
        ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e) 
         | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__dbg_req)) 
              & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
             << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__op_v) 
                          << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e = 
        ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e) 
         | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__arg_v) 
                        << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e = 
        ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e) 
         | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__ill_set) 
             | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__clr_flg)))) 
            << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e = 
        ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e) 
         | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__acc_ovf) 
             | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__clr_flg)))) 
            << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e = 
        ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e) 
         | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                      << 0xdU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                                   | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__acc_ovf)) 
                                                  << 0xcU))) 
                       | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                            << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                        << 0xaU)) | 
                          (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                            << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                      << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e = 
        ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e) 
         | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__op_v))
             ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
             : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__clr_ok) 
                 & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__7__arg_v) 
                    >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__7__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__7__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__7__Vfuncout;
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
            goto __Vlabel1;
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
        __Vlabel1: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__10__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__10__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__10__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__10__d_v = 0x11U;
    __Vtask_tb_polite_ctrl__DOT__tick__10__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__10__op_v = 2U;
    __Vtask_tb_polite_ctrl__DOT__tick__10__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__10__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__10__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__10__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__10__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__10__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__10__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__10__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__13__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__13__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__13__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__13__Vfuncout;
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
            goto __Vlabel2;
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
        __Vlabel2: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__16__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__d_v = 0x11U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__op_v = 2U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__16__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__16__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__16__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__16__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__16__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__16__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__16__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__19__Vfuncout;
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
            goto __Vlabel3;
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
        __Vlabel3: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    ++(vlSymsp->__Vcoverage[138]);
    __Vtask_tb_polite_ctrl__DOT__tick__16__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__d_v = 0x11U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__op_v = 2U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__16__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__16__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__16__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__16__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__16__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__16__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__16__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__19__Vfuncout;
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
            goto __Vlabel4;
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
        __Vlabel4: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    ++(vlSymsp->__Vcoverage[138]);
    __Vtask_tb_polite_ctrl__DOT__tick__16__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__d_v = 0x11U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__op_v = 2U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__16__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__16__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__16__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__16__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__16__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__16__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__16__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__19__Vfuncout;
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
            goto __Vlabel5;
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
        __Vlabel5: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    ++(vlSymsp->__Vcoverage[138]);
    __Vtask_tb_polite_ctrl__DOT__tick__16__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__d_v = 0x11U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__op_v = 2U;
    __Vtask_tb_polite_ctrl__DOT__tick__16__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__16__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__16__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__16__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__16__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__16__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__16__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__16__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__19__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__19__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__19__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__19__Vfuncout;
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
            goto __Vlabel6;
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
        __Vlabel6: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    ++(vlSymsp->__Vcoverage[138]);
    __Vtask_tb_polite_ctrl__DOT__tick__22__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__22__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__22__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__22__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__22__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__22__op_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__22__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__22__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__22__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__22__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__22__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__22__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__22__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__22__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__25__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__25__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__25__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__25__Vfuncout;
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
            goto __Vlabel7;
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
        __Vlabel7: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__28__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__28__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__28__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__28__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__28__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__28__op_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__28__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__28__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__28__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__28__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__28__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__28__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__28__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__28__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__31__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__31__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__31__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__31__Vfuncout;
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
            goto __Vlabel8;
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
        __Vlabel8: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__test_step = 2U;
    __Vtask_tb_polite_ctrl__DOT__tick__34__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__34__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__34__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__34__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__34__arg_v = 0xfU;
    __Vtask_tb_polite_ctrl__DOT__tick__34__op_v = 5U;
    __Vtask_tb_polite_ctrl__DOT__tick__34__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__34__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__34__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__34__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__34__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__34__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__34__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__34__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__37__Vfuncout;
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
            goto __Vlabel9;
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
        __Vlabel9: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    ++(vlSymsp->__Vcoverage[139]);
    __Vtask_tb_polite_ctrl__DOT__tick__34__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__34__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__34__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__34__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__34__arg_v = 0xfU;
    __Vtask_tb_polite_ctrl__DOT__tick__34__op_v = 5U;
    __Vtask_tb_polite_ctrl__DOT__tick__34__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__34__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__34__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__34__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__34__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__34__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__34__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__34__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__37__Vfuncout;
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
            goto __Vlabel10;
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
        __Vlabel10: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    ++(vlSymsp->__Vcoverage[139]);
    __Vtask_tb_polite_ctrl__DOT__tick__34__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__34__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__34__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__34__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__34__arg_v = 0xfU;
    __Vtask_tb_polite_ctrl__DOT__tick__34__op_v = 5U;
    __Vtask_tb_polite_ctrl__DOT__tick__34__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__34__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__34__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__34__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__34__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__34__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__34__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__34__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__37__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__37__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__37__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__37__Vfuncout;
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
            goto __Vlabel11;
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
        __Vlabel11: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    ++(vlSymsp->__Vcoverage[139]);
    __Vtask_tb_polite_ctrl__DOT__tick__40__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__40__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__40__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__40__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__40__arg_v = 0xfU;
    __Vtask_tb_polite_ctrl__DOT__tick__40__op_v = 5U;
    __Vtask_tb_polite_ctrl__DOT__tick__40__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__40__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__40__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__40__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__40__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__40__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__40__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__40__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__43__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__43__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__43__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__43__Vfuncout;
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
            goto __Vlabel12;
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
        __Vlabel12: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__46__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__46__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__46__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__46__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__46__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__46__op_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__46__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__46__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__46__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__46__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__46__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__46__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__46__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__46__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__49__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__49__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__49__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__49__Vfuncout;
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
            goto __Vlabel13;
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
        __Vlabel13: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__test_step = 3U;
    __Vtask_tb_polite_ctrl__DOT__tick__52__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__52__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__52__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__52__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__52__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__52__op_v = 3U;
    __Vtask_tb_polite_ctrl__DOT__tick__52__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__52__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__52__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__52__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__52__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__52__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__52__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__52__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__55__Vfuncout;
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
            goto __Vlabel14;
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
        __Vlabel14: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    ++(vlSymsp->__Vcoverage[140]);
    __Vtask_tb_polite_ctrl__DOT__tick__52__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__52__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__52__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__52__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__52__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__52__op_v = 3U;
    __Vtask_tb_polite_ctrl__DOT__tick__52__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__52__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__52__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__52__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__52__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__52__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__52__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__52__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__55__Vfuncout;
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
            goto __Vlabel15;
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
        __Vlabel15: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    ++(vlSymsp->__Vcoverage[140]);
    __Vtask_tb_polite_ctrl__DOT__tick__52__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__52__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__52__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__52__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__52__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__52__op_v = 3U;
    __Vtask_tb_polite_ctrl__DOT__tick__52__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__52__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__52__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__52__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__52__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__52__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__52__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__52__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__55__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__55__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__55__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__55__Vfuncout;
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
            goto __Vlabel16;
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
        __Vlabel16: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    ++(vlSymsp->__Vcoverage[140]);
    __Vtask_tb_polite_ctrl__DOT__tick__58__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__58__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__58__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__58__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__58__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__58__op_v = 3U;
    __Vtask_tb_polite_ctrl__DOT__tick__58__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__58__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__58__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__58__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__58__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__58__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__58__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__58__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__61__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__61__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__61__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__61__Vfuncout;
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
            goto __Vlabel17;
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
        __Vlabel17: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__64__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__64__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__64__dump_v = 1U;
    __Vtask_tb_polite_ctrl__DOT__tick__64__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__64__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__64__op_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__64__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__64__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__64__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__64__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__64__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__64__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__64__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__64__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__67__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__67__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__67__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__67__Vfuncout;
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
            goto __Vlabel18;
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
        __Vlabel18: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__test_step = 4U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
            goto __Vlabel19;
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
        __Vlabel19: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

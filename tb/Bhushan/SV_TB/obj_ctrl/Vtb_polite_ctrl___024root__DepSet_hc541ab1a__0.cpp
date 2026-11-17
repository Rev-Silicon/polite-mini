// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_ctrl.h for the primary calling header

#include "Vtb_polite_ctrl__pch.h"
#include "Vtb_polite_ctrl__Syms.h"
#include "Vtb_polite_ctrl___024root.h"
#include "Vtb_polite_ctrl___024unit__03a__03actrl_txn__Vclpkg.h"

VlCoroutine Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__0__2(Vtb_polite_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_ctrl___024root___eval_initial__TOP__Vtiming__0__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__154__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__154__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__154__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__154__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__154__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__154__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__154__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__154__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__154__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__154__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__154__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__154__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__154__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__154__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__157__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__157__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__157__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__157__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__157__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__157__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__157__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__157__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__157__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__157__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__157__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__157__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__160__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__160__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__160__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__160__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__160__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__160__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__160__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__160__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__160__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__160__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__160__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__160__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__160__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__160__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__163__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__163__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__163__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__163__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__163__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__163__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__163__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__163__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__163__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__163__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__163__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__163__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__166__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__166__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__166__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__166__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__166__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__166__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__166__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__166__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__166__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__166__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__166__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__166__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__166__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__166__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__169__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__169__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__169__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__169__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__169__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__169__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__169__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__172__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__172__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__172__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__172__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__172__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__172__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__172__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__172__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__172__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__172__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__172__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__172__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__172__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__172__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__175__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__175__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__175__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__175__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__175__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__175__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__175__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__175__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__175__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__175__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__175__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__175__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__178__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__178__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__178__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__178__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__178__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__178__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__178__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__178__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__178__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__178__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__178__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__178__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__178__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__178__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__181__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__181__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__181__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__181__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__181__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__181__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__181__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__181__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__181__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__181__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__181__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__181__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__185__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__185__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__185__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__185__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__185__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__185__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__185__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__185__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__185__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__185__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__185__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__185__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__185__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__185__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__188__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__188__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__188__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__188__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__188__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__188__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__188__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__188__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__188__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__188__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__188__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__188__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__191__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__191__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__191__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__191__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__191__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__191__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__191__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__191__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__191__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__191__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__191__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__191__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__191__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__191__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__194__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__194__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__194__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__194__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__194__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__194__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__194__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__194__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__194__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__194__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__194__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__194__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__197__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__197__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__197__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__197__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__197__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__197__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__197__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__197__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__197__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__197__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__197__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__197__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__197__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__197__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__200__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__200__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__200__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__200__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__200__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__200__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__200__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__200__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__200__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__200__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__200__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__200__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__203__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__203__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__203__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__203__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__203__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__203__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__203__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__203__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__203__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__203__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__203__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__203__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__203__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__203__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__206__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__206__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__206__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__206__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__206__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__206__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__206__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__206__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__206__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__206__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__206__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__206__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__209__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__209__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__209__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__209__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__209__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__209__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__209__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__209__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__209__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__209__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__209__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__209__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__209__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__209__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__212__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__212__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__212__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__212__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__212__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__212__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__212__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__212__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__212__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__212__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__212__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__212__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__215__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__215__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__215__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__215__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__215__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__215__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__215__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__215__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__215__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__215__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__215__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__215__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__215__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__215__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__218__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__218__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__218__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__218__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__218__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__218__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__218__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__218__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__218__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__218__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__218__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__218__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__221__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__221__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__221__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__221__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__221__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__221__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__221__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__221__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__221__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__221__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__221__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__221__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__221__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__221__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__224__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__224__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__224__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__224__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__224__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__224__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__224__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__224__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__224__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__224__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__224__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__224__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__227__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__227__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__227__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__227__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__227__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__227__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__227__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__227__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__227__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__227__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__227__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__227__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__227__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__227__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__230__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__230__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__230__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__230__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__230__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__230__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__230__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__230__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__230__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__230__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__230__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__230__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__233__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__233__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__233__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__233__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__233__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__233__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__233__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__233__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__233__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__233__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__233__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__233__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__233__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__233__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__236__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__236__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__236__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__236__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__236__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__236__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__236__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__236__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__236__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__236__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__236__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__236__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__239__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__239__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__239__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__239__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__239__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__239__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__239__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__239__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__239__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__239__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__239__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__239__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__239__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__239__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__242__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__242__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__242__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__242__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__242__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__242__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__242__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__242__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__242__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__242__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__242__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__242__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__245__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__245__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__245__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__245__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__245__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__245__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__245__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__245__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__245__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__245__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__245__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__245__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__245__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__245__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__248__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__248__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__248__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__248__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__248__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__248__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__248__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__248__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__248__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__248__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__248__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__248__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__acc_ovf = 0;
    IData/*31:0*/ __Vtask_tb_polite_ctrl__DOT__random_tests__251__n;
    __Vtask_tb_polite_ctrl__DOT__random_tests__251__n = 0;
    IData/*31:0*/ __Vtask_tb_polite_ctrl__DOT__random_tests__251__unnamedblk1__DOT__i;
    __Vtask_tb_polite_ctrl__DOT__random_tests__251__unnamedblk1__DOT__i = 0;
    VlClassRef<Vtb_polite_ctrl___024unit__03a__03actrl_txn> __Vtask_tb_polite_ctrl__DOT__random_tests__251__txn;
    IData/*31:0*/ __Vtask_randomize__253__Vfuncout;
    __Vtask_randomize__253__Vfuncout = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__254__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__254__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__254__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__254__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__254__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__254__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__254__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__254__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__254__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__254__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__254__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__254__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__254__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__254__pe_ovf_v = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__257__Vfuncout;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__257__Vfuncout = 0;
    IData/*30:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__257__op_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__257__op_v = 0;
    CData/*3:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__257__arg_v;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__257__arg_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__257__no_ob;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__257__no_ob = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__257__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__257__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__257__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__257__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__257__dbg_req;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__257__dbg_req = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__257__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__257__clr_coll = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__257__clr_ok;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__257__clr_ok = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__257__clr_flg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__257__clr_flg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__257__ill_set;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__257__ill_set = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__257__acc_ovf;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__257__acc_ovf = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__260__en_v;
    __Vtask_tb_polite_ctrl__DOT__tick__260__en_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__260__op_v;
    __Vtask_tb_polite_ctrl__DOT__tick__260__op_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_ctrl__DOT__tick__260__arg_v;
    __Vtask_tb_polite_ctrl__DOT__tick__260__arg_v = 0;
    CData/*7:0*/ __Vtask_tb_polite_ctrl__DOT__tick__260__d_v;
    __Vtask_tb_polite_ctrl__DOT__tick__260__d_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__260__dump_v;
    __Vtask_tb_polite_ctrl__DOT__tick__260__dump_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__260__fz_v;
    __Vtask_tb_polite_ctrl__DOT__tick__260__fz_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_ctrl__DOT__tick__260__pe_ovf_v;
    __Vtask_tb_polite_ctrl__DOT__tick__260__pe_ovf_v = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__263__is_dbg;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__263__is_dbg = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__263__bad_bank;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__263__bad_bank = 0;
    CData/*0:0*/ __Vfunc_tb_polite_ctrl__DOT__model_comb__263__clr_coll;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__263__clr_coll = 0;
    // Body
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
            goto __Vlabel41;
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
        __Vlabel41: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__test_step = 7U;
    __Vtask_tb_polite_ctrl__DOT__tick__154__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__154__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__154__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__154__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__154__arg_v = 1U;
    __Vtask_tb_polite_ctrl__DOT__tick__154__op_v = 5U;
    __Vtask_tb_polite_ctrl__DOT__tick__154__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__154__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__154__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__154__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__154__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__154__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__154__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__154__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__157__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__157__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__157__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__157__Vfuncout;
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
            goto __Vlabel42;
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
        __Vlabel42: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__160__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__160__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__160__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__160__d_v = 0x77U;
    __Vtask_tb_polite_ctrl__DOT__tick__160__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__160__op_v = 2U;
    __Vtask_tb_polite_ctrl__DOT__tick__160__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__160__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__160__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__160__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__160__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__160__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__160__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__160__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__163__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__163__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__163__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__163__Vfuncout;
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
            goto __Vlabel43;
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
        __Vlabel43: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__166__pe_ovf_v = 1U;
    __Vtask_tb_polite_ctrl__DOT__tick__166__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__166__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__166__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__166__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__166__op_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__166__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__166__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__166__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__166__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__166__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__166__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__166__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__166__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__169__Vfuncout;
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
            goto __Vlabel44;
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
        __Vlabel44: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    ++(vlSymsp->__Vcoverage[145]);
    __Vtask_tb_polite_ctrl__DOT__tick__166__pe_ovf_v = 1U;
    __Vtask_tb_polite_ctrl__DOT__tick__166__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__166__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__166__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__166__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__166__op_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__166__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__166__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__166__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__166__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__166__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__166__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__166__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__166__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__169__Vfuncout;
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
            goto __Vlabel45;
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
        __Vlabel45: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    ++(vlSymsp->__Vcoverage[145]);
    __Vtask_tb_polite_ctrl__DOT__tick__166__pe_ovf_v = 1U;
    __Vtask_tb_polite_ctrl__DOT__tick__166__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__166__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__166__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__166__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__166__op_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__166__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__166__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__166__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__166__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__166__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__166__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__166__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__166__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__169__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__169__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__169__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__169__Vfuncout;
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
            goto __Vlabel46;
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
        __Vlabel46: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    ++(vlSymsp->__Vcoverage[145]);
    __Vtask_tb_polite_ctrl__DOT__tick__172__pe_ovf_v = 1U;
    __Vtask_tb_polite_ctrl__DOT__tick__172__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__172__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__172__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__172__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__172__op_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__172__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__172__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__172__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__172__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__172__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__172__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__172__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__172__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__175__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__175__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__175__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__175__Vfuncout;
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
            goto __Vlabel47;
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
        __Vlabel47: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__178__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__178__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__178__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__178__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__178__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__178__op_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__178__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__178__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__178__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__178__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__178__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__178__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__178__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__178__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__181__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__181__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__181__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__181__Vfuncout;
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
            goto __Vlabel48;
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
        __Vlabel48: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__test_step = 0U;
    ++(vlSymsp->__Vcoverage[146]);
    VL_WRITEF_NX("[%0t] Directed tests\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    __Vtask_tb_polite_ctrl__DOT__tick__185__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__185__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__185__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__185__d_v = 0xa5U;
    __Vtask_tb_polite_ctrl__DOT__tick__185__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__185__op_v = 1U;
    __Vtask_tb_polite_ctrl__DOT__tick__185__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__185__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__185__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__185__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__185__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__185__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__185__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__185__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__188__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__188__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__188__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__188__Vfuncout;
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
            goto __Vlabel49;
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
        __Vlabel49: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__191__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__191__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__191__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__191__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__191__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__191__op_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__191__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__191__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__191__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__191__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__191__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__191__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__191__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__191__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__194__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__194__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__194__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__194__Vfuncout;
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
            goto __Vlabel50;
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
        __Vlabel50: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__197__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__197__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__197__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__197__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__197__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__197__op_v = 2U;
    __Vtask_tb_polite_ctrl__DOT__tick__197__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__197__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__197__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__197__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__197__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__197__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__197__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__197__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__200__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__200__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__200__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__200__Vfuncout;
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
            goto __Vlabel51;
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
        __Vlabel51: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__203__pe_ovf_v = 1U;
    __Vtask_tb_polite_ctrl__DOT__tick__203__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__203__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__203__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__203__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__203__op_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__203__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__203__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__203__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__203__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__203__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__203__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__203__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__203__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__206__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__206__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__206__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__206__Vfuncout;
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
            goto __Vlabel52;
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
        __Vlabel52: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__209__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__209__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__209__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__209__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__209__arg_v = 3U;
    __Vtask_tb_polite_ctrl__DOT__tick__209__op_v = 5U;
    __Vtask_tb_polite_ctrl__DOT__tick__209__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__209__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__209__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__209__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__209__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__209__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__209__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__209__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__212__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__212__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__212__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__212__Vfuncout;
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
            goto __Vlabel53;
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
        __Vlabel53: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__215__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__215__fz_v = 1U;
    __Vtask_tb_polite_ctrl__DOT__tick__215__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__215__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__215__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__215__op_v = 2U;
    __Vtask_tb_polite_ctrl__DOT__tick__215__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__215__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__215__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__215__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__215__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__215__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__215__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__215__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__218__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__218__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__218__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__218__Vfuncout;
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
            goto __Vlabel54;
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
        __Vlabel54: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__221__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__221__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__221__dump_v = 1U;
    __Vtask_tb_polite_ctrl__DOT__tick__221__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__221__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__221__op_v = 3U;
    __Vtask_tb_polite_ctrl__DOT__tick__221__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__221__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__221__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__221__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__221__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__221__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__221__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__221__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__224__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__224__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__224__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__224__Vfuncout;
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
            goto __Vlabel55;
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
        __Vlabel55: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__227__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__227__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__227__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__227__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__227__arg_v = 1U;
    __Vtask_tb_polite_ctrl__DOT__tick__227__op_v = 6U;
    __Vtask_tb_polite_ctrl__DOT__tick__227__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__227__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__227__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__227__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__227__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__227__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__227__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__227__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__230__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__230__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__230__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__230__Vfuncout;
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
            goto __Vlabel56;
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
        __Vlabel56: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__233__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__233__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__233__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__233__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__233__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__233__op_v = 0xfU;
    __Vtask_tb_polite_ctrl__DOT__tick__233__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__233__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__233__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__233__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__233__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__233__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__233__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__233__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__236__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__236__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__236__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__236__Vfuncout;
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
            goto __Vlabel57;
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
        __Vlabel57: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__239__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__239__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__239__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__239__d_v = 0x3cU;
    __Vtask_tb_polite_ctrl__DOT__tick__239__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__239__op_v = 1U;
    __Vtask_tb_polite_ctrl__DOT__tick__239__en_v = 0U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__239__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__239__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__239__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__239__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__239__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__239__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__239__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__242__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__242__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__242__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__242__Vfuncout;
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
            goto __Vlabel58;
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
        __Vlabel58: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    __Vtask_tb_polite_ctrl__DOT__tick__245__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__245__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__245__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__245__d_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__245__arg_v = 1U;
    __Vtask_tb_polite_ctrl__DOT__tick__245__op_v = 5U;
    __Vtask_tb_polite_ctrl__DOT__tick__245__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__245__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__245__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__245__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__245__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__245__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__245__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__245__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__is_dbg 
        = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__op_v)) 
           & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__bad_bank 
        = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__op_v)) 
           & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__arg_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__clr_coll 
        = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__no_ob))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__clr_ok 
        = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__clr_coll)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__clr_flg 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__clr_ok) 
           & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__arg_v));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__ill_set 
        = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__no_ob)))) 
               | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__op_v)) 
                  & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__no_ob))) 
              | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__bad_bank)) 
            | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e 
        = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e 
        = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                             & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__clr_ok)) 
                                            << 0x1aU) 
                                           & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__arg_v) 
                                              << 0x17U)))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e 
        = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e) 
           | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__clr_ok)) 
                              << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__arg_v) 
                                           << 0x17U))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e 
        = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__op_v))) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__no_ob))) 
              << 0x18U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e 
        = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__op_v))) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__no_ob))) 
              << 0x17U));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e 
        = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e) 
           | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__dbg_req)) 
                & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__op_v) 
                            << 0x12U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e 
        = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e) 
           | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__arg_v) 
                          << 0x10U)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e 
        = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__ill_set) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__clr_flg)))) 
              << 0x1eU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e 
        = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e) 
           | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__acc_ovf) 
               | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                  & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__clr_flg)))) 
              << 0x1dU));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e 
        = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e) 
           | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                           << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                        << 0xdU) | 
                                       (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                         | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__acc_ovf)) 
                                        << 0xcU))) 
                         | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                              << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                          << 0xaU)) 
                            | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                          << 8U))))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e 
        = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e) 
           | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__op_v))
               ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
               : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__clr_ok) 
                   & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__248__arg_v) 
                      >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__248__Vfuncout 
        = __Vfunc_tb_polite_ctrl__DOT__model_comb__248__e;
    ++(vlSymsp->__Vcoverage[106]);
    vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__248__Vfuncout;
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
            goto __Vlabel59;
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
        __Vlabel59: ;
    }
    ++(vlSymsp->__Vcoverage[127]);
    co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         262);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    ++(vlSymsp->__Vcoverage[137]);
    __Vtask_tb_polite_ctrl__DOT__random_tests__251__n = 0x7d0U;
    __Vtask_tb_polite_ctrl__DOT__random_tests__251__txn 
        = VL_NEW(Vtb_polite_ctrl___024unit__03a__03actrl_txn, vlSymsp);
    VL_WRITEF_NX("[%0t] Random tests: %0d ticks\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_polite_ctrl__DOT__random_tests__251__n);
    __Vtask_tb_polite_ctrl__DOT__random_tests__251__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_polite_ctrl__DOT__random_tests__251__unnamedblk1__DOT__i, __Vtask_tb_polite_ctrl__DOT__random_tests__251__n)) {
        if (VL_LIKELY((0U != ([&]() {
                            VL_NULL_CHECK(__Vtask_tb_polite_ctrl__DOT__random_tests__251__txn, "polite_ctrl_tb.sv", 363)
                              ->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__253__Vfuncout);
                        }(), __Vtask_randomize__253__Vfuncout)))) {
            ++(vlSymsp->__Vcoverage[147]);
        } else {
            VL_WRITEF_NX("[%0t] %%Fatal: polite_ctrl_tb.sv:363: Assertion failed in %Ntb_polite_ctrl.random_tests.unnamedblk1: randomize() failed\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("polite_ctrl_tb.sv", 363, "", false);
        }
        __Vtask_tb_polite_ctrl__DOT__tick__254__pe_ovf_v 
            = VL_NULL_CHECK(__Vtask_tb_polite_ctrl__DOT__random_tests__251__txn, "polite_ctrl_tb.sv", 365)
            ->__PVT__pe_ovf_any;
        __Vtask_tb_polite_ctrl__DOT__tick__254__fz_v 
            = VL_NULL_CHECK(__Vtask_tb_polite_ctrl__DOT__random_tests__251__txn, "polite_ctrl_tb.sv", 365)
            ->__PVT__fz_open;
        __Vtask_tb_polite_ctrl__DOT__tick__254__dump_v 
            = VL_NULL_CHECK(__Vtask_tb_polite_ctrl__DOT__random_tests__251__txn, "polite_ctrl_tb.sv", 365)
            ->__PVT__dump_busy;
        __Vtask_tb_polite_ctrl__DOT__tick__254__d_v 
            = VL_NULL_CHECK(__Vtask_tb_polite_ctrl__DOT__random_tests__251__txn, "polite_ctrl_tb.sv", 364)
            ->__PVT__d;
        __Vtask_tb_polite_ctrl__DOT__tick__254__arg_v 
            = VL_NULL_CHECK(__Vtask_tb_polite_ctrl__DOT__random_tests__251__txn, "polite_ctrl_tb.sv", 364)
            ->__PVT__arg;
        __Vtask_tb_polite_ctrl__DOT__tick__254__op_v 
            = VL_NULL_CHECK(__Vtask_tb_polite_ctrl__DOT__random_tests__251__txn, "polite_ctrl_tb.sv", 364)
            ->__PVT__op;
        __Vtask_tb_polite_ctrl__DOT__tick__254__en_v 
            = VL_NULL_CHECK(__Vtask_tb_polite_ctrl__DOT__random_tests__251__txn, "polite_ctrl_tb.sv", 364)
            ->__PVT__en;
        co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_polite_ctrl.clk)", 
                                                             "polite_ctrl_tb.sv", 
                                                             252);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_polite_ctrl__DOT__chk_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__phase) 
                         != (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase)))) {
            vlSelfRef.tb_polite_ctrl__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:236: Assertion failed in %Ntb_polite_ctrl.check_regs: [%0t] phase mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,1,(IData)(vlSelfRef.tb_polite_ctrl__DOT__phase),
                         1,vlSelfRef.tb_polite_ctrl__DOT__m_phase,
                         8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                         8,vlSelfRef.tb_polite_ctrl__DOT__d);
            VL_STOP_MT("polite_ctrl_tb.sv", 236, "");
        } else {
            ++(vlSymsp->__Vcoverage[128]);
        }
        vlSelfRef.tb_polite_ctrl__DOT__chk_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__run_busy) 
                         != (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)))) {
            vlSelfRef.tb_polite_ctrl__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:237: Assertion failed in %Ntb_polite_ctrl.check_regs: [%0t] run_busy mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,1,(IData)(vlSelfRef.tb_polite_ctrl__DOT__run_busy),
                         1,vlSelfRef.tb_polite_ctrl__DOT__m_run_busy,
                         8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                         8,vlSelfRef.tb_polite_ctrl__DOT__d);
            VL_STOP_MT("polite_ctrl_tb.sv", 237, "");
        } else {
            ++(vlSymsp->__Vcoverage[129]);
        }
        vlSelfRef.tb_polite_ctrl__DOT__chk_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf) 
                         != (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf)))) {
            vlSelfRef.tb_polite_ctrl__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:238: Assertion failed in %Ntb_polite_ctrl.check_regs: [%0t] inbuf mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__inbuf),
                         8,vlSelfRef.tb_polite_ctrl__DOT__m_inbuf,
                         8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                         8,vlSelfRef.tb_polite_ctrl__DOT__d);
            VL_STOP_MT("polite_ctrl_tb.sv", 238, "");
        } else {
            ++(vlSymsp->__Vcoverage[130]);
        }
        vlSelfRef.tb_polite_ctrl__DOT__chk_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__illegal) 
                         != (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal)))) {
            vlSelfRef.tb_polite_ctrl__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:239: Assertion failed in %Ntb_polite_ctrl.check_regs: [%0t] illegal mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,1,(IData)(vlSelfRef.tb_polite_ctrl__DOT__illegal),
                         1,vlSelfRef.tb_polite_ctrl__DOT__m_illegal,
                         8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                         8,vlSelfRef.tb_polite_ctrl__DOT__d);
            VL_STOP_MT("polite_ctrl_tb.sv", 239, "");
        } else {
            ++(vlSymsp->__Vcoverage[131]);
        }
        vlSelfRef.tb_polite_ctrl__DOT__chk_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__ovf) 
                         != (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf)))) {
            vlSelfRef.tb_polite_ctrl__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:240: Assertion failed in %Ntb_polite_ctrl.check_regs: [%0t] ovf mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,1,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ovf),
                         1,vlSelfRef.tb_polite_ctrl__DOT__m_ovf,
                         8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                         8,vlSelfRef.tb_polite_ctrl__DOT__d);
            VL_STOP_MT("polite_ctrl_tb.sv", 240, "");
        } else {
            ++(vlSymsp->__Vcoverage[132]);
        }
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__254__en_v;
        vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__254__op_v) 
                                               << 4U) 
                                              | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__254__arg_v));
        vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__254__d_v;
        vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__254__dump_v;
        vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__254__fz_v;
        vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__254__pe_ovf_v;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "polite_ctrl_tb.sv", 
                                             260);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__op_v 
            = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                       >> 4U));
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__arg_v 
            = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__no_ob = 0U;
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__is_dbg 
            = ((6U <= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__op_v)) 
               & (0xbU >= (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__op_v)));
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__bad_bank 
            = ((6U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__op_v)) 
               & (0U != (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__arg_v)));
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__dbg_req 
            = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__is_dbg) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__bad_bank)));
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__clr_coll 
            = ((((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__arg_v) 
                 >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
               | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__arg_v) 
                   >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__no_ob))));
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__clr_ok 
            = ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__op_v)) 
               & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__clr_coll)));
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__clr_flg 
            = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__clr_ok) 
               & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__arg_v));
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__acc_ovf 
            = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__ill_set 
            = ((((((((2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__op_v)) 
                     & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                    | ((3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__op_v)) 
                       & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                          | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__no_ob)))) 
                   | ((4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__op_v)) 
                      & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__no_ob))) 
                  | ((5U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__op_v)) 
                     & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__clr_coll))) 
                 | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__bad_bank)) 
                | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__dbg_req) 
                   & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
               | (0xbU < (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__op_v)));
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e 
            = ((0x6fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e) 
               | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                    & (2U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__op_v))) 
                   & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
                  << 0x1cU));
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e 
            = ((0x73ffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e) 
               | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                    & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
                   << 0x1bU) | (0xfc000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__clr_ok)) 
                                                << 0x1aU) 
                                               & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__arg_v) 
                                                  << 0x17U)))));
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e 
            = ((0x7dffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e) 
               | (0xfe000000U & ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                                   & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__clr_ok)) 
                                  << 0x19U) & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__arg_v) 
                                               << 0x17U))));
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e 
            = ((0x7effffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e) 
               | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                     & (3U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__op_v))) 
                    & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy))) 
                   & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__no_ob))) 
                  << 0x18U));
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e 
            = ((0x7f7fffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e) 
               | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                    & (4U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__op_v))) 
                   & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__no_ob))) 
                  << 0x17U));
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e 
            = ((0x7f83ffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e) 
               | (((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                     & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__dbg_req)) 
                    & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
                   << 0x16U) | ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__op_v) 
                                << 0x12U)));
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e 
            = ((0x7ffcffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e) 
               | (0x30000U & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__arg_v) 
                              << 0x10U)));
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e 
            = ((0x3fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e) 
               | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__ill_set) 
                   | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                      & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__clr_flg)))) 
                  << 0x1eU));
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e 
            = ((0x5fffffffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e) 
               | (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__acc_ovf) 
                   | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                      & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__clr_flg)))) 
                  << 0x1dU));
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e 
            = ((0x7fff00ffU & __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e) 
               | (0x8000U | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                               << 0xeU) | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_illegal) 
                                            << 0xdU) 
                                           | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_ovf) 
                                               | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__acc_ovf)) 
                                              << 0xcU))) 
                             | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                  << 0xbU) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase) 
                                              << 0xaU)) 
                                | (((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                                    << 9U) | ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
                                              << 8U))))));
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e 
            = ((0x7fffff00U & __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e) 
               | ((1U == (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__op_v))
                   ? (IData)(vlSelfRef.tb_polite_ctrl__DOT__d)
                   : (((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__clr_ok) 
                       & ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__257__arg_v) 
                          >> 1U)) ? 0U : (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_inbuf))));
        __Vfunc_tb_polite_ctrl__DOT__model_comb__257__Vfuncout 
            = __Vfunc_tb_polite_ctrl__DOT__model_comb__257__e;
        ++(vlSymsp->__Vcoverage[106]);
        vlSelfRef.tb_polite_ctrl__DOT__exp_now = __Vfunc_tb_polite_ctrl__DOT__model_comb__257__Vfuncout;
        vlSelfRef.tb_polite_ctrl__DOT__chk_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__illegal_d) 
                         != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                   >> 0x1eU))))) {
            vlSelfRef.tb_polite_ctrl__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:209: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] illegal_d mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,1,(IData)(vlSelfRef.tb_polite_ctrl__DOT__illegal_d),
                         1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                  >> 0x1eU)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                         8,vlSelfRef.tb_polite_ctrl__DOT__d);
            VL_STOP_MT("polite_ctrl_tb.sv", 209, "");
        } else {
            ++(vlSymsp->__Vcoverage[111]);
        }
        vlSelfRef.tb_polite_ctrl__DOT__chk_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__ovf_d) 
                         != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                   >> 0x1dU))))) {
            vlSelfRef.tb_polite_ctrl__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:210: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] ovf_d mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,1,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ovf_d),
                         1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                  >> 0x1dU)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                         8,vlSelfRef.tb_polite_ctrl__DOT__d);
            VL_STOP_MT("polite_ctrl_tb.sv", 210, "");
        } else {
            ++(vlSymsp->__Vcoverage[112]);
        }
        vlSelfRef.tb_polite_ctrl__DOT__chk_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__run_now) 
                         != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                   >> 0x1cU))))) {
            vlSelfRef.tb_polite_ctrl__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:211: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] run_now mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,1,(IData)(vlSelfRef.tb_polite_ctrl__DOT__run_now),
                         1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                  >> 0x1cU)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                         8,vlSelfRef.tb_polite_ctrl__DOT__d);
            VL_STOP_MT("polite_ctrl_tb.sv", 211, "");
        } else {
            ++(vlSymsp->__Vcoverage[113]);
        }
        vlSelfRef.tb_polite_ctrl__DOT__chk_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__acc_en) 
                         != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                   >> 0x1bU))))) {
            vlSelfRef.tb_polite_ctrl__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:212: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] acc_en mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,1,(IData)(vlSelfRef.tb_polite_ctrl__DOT__acc_en),
                         1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                  >> 0x1bU)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                         8,vlSelfRef.tb_polite_ctrl__DOT__d);
            VL_STOP_MT("polite_ctrl_tb.sv", 212, "");
        } else {
            ++(vlSymsp->__Vcoverage[114]);
        }
        vlSelfRef.tb_polite_ctrl__DOT__chk_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__clr_psum) 
                         != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                   >> 0x1aU))))) {
            vlSelfRef.tb_polite_ctrl__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:213: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] clr_psum mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,1,(IData)(vlSelfRef.tb_polite_ctrl__DOT__clr_psum),
                         1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                  >> 0x1aU)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                         8,vlSelfRef.tb_polite_ctrl__DOT__d);
            VL_STOP_MT("polite_ctrl_tb.sv", 213, "");
        } else {
            ++(vlSymsp->__Vcoverage[115]);
        }
        vlSelfRef.tb_polite_ctrl__DOT__chk_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__clr_outbuf) 
                         != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                   >> 0x19U))))) {
            vlSelfRef.tb_polite_ctrl__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:214: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] clr_outbuf mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,1,(IData)(vlSelfRef.tb_polite_ctrl__DOT__clr_outbuf),
                         1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                  >> 0x19U)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                         8,vlSelfRef.tb_polite_ctrl__DOT__d);
            VL_STOP_MT("polite_ctrl_tb.sv", 214, "");
        } else {
            ++(vlSymsp->__Vcoverage[116]);
        }
        vlSelfRef.tb_polite_ctrl__DOT__chk_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_load) 
                         != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                   >> 0x18U))))) {
            vlSelfRef.tb_polite_ctrl__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:215: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] dump_load mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,1,(IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_load),
                         1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                  >> 0x18U)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                         8,vlSelfRef.tb_polite_ctrl__DOT__d);
            VL_STOP_MT("polite_ctrl_tb.sv", 215, "");
        } else {
            ++(vlSymsp->__Vcoverage[117]);
        }
        vlSelfRef.tb_polite_ctrl__DOT__chk_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_abort) 
                         != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                   >> 0x17U))))) {
            vlSelfRef.tb_polite_ctrl__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:216: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] dump_abort mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,1,(IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_abort),
                         1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                  >> 0x17U)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                         8,vlSelfRef.tb_polite_ctrl__DOT__d);
            VL_STOP_MT("polite_ctrl_tb.sv", 216, "");
        } else {
            ++(vlSymsp->__Vcoverage[118]);
        }
        vlSelfRef.tb_polite_ctrl__DOT__chk_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__dbg_start) 
                         != (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                   >> 0x16U))))) {
            vlSelfRef.tb_polite_ctrl__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:217: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] dbg_start mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,1,(IData)(vlSelfRef.tb_polite_ctrl__DOT__dbg_start),
                         1,(1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                  >> 0x16U)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                         8,vlSelfRef.tb_polite_ctrl__DOT__d);
            VL_STOP_MT("polite_ctrl_tb.sv", 217, "");
        } else {
            ++(vlSymsp->__Vcoverage[119]);
        }
        vlSelfRef.tb_polite_ctrl__DOT__chk_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__dbg_op) 
                         != (0xfU & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                     >> 0x12U))))) {
            vlSelfRef.tb_polite_ctrl__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:218: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] dbg_op mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,4,(IData)(vlSelfRef.tb_polite_ctrl__DOT__dbg_op),
                         4,(0xfU & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                    >> 0x12U)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                         8,vlSelfRef.tb_polite_ctrl__DOT__d);
            VL_STOP_MT("polite_ctrl_tb.sv", 218, "");
        } else {
            ++(vlSymsp->__Vcoverage[120]);
        }
        vlSelfRef.tb_polite_ctrl__DOT__chk_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__dbg_pe) 
                         != (3U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                   >> 0x10U))))) {
            vlSelfRef.tb_polite_ctrl__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:219: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] dbg_pe mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,2,(IData)(vlSelfRef.tb_polite_ctrl__DOT__dbg_pe),
                         2,(3U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                  >> 0x10U)),8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__ins),
                         8,vlSelfRef.tb_polite_ctrl__DOT__d);
            VL_STOP_MT("polite_ctrl_tb.sv", 219, "");
        } else {
            ++(vlSymsp->__Vcoverage[121]);
        }
        vlSelfRef.tb_polite_ctrl__DOT__chk_count = 
            ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_ctrl__DOT__status) 
                         != (0xffU & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                                      >> 8U))))) {
            vlSelfRef.tb_polite_ctrl__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:220: Assertion failed in %Ntb_polite_ctrl.check_comb: [%0t] status mismatch: got %0x exp %0x (ins=%02x d=%02x)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,8,(IData)(vlSelfRef.tb_polite_ctrl__DOT__status),
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
                goto __Vlabel60;
            } else {
                ++(vlSymsp->__Vcoverage[125]);
            }
            vlSelfRef.tb_polite_ctrl__DOT__chk_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__chk_count);
            if (VL_UNLIKELY((0U != (IData)(vlSelfRef.tb_polite_ctrl__DOT__cmd_strobes)))) {
                vlSelfRef.tb_polite_ctrl__DOT__err_count 
                    = ((IData)(1U) + vlSelfRef.tb_polite_ctrl__DOT__err_count);
                VL_WRITEF_NX("[%0t] %%Error: polite_ctrl_tb.sv:229: Assertion failed in %Ntb_polite_ctrl.check_hold_quiet: [%0t] step %0d: command output asserted on a hold edge (ins=%02x): run_now=%b acc_en=%b clr_psum=%b clr_outbuf=%b dump_load=%b dump_abort=%b dbg_start=%b\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1000),
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
            __Vlabel60: ;
        }
        ++(vlSymsp->__Vcoverage[127]);
        co_await vlSelfRef.__VtrigSched_h8f84950f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_polite_ctrl.clk)", 
                                                             "polite_ctrl_tb.sv", 
                                                             262);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        if (vlSelfRef.tb_polite_ctrl__DOT__en) {
            vlSelfRef.tb_polite_ctrl__DOT__m_phase 
                = (1U & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_phase)));
            vlSelfRef.tb_polite_ctrl__DOT__m_run_busy 
                = (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                         >> 0x1cU));
            vlSelfRef.tb_polite_ctrl__DOT__m_inbuf 
                = (0xffU & vlSelfRef.tb_polite_ctrl__DOT__exp_now);
            vlSelfRef.tb_polite_ctrl__DOT__m_illegal 
                = (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                         >> 0x1eU));
            vlSelfRef.tb_polite_ctrl__DOT__m_ovf = 
                (1U & (vlSelfRef.tb_polite_ctrl__DOT__exp_now 
                       >> 0x1dU));
            ++(vlSymsp->__Vcoverage[108]);
        } else {
            ++(vlSymsp->__Vcoverage[109]);
        }
        ++(vlSymsp->__Vcoverage[110]);
        ++(vlSymsp->__Vcoverage[134]);
        ++(vlSymsp->__Vcoverage[148]);
        __Vtask_tb_polite_ctrl__DOT__random_tests__251__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_polite_ctrl__DOT__random_tests__251__unnamedblk1__DOT__i);
    }
    ++(vlSymsp->__Vcoverage[149]);
    __Vtask_tb_polite_ctrl__DOT__tick__260__pe_ovf_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__260__fz_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__260__dump_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__260__d_v = 0xffU;
    __Vtask_tb_polite_ctrl__DOT__tick__260__arg_v = 0U;
    __Vtask_tb_polite_ctrl__DOT__tick__260__op_v = 1U;
    __Vtask_tb_polite_ctrl__DOT__tick__260__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_h8f848dce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_ctrl.clk)", 
                                                         "polite_ctrl_tb.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
    vlSelfRef.tb_polite_ctrl__DOT__en = __Vtask_tb_polite_ctrl__DOT__tick__260__en_v;
    vlSelfRef.tb_polite_ctrl__DOT__ins = (((IData)(__Vtask_tb_polite_ctrl__DOT__tick__260__op_v) 
                                           << 4U) | (IData)(__Vtask_tb_polite_ctrl__DOT__tick__260__arg_v));
    vlSelfRef.tb_polite_ctrl__DOT__d = __Vtask_tb_polite_ctrl__DOT__tick__260__d_v;
    vlSelfRef.tb_polite_ctrl__DOT__dump_busy = __Vtask_tb_polite_ctrl__DOT__tick__260__dump_v;
    vlSelfRef.tb_polite_ctrl__DOT__fz_open = __Vtask_tb_polite_ctrl__DOT__tick__260__fz_v;
    vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any = __Vtask_tb_polite_ctrl__DOT__tick__260__pe_ovf_v;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_ctrl_tb.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__op_v 
        = (0xfU & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__ins) 
                   >> 4U));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__arg_v 
        = (0xfU & (IData)(vlSelfRef.tb_polite_ctrl__DOT__ins));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__no_ob = 0U;
    __Vfunc_tb_polite_ctrl__DOT__model_comb__263__is_dbg 
        = ((6U <= (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__op_v)) 
           & (0xbU >= (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__op_v)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__263__bad_bank 
        = ((6U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__op_v)) 
           & (0U != (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__arg_v)));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__dbg_req 
        = ((IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__263__is_dbg) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__263__bad_bank)));
    __Vfunc_tb_polite_ctrl__DOT__model_comb__263__clr_coll 
        = ((((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__arg_v) 
             >> 3U) & (IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy)) 
           | (((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__arg_v) 
               >> 2U) & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                         | (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__no_ob))));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__clr_ok 
        = ((5U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__op_v)) 
           & (~ (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__263__clr_coll)));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__clr_flg 
        = ((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__clr_ok) 
           & (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__arg_v));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__acc_ovf 
        = ((IData)(vlSelfRef.tb_polite_ctrl__DOT__m_run_busy) 
           & (IData)(vlSelfRef.tb_polite_ctrl__DOT__pe_ovf_any));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__ill_set 
        = ((((((((2U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__op_v)) 
                 & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open)) 
                | ((3U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__op_v)) 
                   & ((IData)(vlSelfRef.tb_polite_ctrl__DOT__dump_busy) 
                      | (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__no_ob)))) 
               | ((4U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__op_v)) 
                  & (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__no_ob))) 
              | ((5U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__op_v)) 
                 & (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__263__clr_coll))) 
             | (IData)(__Vfunc_tb_polite_ctrl__DOT__model_comb__263__bad_bank)) 
            | ((IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__dbg_req) 
               & (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
           | (0xbU < (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__op_v)));
    vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e 
        = ((0x6fffffffU & vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__e) 
           | ((((IData)(vlSelfRef.tb_polite_ctrl__DOT__en) 
                & (2U == (IData)(vlSelfRef.__Vfunc_tb_polite_ctrl__DOT__model_comb__263__op_v))) 
               & (~ (IData)(vlSelfRef.tb_polite_ctrl__DOT__fz_open))) 
              << 0x1cU));
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

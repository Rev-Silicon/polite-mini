// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_dbg.h for the primary calling header

#include "Vtb_polite_dbg__pch.h"
#include "Vtb_polite_dbg__Syms.h"
#include "Vtb_polite_dbg___024root.h"

VlCoroutine Vtb_polite_dbg___024root___eval_initial__TOP__Vtiming__0__0(Vtb_polite_dbg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root___eval_initial__TOP__Vtiming__0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelfRef.tb_polite_dbg__DOT__unnamedblk11__DOT__n_rand = 0x1388U;
    __Vtemp_1[0U] = 0x653d2573U;
    __Vtemp_1[1U] = 0x7066696cU;
    __Vtemp_1[2U] = 0x64756dU;
    if (VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                             vlSelfRef.tb_polite_dbg__DOT__unnamedblk11__DOT__dumpfile)) {
        ++(vlSymsp->__Vcoverage[474]);
    } else {
        vlSelfRef.tb_polite_dbg__DOT__unnamedblk11__DOT__dumpfile = 
            std::string{"../logs_waveforms/tb_polite_dbg.vcd"};
        ++(vlSymsp->__Vcoverage[473]);
    }
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NN(vlSelfRef.tb_polite_dbg__DOT__unnamedblk11__DOT__dumpfile));
    vlSymsp->_traceDumpOpen();
    if (VL_VALUEPLUSARGS_INN(64, std::string{"TEST=%s"}, 
                             vlSelfRef.tb_polite_dbg__DOT__unnamedblk11__DOT__test_name)) {
        ++(vlSymsp->__Vcoverage[476]);
    } else {
        vlSelfRef.tb_polite_dbg__DOT__unnamedblk11__DOT__test_name = 
            std::string{"all"};
        ++(vlSymsp->__Vcoverage[475]);
    }
    (void)VL_VALUEPLUSARGS_INI(32, std::string{"NUM=%d"}, 
                               vlSelfRef.tb_polite_dbg__DOT__unnamedblk11__DOT__n_rand);
    vlSelfRef.tb_polite_dbg__DOT__rst_n = 0U;
    vlSelfRef.tb_polite_dbg__DOT__en = 0U;
    vlSelfRef.tb_polite_dbg__DOT__start = 0U;
    vlSelfRef.tb_polite_dbg__DOT__op = 6U;
    vlSelfRef.tb_polite_dbg__DOT__pe = 0U;
    vlSelfRef.tb_polite_dbg__DOT__run_busy = 0U;
    vlSelfRef.tb_polite_dbg__DOT__status = 0U;
    vlSelfRef.tb_polite_dbg__DOT__inbuf = 0U;
    vlSelfRef.tb_polite_dbg__DOT__d = 0U;
    vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] = 0U;
    vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] = 0U;
    vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] = 0U;
    vlSelfRef.tb_polite_dbg__DOT__mul_all = 0U;
    vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] = 0U;
    vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] = 0U;
    vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] = 0U;
    vlSelfRef.tb_polite_dbg__DOT__m_left = 0U;
    vlSelfRef.tb_polite_dbg__DOT__m_k = 0U;
    vlSelfRef.tb_polite_dbg__DOT__m_val = 0U;
    vlSelfRef.tb_polite_dbg__DOT__sb_active = 0U;
    vlSelfRef.tb_polite_dbg__DOT__prev_open = 0U;
    ++(vlSymsp->__Vcoverage[398]);
    co_await vlSelfRef.__VtrigSched_hd5d9f447__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_dbg.clk)", 
                                                         "polite_dbg_tb.sv", 
                                                         310);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    ++(vlSymsp->__Vcoverage[441]);
    co_await vlSelfRef.__VtrigSched_hd5d9f447__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_dbg.clk)", 
                                                         "polite_dbg_tb.sv", 
                                                         310);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    ++(vlSymsp->__Vcoverage[441]);
    co_await vlSelfRef.__VtrigSched_hd5d9f447__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_dbg.clk)", 
                                                         "polite_dbg_tb.sv", 
                                                         310);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    ++(vlSymsp->__Vcoverage[441]);
    co_await vlSelfRef.__VtrigSched_hd5d9f406__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_dbg.clk)", 
                                                         "polite_dbg_tb.sv", 
                                                         311);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_polite_dbg__DOT__rst_n = 1U;
    vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                               + vlSelfRef.tb_polite_dbg__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left) 
                     != (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left)))) {
        vlSelfRef.tb_polite_dbg__DOT__err_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:250: Assertion failed in %Ntb_polite_dbg.check_regs: [%0t] dut.fz_left mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left),
                     4,vlSelfRef.tb_polite_dbg__DOT__m_left,
                     4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                     2,vlSelfRef.tb_polite_dbg__DOT__pe,
                     1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                     1,vlSelfRef.tb_polite_dbg__DOT__phase);
        VL_STOP_MT("polite_dbg_tb.sv", 250, "");
    } else {
        ++(vlSymsp->__Vcoverage[431]);
    }
    vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                               + vlSelfRef.tb_polite_dbg__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k) 
                     != (IData)(vlSelfRef.tb_polite_dbg__DOT__m_k)))) {
        vlSelfRef.tb_polite_dbg__DOT__err_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:251: Assertion failed in %Ntb_polite_dbg.check_regs: [%0t] dut.fz_k mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,3,
                     (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k),
                     3,vlSelfRef.tb_polite_dbg__DOT__m_k,
                     4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                     2,vlSelfRef.tb_polite_dbg__DOT__pe,
                     1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                     1,vlSelfRef.tb_polite_dbg__DOT__phase);
        VL_STOP_MT("polite_dbg_tb.sv", 251, "");
    } else {
        ++(vlSymsp->__Vcoverage[432]);
    }
    vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                               + vlSelfRef.tb_polite_dbg__DOT__chk_count);
    if (VL_UNLIKELY((vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                     != vlSelfRef.tb_polite_dbg__DOT__m_val))) {
        vlSelfRef.tb_polite_dbg__DOT__err_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:252: Assertion failed in %Ntb_polite_dbg.check_regs: [%0t] dut.fz_val mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,24,
                     vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val,
                     24,vlSelfRef.tb_polite_dbg__DOT__m_val,
                     4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                     2,vlSelfRef.tb_polite_dbg__DOT__pe,
                     1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                     1,vlSelfRef.tb_polite_dbg__DOT__phase);
        VL_STOP_MT("polite_dbg_tb.sv", 252, "");
    } else {
        ++(vlSymsp->__Vcoverage[433]);
    }
    ++(vlSymsp->__Vcoverage[434]);
    ++(vlSymsp->__Vcoverage[442]);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VlCoroutine Vtb_polite_dbg___024root___eval_initial__TOP__Vtiming__0__2(Vtb_polite_dbg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root___eval_initial__TOP__Vtiming__0__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtask_tb_polite_dbg__DOT__tick__647__en_v;
    __Vtask_tb_polite_dbg__DOT__tick__647__en_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_dbg__DOT__tick__647__req_v;
    __Vtask_tb_polite_dbg__DOT__tick__647__req_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_dbg__DOT__tick__647__op_v;
    __Vtask_tb_polite_dbg__DOT__tick__647__op_v = 0;
    CData/*1:0*/ __Vtask_tb_polite_dbg__DOT__tick__647__pe_v;
    __Vtask_tb_polite_dbg__DOT__tick__647__pe_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_dbg__DOT__tick__647__rb_v;
    __Vtask_tb_polite_dbg__DOT__tick__647__rb_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_dbg__DOT__check_comb__649__open_e;
    __Vtask_tb_polite_dbg__DOT__check_comb__649__open_e = 0;
    CData/*0:0*/ __Vtask_tb_polite_dbg__DOT__check_comb__649__ofz_e;
    __Vtask_tb_polite_dbg__DOT__check_comb__649__ofz_e = 0;
    CData/*0:0*/ __Vtask_tb_polite_dbg__DOT__check_comb__649__tick_e;
    __Vtask_tb_polite_dbg__DOT__check_comb__649__tick_e = 0;
    IData/*23:0*/ __Vtask_tb_polite_dbg__DOT__check_comb__649__val_e;
    __Vtask_tb_polite_dbg__DOT__check_comb__649__val_e = 0;
    CData/*2:0*/ __Vtask_tb_polite_dbg__DOT__check_comb__649__k_e;
    __Vtask_tb_polite_dbg__DOT__check_comb__649__k_e = 0;
    IData/*23:0*/ __Vfunc_tb_polite_dbg__DOT__capture_value__650__Vfuncout;
    __Vfunc_tb_polite_dbg__DOT__capture_value__650__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_tb_polite_dbg__DOT__capture_value__650__ps;
    __Vfunc_tb_polite_dbg__DOT__capture_value__650__ps = 0;
    CData/*7:0*/ __Vfunc_tb_polite_dbg__DOT__capture_value__650__mu;
    __Vfunc_tb_polite_dbg__DOT__capture_value__650__mu = 0;
    IData/*23:0*/ __Vfunc_tb_polite_dbg__DOT__capture_value__650__sm;
    __Vfunc_tb_polite_dbg__DOT__capture_value__650__sm = 0;
    CData/*0:0*/ __Vfunc_tb_polite_dbg__DOT__is_wide__651__Vfuncout;
    __Vfunc_tb_polite_dbg__DOT__is_wide__651__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_polite_dbg__DOT__is_wide__651__o;
    __Vfunc_tb_polite_dbg__DOT__is_wide__651__o = 0;
    CData/*0:0*/ __Vfunc_tb_polite_dbg__DOT__is_wide__652__Vfuncout;
    __Vfunc_tb_polite_dbg__DOT__is_wide__652__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_polite_dbg__DOT__is_wide__652__o;
    __Vfunc_tb_polite_dbg__DOT__is_wide__652__o = 0;
    CData/*0:0*/ __Vfunc_tb_polite_dbg__DOT__is_wide__653__Vfuncout;
    __Vfunc_tb_polite_dbg__DOT__is_wide__653__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_polite_dbg__DOT__is_wide__653__o;
    __Vfunc_tb_polite_dbg__DOT__is_wide__653__o = 0;
    IData/*31:0*/ __Vtask_tb_polite_dbg__DOT__idle__655__n;
    __Vtask_tb_polite_dbg__DOT__idle__655__n = 0;
    IData/*31:0*/ __Vtask_tb_polite_dbg__DOT__idle__655__tb_polite_dbg__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_polite_dbg__DOT__idle__655__tb_polite_dbg__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vtask_tb_polite_dbg__DOT__tick__656__en_v;
    __Vtask_tb_polite_dbg__DOT__tick__656__en_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_dbg__DOT__tick__656__req_v;
    __Vtask_tb_polite_dbg__DOT__tick__656__req_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_dbg__DOT__tick__656__op_v;
    __Vtask_tb_polite_dbg__DOT__tick__656__op_v = 0;
    CData/*1:0*/ __Vtask_tb_polite_dbg__DOT__tick__656__pe_v;
    __Vtask_tb_polite_dbg__DOT__tick__656__pe_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_dbg__DOT__tick__656__rb_v;
    __Vtask_tb_polite_dbg__DOT__tick__656__rb_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_dbg__DOT__check_comb__658__open_e;
    __Vtask_tb_polite_dbg__DOT__check_comb__658__open_e = 0;
    CData/*0:0*/ __Vtask_tb_polite_dbg__DOT__check_comb__658__ofz_e;
    __Vtask_tb_polite_dbg__DOT__check_comb__658__ofz_e = 0;
    CData/*0:0*/ __Vtask_tb_polite_dbg__DOT__check_comb__658__tick_e;
    __Vtask_tb_polite_dbg__DOT__check_comb__658__tick_e = 0;
    IData/*23:0*/ __Vtask_tb_polite_dbg__DOT__check_comb__658__val_e;
    __Vtask_tb_polite_dbg__DOT__check_comb__658__val_e = 0;
    CData/*2:0*/ __Vtask_tb_polite_dbg__DOT__check_comb__658__k_e;
    __Vtask_tb_polite_dbg__DOT__check_comb__658__k_e = 0;
    IData/*23:0*/ __Vfunc_tb_polite_dbg__DOT__capture_value__659__Vfuncout;
    __Vfunc_tb_polite_dbg__DOT__capture_value__659__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_tb_polite_dbg__DOT__capture_value__659__ps;
    __Vfunc_tb_polite_dbg__DOT__capture_value__659__ps = 0;
    CData/*7:0*/ __Vfunc_tb_polite_dbg__DOT__capture_value__659__mu;
    __Vfunc_tb_polite_dbg__DOT__capture_value__659__mu = 0;
    IData/*23:0*/ __Vfunc_tb_polite_dbg__DOT__capture_value__659__sm;
    __Vfunc_tb_polite_dbg__DOT__capture_value__659__sm = 0;
    CData/*0:0*/ __Vfunc_tb_polite_dbg__DOT__is_wide__660__Vfuncout;
    __Vfunc_tb_polite_dbg__DOT__is_wide__660__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_polite_dbg__DOT__is_wide__660__o;
    __Vfunc_tb_polite_dbg__DOT__is_wide__660__o = 0;
    CData/*0:0*/ __Vfunc_tb_polite_dbg__DOT__is_wide__661__Vfuncout;
    __Vfunc_tb_polite_dbg__DOT__is_wide__661__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_polite_dbg__DOT__is_wide__661__o;
    __Vfunc_tb_polite_dbg__DOT__is_wide__661__o = 0;
    CData/*0:0*/ __Vfunc_tb_polite_dbg__DOT__is_wide__662__Vfuncout;
    __Vfunc_tb_polite_dbg__DOT__is_wide__662__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_polite_dbg__DOT__is_wide__662__o;
    __Vfunc_tb_polite_dbg__DOT__is_wide__662__o = 0;
    IData/*31:0*/ __Vtask_tb_polite_dbg__DOT__idle__667__n;
    __Vtask_tb_polite_dbg__DOT__idle__667__n = 0;
    IData/*31:0*/ __Vtask_tb_polite_dbg__DOT__idle__667__tb_polite_dbg__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_polite_dbg__DOT__idle__667__tb_polite_dbg__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vtask_tb_polite_dbg__DOT__tick__668__en_v;
    __Vtask_tb_polite_dbg__DOT__tick__668__en_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_dbg__DOT__tick__668__req_v;
    __Vtask_tb_polite_dbg__DOT__tick__668__req_v = 0;
    CData/*3:0*/ __Vtask_tb_polite_dbg__DOT__tick__668__op_v;
    __Vtask_tb_polite_dbg__DOT__tick__668__op_v = 0;
    CData/*1:0*/ __Vtask_tb_polite_dbg__DOT__tick__668__pe_v;
    __Vtask_tb_polite_dbg__DOT__tick__668__pe_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_dbg__DOT__tick__668__rb_v;
    __Vtask_tb_polite_dbg__DOT__tick__668__rb_v = 0;
    CData/*0:0*/ __Vtask_tb_polite_dbg__DOT__check_comb__670__open_e;
    __Vtask_tb_polite_dbg__DOT__check_comb__670__open_e = 0;
    CData/*0:0*/ __Vtask_tb_polite_dbg__DOT__check_comb__670__ofz_e;
    __Vtask_tb_polite_dbg__DOT__check_comb__670__ofz_e = 0;
    CData/*0:0*/ __Vtask_tb_polite_dbg__DOT__check_comb__670__tick_e;
    __Vtask_tb_polite_dbg__DOT__check_comb__670__tick_e = 0;
    IData/*23:0*/ __Vtask_tb_polite_dbg__DOT__check_comb__670__val_e;
    __Vtask_tb_polite_dbg__DOT__check_comb__670__val_e = 0;
    CData/*2:0*/ __Vtask_tb_polite_dbg__DOT__check_comb__670__k_e;
    __Vtask_tb_polite_dbg__DOT__check_comb__670__k_e = 0;
    IData/*23:0*/ __Vfunc_tb_polite_dbg__DOT__capture_value__671__Vfuncout;
    __Vfunc_tb_polite_dbg__DOT__capture_value__671__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_tb_polite_dbg__DOT__capture_value__671__ps;
    __Vfunc_tb_polite_dbg__DOT__capture_value__671__ps = 0;
    CData/*7:0*/ __Vfunc_tb_polite_dbg__DOT__capture_value__671__mu;
    __Vfunc_tb_polite_dbg__DOT__capture_value__671__mu = 0;
    IData/*23:0*/ __Vfunc_tb_polite_dbg__DOT__capture_value__671__sm;
    __Vfunc_tb_polite_dbg__DOT__capture_value__671__sm = 0;
    CData/*0:0*/ __Vfunc_tb_polite_dbg__DOT__is_wide__672__Vfuncout;
    __Vfunc_tb_polite_dbg__DOT__is_wide__672__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_polite_dbg__DOT__is_wide__672__o;
    __Vfunc_tb_polite_dbg__DOT__is_wide__672__o = 0;
    CData/*0:0*/ __Vfunc_tb_polite_dbg__DOT__is_wide__673__Vfuncout;
    __Vfunc_tb_polite_dbg__DOT__is_wide__673__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_polite_dbg__DOT__is_wide__673__o;
    __Vfunc_tb_polite_dbg__DOT__is_wide__673__o = 0;
    CData/*0:0*/ __Vfunc_tb_polite_dbg__DOT__is_wide__674__Vfuncout;
    __Vfunc_tb_polite_dbg__DOT__is_wide__674__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_polite_dbg__DOT__is_wide__674__o;
    __Vfunc_tb_polite_dbg__DOT__is_wide__674__o = 0;
    VlUnpacked<std::string, 6> __Vtask_tb_polite_dbg__DOT__report_coverage__677__names;
    IData/*31:0*/ __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes;
    __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes = 0;
    std::string __Vtemp_90;
    std::string __Vtemp_92;
    std::string __Vtemp_94;
    std::string __Vtemp_96;
    std::string __Vtemp_98;
    std::string __Vtemp_100;
    // Body
    __Vtask_tb_polite_dbg__DOT__tick__647__rb_v = 1U;
    __Vtask_tb_polite_dbg__DOT__tick__647__pe_v = 0U;
    __Vtask_tb_polite_dbg__DOT__tick__647__op_v = 0xaU;
    __Vtask_tb_polite_dbg__DOT__tick__647__req_v = 1U;
    __Vtask_tb_polite_dbg__DOT__tick__647__en_v = 1U;
    co_await vlSelfRef.__VtrigSched_hd5d9f406__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_dbg.clk)", 
                                                         "polite_dbg_tb.sv", 
                                                         266);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                               + vlSelfRef.tb_polite_dbg__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left) 
                     != (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left)))) {
        vlSelfRef.tb_polite_dbg__DOT__err_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:250: Assertion failed in %Ntb_polite_dbg.check_regs: [%0t] dut.fz_left mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left),
                     4,vlSelfRef.tb_polite_dbg__DOT__m_left,
                     4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                     2,vlSelfRef.tb_polite_dbg__DOT__pe,
                     1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                     1,vlSelfRef.tb_polite_dbg__DOT__phase);
        VL_STOP_MT("polite_dbg_tb.sv", 250, "");
    } else {
        ++(vlSymsp->__Vcoverage[431]);
    }
    vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                               + vlSelfRef.tb_polite_dbg__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k) 
                     != (IData)(vlSelfRef.tb_polite_dbg__DOT__m_k)))) {
        vlSelfRef.tb_polite_dbg__DOT__err_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:251: Assertion failed in %Ntb_polite_dbg.check_regs: [%0t] dut.fz_k mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,3,
                     (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k),
                     3,vlSelfRef.tb_polite_dbg__DOT__m_k,
                     4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                     2,vlSelfRef.tb_polite_dbg__DOT__pe,
                     1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                     1,vlSelfRef.tb_polite_dbg__DOT__phase);
        VL_STOP_MT("polite_dbg_tb.sv", 251, "");
    } else {
        ++(vlSymsp->__Vcoverage[432]);
    }
    vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                               + vlSelfRef.tb_polite_dbg__DOT__chk_count);
    if (VL_UNLIKELY((vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                     != vlSelfRef.tb_polite_dbg__DOT__m_val))) {
        vlSelfRef.tb_polite_dbg__DOT__err_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:252: Assertion failed in %Ntb_polite_dbg.check_regs: [%0t] dut.fz_val mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,24,
                     vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val,
                     24,vlSelfRef.tb_polite_dbg__DOT__m_val,
                     4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                     2,vlSelfRef.tb_polite_dbg__DOT__pe,
                     1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                     1,vlSelfRef.tb_polite_dbg__DOT__phase);
        VL_STOP_MT("polite_dbg_tb.sv", 252, "");
    } else {
        ++(vlSymsp->__Vcoverage[433]);
    }
    ++(vlSymsp->__Vcoverage[434]);
    vlSelfRef.tb_polite_dbg__DOT__en = __Vtask_tb_polite_dbg__DOT__tick__647__en_v;
    vlSelfRef.tb_polite_dbg__DOT__op = __Vtask_tb_polite_dbg__DOT__tick__647__op_v;
    vlSelfRef.tb_polite_dbg__DOT__pe = __Vtask_tb_polite_dbg__DOT__tick__647__pe_v;
    vlSelfRef.tb_polite_dbg__DOT__run_busy = __Vtask_tb_polite_dbg__DOT__tick__647__rb_v;
    vlSelfRef.tb_polite_dbg__DOT__status = (0xffU & 
                                            VL_RANDOM_I());
    vlSelfRef.tb_polite_dbg__DOT__inbuf = (0xffU & 
                                           VL_RANDOM_I());
    vlSelfRef.tb_polite_dbg__DOT__d = (0xffU & VL_RANDOM_I());
    VL_RANDOM_W(96, vlSelfRef.tb_polite_dbg__DOT__psum_all);
    vlSelfRef.tb_polite_dbg__DOT__mul_all = VL_RANDOM_I();
    VL_RANDOM_W(96, vlSelfRef.tb_polite_dbg__DOT__sum_all);
    vlSelfRef.tb_polite_dbg__DOT__start = ((IData)(__Vtask_tb_polite_dbg__DOT__tick__647__req_v) 
                                           & (0U == (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left)));
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "polite_dbg_tb.sv", 
                                         279);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_polite_dbg__DOT__check_comb__649__open_e 
        = (0U != (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left));
    __Vtask_tb_polite_dbg__DOT__check_comb__649__ofz_e 
        = ((IData)(vlSelfRef.tb_polite_dbg__DOT__start) 
           | (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__649__open_e));
    __Vtask_tb_polite_dbg__DOT__check_comb__649__tick_e 
        = ((IData)(__Vtask_tb_polite_dbg__DOT__check_comb__649__ofz_e) 
           & (IData)(vlSelfRef.tb_polite_dbg__DOT__phase));
    __Vtask_tb_polite_dbg__DOT__check_comb__649__val_e 
        = ((IData)(vlSelfRef.tb_polite_dbg__DOT__start)
            ? ([&]() {
                {
                    __Vfunc_tb_polite_dbg__DOT__capture_value__650__ps 
                        = ((0x5fU >= (0x7fU & ((IData)(0x18U) 
                                               * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))
                            ? (0xffffffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x18U) 
                                                  * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))
                                              ? 0U : 
                                             (vlSelfRef.tb_polite_dbg__DOT__psum_all[
                                              (((IData)(0x17U) 
                                                + (0x7fU 
                                                   & ((IData)(0x18U) 
                                                      * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)))))) 
                                            | (vlSelfRef.tb_polite_dbg__DOT__psum_all[
                                               (3U 
                                                & (((IData)(0x18U) 
                                                    * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))))
                            : 0U);
                    __Vfunc_tb_polite_dbg__DOT__capture_value__650__mu 
                        = (0xffU & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                                    >> (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.tb_polite_dbg__DOT__pe), 3U))));
                    __Vfunc_tb_polite_dbg__DOT__capture_value__650__sm 
                        = ((0x5fU >= (0x7fU & ((IData)(0x18U) 
                                               * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))
                            ? (0xffffffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x18U) 
                                                  * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))
                                              ? 0U : 
                                             (vlSelfRef.tb_polite_dbg__DOT__sum_all[
                                              (((IData)(0x17U) 
                                                + (0x7fU 
                                                   & ((IData)(0x18U) 
                                                      * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)))))) 
                                            | (vlSelfRef.tb_polite_dbg__DOT__sum_all[
                                               (3U 
                                                & (((IData)(0x18U) 
                                                    * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))))
                            : 0U);
                    if ((8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                        if ((4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                            __Vfunc_tb_polite_dbg__DOT__capture_value__650__Vfuncout 
                                = vlSelfRef.tb_polite_dbg__DOT__d;
                            goto __Vlabel1;
                        } else if ((2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                            if ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                                __Vfunc_tb_polite_dbg__DOT__capture_value__650__Vfuncout 
                                    = vlSelfRef.tb_polite_dbg__DOT__d;
                                goto __Vlabel1;
                            } else {
                                __Vfunc_tb_polite_dbg__DOT__capture_value__650__Vfuncout 
                                    = ((IData)(vlSelfRef.tb_polite_dbg__DOT__run_busy)
                                        ? __Vfunc_tb_polite_dbg__DOT__capture_value__650__sm
                                        : __Vfunc_tb_polite_dbg__DOT__capture_value__650__ps);
                                goto __Vlabel1;
                            }
                        } else if ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                            __Vfunc_tb_polite_dbg__DOT__capture_value__650__Vfuncout 
                                = __Vfunc_tb_polite_dbg__DOT__capture_value__650__mu;
                            goto __Vlabel1;
                        } else {
                            __Vfunc_tb_polite_dbg__DOT__capture_value__650__Vfuncout 
                                = __Vfunc_tb_polite_dbg__DOT__capture_value__650__ps;
                            goto __Vlabel1;
                        }
                    } else if ((4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                        if ((2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                            if ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                                __Vfunc_tb_polite_dbg__DOT__capture_value__650__Vfuncout 
                                    = vlSelfRef.tb_polite_dbg__DOT__inbuf;
                                goto __Vlabel1;
                            } else {
                                __Vfunc_tb_polite_dbg__DOT__capture_value__650__Vfuncout 
                                    = vlSelfRef.tb_polite_dbg__DOT__status;
                                goto __Vlabel1;
                            }
                        } else {
                            __Vfunc_tb_polite_dbg__DOT__capture_value__650__Vfuncout 
                                = vlSelfRef.tb_polite_dbg__DOT__d;
                            goto __Vlabel1;
                        }
                    } else {
                        __Vfunc_tb_polite_dbg__DOT__capture_value__650__Vfuncout 
                            = vlSelfRef.tb_polite_dbg__DOT__d;
                        goto __Vlabel1;
                    }
                    __Vlabel1: ;
                }
                ++(vlSymsp->__Vcoverage[343]);
            }(), __Vfunc_tb_polite_dbg__DOT__capture_value__650__Vfuncout)
            : vlSelfRef.tb_polite_dbg__DOT__m_val);
    __Vtask_tb_polite_dbg__DOT__check_comb__649__k_e 
        = ((IData)(vlSelfRef.tb_polite_dbg__DOT__start)
            ? 0U : (IData)(vlSelfRef.tb_polite_dbg__DOT__m_k));
    vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                               + vlSelfRef.tb_polite_dbg__DOT__chk_count);
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left)) 
                     != (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__649__open_e)))) {
        vlSelfRef.tb_polite_dbg__DOT__err_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:185: Assertion failed in %Ntb_polite_dbg.check_comb: [%0t] open mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (0U != (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left)),
                     1,(IData)(__Vtask_tb_polite_dbg__DOT__check_comb__649__open_e),
                     4,vlSelfRef.tb_polite_dbg__DOT__op,
                     2,(IData)(vlSelfRef.tb_polite_dbg__DOT__pe),
                     1,vlSelfRef.tb_polite_dbg__DOT__start,
                     1,(IData)(vlSelfRef.tb_polite_dbg__DOT__phase));
        VL_STOP_MT("polite_dbg_tb.sv", 185, "");
    } else {
        ++(vlSymsp->__Vcoverage[399]);
    }
    vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                               + vlSelfRef.tb_polite_dbg__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_dbg__DOT__ofz) 
                     != (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__649__ofz_e)))) {
        vlSelfRef.tb_polite_dbg__DOT__err_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:186: Assertion failed in %Ntb_polite_dbg.check_comb: [%0t] ofz mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_dbg__DOT__ofz),
                     1,__Vtask_tb_polite_dbg__DOT__check_comb__649__ofz_e,
                     4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                     2,vlSelfRef.tb_polite_dbg__DOT__pe,
                     1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                     1,vlSelfRef.tb_polite_dbg__DOT__phase);
        VL_STOP_MT("polite_dbg_tb.sv", 186, "");
    } else {
        ++(vlSymsp->__Vcoverage[400]);
    }
    vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                               + vlSelfRef.tb_polite_dbg__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_dbg__DOT__dbg_tick) 
                     != (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__649__tick_e)))) {
        vlSelfRef.tb_polite_dbg__DOT__err_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:187: Assertion failed in %Ntb_polite_dbg.check_comb: [%0t] dbg_tick mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_polite_dbg__DOT__dbg_tick),
                     1,__Vtask_tb_polite_dbg__DOT__check_comb__649__tick_e,
                     4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                     2,vlSelfRef.tb_polite_dbg__DOT__pe,
                     1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                     1,vlSelfRef.tb_polite_dbg__DOT__phase);
        VL_STOP_MT("polite_dbg_tb.sv", 187, "");
    } else {
        ++(vlSymsp->__Vcoverage[401]);
    }
    if (((IData)(__Vtask_tb_polite_dbg__DOT__check_comb__649__tick_e) 
         & (6U > (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__649__k_e)))) {
        vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn) 
                         != ((0x17U >= (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__649__k_e), 2U)))
                              ? (0xfU & (__Vtask_tb_polite_dbg__DOT__check_comb__649__val_e 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(5,32,32, (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__649__k_e), 2U))))
                              : 0U)))) {
            vlSelfRef.tb_polite_dbg__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:190: Assertion failed in %Ntb_polite_dbg.check_comb: [%0t] dbg_nib mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,4,(IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn),
                         4,((0x17U >= (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__649__k_e), 2U)))
                             ? (0xfU & (__Vtask_tb_polite_dbg__DOT__check_comb__649__val_e 
                                        >> (0x1fU & 
                                            VL_SHIFTL_III(5,32,32, (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__649__k_e), 2U))))
                             : 0U),4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                         2,vlSelfRef.tb_polite_dbg__DOT__pe,
                         1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                         1,vlSelfRef.tb_polite_dbg__DOT__phase);
            VL_STOP_MT("polite_dbg_tb.sv", 190, "");
        } else {
            ++(vlSymsp->__Vcoverage[402]);
        }
        ++(vlSymsp->__Vcoverage[403]);
    } else {
        ++(vlSymsp->__Vcoverage[404]);
    }
    if (vlSelfRef.tb_polite_dbg__DOT__en) {
        if (vlSelfRef.tb_polite_dbg__DOT__start) {
            if (VL_UNLIKELY(vlSelfRef.tb_polite_dbg__DOT__sb_active)) {
                vlSelfRef.tb_polite_dbg__DOT__err_count 
                    = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__err_count);
                VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:196: Assertion failed in %Ntb_polite_dbg.check_comb: [%0t] new freeze started before the previous one finished\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1000),
                             -9);
                VL_STOP_MT("polite_dbg_tb.sv", 196, "");
            } else {
                ++(vlSymsp->__Vcoverage[405]);
            }
            vlSelfRef.tb_polite_dbg__DOT__sb_active = 1U;
            vlSelfRef.tb_polite_dbg__DOT__sb_exp = __Vtask_tb_polite_dbg__DOT__check_comb__649__val_e;
            vlSelfRef.tb_polite_dbg__DOT__sb_need = 
                (([&]() {
                        __Vfunc_tb_polite_dbg__DOT__is_wide__651__o 
                            = vlSelfRef.tb_polite_dbg__DOT__op;
                        __Vfunc_tb_polite_dbg__DOT__is_wide__651__Vfuncout 
                            = ((8U == (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__651__o)) 
                               | (0xaU == (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__651__o)));
                        ++(vlSymsp->__Vcoverage[344]);
                    }(), (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__651__Vfuncout))
                  ? 6U : 2U);
            vlSelfRef.tb_polite_dbg__DOT__sb_got = 0U;
            vlSelfRef.tb_polite_dbg__DOT__sb_cnt = 0U;
            vlSelfRef.tb_polite_dbg__DOT__n_reads = 
                ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__n_reads);
            vlSelfRef.tb_polite_dbg__DOT____Vlvbound_hf74c54a3__0 
                = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                   [((5U >= (7U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__op) 
                                   - (IData)(6U))))
                      ? (7U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__op) 
                               - (IData)(6U))) : 0U)]
                   [vlSelfRef.tb_polite_dbg__DOT__phase]);
            if (VL_LIKELY((5U >= (7U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__op) 
                                        - (IData)(6U)))))) {
                vlSelfRef.tb_polite_dbg__DOT__cov_op_phase[(7U 
                                                            & ((IData)(vlSelfRef.tb_polite_dbg__DOT__op) 
                                                               - (IData)(6U)))][vlSelfRef.tb_polite_dbg__DOT__phase] 
                    = vlSelfRef.tb_polite_dbg__DOT____Vlvbound_hf74c54a3__0;
            }
            if ((0xaU == (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                vlSelfRef.tb_polite_dbg__DOT__cov_add_rb[vlSelfRef.tb_polite_dbg__DOT__run_busy] 
                    = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__cov_add_rb
                       [vlSelfRef.tb_polite_dbg__DOT__run_busy]);
                ++(vlSymsp->__Vcoverage[406]);
            } else {
                ++(vlSymsp->__Vcoverage[407]);
            }
            if (([&]() {
                        __Vfunc_tb_polite_dbg__DOT__is_wide__652__o 
                            = vlSelfRef.tb_polite_dbg__DOT__op;
                        __Vfunc_tb_polite_dbg__DOT__is_wide__652__Vfuncout 
                            = ((8U == (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__652__o)) 
                               | (0xaU == (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__652__o)));
                        ++(vlSymsp->__Vcoverage[344]);
                    }(), (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__652__Vfuncout))) {
                vlSelfRef.tb_polite_dbg__DOT__cov_pe[vlSelfRef.tb_polite_dbg__DOT__pe] 
                    = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__cov_pe
                       [vlSelfRef.tb_polite_dbg__DOT__pe]);
                ++(vlSymsp->__Vcoverage[408]);
            } else {
                ++(vlSymsp->__Vcoverage[409]);
            }
            if (vlSelfRef.tb_polite_dbg__DOT__prev_open) {
                vlSelfRef.tb_polite_dbg__DOT__cov_b2b_min 
                    = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__cov_b2b_min);
                ++(vlSymsp->__Vcoverage[410]);
            } else {
                ++(vlSymsp->__Vcoverage[411]);
            }
            ++(vlSymsp->__Vcoverage[412]);
        } else {
            ++(vlSymsp->__Vcoverage[413]);
        }
        if (((IData)(__Vtask_tb_polite_dbg__DOT__check_comb__649__tick_e) 
             & (IData)(vlSelfRef.tb_polite_dbg__DOT__sb_active))) {
            if (VL_GTS_III(32, 6U, vlSelfRef.tb_polite_dbg__DOT__sb_cnt)) {
                vlSelfRef.tb_polite_dbg__DOT____Vlvbound_h66fb07c1__0 
                    = vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn;
                if (VL_LIKELY((0x17U >= (0x1fU & VL_MULS_III(32, (IData)(4U), vlSelfRef.tb_polite_dbg__DOT__sb_cnt))))) {
                    vlSelfRef.tb_polite_dbg__DOT__sb_got 
                        = (((~ ((IData)(0xfU) << (0x1fU 
                                                  & VL_MULS_III(32, (IData)(4U), vlSelfRef.tb_polite_dbg__DOT__sb_cnt)))) 
                            & vlSelfRef.tb_polite_dbg__DOT__sb_got) 
                           | (0xffffffU & ((IData)(vlSelfRef.tb_polite_dbg__DOT____Vlvbound_h66fb07c1__0) 
                                           << (0x1fU 
                                               & VL_MULS_III(32, (IData)(4U), vlSelfRef.tb_polite_dbg__DOT__sb_cnt)))));
                }
                ++(vlSymsp->__Vcoverage[414]);
            } else {
                ++(vlSymsp->__Vcoverage[415]);
            }
            vlSelfRef.tb_polite_dbg__DOT__sb_cnt = 
                ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__sb_cnt);
            ++(vlSymsp->__Vcoverage[416]);
        } else {
            ++(vlSymsp->__Vcoverage[417]);
        }
        vlSelfRef.tb_polite_dbg__DOT__prev_open = __Vtask_tb_polite_dbg__DOT__check_comb__649__open_e;
        ++(vlSymsp->__Vcoverage[420]);
    } else if (__Vtask_tb_polite_dbg__DOT__check_comb__649__open_e) {
        vlSelfRef.tb_polite_dbg__DOT__cov_hold_in_freeze 
            = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__cov_hold_in_freeze);
        ++(vlSymsp->__Vcoverage[418]);
    } else {
        ++(vlSymsp->__Vcoverage[419]);
    }
    vlSelfRef.tb_polite_dbg__DOT__s_en = vlSelfRef.tb_polite_dbg__DOT__en;
    vlSelfRef.tb_polite_dbg__DOT__s_start = vlSelfRef.tb_polite_dbg__DOT__start;
    vlSelfRef.tb_polite_dbg__DOT__s_tick = __Vtask_tb_polite_dbg__DOT__check_comb__649__tick_e;
    vlSelfRef.tb_polite_dbg__DOT__s_len = (([&]() {
                __Vfunc_tb_polite_dbg__DOT__is_wide__653__o 
                    = vlSelfRef.tb_polite_dbg__DOT__op;
                __Vfunc_tb_polite_dbg__DOT__is_wide__653__Vfuncout 
                    = ((8U == (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__653__o)) 
                       | (0xaU == (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__653__o)));
                ++(vlSymsp->__Vcoverage[344]);
            }(), (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__653__Vfuncout))
                                            ? 0xcU : 4U);
    vlSelfRef.tb_polite_dbg__DOT__s_val = __Vtask_tb_polite_dbg__DOT__check_comb__649__val_e;
    ++(vlSymsp->__Vcoverage[421]);
    co_await vlSelfRef.__VtrigSched_hd5d9f447__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_dbg.clk)", 
                                                         "polite_dbg_tb.sv", 
                                                         280);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    {
        if (vlSelfRef.tb_polite_dbg__DOT__s_en) {
            ++(vlSymsp->__Vcoverage[423]);
        } else {
            goto __Vlabel2;
        }
        if (vlSelfRef.tb_polite_dbg__DOT__s_start) {
            vlSelfRef.tb_polite_dbg__DOT__m_val = vlSelfRef.tb_polite_dbg__DOT__s_val;
            vlSelfRef.tb_polite_dbg__DOT__m_left = 
                (0xfU & ((IData)(vlSelfRef.tb_polite_dbg__DOT__s_len) 
                         - (IData)(1U)));
            vlSelfRef.tb_polite_dbg__DOT__m_k = vlSelfRef.tb_polite_dbg__DOT__s_tick;
            ++(vlSymsp->__Vcoverage[426]);
        } else if ((0U != (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left))) {
            vlSelfRef.tb_polite_dbg__DOT__m_left = 
                (0xfU & ((IData)(vlSelfRef.tb_polite_dbg__DOT__m_left) 
                         - (IData)(1U)));
            vlSelfRef.tb_polite_dbg__DOT__m_k = (7U 
                                                 & ((IData)(vlSelfRef.tb_polite_dbg__DOT__m_k) 
                                                    + (IData)(vlSelfRef.tb_polite_dbg__DOT__s_tick)));
            ++(vlSymsp->__Vcoverage[424]);
        } else {
            ++(vlSymsp->__Vcoverage[425]);
        }
        if (((IData)(vlSelfRef.tb_polite_dbg__DOT__sb_active) 
             & (0U == (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left)))) {
            vlSelfRef.tb_polite_dbg__DOT__sb_active = 0U;
            vlSelfRef.tb_polite_dbg__DOT__chk_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__chk_count);
            if (VL_UNLIKELY(((vlSelfRef.tb_polite_dbg__DOT__sb_cnt 
                              != vlSelfRef.tb_polite_dbg__DOT__sb_need) 
                             | (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                                != vlSelfRef.tb_polite_dbg__DOT__sb_exp)))) {
                vlSelfRef.tb_polite_dbg__DOT__err_count 
                    = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__err_count);
                VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:243: Assertion failed in %Ntb_polite_dbg.model_clock: [%0t] freeze scoreboard: got %0d nibbles = %06x, exp %0d nibbles = %06x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1000),
                             -9,32,vlSelfRef.tb_polite_dbg__DOT__sb_cnt,
                             24,vlSelfRef.tb_polite_dbg__DOT__sb_got,
                             32,vlSelfRef.tb_polite_dbg__DOT__sb_need,
                             24,vlSelfRef.tb_polite_dbg__DOT__sb_exp);
                VL_STOP_MT("polite_dbg_tb.sv", 243, "");
            } else {
                ++(vlSymsp->__Vcoverage[427]);
            }
            ++(vlSymsp->__Vcoverage[428]);
        } else {
            ++(vlSymsp->__Vcoverage[429]);
        }
        __Vlabel2: ;
    }
    ++(vlSymsp->__Vcoverage[430]);
    ++(vlSymsp->__Vcoverage[435]);
    __Vtask_tb_polite_dbg__DOT__idle__655__n = 2U;
    __Vtask_tb_polite_dbg__DOT__idle__655__tb_polite_dbg__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_polite_dbg__DOT__idle__655__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_polite_dbg__DOT__idle__655__tb_polite_dbg__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        __Vtask_tb_polite_dbg__DOT__tick__656__rb_v = 0U;
        __Vtask_tb_polite_dbg__DOT__tick__656__pe_v = 0U;
        __Vtask_tb_polite_dbg__DOT__tick__656__op_v = 6U;
        __Vtask_tb_polite_dbg__DOT__tick__656__req_v = 0U;
        __Vtask_tb_polite_dbg__DOT__tick__656__en_v = 1U;
        co_await vlSelfRef.__VtrigSched_hd5d9f406__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_polite_dbg.clk)", 
                                                             "polite_dbg_tb.sv", 
                                                             266);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left) 
                         != (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left)))) {
            vlSelfRef.tb_polite_dbg__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:250: Assertion failed in %Ntb_polite_dbg.check_regs: [%0t] dut.fz_left mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,4,(IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left),
                         4,vlSelfRef.tb_polite_dbg__DOT__m_left,
                         4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                         2,vlSelfRef.tb_polite_dbg__DOT__pe,
                         1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                         1,vlSelfRef.tb_polite_dbg__DOT__phase);
            VL_STOP_MT("polite_dbg_tb.sv", 250, "");
        } else {
            ++(vlSymsp->__Vcoverage[431]);
        }
        vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k) 
                         != (IData)(vlSelfRef.tb_polite_dbg__DOT__m_k)))) {
            vlSelfRef.tb_polite_dbg__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:251: Assertion failed in %Ntb_polite_dbg.check_regs: [%0t] dut.fz_k mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,3,(IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k),
                         3,vlSelfRef.tb_polite_dbg__DOT__m_k,
                         4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                         2,vlSelfRef.tb_polite_dbg__DOT__pe,
                         1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                         1,vlSelfRef.tb_polite_dbg__DOT__phase);
            VL_STOP_MT("polite_dbg_tb.sv", 251, "");
        } else {
            ++(vlSymsp->__Vcoverage[432]);
        }
        vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__chk_count);
        if (VL_UNLIKELY((vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                         != vlSelfRef.tb_polite_dbg__DOT__m_val))) {
            vlSelfRef.tb_polite_dbg__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:252: Assertion failed in %Ntb_polite_dbg.check_regs: [%0t] dut.fz_val mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,24,vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val,
                         24,vlSelfRef.tb_polite_dbg__DOT__m_val,
                         4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                         2,vlSelfRef.tb_polite_dbg__DOT__pe,
                         1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                         1,vlSelfRef.tb_polite_dbg__DOT__phase);
            VL_STOP_MT("polite_dbg_tb.sv", 252, "");
        } else {
            ++(vlSymsp->__Vcoverage[433]);
        }
        ++(vlSymsp->__Vcoverage[434]);
        vlSelfRef.tb_polite_dbg__DOT__en = __Vtask_tb_polite_dbg__DOT__tick__656__en_v;
        vlSelfRef.tb_polite_dbg__DOT__op = __Vtask_tb_polite_dbg__DOT__tick__656__op_v;
        vlSelfRef.tb_polite_dbg__DOT__pe = __Vtask_tb_polite_dbg__DOT__tick__656__pe_v;
        vlSelfRef.tb_polite_dbg__DOT__run_busy = __Vtask_tb_polite_dbg__DOT__tick__656__rb_v;
        vlSelfRef.tb_polite_dbg__DOT__status = (0xffU 
                                                & VL_RANDOM_I());
        vlSelfRef.tb_polite_dbg__DOT__inbuf = (0xffU 
                                               & VL_RANDOM_I());
        vlSelfRef.tb_polite_dbg__DOT__d = (0xffU & 
                                           VL_RANDOM_I());
        VL_RANDOM_W(96, vlSelfRef.tb_polite_dbg__DOT__psum_all);
        vlSelfRef.tb_polite_dbg__DOT__mul_all = VL_RANDOM_I();
        VL_RANDOM_W(96, vlSelfRef.tb_polite_dbg__DOT__sum_all);
        vlSelfRef.tb_polite_dbg__DOT__start = ((IData)(__Vtask_tb_polite_dbg__DOT__tick__656__req_v) 
                                               & (0U 
                                                  == (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "polite_dbg_tb.sv", 
                                             279);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_polite_dbg__DOT__check_comb__658__open_e 
            = (0U != (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left));
        __Vtask_tb_polite_dbg__DOT__check_comb__658__ofz_e 
            = ((IData)(vlSelfRef.tb_polite_dbg__DOT__start) 
               | (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__658__open_e));
        __Vtask_tb_polite_dbg__DOT__check_comb__658__tick_e 
            = ((IData)(__Vtask_tb_polite_dbg__DOT__check_comb__658__ofz_e) 
               & (IData)(vlSelfRef.tb_polite_dbg__DOT__phase));
        __Vtask_tb_polite_dbg__DOT__check_comb__658__val_e 
            = ((IData)(vlSelfRef.tb_polite_dbg__DOT__start)
                ? ([&]() {
                    {
                        __Vfunc_tb_polite_dbg__DOT__capture_value__659__ps 
                            = ((0x5fU >= (0x7fU & ((IData)(0x18U) 
                                                   * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))
                                ? (0xffffffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))
                                                  ? 0U
                                                  : 
                                                 (vlSelfRef.tb_polite_dbg__DOT__psum_all[
                                                  (((IData)(0x17U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x18U) 
                                                        * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x18U) 
                                                       * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)))))) 
                                                | (vlSelfRef.tb_polite_dbg__DOT__psum_all[
                                                   (3U 
                                                    & (((IData)(0x18U) 
                                                        * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x18U) 
                                                       * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))))
                                : 0U);
                        __Vfunc_tb_polite_dbg__DOT__capture_value__659__mu 
                            = (0xffU & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                                        >> (0x1fU & 
                                            VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.tb_polite_dbg__DOT__pe), 3U))));
                        __Vfunc_tb_polite_dbg__DOT__capture_value__659__sm 
                            = ((0x5fU >= (0x7fU & ((IData)(0x18U) 
                                                   * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))
                                ? (0xffffffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))
                                                  ? 0U
                                                  : 
                                                 (vlSelfRef.tb_polite_dbg__DOT__sum_all[
                                                  (((IData)(0x17U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x18U) 
                                                        * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x18U) 
                                                       * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)))))) 
                                                | (vlSelfRef.tb_polite_dbg__DOT__sum_all[
                                                   (3U 
                                                    & (((IData)(0x18U) 
                                                        * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x18U) 
                                                       * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))))
                                : 0U);
                        if ((8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                            if ((4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                                __Vfunc_tb_polite_dbg__DOT__capture_value__659__Vfuncout 
                                    = vlSelfRef.tb_polite_dbg__DOT__d;
                                goto __Vlabel3;
                            } else if ((2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                                if ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                                    __Vfunc_tb_polite_dbg__DOT__capture_value__659__Vfuncout 
                                        = vlSelfRef.tb_polite_dbg__DOT__d;
                                    goto __Vlabel3;
                                } else {
                                    __Vfunc_tb_polite_dbg__DOT__capture_value__659__Vfuncout 
                                        = ((IData)(vlSelfRef.tb_polite_dbg__DOT__run_busy)
                                            ? __Vfunc_tb_polite_dbg__DOT__capture_value__659__sm
                                            : __Vfunc_tb_polite_dbg__DOT__capture_value__659__ps);
                                    goto __Vlabel3;
                                }
                            } else if ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                                __Vfunc_tb_polite_dbg__DOT__capture_value__659__Vfuncout 
                                    = __Vfunc_tb_polite_dbg__DOT__capture_value__659__mu;
                                goto __Vlabel3;
                            } else {
                                __Vfunc_tb_polite_dbg__DOT__capture_value__659__Vfuncout 
                                    = __Vfunc_tb_polite_dbg__DOT__capture_value__659__ps;
                                goto __Vlabel3;
                            }
                        } else if ((4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                            if ((2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                                if ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                                    __Vfunc_tb_polite_dbg__DOT__capture_value__659__Vfuncout 
                                        = vlSelfRef.tb_polite_dbg__DOT__inbuf;
                                    goto __Vlabel3;
                                } else {
                                    __Vfunc_tb_polite_dbg__DOT__capture_value__659__Vfuncout 
                                        = vlSelfRef.tb_polite_dbg__DOT__status;
                                    goto __Vlabel3;
                                }
                            } else {
                                __Vfunc_tb_polite_dbg__DOT__capture_value__659__Vfuncout 
                                    = vlSelfRef.tb_polite_dbg__DOT__d;
                                goto __Vlabel3;
                            }
                        } else {
                            __Vfunc_tb_polite_dbg__DOT__capture_value__659__Vfuncout 
                                = vlSelfRef.tb_polite_dbg__DOT__d;
                            goto __Vlabel3;
                        }
                        __Vlabel3: ;
                    }
                    ++(vlSymsp->__Vcoverage[343]);
                }(), __Vfunc_tb_polite_dbg__DOT__capture_value__659__Vfuncout)
                : vlSelfRef.tb_polite_dbg__DOT__m_val);
        __Vtask_tb_polite_dbg__DOT__check_comb__658__k_e 
            = ((IData)(vlSelfRef.tb_polite_dbg__DOT__start)
                ? 0U : (IData)(vlSelfRef.tb_polite_dbg__DOT__m_k));
        vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__chk_count);
        if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left)) 
                         != (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__658__open_e)))) {
            vlSelfRef.tb_polite_dbg__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:185: Assertion failed in %Ntb_polite_dbg.check_comb: [%0t] open mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,1,(0U != (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left)),
                         1,(IData)(__Vtask_tb_polite_dbg__DOT__check_comb__658__open_e),
                         4,vlSelfRef.tb_polite_dbg__DOT__op,
                         2,(IData)(vlSelfRef.tb_polite_dbg__DOT__pe),
                         1,vlSelfRef.tb_polite_dbg__DOT__start,
                         1,(IData)(vlSelfRef.tb_polite_dbg__DOT__phase));
            VL_STOP_MT("polite_dbg_tb.sv", 185, "");
        } else {
            ++(vlSymsp->__Vcoverage[399]);
        }
        vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_dbg__DOT__ofz) 
                         != (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__658__ofz_e)))) {
            vlSelfRef.tb_polite_dbg__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:186: Assertion failed in %Ntb_polite_dbg.check_comb: [%0t] ofz mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,1,(IData)(vlSelfRef.tb_polite_dbg__DOT__ofz),
                         1,__Vtask_tb_polite_dbg__DOT__check_comb__658__ofz_e,
                         4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                         2,vlSelfRef.tb_polite_dbg__DOT__pe,
                         1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                         1,vlSelfRef.tb_polite_dbg__DOT__phase);
            VL_STOP_MT("polite_dbg_tb.sv", 186, "");
        } else {
            ++(vlSymsp->__Vcoverage[400]);
        }
        vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_dbg__DOT__dbg_tick) 
                         != (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__658__tick_e)))) {
            vlSelfRef.tb_polite_dbg__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:187: Assertion failed in %Ntb_polite_dbg.check_comb: [%0t] dbg_tick mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,1,(IData)(vlSelfRef.tb_polite_dbg__DOT__dbg_tick),
                         1,__Vtask_tb_polite_dbg__DOT__check_comb__658__tick_e,
                         4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                         2,vlSelfRef.tb_polite_dbg__DOT__pe,
                         1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                         1,vlSelfRef.tb_polite_dbg__DOT__phase);
            VL_STOP_MT("polite_dbg_tb.sv", 187, "");
        } else {
            ++(vlSymsp->__Vcoverage[401]);
        }
        if (((IData)(__Vtask_tb_polite_dbg__DOT__check_comb__658__tick_e) 
             & (6U > (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__658__k_e)))) {
            vlSelfRef.tb_polite_dbg__DOT__chk_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__chk_count);
            if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn) 
                             != ((0x17U >= (0x1fU & 
                                            VL_SHIFTL_III(5,32,32, (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__658__k_e), 2U)))
                                  ? (0xfU & (__Vtask_tb_polite_dbg__DOT__check_comb__658__val_e 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(5,32,32, (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__658__k_e), 2U))))
                                  : 0U)))) {
                vlSelfRef.tb_polite_dbg__DOT__err_count 
                    = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__err_count);
                VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:190: Assertion failed in %Ntb_polite_dbg.check_comb: [%0t] dbg_nib mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1000),
                             -9,4,(IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn),
                             4,((0x17U >= (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__658__k_e), 2U)))
                                 ? (0xfU & (__Vtask_tb_polite_dbg__DOT__check_comb__658__val_e 
                                            >> (0x1fU 
                                                & VL_SHIFTL_III(5,32,32, (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__658__k_e), 2U))))
                                 : 0U),4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                             2,vlSelfRef.tb_polite_dbg__DOT__pe,
                             1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                             1,vlSelfRef.tb_polite_dbg__DOT__phase);
                VL_STOP_MT("polite_dbg_tb.sv", 190, "");
            } else {
                ++(vlSymsp->__Vcoverage[402]);
            }
            ++(vlSymsp->__Vcoverage[403]);
        } else {
            ++(vlSymsp->__Vcoverage[404]);
        }
        if (vlSelfRef.tb_polite_dbg__DOT__en) {
            if (vlSelfRef.tb_polite_dbg__DOT__start) {
                if (VL_UNLIKELY(vlSelfRef.tb_polite_dbg__DOT__sb_active)) {
                    vlSelfRef.tb_polite_dbg__DOT__err_count 
                        = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__err_count);
                    VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:196: Assertion failed in %Ntb_polite_dbg.check_comb: [%0t] new freeze started before the previous one finished\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9);
                    VL_STOP_MT("polite_dbg_tb.sv", 196, "");
                } else {
                    ++(vlSymsp->__Vcoverage[405]);
                }
                vlSelfRef.tb_polite_dbg__DOT__sb_active = 1U;
                vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                    = __Vtask_tb_polite_dbg__DOT__check_comb__658__val_e;
                vlSelfRef.tb_polite_dbg__DOT__sb_need 
                    = (([&]() {
                            __Vfunc_tb_polite_dbg__DOT__is_wide__660__o 
                                = vlSelfRef.tb_polite_dbg__DOT__op;
                            __Vfunc_tb_polite_dbg__DOT__is_wide__660__Vfuncout 
                                = ((8U == (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__660__o)) 
                                   | (0xaU == (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__660__o)));
                            ++(vlSymsp->__Vcoverage[344]);
                        }(), (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__660__Vfuncout))
                        ? 6U : 2U);
                vlSelfRef.tb_polite_dbg__DOT__sb_got = 0U;
                vlSelfRef.tb_polite_dbg__DOT__sb_cnt = 0U;
                vlSelfRef.tb_polite_dbg__DOT__n_reads 
                    = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__n_reads);
                vlSelfRef.tb_polite_dbg__DOT____Vlvbound_hf74c54a3__0 
                    = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                       [((5U >= (7U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__op) 
                                       - (IData)(6U))))
                          ? (7U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__op) 
                                   - (IData)(6U))) : 0U)]
                       [vlSelfRef.tb_polite_dbg__DOT__phase]);
                if (VL_LIKELY((5U >= (7U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__op) 
                                            - (IData)(6U)))))) {
                    vlSelfRef.tb_polite_dbg__DOT__cov_op_phase[(7U 
                                                                & ((IData)(vlSelfRef.tb_polite_dbg__DOT__op) 
                                                                   - (IData)(6U)))][vlSelfRef.tb_polite_dbg__DOT__phase] 
                        = vlSelfRef.tb_polite_dbg__DOT____Vlvbound_hf74c54a3__0;
                }
                if ((0xaU == (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                    vlSelfRef.tb_polite_dbg__DOT__cov_add_rb[vlSelfRef.tb_polite_dbg__DOT__run_busy] 
                        = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__cov_add_rb
                           [vlSelfRef.tb_polite_dbg__DOT__run_busy]);
                    ++(vlSymsp->__Vcoverage[406]);
                } else {
                    ++(vlSymsp->__Vcoverage[407]);
                }
                if (([&]() {
                            __Vfunc_tb_polite_dbg__DOT__is_wide__661__o 
                                = vlSelfRef.tb_polite_dbg__DOT__op;
                            __Vfunc_tb_polite_dbg__DOT__is_wide__661__Vfuncout 
                                = ((8U == (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__661__o)) 
                                   | (0xaU == (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__661__o)));
                            ++(vlSymsp->__Vcoverage[344]);
                        }(), (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__661__Vfuncout))) {
                    vlSelfRef.tb_polite_dbg__DOT__cov_pe[vlSelfRef.tb_polite_dbg__DOT__pe] 
                        = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__cov_pe
                           [vlSelfRef.tb_polite_dbg__DOT__pe]);
                    ++(vlSymsp->__Vcoverage[408]);
                } else {
                    ++(vlSymsp->__Vcoverage[409]);
                }
                if (vlSelfRef.tb_polite_dbg__DOT__prev_open) {
                    vlSelfRef.tb_polite_dbg__DOT__cov_b2b_min 
                        = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__cov_b2b_min);
                    ++(vlSymsp->__Vcoverage[410]);
                } else {
                    ++(vlSymsp->__Vcoverage[411]);
                }
                ++(vlSymsp->__Vcoverage[412]);
            } else {
                ++(vlSymsp->__Vcoverage[413]);
            }
            if (((IData)(__Vtask_tb_polite_dbg__DOT__check_comb__658__tick_e) 
                 & (IData)(vlSelfRef.tb_polite_dbg__DOT__sb_active))) {
                if (VL_GTS_III(32, 6U, vlSelfRef.tb_polite_dbg__DOT__sb_cnt)) {
                    vlSelfRef.tb_polite_dbg__DOT____Vlvbound_h66fb07c1__0 
                        = vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn;
                    if (VL_LIKELY((0x17U >= (0x1fU 
                                             & VL_MULS_III(32, (IData)(4U), vlSelfRef.tb_polite_dbg__DOT__sb_cnt))))) {
                        vlSelfRef.tb_polite_dbg__DOT__sb_got 
                            = (((~ ((IData)(0xfU) << 
                                    (0x1fU & VL_MULS_III(32, (IData)(4U), vlSelfRef.tb_polite_dbg__DOT__sb_cnt)))) 
                                & vlSelfRef.tb_polite_dbg__DOT__sb_got) 
                               | (0xffffffU & ((IData)(vlSelfRef.tb_polite_dbg__DOT____Vlvbound_h66fb07c1__0) 
                                               << (0x1fU 
                                                   & VL_MULS_III(32, (IData)(4U), vlSelfRef.tb_polite_dbg__DOT__sb_cnt)))));
                    }
                    ++(vlSymsp->__Vcoverage[414]);
                } else {
                    ++(vlSymsp->__Vcoverage[415]);
                }
                vlSelfRef.tb_polite_dbg__DOT__sb_cnt 
                    = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__sb_cnt);
                ++(vlSymsp->__Vcoverage[416]);
            } else {
                ++(vlSymsp->__Vcoverage[417]);
            }
            vlSelfRef.tb_polite_dbg__DOT__prev_open 
                = __Vtask_tb_polite_dbg__DOT__check_comb__658__open_e;
            ++(vlSymsp->__Vcoverage[420]);
        } else if (__Vtask_tb_polite_dbg__DOT__check_comb__658__open_e) {
            vlSelfRef.tb_polite_dbg__DOT__cov_hold_in_freeze 
                = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__cov_hold_in_freeze);
            ++(vlSymsp->__Vcoverage[418]);
        } else {
            ++(vlSymsp->__Vcoverage[419]);
        }
        vlSelfRef.tb_polite_dbg__DOT__s_en = vlSelfRef.tb_polite_dbg__DOT__en;
        vlSelfRef.tb_polite_dbg__DOT__s_start = vlSelfRef.tb_polite_dbg__DOT__start;
        vlSelfRef.tb_polite_dbg__DOT__s_tick = __Vtask_tb_polite_dbg__DOT__check_comb__658__tick_e;
        vlSelfRef.tb_polite_dbg__DOT__s_len = (([&]() {
                    __Vfunc_tb_polite_dbg__DOT__is_wide__662__o 
                        = vlSelfRef.tb_polite_dbg__DOT__op;
                    __Vfunc_tb_polite_dbg__DOT__is_wide__662__Vfuncout 
                        = ((8U == (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__662__o)) 
                           | (0xaU == (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__662__o)));
                    ++(vlSymsp->__Vcoverage[344]);
                }(), (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__662__Vfuncout))
                                                ? 0xcU
                                                : 4U);
        vlSelfRef.tb_polite_dbg__DOT__s_val = __Vtask_tb_polite_dbg__DOT__check_comb__658__val_e;
        ++(vlSymsp->__Vcoverage[421]);
        co_await vlSelfRef.__VtrigSched_hd5d9f447__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_polite_dbg.clk)", 
                                                             "polite_dbg_tb.sv", 
                                                             280);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        {
            if (vlSelfRef.tb_polite_dbg__DOT__s_en) {
                ++(vlSymsp->__Vcoverage[423]);
            } else {
                goto __Vlabel4;
            }
            if (vlSelfRef.tb_polite_dbg__DOT__s_start) {
                vlSelfRef.tb_polite_dbg__DOT__m_val 
                    = vlSelfRef.tb_polite_dbg__DOT__s_val;
                vlSelfRef.tb_polite_dbg__DOT__m_left 
                    = (0xfU & ((IData)(vlSelfRef.tb_polite_dbg__DOT__s_len) 
                               - (IData)(1U)));
                vlSelfRef.tb_polite_dbg__DOT__m_k = vlSelfRef.tb_polite_dbg__DOT__s_tick;
                ++(vlSymsp->__Vcoverage[426]);
            } else if ((0U != (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left))) {
                vlSelfRef.tb_polite_dbg__DOT__m_left 
                    = (0xfU & ((IData)(vlSelfRef.tb_polite_dbg__DOT__m_left) 
                               - (IData)(1U)));
                vlSelfRef.tb_polite_dbg__DOT__m_k = 
                    (7U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__m_k) 
                           + (IData)(vlSelfRef.tb_polite_dbg__DOT__s_tick)));
                ++(vlSymsp->__Vcoverage[424]);
            } else {
                ++(vlSymsp->__Vcoverage[425]);
            }
            if (((IData)(vlSelfRef.tb_polite_dbg__DOT__sb_active) 
                 & (0U == (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left)))) {
                vlSelfRef.tb_polite_dbg__DOT__sb_active = 0U;
                vlSelfRef.tb_polite_dbg__DOT__chk_count 
                    = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__chk_count);
                if (VL_UNLIKELY(((vlSelfRef.tb_polite_dbg__DOT__sb_cnt 
                                  != vlSelfRef.tb_polite_dbg__DOT__sb_need) 
                                 | (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                                    != vlSelfRef.tb_polite_dbg__DOT__sb_exp)))) {
                    vlSelfRef.tb_polite_dbg__DOT__err_count 
                        = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__err_count);
                    VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:243: Assertion failed in %Ntb_polite_dbg.model_clock: [%0t] freeze scoreboard: got %0d nibbles = %06x, exp %0d nibbles = %06x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,32,vlSelfRef.tb_polite_dbg__DOT__sb_cnt,
                                 24,vlSelfRef.tb_polite_dbg__DOT__sb_got,
                                 32,vlSelfRef.tb_polite_dbg__DOT__sb_need,
                                 24,vlSelfRef.tb_polite_dbg__DOT__sb_exp);
                    VL_STOP_MT("polite_dbg_tb.sv", 243, "");
                } else {
                    ++(vlSymsp->__Vcoverage[427]);
                }
                ++(vlSymsp->__Vcoverage[428]);
            } else {
                ++(vlSymsp->__Vcoverage[429]);
            }
            __Vlabel4: ;
        }
        ++(vlSymsp->__Vcoverage[430]);
        ++(vlSymsp->__Vcoverage[435]);
        ++(vlSymsp->__Vcoverage[436]);
        __Vtask_tb_polite_dbg__DOT__idle__655__tb_polite_dbg__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_polite_dbg__DOT__idle__655__tb_polite_dbg__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    ++(vlSymsp->__Vcoverage[437]);
    vlSelfRef.tb_polite_dbg__DOT__rst_n = 0U;
    vlSelfRef.tb_polite_dbg__DOT__en = 0U;
    vlSelfRef.tb_polite_dbg__DOT__start = 0U;
    vlSelfRef.tb_polite_dbg__DOT__op = 6U;
    vlSelfRef.tb_polite_dbg__DOT__pe = 0U;
    vlSelfRef.tb_polite_dbg__DOT__run_busy = 0U;
    vlSelfRef.tb_polite_dbg__DOT__status = 0U;
    vlSelfRef.tb_polite_dbg__DOT__inbuf = 0U;
    vlSelfRef.tb_polite_dbg__DOT__d = 0U;
    vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] = 0U;
    vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] = 0U;
    vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] = 0U;
    vlSelfRef.tb_polite_dbg__DOT__mul_all = 0U;
    vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] = 0U;
    vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] = 0U;
    vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] = 0U;
    vlSelfRef.tb_polite_dbg__DOT__m_left = 0U;
    vlSelfRef.tb_polite_dbg__DOT__m_k = 0U;
    vlSelfRef.tb_polite_dbg__DOT__m_val = 0U;
    vlSelfRef.tb_polite_dbg__DOT__sb_active = 0U;
    vlSelfRef.tb_polite_dbg__DOT__prev_open = 0U;
    ++(vlSymsp->__Vcoverage[398]);
    co_await vlSelfRef.__VtrigSched_hd5d9f447__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_dbg.clk)", 
                                                         "polite_dbg_tb.sv", 
                                                         310);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    ++(vlSymsp->__Vcoverage[441]);
    co_await vlSelfRef.__VtrigSched_hd5d9f447__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_dbg.clk)", 
                                                         "polite_dbg_tb.sv", 
                                                         310);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    ++(vlSymsp->__Vcoverage[441]);
    co_await vlSelfRef.__VtrigSched_hd5d9f447__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_polite_dbg.clk)", 
                                                         "polite_dbg_tb.sv", 
                                                         310);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    ++(vlSymsp->__Vcoverage[441]);
    co_await vlSelfRef.__VtrigSched_hd5d9f406__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_dbg.clk)", 
                                                         "polite_dbg_tb.sv", 
                                                         311);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_polite_dbg__DOT__rst_n = 1U;
    vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                               + vlSelfRef.tb_polite_dbg__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left) 
                     != (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left)))) {
        vlSelfRef.tb_polite_dbg__DOT__err_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:250: Assertion failed in %Ntb_polite_dbg.check_regs: [%0t] dut.fz_left mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left),
                     4,vlSelfRef.tb_polite_dbg__DOT__m_left,
                     4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                     2,vlSelfRef.tb_polite_dbg__DOT__pe,
                     1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                     1,vlSelfRef.tb_polite_dbg__DOT__phase);
        VL_STOP_MT("polite_dbg_tb.sv", 250, "");
    } else {
        ++(vlSymsp->__Vcoverage[431]);
    }
    vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                               + vlSelfRef.tb_polite_dbg__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k) 
                     != (IData)(vlSelfRef.tb_polite_dbg__DOT__m_k)))) {
        vlSelfRef.tb_polite_dbg__DOT__err_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:251: Assertion failed in %Ntb_polite_dbg.check_regs: [%0t] dut.fz_k mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,3,
                     (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k),
                     3,vlSelfRef.tb_polite_dbg__DOT__m_k,
                     4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                     2,vlSelfRef.tb_polite_dbg__DOT__pe,
                     1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                     1,vlSelfRef.tb_polite_dbg__DOT__phase);
        VL_STOP_MT("polite_dbg_tb.sv", 251, "");
    } else {
        ++(vlSymsp->__Vcoverage[432]);
    }
    vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                               + vlSelfRef.tb_polite_dbg__DOT__chk_count);
    if (VL_UNLIKELY((vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                     != vlSelfRef.tb_polite_dbg__DOT__m_val))) {
        vlSelfRef.tb_polite_dbg__DOT__err_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:252: Assertion failed in %Ntb_polite_dbg.check_regs: [%0t] dut.fz_val mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,24,
                     vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val,
                     24,vlSelfRef.tb_polite_dbg__DOT__m_val,
                     4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                     2,vlSelfRef.tb_polite_dbg__DOT__pe,
                     1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                     1,vlSelfRef.tb_polite_dbg__DOT__phase);
        VL_STOP_MT("polite_dbg_tb.sv", 252, "");
    } else {
        ++(vlSymsp->__Vcoverage[433]);
    }
    ++(vlSymsp->__Vcoverage[434]);
    ++(vlSymsp->__Vcoverage[442]);
    __Vtask_tb_polite_dbg__DOT__idle__667__n = 2U;
    __Vtask_tb_polite_dbg__DOT__idle__667__tb_polite_dbg__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_polite_dbg__DOT__idle__667__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_polite_dbg__DOT__idle__667__tb_polite_dbg__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        __Vtask_tb_polite_dbg__DOT__tick__668__rb_v = 0U;
        __Vtask_tb_polite_dbg__DOT__tick__668__pe_v = 0U;
        __Vtask_tb_polite_dbg__DOT__tick__668__op_v = 6U;
        __Vtask_tb_polite_dbg__DOT__tick__668__req_v = 0U;
        __Vtask_tb_polite_dbg__DOT__tick__668__en_v = 1U;
        co_await vlSelfRef.__VtrigSched_hd5d9f406__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_polite_dbg.clk)", 
                                                             "polite_dbg_tb.sv", 
                                                             266);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left) 
                         != (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left)))) {
            vlSelfRef.tb_polite_dbg__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:250: Assertion failed in %Ntb_polite_dbg.check_regs: [%0t] dut.fz_left mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,4,(IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left),
                         4,vlSelfRef.tb_polite_dbg__DOT__m_left,
                         4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                         2,vlSelfRef.tb_polite_dbg__DOT__pe,
                         1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                         1,vlSelfRef.tb_polite_dbg__DOT__phase);
            VL_STOP_MT("polite_dbg_tb.sv", 250, "");
        } else {
            ++(vlSymsp->__Vcoverage[431]);
        }
        vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k) 
                         != (IData)(vlSelfRef.tb_polite_dbg__DOT__m_k)))) {
            vlSelfRef.tb_polite_dbg__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:251: Assertion failed in %Ntb_polite_dbg.check_regs: [%0t] dut.fz_k mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,3,(IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k),
                         3,vlSelfRef.tb_polite_dbg__DOT__m_k,
                         4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                         2,vlSelfRef.tb_polite_dbg__DOT__pe,
                         1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                         1,vlSelfRef.tb_polite_dbg__DOT__phase);
            VL_STOP_MT("polite_dbg_tb.sv", 251, "");
        } else {
            ++(vlSymsp->__Vcoverage[432]);
        }
        vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__chk_count);
        if (VL_UNLIKELY((vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                         != vlSelfRef.tb_polite_dbg__DOT__m_val))) {
            vlSelfRef.tb_polite_dbg__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:252: Assertion failed in %Ntb_polite_dbg.check_regs: [%0t] dut.fz_val mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,24,vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val,
                         24,vlSelfRef.tb_polite_dbg__DOT__m_val,
                         4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                         2,vlSelfRef.tb_polite_dbg__DOT__pe,
                         1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                         1,vlSelfRef.tb_polite_dbg__DOT__phase);
            VL_STOP_MT("polite_dbg_tb.sv", 252, "");
        } else {
            ++(vlSymsp->__Vcoverage[433]);
        }
        ++(vlSymsp->__Vcoverage[434]);
        vlSelfRef.tb_polite_dbg__DOT__en = __Vtask_tb_polite_dbg__DOT__tick__668__en_v;
        vlSelfRef.tb_polite_dbg__DOT__op = __Vtask_tb_polite_dbg__DOT__tick__668__op_v;
        vlSelfRef.tb_polite_dbg__DOT__pe = __Vtask_tb_polite_dbg__DOT__tick__668__pe_v;
        vlSelfRef.tb_polite_dbg__DOT__run_busy = __Vtask_tb_polite_dbg__DOT__tick__668__rb_v;
        vlSelfRef.tb_polite_dbg__DOT__status = (0xffU 
                                                & VL_RANDOM_I());
        vlSelfRef.tb_polite_dbg__DOT__inbuf = (0xffU 
                                               & VL_RANDOM_I());
        vlSelfRef.tb_polite_dbg__DOT__d = (0xffU & 
                                           VL_RANDOM_I());
        VL_RANDOM_W(96, vlSelfRef.tb_polite_dbg__DOT__psum_all);
        vlSelfRef.tb_polite_dbg__DOT__mul_all = VL_RANDOM_I();
        VL_RANDOM_W(96, vlSelfRef.tb_polite_dbg__DOT__sum_all);
        vlSelfRef.tb_polite_dbg__DOT__start = ((IData)(__Vtask_tb_polite_dbg__DOT__tick__668__req_v) 
                                               & (0U 
                                                  == (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "polite_dbg_tb.sv", 
                                             279);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_polite_dbg__DOT__check_comb__670__open_e 
            = (0U != (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left));
        __Vtask_tb_polite_dbg__DOT__check_comb__670__ofz_e 
            = ((IData)(vlSelfRef.tb_polite_dbg__DOT__start) 
               | (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__670__open_e));
        __Vtask_tb_polite_dbg__DOT__check_comb__670__tick_e 
            = ((IData)(__Vtask_tb_polite_dbg__DOT__check_comb__670__ofz_e) 
               & (IData)(vlSelfRef.tb_polite_dbg__DOT__phase));
        __Vtask_tb_polite_dbg__DOT__check_comb__670__val_e 
            = ((IData)(vlSelfRef.tb_polite_dbg__DOT__start)
                ? ([&]() {
                    {
                        __Vfunc_tb_polite_dbg__DOT__capture_value__671__ps 
                            = ((0x5fU >= (0x7fU & ((IData)(0x18U) 
                                                   * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))
                                ? (0xffffffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))
                                                  ? 0U
                                                  : 
                                                 (vlSelfRef.tb_polite_dbg__DOT__psum_all[
                                                  (((IData)(0x17U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x18U) 
                                                        * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x18U) 
                                                       * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)))))) 
                                                | (vlSelfRef.tb_polite_dbg__DOT__psum_all[
                                                   (3U 
                                                    & (((IData)(0x18U) 
                                                        * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x18U) 
                                                       * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))))
                                : 0U);
                        __Vfunc_tb_polite_dbg__DOT__capture_value__671__mu 
                            = (0xffU & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                                        >> (0x1fU & 
                                            VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.tb_polite_dbg__DOT__pe), 3U))));
                        __Vfunc_tb_polite_dbg__DOT__capture_value__671__sm 
                            = ((0x5fU >= (0x7fU & ((IData)(0x18U) 
                                                   * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))
                                ? (0xffffffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))
                                                  ? 0U
                                                  : 
                                                 (vlSelfRef.tb_polite_dbg__DOT__sum_all[
                                                  (((IData)(0x17U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x18U) 
                                                        * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x18U) 
                                                       * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)))))) 
                                                | (vlSelfRef.tb_polite_dbg__DOT__sum_all[
                                                   (3U 
                                                    & (((IData)(0x18U) 
                                                        * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x18U) 
                                                       * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))))
                                : 0U);
                        if ((8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                            if ((4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                                __Vfunc_tb_polite_dbg__DOT__capture_value__671__Vfuncout 
                                    = vlSelfRef.tb_polite_dbg__DOT__d;
                                goto __Vlabel5;
                            } else if ((2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                                if ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                                    __Vfunc_tb_polite_dbg__DOT__capture_value__671__Vfuncout 
                                        = vlSelfRef.tb_polite_dbg__DOT__d;
                                    goto __Vlabel5;
                                } else {
                                    __Vfunc_tb_polite_dbg__DOT__capture_value__671__Vfuncout 
                                        = ((IData)(vlSelfRef.tb_polite_dbg__DOT__run_busy)
                                            ? __Vfunc_tb_polite_dbg__DOT__capture_value__671__sm
                                            : __Vfunc_tb_polite_dbg__DOT__capture_value__671__ps);
                                    goto __Vlabel5;
                                }
                            } else if ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                                __Vfunc_tb_polite_dbg__DOT__capture_value__671__Vfuncout 
                                    = __Vfunc_tb_polite_dbg__DOT__capture_value__671__mu;
                                goto __Vlabel5;
                            } else {
                                __Vfunc_tb_polite_dbg__DOT__capture_value__671__Vfuncout 
                                    = __Vfunc_tb_polite_dbg__DOT__capture_value__671__ps;
                                goto __Vlabel5;
                            }
                        } else if ((4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                            if ((2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                                if ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                                    __Vfunc_tb_polite_dbg__DOT__capture_value__671__Vfuncout 
                                        = vlSelfRef.tb_polite_dbg__DOT__inbuf;
                                    goto __Vlabel5;
                                } else {
                                    __Vfunc_tb_polite_dbg__DOT__capture_value__671__Vfuncout 
                                        = vlSelfRef.tb_polite_dbg__DOT__status;
                                    goto __Vlabel5;
                                }
                            } else {
                                __Vfunc_tb_polite_dbg__DOT__capture_value__671__Vfuncout 
                                    = vlSelfRef.tb_polite_dbg__DOT__d;
                                goto __Vlabel5;
                            }
                        } else {
                            __Vfunc_tb_polite_dbg__DOT__capture_value__671__Vfuncout 
                                = vlSelfRef.tb_polite_dbg__DOT__d;
                            goto __Vlabel5;
                        }
                        __Vlabel5: ;
                    }
                    ++(vlSymsp->__Vcoverage[343]);
                }(), __Vfunc_tb_polite_dbg__DOT__capture_value__671__Vfuncout)
                : vlSelfRef.tb_polite_dbg__DOT__m_val);
        __Vtask_tb_polite_dbg__DOT__check_comb__670__k_e 
            = ((IData)(vlSelfRef.tb_polite_dbg__DOT__start)
                ? 0U : (IData)(vlSelfRef.tb_polite_dbg__DOT__m_k));
        vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__chk_count);
        if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left)) 
                         != (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__670__open_e)))) {
            vlSelfRef.tb_polite_dbg__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:185: Assertion failed in %Ntb_polite_dbg.check_comb: [%0t] open mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,1,(0U != (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left)),
                         1,(IData)(__Vtask_tb_polite_dbg__DOT__check_comb__670__open_e),
                         4,vlSelfRef.tb_polite_dbg__DOT__op,
                         2,(IData)(vlSelfRef.tb_polite_dbg__DOT__pe),
                         1,vlSelfRef.tb_polite_dbg__DOT__start,
                         1,(IData)(vlSelfRef.tb_polite_dbg__DOT__phase));
            VL_STOP_MT("polite_dbg_tb.sv", 185, "");
        } else {
            ++(vlSymsp->__Vcoverage[399]);
        }
        vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_dbg__DOT__ofz) 
                         != (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__670__ofz_e)))) {
            vlSelfRef.tb_polite_dbg__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:186: Assertion failed in %Ntb_polite_dbg.check_comb: [%0t] ofz mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,1,(IData)(vlSelfRef.tb_polite_dbg__DOT__ofz),
                         1,__Vtask_tb_polite_dbg__DOT__check_comb__670__ofz_e,
                         4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                         2,vlSelfRef.tb_polite_dbg__DOT__pe,
                         1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                         1,vlSelfRef.tb_polite_dbg__DOT__phase);
            VL_STOP_MT("polite_dbg_tb.sv", 186, "");
        } else {
            ++(vlSymsp->__Vcoverage[400]);
        }
        vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__chk_count);
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_dbg__DOT__dbg_tick) 
                         != (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__670__tick_e)))) {
            vlSelfRef.tb_polite_dbg__DOT__err_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__err_count);
            VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:187: Assertion failed in %Ntb_polite_dbg.check_comb: [%0t] dbg_tick mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,1,(IData)(vlSelfRef.tb_polite_dbg__DOT__dbg_tick),
                         1,__Vtask_tb_polite_dbg__DOT__check_comb__670__tick_e,
                         4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                         2,vlSelfRef.tb_polite_dbg__DOT__pe,
                         1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                         1,vlSelfRef.tb_polite_dbg__DOT__phase);
            VL_STOP_MT("polite_dbg_tb.sv", 187, "");
        } else {
            ++(vlSymsp->__Vcoverage[401]);
        }
        if (((IData)(__Vtask_tb_polite_dbg__DOT__check_comb__670__tick_e) 
             & (6U > (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__670__k_e)))) {
            vlSelfRef.tb_polite_dbg__DOT__chk_count 
                = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__chk_count);
            if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn) 
                             != ((0x17U >= (0x1fU & 
                                            VL_SHIFTL_III(5,32,32, (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__670__k_e), 2U)))
                                  ? (0xfU & (__Vtask_tb_polite_dbg__DOT__check_comb__670__val_e 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(5,32,32, (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__670__k_e), 2U))))
                                  : 0U)))) {
                vlSelfRef.tb_polite_dbg__DOT__err_count 
                    = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__err_count);
                VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:190: Assertion failed in %Ntb_polite_dbg.check_comb: [%0t] dbg_nib mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1000),
                             -9,4,(IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn),
                             4,((0x17U >= (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__670__k_e), 2U)))
                                 ? (0xfU & (__Vtask_tb_polite_dbg__DOT__check_comb__670__val_e 
                                            >> (0x1fU 
                                                & VL_SHIFTL_III(5,32,32, (IData)(__Vtask_tb_polite_dbg__DOT__check_comb__670__k_e), 2U))))
                                 : 0U),4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                             2,vlSelfRef.tb_polite_dbg__DOT__pe,
                             1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                             1,vlSelfRef.tb_polite_dbg__DOT__phase);
                VL_STOP_MT("polite_dbg_tb.sv", 190, "");
            } else {
                ++(vlSymsp->__Vcoverage[402]);
            }
            ++(vlSymsp->__Vcoverage[403]);
        } else {
            ++(vlSymsp->__Vcoverage[404]);
        }
        if (vlSelfRef.tb_polite_dbg__DOT__en) {
            if (vlSelfRef.tb_polite_dbg__DOT__start) {
                if (VL_UNLIKELY(vlSelfRef.tb_polite_dbg__DOT__sb_active)) {
                    vlSelfRef.tb_polite_dbg__DOT__err_count 
                        = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__err_count);
                    VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:196: Assertion failed in %Ntb_polite_dbg.check_comb: [%0t] new freeze started before the previous one finished\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9);
                    VL_STOP_MT("polite_dbg_tb.sv", 196, "");
                } else {
                    ++(vlSymsp->__Vcoverage[405]);
                }
                vlSelfRef.tb_polite_dbg__DOT__sb_active = 1U;
                vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                    = __Vtask_tb_polite_dbg__DOT__check_comb__670__val_e;
                vlSelfRef.tb_polite_dbg__DOT__sb_need 
                    = (([&]() {
                            __Vfunc_tb_polite_dbg__DOT__is_wide__672__o 
                                = vlSelfRef.tb_polite_dbg__DOT__op;
                            __Vfunc_tb_polite_dbg__DOT__is_wide__672__Vfuncout 
                                = ((8U == (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__672__o)) 
                                   | (0xaU == (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__672__o)));
                            ++(vlSymsp->__Vcoverage[344]);
                        }(), (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__672__Vfuncout))
                        ? 6U : 2U);
                vlSelfRef.tb_polite_dbg__DOT__sb_got = 0U;
                vlSelfRef.tb_polite_dbg__DOT__sb_cnt = 0U;
                vlSelfRef.tb_polite_dbg__DOT__n_reads 
                    = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__n_reads);
                vlSelfRef.tb_polite_dbg__DOT____Vlvbound_hf74c54a3__0 
                    = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                       [((5U >= (7U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__op) 
                                       - (IData)(6U))))
                          ? (7U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__op) 
                                   - (IData)(6U))) : 0U)]
                       [vlSelfRef.tb_polite_dbg__DOT__phase]);
                if (VL_LIKELY((5U >= (7U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__op) 
                                            - (IData)(6U)))))) {
                    vlSelfRef.tb_polite_dbg__DOT__cov_op_phase[(7U 
                                                                & ((IData)(vlSelfRef.tb_polite_dbg__DOT__op) 
                                                                   - (IData)(6U)))][vlSelfRef.tb_polite_dbg__DOT__phase] 
                        = vlSelfRef.tb_polite_dbg__DOT____Vlvbound_hf74c54a3__0;
                }
                if ((0xaU == (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                    vlSelfRef.tb_polite_dbg__DOT__cov_add_rb[vlSelfRef.tb_polite_dbg__DOT__run_busy] 
                        = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__cov_add_rb
                           [vlSelfRef.tb_polite_dbg__DOT__run_busy]);
                    ++(vlSymsp->__Vcoverage[406]);
                } else {
                    ++(vlSymsp->__Vcoverage[407]);
                }
                if (([&]() {
                            __Vfunc_tb_polite_dbg__DOT__is_wide__673__o 
                                = vlSelfRef.tb_polite_dbg__DOT__op;
                            __Vfunc_tb_polite_dbg__DOT__is_wide__673__Vfuncout 
                                = ((8U == (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__673__o)) 
                                   | (0xaU == (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__673__o)));
                            ++(vlSymsp->__Vcoverage[344]);
                        }(), (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__673__Vfuncout))) {
                    vlSelfRef.tb_polite_dbg__DOT__cov_pe[vlSelfRef.tb_polite_dbg__DOT__pe] 
                        = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__cov_pe
                           [vlSelfRef.tb_polite_dbg__DOT__pe]);
                    ++(vlSymsp->__Vcoverage[408]);
                } else {
                    ++(vlSymsp->__Vcoverage[409]);
                }
                if (vlSelfRef.tb_polite_dbg__DOT__prev_open) {
                    vlSelfRef.tb_polite_dbg__DOT__cov_b2b_min 
                        = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__cov_b2b_min);
                    ++(vlSymsp->__Vcoverage[410]);
                } else {
                    ++(vlSymsp->__Vcoverage[411]);
                }
                ++(vlSymsp->__Vcoverage[412]);
            } else {
                ++(vlSymsp->__Vcoverage[413]);
            }
            if (((IData)(__Vtask_tb_polite_dbg__DOT__check_comb__670__tick_e) 
                 & (IData)(vlSelfRef.tb_polite_dbg__DOT__sb_active))) {
                if (VL_GTS_III(32, 6U, vlSelfRef.tb_polite_dbg__DOT__sb_cnt)) {
                    vlSelfRef.tb_polite_dbg__DOT____Vlvbound_h66fb07c1__0 
                        = vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn;
                    if (VL_LIKELY((0x17U >= (0x1fU 
                                             & VL_MULS_III(32, (IData)(4U), vlSelfRef.tb_polite_dbg__DOT__sb_cnt))))) {
                        vlSelfRef.tb_polite_dbg__DOT__sb_got 
                            = (((~ ((IData)(0xfU) << 
                                    (0x1fU & VL_MULS_III(32, (IData)(4U), vlSelfRef.tb_polite_dbg__DOT__sb_cnt)))) 
                                & vlSelfRef.tb_polite_dbg__DOT__sb_got) 
                               | (0xffffffU & ((IData)(vlSelfRef.tb_polite_dbg__DOT____Vlvbound_h66fb07c1__0) 
                                               << (0x1fU 
                                                   & VL_MULS_III(32, (IData)(4U), vlSelfRef.tb_polite_dbg__DOT__sb_cnt)))));
                    }
                    ++(vlSymsp->__Vcoverage[414]);
                } else {
                    ++(vlSymsp->__Vcoverage[415]);
                }
                vlSelfRef.tb_polite_dbg__DOT__sb_cnt 
                    = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__sb_cnt);
                ++(vlSymsp->__Vcoverage[416]);
            } else {
                ++(vlSymsp->__Vcoverage[417]);
            }
            vlSelfRef.tb_polite_dbg__DOT__prev_open 
                = __Vtask_tb_polite_dbg__DOT__check_comb__670__open_e;
            ++(vlSymsp->__Vcoverage[420]);
        } else if (__Vtask_tb_polite_dbg__DOT__check_comb__670__open_e) {
            vlSelfRef.tb_polite_dbg__DOT__cov_hold_in_freeze 
                = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__cov_hold_in_freeze);
            ++(vlSymsp->__Vcoverage[418]);
        } else {
            ++(vlSymsp->__Vcoverage[419]);
        }
        vlSelfRef.tb_polite_dbg__DOT__s_en = vlSelfRef.tb_polite_dbg__DOT__en;
        vlSelfRef.tb_polite_dbg__DOT__s_start = vlSelfRef.tb_polite_dbg__DOT__start;
        vlSelfRef.tb_polite_dbg__DOT__s_tick = __Vtask_tb_polite_dbg__DOT__check_comb__670__tick_e;
        vlSelfRef.tb_polite_dbg__DOT__s_len = (([&]() {
                    __Vfunc_tb_polite_dbg__DOT__is_wide__674__o 
                        = vlSelfRef.tb_polite_dbg__DOT__op;
                    __Vfunc_tb_polite_dbg__DOT__is_wide__674__Vfuncout 
                        = ((8U == (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__674__o)) 
                           | (0xaU == (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__674__o)));
                    ++(vlSymsp->__Vcoverage[344]);
                }(), (IData)(__Vfunc_tb_polite_dbg__DOT__is_wide__674__Vfuncout))
                                                ? 0xcU
                                                : 4U);
        vlSelfRef.tb_polite_dbg__DOT__s_val = __Vtask_tb_polite_dbg__DOT__check_comb__670__val_e;
        ++(vlSymsp->__Vcoverage[421]);
        co_await vlSelfRef.__VtrigSched_hd5d9f447__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_polite_dbg.clk)", 
                                                             "polite_dbg_tb.sv", 
                                                             280);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        {
            if (vlSelfRef.tb_polite_dbg__DOT__s_en) {
                ++(vlSymsp->__Vcoverage[423]);
            } else {
                goto __Vlabel6;
            }
            if (vlSelfRef.tb_polite_dbg__DOT__s_start) {
                vlSelfRef.tb_polite_dbg__DOT__m_val 
                    = vlSelfRef.tb_polite_dbg__DOT__s_val;
                vlSelfRef.tb_polite_dbg__DOT__m_left 
                    = (0xfU & ((IData)(vlSelfRef.tb_polite_dbg__DOT__s_len) 
                               - (IData)(1U)));
                vlSelfRef.tb_polite_dbg__DOT__m_k = vlSelfRef.tb_polite_dbg__DOT__s_tick;
                ++(vlSymsp->__Vcoverage[426]);
            } else if ((0U != (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left))) {
                vlSelfRef.tb_polite_dbg__DOT__m_left 
                    = (0xfU & ((IData)(vlSelfRef.tb_polite_dbg__DOT__m_left) 
                               - (IData)(1U)));
                vlSelfRef.tb_polite_dbg__DOT__m_k = 
                    (7U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__m_k) 
                           + (IData)(vlSelfRef.tb_polite_dbg__DOT__s_tick)));
                ++(vlSymsp->__Vcoverage[424]);
            } else {
                ++(vlSymsp->__Vcoverage[425]);
            }
            if (((IData)(vlSelfRef.tb_polite_dbg__DOT__sb_active) 
                 & (0U == (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left)))) {
                vlSelfRef.tb_polite_dbg__DOT__sb_active = 0U;
                vlSelfRef.tb_polite_dbg__DOT__chk_count 
                    = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__chk_count);
                if (VL_UNLIKELY(((vlSelfRef.tb_polite_dbg__DOT__sb_cnt 
                                  != vlSelfRef.tb_polite_dbg__DOT__sb_need) 
                                 | (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                                    != vlSelfRef.tb_polite_dbg__DOT__sb_exp)))) {
                    vlSelfRef.tb_polite_dbg__DOT__err_count 
                        = ((IData)(1U) + vlSelfRef.tb_polite_dbg__DOT__err_count);
                    VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:243: Assertion failed in %Ntb_polite_dbg.model_clock: [%0t] freeze scoreboard: got %0d nibbles = %06x, exp %0d nibbles = %06x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,32,vlSelfRef.tb_polite_dbg__DOT__sb_cnt,
                                 24,vlSelfRef.tb_polite_dbg__DOT__sb_got,
                                 32,vlSelfRef.tb_polite_dbg__DOT__sb_need,
                                 24,vlSelfRef.tb_polite_dbg__DOT__sb_exp);
                    VL_STOP_MT("polite_dbg_tb.sv", 243, "");
                } else {
                    ++(vlSymsp->__Vcoverage[427]);
                }
                ++(vlSymsp->__Vcoverage[428]);
            } else {
                ++(vlSymsp->__Vcoverage[429]);
            }
            __Vlabel6: ;
        }
        ++(vlSymsp->__Vcoverage[430]);
        ++(vlSymsp->__Vcoverage[435]);
        ++(vlSymsp->__Vcoverage[436]);
        __Vtask_tb_polite_dbg__DOT__idle__667__tb_polite_dbg__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_polite_dbg__DOT__idle__667__tb_polite_dbg__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    ++(vlSymsp->__Vcoverage[437]);
    co_await vlSelfRef.__VtrigSched_hd5d9f406__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_polite_dbg.clk)", 
                                                         "polite_dbg_tb.sv", 
                                                         436);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                               + vlSelfRef.tb_polite_dbg__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left) 
                     != (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left)))) {
        vlSelfRef.tb_polite_dbg__DOT__err_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:250: Assertion failed in %Ntb_polite_dbg.check_regs: [%0t] dut.fz_left mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left),
                     4,vlSelfRef.tb_polite_dbg__DOT__m_left,
                     4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                     2,vlSelfRef.tb_polite_dbg__DOT__pe,
                     1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                     1,vlSelfRef.tb_polite_dbg__DOT__phase);
        VL_STOP_MT("polite_dbg_tb.sv", 250, "");
    } else {
        ++(vlSymsp->__Vcoverage[431]);
    }
    vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                               + vlSelfRef.tb_polite_dbg__DOT__chk_count);
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k) 
                     != (IData)(vlSelfRef.tb_polite_dbg__DOT__m_k)))) {
        vlSelfRef.tb_polite_dbg__DOT__err_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:251: Assertion failed in %Ntb_polite_dbg.check_regs: [%0t] dut.fz_k mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,3,
                     (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k),
                     3,vlSelfRef.tb_polite_dbg__DOT__m_k,
                     4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                     2,vlSelfRef.tb_polite_dbg__DOT__pe,
                     1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                     1,vlSelfRef.tb_polite_dbg__DOT__phase);
        VL_STOP_MT("polite_dbg_tb.sv", 251, "");
    } else {
        ++(vlSymsp->__Vcoverage[432]);
    }
    vlSelfRef.tb_polite_dbg__DOT__chk_count = ((IData)(1U) 
                                               + vlSelfRef.tb_polite_dbg__DOT__chk_count);
    if (VL_UNLIKELY((vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                     != vlSelfRef.tb_polite_dbg__DOT__m_val))) {
        vlSelfRef.tb_polite_dbg__DOT__err_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_polite_dbg__DOT__err_count);
        VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:252: Assertion failed in %Ntb_polite_dbg.check_regs: [%0t] dut.fz_val mismatch: got %0x exp %0x (op=%0x pe=%0# start=%0b phase=%0b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,24,
                     vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val,
                     24,vlSelfRef.tb_polite_dbg__DOT__m_val,
                     4,(IData)(vlSelfRef.tb_polite_dbg__DOT__op),
                     2,vlSelfRef.tb_polite_dbg__DOT__pe,
                     1,(IData)(vlSelfRef.tb_polite_dbg__DOT__start),
                     1,vlSelfRef.tb_polite_dbg__DOT__phase);
        VL_STOP_MT("polite_dbg_tb.sv", 252, "");
    } else {
        ++(vlSymsp->__Vcoverage[433]);
    }
    ++(vlSymsp->__Vcoverage[434]);
    __Vtask_tb_polite_dbg__DOT__report_coverage__677__names[0U] = 
        std::string{"DEBUG_FLAGS"};
    __Vtask_tb_polite_dbg__DOT__report_coverage__677__names[1U] = 
        std::string{"DEBUG_BUFFER"};
    __Vtask_tb_polite_dbg__DOT__report_coverage__677__names[2U] = 
        std::string{"DEBUG_PARTIAL_SUM"};
    __Vtask_tb_polite_dbg__DOT__report_coverage__677__names[3U] = 
        std::string{"DEBUG_MULTIPLY"};
    __Vtask_tb_polite_dbg__DOT__report_coverage__677__names[4U] = 
        std::string{"DEBUG_ADD"};
    __Vtask_tb_polite_dbg__DOT__report_coverage__677__names[5U] = 
        std::string{"DEBUG_INPUT"};
    __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes = 0U;
    VL_WRITEF_NX("------------------------------------------------\n Coverage (reads started)       phase0  phase1\n",0);
    __Vtemp_90 = __Vtask_tb_polite_dbg__DOT__report_coverage__677__names
        [0U];
    VL_WRITEF_NX("   %-28@ %6d  %6d\n",0,-1,&(__Vtemp_90),
                 32,vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                 [0U][0U],32,vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                 [0U][1U]);
    if (((0U == vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
          [0U][0U]) | (0U == vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                       [0U][1U]))) {
        __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes 
            = ((IData)(1U) + __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes);
        ++(vlSymsp->__Vcoverage[459]);
    } else {
        ++(vlSymsp->__Vcoverage[460]);
    }
    ++(vlSymsp->__Vcoverage[461]);
    __Vtemp_92 = __Vtask_tb_polite_dbg__DOT__report_coverage__677__names
        [1U];
    VL_WRITEF_NX("   %-28@ %6d  %6d\n",0,-1,&(__Vtemp_92),
                 32,vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                 [1U][0U],32,vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                 [1U][1U]);
    if (((0U == vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
          [1U][0U]) | (0U == vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                       [1U][1U]))) {
        __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes 
            = ((IData)(1U) + __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes);
        ++(vlSymsp->__Vcoverage[459]);
    } else {
        ++(vlSymsp->__Vcoverage[460]);
    }
    ++(vlSymsp->__Vcoverage[461]);
    __Vtemp_94 = __Vtask_tb_polite_dbg__DOT__report_coverage__677__names
        [2U];
    VL_WRITEF_NX("   %-28@ %6d  %6d\n",0,-1,&(__Vtemp_94),
                 32,vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                 [2U][0U],32,vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                 [2U][1U]);
    if (((0U == vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
          [2U][0U]) | (0U == vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                       [2U][1U]))) {
        __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes 
            = ((IData)(1U) + __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes);
        ++(vlSymsp->__Vcoverage[459]);
    } else {
        ++(vlSymsp->__Vcoverage[460]);
    }
    ++(vlSymsp->__Vcoverage[461]);
    __Vtemp_96 = __Vtask_tb_polite_dbg__DOT__report_coverage__677__names
        [3U];
    VL_WRITEF_NX("   %-28@ %6d  %6d\n",0,-1,&(__Vtemp_96),
                 32,vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                 [3U][0U],32,vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                 [3U][1U]);
    if (((0U == vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
          [3U][0U]) | (0U == vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                       [3U][1U]))) {
        __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes 
            = ((IData)(1U) + __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes);
        ++(vlSymsp->__Vcoverage[459]);
    } else {
        ++(vlSymsp->__Vcoverage[460]);
    }
    ++(vlSymsp->__Vcoverage[461]);
    __Vtemp_98 = __Vtask_tb_polite_dbg__DOT__report_coverage__677__names
        [4U];
    VL_WRITEF_NX("   %-28@ %6d  %6d\n",0,-1,&(__Vtemp_98),
                 32,vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                 [4U][0U],32,vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                 [4U][1U]);
    if (((0U == vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
          [4U][0U]) | (0U == vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                       [4U][1U]))) {
        __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes 
            = ((IData)(1U) + __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes);
        ++(vlSymsp->__Vcoverage[459]);
    } else {
        ++(vlSymsp->__Vcoverage[460]);
    }
    ++(vlSymsp->__Vcoverage[461]);
    __Vtemp_100 = __Vtask_tb_polite_dbg__DOT__report_coverage__677__names
        [5U];
    VL_WRITEF_NX("   %-28@ %6d  %6d\n",0,-1,&(__Vtemp_100),
                 32,vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                 [5U][0U],32,vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                 [5U][1U]);
    if (((0U == vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
          [5U][0U]) | (0U == vlSelfRef.tb_polite_dbg__DOT__cov_op_phase
                       [5U][1U]))) {
        __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes 
            = ((IData)(1U) + __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes);
        ++(vlSymsp->__Vcoverage[459]);
    } else {
        ++(vlSymsp->__Vcoverage[460]);
    }
    ++(vlSymsp->__Vcoverage[461]);
    VL_WRITEF_NX("   DEBUG_ADD run_busy=0/1       %6d  %6d\n   24-bit reads PE0..PE3        %0d %0d %0d %0d\n   hold ticks inside a freeze   %6d\n   reads at minimum spacing     %6d\n",0,
                 32,vlSelfRef.tb_polite_dbg__DOT__cov_add_rb
                 [0U],32,vlSelfRef.tb_polite_dbg__DOT__cov_add_rb
                 [1U],32,vlSelfRef.tb_polite_dbg__DOT__cov_pe
                 [0U],32,vlSelfRef.tb_polite_dbg__DOT__cov_pe
                 [1U],32,vlSelfRef.tb_polite_dbg__DOT__cov_pe
                 [2U],32,vlSelfRef.tb_polite_dbg__DOT__cov_pe
                 [3U],32,vlSelfRef.tb_polite_dbg__DOT__cov_hold_in_freeze,
                 32,vlSelfRef.tb_polite_dbg__DOT__cov_b2b_min);
    if ((0U == vlSelfRef.tb_polite_dbg__DOT__cov_add_rb
         [0U])) {
        __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes 
            = ((IData)(1U) + __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes);
        ++(vlSymsp->__Vcoverage[462]);
    } else {
        ++(vlSymsp->__Vcoverage[463]);
    }
    ++(vlSymsp->__Vcoverage[464]);
    if ((0U == vlSelfRef.tb_polite_dbg__DOT__cov_add_rb
         [1U])) {
        __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes 
            = ((IData)(1U) + __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes);
        ++(vlSymsp->__Vcoverage[462]);
    } else {
        ++(vlSymsp->__Vcoverage[463]);
    }
    ++(vlSymsp->__Vcoverage[464]);
    if ((0U == vlSelfRef.tb_polite_dbg__DOT__cov_pe
         [0U])) {
        __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes 
            = ((IData)(1U) + __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes);
        ++(vlSymsp->__Vcoverage[465]);
    } else {
        ++(vlSymsp->__Vcoverage[466]);
    }
    ++(vlSymsp->__Vcoverage[467]);
    if ((0U == vlSelfRef.tb_polite_dbg__DOT__cov_pe
         [1U])) {
        __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes 
            = ((IData)(1U) + __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes);
        ++(vlSymsp->__Vcoverage[465]);
    } else {
        ++(vlSymsp->__Vcoverage[466]);
    }
    ++(vlSymsp->__Vcoverage[467]);
    if ((0U == vlSelfRef.tb_polite_dbg__DOT__cov_pe
         [2U])) {
        __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes 
            = ((IData)(1U) + __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes);
        ++(vlSymsp->__Vcoverage[465]);
    } else {
        ++(vlSymsp->__Vcoverage[466]);
    }
    ++(vlSymsp->__Vcoverage[467]);
    if ((0U == vlSelfRef.tb_polite_dbg__DOT__cov_pe
         [3U])) {
        __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes 
            = ((IData)(1U) + __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes);
        ++(vlSymsp->__Vcoverage[465]);
    } else {
        ++(vlSymsp->__Vcoverage[466]);
    }
    ++(vlSymsp->__Vcoverage[467]);
    if ((0U == vlSelfRef.tb_polite_dbg__DOT__cov_hold_in_freeze)) {
        __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes 
            = ((IData)(1U) + __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes);
        ++(vlSymsp->__Vcoverage[468]);
    } else {
        ++(vlSymsp->__Vcoverage[469]);
    }
    if ((0U == vlSelfRef.tb_polite_dbg__DOT__cov_b2b_min)) {
        __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes 
            = ((IData)(1U) + __Vtask_tb_polite_dbg__DOT__report_coverage__677__holes);
        ++(vlSymsp->__Vcoverage[470]);
    } else {
        ++(vlSymsp->__Vcoverage[471]);
    }
    VL_WRITEF_NX("   coverage holes               %6d\n",0,
                 32,__Vtask_tb_polite_dbg__DOT__report_coverage__677__holes);
    ++(vlSymsp->__Vcoverage[472]);
    VL_WRITEF_NX("------------------------------------------------\n polite_dbg_tb: %0d reads, %0d checks, %0d errors -> %s\n------------------------------------------------\n",0,
                 32,vlSelfRef.tb_polite_dbg__DOT__n_reads,
                 32,vlSelfRef.tb_polite_dbg__DOT__chk_count,
                 32,vlSelfRef.tb_polite_dbg__DOT__err_count,
                 32,((0U == vlSelfRef.tb_polite_dbg__DOT__err_count)
                      ? 0x50415353U : 0x4641494cU));
    VL_FINISH_MT("polite_dbg_tb.sv", 444, "");
    ++(vlSymsp->__Vcoverage[480]);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_polite_dbg___024root___eval_initial__TOP__Vtiming__1(Vtb_polite_dbg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1d98ULL, 
                                             nullptr, 
                                             "polite_dbg_tb.sv", 
                                             101);
        vlSelfRef.tb_polite_dbg__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_polite_dbg__DOT__clk)));
        ++(vlSymsp->__Vcoverage[268]);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_polite_dbg___024root___dump_triggers__act(Vtb_polite_dbg___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_polite_dbg___024root___eval_triggers__act(Vtb_polite_dbg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_polite_dbg__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_polite_dbg__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb_polite_dbg__DOT__rst_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_polite_dbg__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.tb_polite_dbg__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_polite_dbg__DOT__clk__0)));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_polite_dbg__DOT__clk__0 
        = vlSelfRef.tb_polite_dbg__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_polite_dbg__DOT__rst_n__0 
        = vlSelfRef.tb_polite_dbg__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_polite_dbg___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_polite_dbg___024root___act_sequent__TOP__0(Vtb_polite_dbg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root___act_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__clk) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__clk 
            = vlSelfRef.tb_polite_dbg__DOT__clk;
    }
}

VL_INLINE_OPT void Vtb_polite_dbg___024root___act_comb__TOP__0(Vtb_polite_dbg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__rst_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__rst_n 
            = vlSelfRef.tb_polite_dbg__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__en) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__en 
            = vlSelfRef.tb_polite_dbg__DOT__en;
    }
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__start) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__start))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__start 
            = vlSelfRef.tb_polite_dbg__DOT__start;
    }
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__run_busy) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__run_busy))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__run_busy 
            = vlSelfRef.tb_polite_dbg__DOT__run_busy;
    }
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__s_en) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_en))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_en 
            = vlSelfRef.tb_polite_dbg__DOT__s_en;
    }
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__s_start) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_start))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_start 
            = vlSelfRef.tb_polite_dbg__DOT__s_start;
    }
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__s_tick) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_tick))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_tick 
            = vlSelfRef.tb_polite_dbg__DOT__s_tick;
    }
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__sb_active) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_active))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_active 
            = vlSelfRef.tb_polite_dbg__DOT__sb_active;
    }
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__prev_open) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__prev_open))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__prev_open 
            = vlSelfRef.tb_polite_dbg__DOT__prev_open;
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__pe) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__pe)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__pe 
            = ((2U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__pe)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__pe) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__pe)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__pe 
            = ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__pe)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__m_k) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_k)))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_k 
            = ((6U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_k)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__m_k)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__m_k) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_k)))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_k 
            = ((5U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_k)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__m_k)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__m_k) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_k)))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_k 
            = ((3U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_k)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__m_k)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__op) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op 
            = ((0xeU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__op) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op 
            = ((0xdU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__op) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op 
            = ((0xbU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__op) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op 
            = ((7U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op)) 
               | (8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__m_left) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left)))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left 
            = ((0xeU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__m_left) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left)))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left 
            = ((0xdU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__m_left) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left)))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left 
            = ((0xbU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__m_left) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left)))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left 
            = ((7U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left)) 
               | (8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__s_len) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len)))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len 
            = ((0xeU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__s_len)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__s_len) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len)))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len 
            = ((0xdU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__s_len)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__s_len) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len)))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len 
            = ((0xbU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__s_len)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__s_len) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len)))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len 
            = ((7U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len)) 
               | (8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__s_len)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__status) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__status)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__status) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__status)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__status) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__status)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__status) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)) 
               | (8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__status)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__status) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_dbg__DOT__status)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__status) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_dbg__DOT__status)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__status) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_dbg__DOT__status)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__status) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_dbg__DOT__status)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)) 
               | (8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__d) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__d)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__d) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__d)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__d) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__d)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__d) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)) 
               | (8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__d)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__d) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_dbg__DOT__d)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__d) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_dbg__DOT__d)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__d) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_dbg__DOT__d)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__d) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_dbg__DOT__d)));
    }
    vlSelfRef.tb_polite_dbg__DOT__ofz = ((IData)(vlSelfRef.tb_polite_dbg__DOT__start) 
                                         | (0U != (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left)));
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xf7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0x7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xf7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0x7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xf7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0x7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xf7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0x7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xff7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfeffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x1000000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfdffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x2000000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfbffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x4000000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x8000000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xefffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x10000000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xdfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x20000000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xbfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x40000000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if (((vlSelfRef.tb_polite_dbg__DOT__mul_all ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0x7fffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x80000000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    vlSelfRef.tb_polite_dbg__DOT__dut__DOT__wide = 
        ((8U == (IData)(vlSelfRef.tb_polite_dbg__DOT__op)) 
         | (0xaU == (IData)(vlSelfRef.tb_polite_dbg__DOT__op)));
    vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e = ((IData)(vlSelfRef.tb_polite_dbg__DOT__start)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k));
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xff7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfeffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x1000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfdffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x2000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfbffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x4000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x8000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xefffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x10000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xdfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x20000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xbfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x40000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if (((vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
          ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0x7fffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x80000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xff7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfeffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x1000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfdffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x2000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfbffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x4000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x8000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xefffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x10000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xdfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x20000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xbfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x40000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if (((vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
          ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0x7fffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x80000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xff7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfeffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x1000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfdffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x2000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfbffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x4000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x8000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xefffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x10000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xdfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x20000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xbfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x40000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if (((vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
          ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0x7fffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x80000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xff7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfeffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x1000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfdffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x2000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfbffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x4000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x8000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xefffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x10000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xdfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x20000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xbfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x40000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if (((vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
          ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0x7fffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x80000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xff7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfeffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x1000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfdffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x2000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfbffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x4000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x8000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xefffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x10000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xdfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x20000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xbfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x40000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if (((vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
          ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0x7fffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x80000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xff7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfeffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x1000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfdffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x2000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfbffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x4000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x8000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xefffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x10000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xdfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x20000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xbfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x40000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if (((vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
          ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0x7fffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x80000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu = (0xffU 
                                                  & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.tb_polite_dbg__DOT__pe), 3U))));
    if ((0x5fU >= (0x7fU & ((IData)(0x18U) * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))) {
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
            = (0xffffffU & (((0U == (0x1fU & ((IData)(0x18U) 
                                              * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))
                              ? 0U : (vlSelfRef.tb_polite_dbg__DOT__psum_all[
                                      (((IData)(0x17U) 
                                        + (0x7fU & 
                                           ((IData)(0x18U) 
                                            * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x18U) 
                                                       * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)))))) 
                            | (vlSelfRef.tb_polite_dbg__DOT__psum_all[
                               (3U & (((IData)(0x18U) 
                                       * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))));
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
            = (0xffffffU & (((0U == (0x1fU & ((IData)(0x18U) 
                                              * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))
                              ? 0U : (vlSelfRef.tb_polite_dbg__DOT__sum_all[
                                      (((IData)(0x17U) 
                                        + (0x7fU & 
                                           ((IData)(0x18U) 
                                            * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x18U) 
                                                       * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)))))) 
                            | (vlSelfRef.tb_polite_dbg__DOT__sum_all[
                               (3U & (((IData)(0x18U) 
                                       * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))));
    } else {
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps = 0U;
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm = 0U;
    }
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__ofz) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__ofz))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__ofz 
            = vlSelfRef.tb_polite_dbg__DOT__ofz;
    }
    vlSelfRef.tb_polite_dbg__DOT__dbg_tick = ((IData)(vlSelfRef.tb_polite_dbg__DOT__ofz) 
                                              & (IData)(vlSelfRef.tb_polite_dbg__DOT__phase));
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__wide) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__wide))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__wide 
            = vlSelfRef.tb_polite_dbg__DOT__dut__DOT__wide;
    }
    vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e 
        = ((IData)(vlSelfRef.tb_polite_dbg__DOT__start)
            ? ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__wide)
                ? 0xcU : 4U) : (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left));
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__k_e)))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__k_e 
            = ((6U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__k_e)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__k_e)))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__k_e 
            = ((5U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__k_e)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__k_e)))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__k_e 
            = ((3U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__k_e)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e)));
    }
    vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk_raw 
        = (7U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__phase)
                  ? (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e)
                  : ((0U == (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e))
                      ? 0U : ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e) 
                              - (IData)(1U)))));
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)) 
               | (8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu)));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfffffeU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfffffdU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfffffbU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfffff7U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xffffefU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xffffdfU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xffffbfU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xffff7fU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfffeffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfffdffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfffbffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfff7ffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xffefffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xffdfffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xffbfffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xff7fffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfeffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfdffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfbffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xf7ffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xefffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xdfffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xbfffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0x7fffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfffffeU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfffffdU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfffffbU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfffff7U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xffffefU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xffffdfU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xffffbfU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xffff7fU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfffeffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfffdffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfffbffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfff7ffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xffefffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xffdfffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xffbfffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xff7fffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfeffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfdffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfbffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xf7ffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xefffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xdfffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xbfffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0x7fffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
        if ((4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
            vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                = vlSelfRef.tb_polite_dbg__DOT__d;
            ++(vlSymsp->__Vcoverage[597]);
        } else if ((2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
            if ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                ++(vlSymsp->__Vcoverage[597]);
                vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                    = vlSelfRef.tb_polite_dbg__DOT__d;
            } else {
                ++(vlSymsp->__Vcoverage[596]);
                vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                    = ((IData)(vlSelfRef.tb_polite_dbg__DOT__run_busy)
                        ? vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm
                        : vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps);
            }
        } else if ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
            ++(vlSymsp->__Vcoverage[595]);
            vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                = vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu;
        } else {
            ++(vlSymsp->__Vcoverage[594]);
            vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                = vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps;
        }
    } else if ((4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
        if ((2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
            if ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                ++(vlSymsp->__Vcoverage[593]);
                vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                    = vlSelfRef.tb_polite_dbg__DOT__inbuf;
            } else {
                ++(vlSymsp->__Vcoverage[592]);
                vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                    = vlSelfRef.tb_polite_dbg__DOT__status;
            }
        } else {
            ++(vlSymsp->__Vcoverage[597]);
            vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                = vlSelfRef.tb_polite_dbg__DOT__d;
        }
    } else {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v = vlSelfRef.tb_polite_dbg__DOT__d;
    }
    ++(vlSymsp->__Vcoverage[598]);
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__dbg_tick) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_tick))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_tick 
            = vlSelfRef.tb_polite_dbg__DOT__dbg_tick;
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e)))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e 
            = ((0xeU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e)))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e 
            = ((0xdU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e)))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e 
            = ((0xbU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e)))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e 
            = ((7U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__left_e)) 
               | (8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk_raw) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk_raw)))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk_raw 
            = ((6U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk_raw)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk_raw)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk_raw) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk_raw)))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk_raw 
            = ((5U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk_raw)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk_raw)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk_raw) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk_raw)))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk_raw 
            = ((3U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk_raw)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk_raw)));
    }
    vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk = ((5U 
                                                   < (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk_raw))
                                                   ? 5U
                                                   : (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk_raw));
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfffffeU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfffffdU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfffffbU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfffff7U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xffffefU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xffffdfU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xffffbfU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xffff7fU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfffeffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfffdffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfffbffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfff7ffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xffefffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xffdfffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xffbfffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xff7fffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfeffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfdffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfbffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xf7ffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xefffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xdfffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xbfffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0x7fffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e = 
        ((IData)(vlSelfRef.tb_polite_dbg__DOT__start)
          ? vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v
          : vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val);
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk)))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk 
            = ((6U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk)))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk 
            = ((5U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk)))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk 
            = ((3U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fk)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk)));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfffffeU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfffffdU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfffffbU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfffff7U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xffffefU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xffffdfU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xffffbfU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xffff7fU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfffeffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfffdffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfffbffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfff7ffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xffefffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xffdfffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xffbfffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xff7fffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfeffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfdffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xfbffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xf7ffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xefffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xdfffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0xbfffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e 
            = ((0x7fffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__val_e) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e));
    }
    if ((4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk))) {
        if ((2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk))) {
            vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn 
                = (0xfU & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                           >> 0x14U));
            ++(vlSymsp->__Vcoverage[642]);
        } else if ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk))) {
            ++(vlSymsp->__Vcoverage[642]);
            vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn 
                = (0xfU & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                           >> 0x14U));
        } else {
            ++(vlSymsp->__Vcoverage[641]);
            vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn 
                = (0xfU & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                           >> 0x10U));
        }
    } else if ((2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk))) {
        if ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk))) {
            ++(vlSymsp->__Vcoverage[640]);
            vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn 
                = (0xfU & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                           >> 0xcU));
        } else {
            ++(vlSymsp->__Vcoverage[639]);
            vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn 
                = (0xfU & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                           >> 8U));
        }
    } else if ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fk))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn 
            = (0xfU & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e 
                       >> 4U));
    } else {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn 
            = (0xfU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e);
    }
    ++(vlSymsp->__Vcoverage[643]);
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib)))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib 
            = ((0xeU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib)))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib 
            = ((0xdU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib)))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib 
            = ((0xbU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib)))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib 
            = ((7U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__dbg_nib)) 
               | (8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__vn)));
    }
}

VL_INLINE_OPT void Vtb_polite_dbg___024root___nba_sequent__TOP__0(Vtb_polite_dbg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__dbg_tick)) 
                                     | (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__phase))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:460: Assertion failed in %Ntb_polite_dbg.dut.u_sva.a_tick_phase: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("polite_dbg_tb.sv", 460, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_2_0)) 
                                     | (vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_3_0 
                                        == vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__fz_val))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:459: Assertion failed in %Ntb_polite_dbg.dut.u_sva.a_val_frozen: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("polite_dbg_tb.sv", 459, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_0_0)) 
                                     | (0xbU == (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__fz_left)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:457: Assertion failed in %Ntb_polite_dbg.dut.u_sva.a_win_wide: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("polite_dbg_tb.sv", 457, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_1_0)) 
                                     | (3U == (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__fz_left)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:458: Assertion failed in %Ntb_polite_dbg.dut.u_sva.a_win_narrow: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("polite_dbg_tb.sv", 458, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__rst_n)) 
                                  | ((0xbU >= (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__fz_left)) 
                                     & (6U >= (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__fz_k)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:462: Assertion failed in %Ntb_polite_dbg.dut.u_sva.a_ranges: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("polite_dbg_tb.sv", 462, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__rst_n)) 
                                  | ((~ ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_4_0) 
                                         & (0U == (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__fz_left)))) 
                                     | ((2U == (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__fz_k)) 
                                        | (6U == (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__fz_k))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:461: Assertion failed in %Ntb_polite_dbg.dut.u_sva.a_nib_count: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("polite_dbg_tb.sv", 461, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__start)) 
                                     | (0U == (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__fz_left)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: polite_dbg_tb.sv:456: Assertion failed in %Ntb_polite_dbg.dut.u_sva.a_no_restart: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("polite_dbg_tb.sv", 456, "");
        }
    }
    vlSelfRef.tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_3_0 
        = vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__fz_val;
    vlSelfRef.tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_4_0 
        = (0U != (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__dut__DOT__fz_left));
    vlSelfRef.tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_2_0 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__rst_n) 
           & (~ (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__start)));
    vlSelfRef.tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_0_0 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__rst_n) 
           & (((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__en) 
               & (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__start)) 
              & ((8U == (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__op)) 
                 | (0xaU == (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__op)))));
    vlSelfRef.tb_polite_dbg__DOT__dut__DOT__u_sva__DOT___Vpast_1_0 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__rst_n) 
           & (((IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__en) 
               & (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__start)) 
              & (~ ((8U == (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__op)) 
                    | (0xaU == (IData)(vlSelfRef.__Vsampled_TOP__tb_polite_dbg__DOT__op))))));
}

VL_INLINE_OPT void Vtb_polite_dbg___024root___nba_sequent__TOP__1(Vtb_polite_dbg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__tb_polite_dbg__DOT__phase;
    __Vdly__tb_polite_dbg__DOT__phase = 0;
    // Body
    __Vdly__tb_polite_dbg__DOT__phase = vlSelfRef.tb_polite_dbg__DOT__phase;
    if (vlSelfRef.tb_polite_dbg__DOT__rst_n) {
        if (vlSelfRef.tb_polite_dbg__DOT__en) {
            __Vdly__tb_polite_dbg__DOT__phase = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_polite_dbg__DOT__phase)));
            ++(vlSymsp->__Vcoverage[269]);
        } else {
            ++(vlSymsp->__Vcoverage[270]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[271]);
        __Vdly__tb_polite_dbg__DOT__phase = 0U;
    }
    ++(vlSymsp->__Vcoverage[272]);
    if (vlSelfRef.tb_polite_dbg__DOT__rst_n) {
        if (vlSelfRef.tb_polite_dbg__DOT__en) {
            vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                = vlSelfRef.tb_polite_dbg__DOT__dut__DOT__val_e;
            vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k 
                = (7U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__k_e) 
                         + ((IData)(vlSelfRef.tb_polite_dbg__DOT__ofz) 
                            & (IData)(vlSelfRef.tb_polite_dbg__DOT__phase))));
            if (vlSelfRef.tb_polite_dbg__DOT__ofz) {
                ++(vlSymsp->__Vcoverage[644]);
                vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left 
                    = (0xfU & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__left_e) 
                               - (IData)(1U)));
            } else {
                ++(vlSymsp->__Vcoverage[645]);
            }
            ++(vlSymsp->__Vcoverage[646]);
        } else {
            ++(vlSymsp->__Vcoverage[647]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left = 0U;
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k = 0U;
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val = 0U;
    }
    ++(vlSymsp->__Vcoverage[649]);
    vlSelfRef.tb_polite_dbg__DOT__phase = __Vdly__tb_polite_dbg__DOT__phase;
    if (((0U != (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left)) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__open))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__open 
            = (0U != (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_left)))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_left 
            = ((0xeU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_left)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_left)))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_left 
            = ((0xdU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_left)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_left)))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_left 
            = ((0xbU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_left)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_left)))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_left 
            = ((7U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_left)) 
               | (8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_left)));
    }
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__phase) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__phase))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__phase 
            = vlSelfRef.tb_polite_dbg__DOT__phase;
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_k)))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_k 
            = ((6U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_k)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_k)))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_k 
            = ((5U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_k)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_k)))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_k 
            = ((3U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_k)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_k)));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xfffffeU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xfffffdU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xfffffbU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xfffff7U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xffffefU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xffffdfU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xffffbfU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xffff7fU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xfffeffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xfffdffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xfffbffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xfff7ffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xffefffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xffdfffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xffbfffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xff7fffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xfeffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xfdffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xfbffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xf7ffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xefffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xdfffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0xbfffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val 
            = ((0x7fffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__fz_val) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__fz_val));
    }
}

VL_INLINE_OPT void Vtb_polite_dbg___024root___nba_comb__TOP__0(Vtb_polite_dbg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_dbg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_polite_dbg___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__rst_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__rst_n 
            = vlSelfRef.tb_polite_dbg__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__en) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__en 
            = vlSelfRef.tb_polite_dbg__DOT__en;
    }
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__start) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__start))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__start 
            = vlSelfRef.tb_polite_dbg__DOT__start;
    }
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__run_busy) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__run_busy))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__run_busy 
            = vlSelfRef.tb_polite_dbg__DOT__run_busy;
    }
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__s_en) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_en))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_en 
            = vlSelfRef.tb_polite_dbg__DOT__s_en;
    }
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__s_start) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_start))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_start 
            = vlSelfRef.tb_polite_dbg__DOT__s_start;
    }
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__s_tick) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_tick))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_tick 
            = vlSelfRef.tb_polite_dbg__DOT__s_tick;
    }
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__sb_active) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_active))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_active 
            = vlSelfRef.tb_polite_dbg__DOT__sb_active;
    }
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__prev_open) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__prev_open))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__prev_open 
            = vlSelfRef.tb_polite_dbg__DOT__prev_open;
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__pe) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__pe)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__pe 
            = ((2U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__pe)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__pe) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__pe)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__pe 
            = ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__pe)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__m_k) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_k)))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_k 
            = ((6U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_k)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__m_k)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__m_k) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_k)))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_k 
            = ((5U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_k)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__m_k)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__m_k) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_k)))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_k 
            = ((3U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_k)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__m_k)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__op) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op 
            = ((0xeU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__op) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op 
            = ((0xdU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__op) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op 
            = ((0xbU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__op) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op 
            = ((7U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__op)) 
               | (8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__m_left) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left)))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left 
            = ((0xeU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__m_left) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left)))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left 
            = ((0xdU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__m_left) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left)))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left 
            = ((0xbU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__m_left) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left)))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left 
            = ((7U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_left)) 
               | (8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__m_left)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__s_len) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len)))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len 
            = ((0xeU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__s_len)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__s_len) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len)))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len 
            = ((0xdU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__s_len)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__s_len) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len)))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len 
            = ((0xbU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__s_len)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__s_len) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len)))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len 
            = ((7U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_len)) 
               | (8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__s_len)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__status) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__status)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__status) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__status)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__status) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__status)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__status) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)) 
               | (8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__status)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__status) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_dbg__DOT__status)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__status) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_dbg__DOT__status)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__status) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_dbg__DOT__status)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__status) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__status)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_dbg__DOT__status)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)) 
               | (8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__inbuf)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_dbg__DOT__inbuf)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__d) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__d)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__d) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__d)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__d) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__d)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__d) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)) 
               | (8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__d)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__d) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_dbg__DOT__d)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__d) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_dbg__DOT__d)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__d) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_dbg__DOT__d)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__d) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_dbg__DOT____Vtogcov__d)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_dbg__DOT__d)));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xfbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xf7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0xbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__m_val 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val 
            = ((0x7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__m_val) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__m_val));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xfbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xf7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0xbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__s_val 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val 
            = ((0x7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__s_val) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__s_val));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xfbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xf7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0xbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__sb_exp 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp 
            = ((0x7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_exp) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__sb_exp));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xfbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xf7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0xbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__sb_got 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got 
            = ((0x7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sb_got) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__sb_got));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfffbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xffbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xff7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfeffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x1000000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfdffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x2000000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xfbffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x4000000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x8000000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xefffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x10000000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xdfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x20000000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0xbfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x40000000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    if (((vlSelfRef.tb_polite_dbg__DOT__mul_all ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all 
            = ((0x7fffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__mul_all) 
               | (0x80000000U & vlSelfRef.tb_polite_dbg__DOT__mul_all));
    }
    vlSelfRef.tb_polite_dbg__DOT__dut__DOT__wide = 
        ((8U == (IData)(vlSelfRef.tb_polite_dbg__DOT__op)) 
         | (0xaU == (IData)(vlSelfRef.tb_polite_dbg__DOT__op)));
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfffbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xffbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xff7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfeffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x1000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfdffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x2000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xfbffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x4000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x8000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xefffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x10000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xdfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x20000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0xbfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x40000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if (((vlSelfRef.tb_polite_dbg__DOT__psum_all[0U] 
          ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U] 
            = ((0x7fffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[0U]) 
               | (0x80000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[0U]));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfffbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xffbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xff7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfeffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x1000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfdffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x2000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xfbffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x4000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x8000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xefffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x10000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xdfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x20000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0xbfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x40000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if (((vlSelfRef.tb_polite_dbg__DOT__psum_all[1U] 
          ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U] 
            = ((0x7fffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[1U]) 
               | (0x80000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[1U]));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfffbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xffbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xff7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfeffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x1000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfdffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x2000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xfbffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x4000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x8000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xefffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x10000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xdfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x20000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0xbfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x40000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if (((vlSelfRef.tb_polite_dbg__DOT__psum_all[2U] 
          ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U] 
            = ((0x7fffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__psum_all[2U]) 
               | (0x80000000U & vlSelfRef.tb_polite_dbg__DOT__psum_all[2U]));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfffbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xffbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xff7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfeffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x1000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfdffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x2000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xfbffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x4000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x8000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xefffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x10000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xdfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x20000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0xbfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x40000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if (((vlSelfRef.tb_polite_dbg__DOT__sum_all[0U] 
          ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U] 
            = ((0x7fffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[0U]) 
               | (0x80000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[0U]));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfffbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xffbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xff7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfeffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x1000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfdffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x2000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xfbffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x4000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x8000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xefffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x10000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xdfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x20000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0xbfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x40000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if (((vlSelfRef.tb_polite_dbg__DOT__sum_all[1U] 
          ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U] 
            = ((0x7fffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[1U]) 
               | (0x80000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[1U]));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffffeU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffffdU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffffbU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
               ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffff7U & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffffefU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffffdfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffffbfU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                  ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffff7fU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffeffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffdffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffffbffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                   ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffff7ffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffefffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffdfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffffbfffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                    ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffff7fffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffeffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffdffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfffbffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                     ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfff7ffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffefffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffdfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xffbfffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                      ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xff7fffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x1000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfeffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x1000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x2000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfdffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x2000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x4000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xfbffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x4000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x8000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                       ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xf7ffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x8000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x10000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xefffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x10000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x20000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xdfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x20000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if ((0x40000000U & (vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
                        ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0xbfffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x40000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    if (((vlSelfRef.tb_polite_dbg__DOT__sum_all[2U] 
          ^ vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U] 
            = ((0x7fffffffU & vlSelfRef.tb_polite_dbg__DOT____Vtogcov__sum_all[2U]) 
               | (0x80000000U & vlSelfRef.tb_polite_dbg__DOT__sum_all[2U]));
    }
    vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu = (0xffU 
                                                  & (vlSelfRef.tb_polite_dbg__DOT__mul_all 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.tb_polite_dbg__DOT__pe), 3U))));
    if ((0x5fU >= (0x7fU & ((IData)(0x18U) * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))) {
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
            = (0xffffffU & (((0U == (0x1fU & ((IData)(0x18U) 
                                              * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))
                              ? 0U : (vlSelfRef.tb_polite_dbg__DOT__psum_all[
                                      (((IData)(0x17U) 
                                        + (0x7fU & 
                                           ((IData)(0x18U) 
                                            * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x18U) 
                                                       * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)))))) 
                            | (vlSelfRef.tb_polite_dbg__DOT__psum_all[
                               (3U & (((IData)(0x18U) 
                                       * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))));
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
            = (0xffffffU & (((0U == (0x1fU & ((IData)(0x18U) 
                                              * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))
                              ? 0U : (vlSelfRef.tb_polite_dbg__DOT__sum_all[
                                      (((IData)(0x17U) 
                                        + (0x7fU & 
                                           ((IData)(0x18U) 
                                            * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x18U) 
                                                       * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)))))) 
                            | (vlSelfRef.tb_polite_dbg__DOT__sum_all[
                               (3U & (((IData)(0x18U) 
                                       * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      * (IData)(vlSelfRef.tb_polite_dbg__DOT__pe))))));
    } else {
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps = 0U;
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm = 0U;
    }
    if (((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__wide) 
         ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__wide))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__wide 
            = vlSelfRef.tb_polite_dbg__DOT__dut__DOT__wide;
    }
    if ((1U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu 
            = ((0xfeU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)) 
               | (1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu 
            = ((0xfdU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)) 
               | (2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu 
            = ((0xfbU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)) 
               | (4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu) 
               ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu 
            = ((0xf7U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)) 
               | (8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu 
            = ((0xefU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)) 
               | (0x10U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu 
            = ((0xdfU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)) 
               | (0x20U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu 
            = ((0xbfU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)) 
               | (0x40U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu) 
                  ^ (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu 
            = ((0x7fU & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__mu)) 
               | (0x80U & (IData)(vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu)));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfffffeU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfffffdU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfffffbU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfffff7U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xffffefU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xffffdfU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xffffbfU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xffff7fU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfffeffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfffdffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfffbffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfff7ffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xffefffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xffdfffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xffbfffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xff7fffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfeffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfdffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xfbffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xf7ffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xefffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xdfffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0xbfffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps 
            = ((0x7fffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__ps) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps));
    }
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfffffeU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfffffdU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfffffbU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfffff7U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xffffefU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xffffdfU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xffffbfU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xffff7fU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfffeffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfffdffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfffbffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfff7ffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xffefffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xffdfffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xffbfffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xff7fffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfeffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfdffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xfbffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xf7ffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xefffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xdfffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0xbfffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm 
            = ((0x7fffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__sm) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm));
    }
    if ((8U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
        if ((4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
            vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                = vlSelfRef.tb_polite_dbg__DOT__d;
            ++(vlSymsp->__Vcoverage[597]);
        } else if ((2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
            if ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                ++(vlSymsp->__Vcoverage[597]);
                vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                    = vlSelfRef.tb_polite_dbg__DOT__d;
            } else {
                ++(vlSymsp->__Vcoverage[596]);
                vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                    = ((IData)(vlSelfRef.tb_polite_dbg__DOT__run_busy)
                        ? vlSelfRef.tb_polite_dbg__DOT__dut__DOT__sm
                        : vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps);
            }
        } else if ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
            ++(vlSymsp->__Vcoverage[595]);
            vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                = vlSelfRef.tb_polite_dbg__DOT__dut__DOT__mu;
        } else {
            ++(vlSymsp->__Vcoverage[594]);
            vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                = vlSelfRef.tb_polite_dbg__DOT__dut__DOT__ps;
        }
    } else if ((4U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
        if ((2U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
            if ((1U & (IData)(vlSelfRef.tb_polite_dbg__DOT__op))) {
                ++(vlSymsp->__Vcoverage[593]);
                vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                    = vlSelfRef.tb_polite_dbg__DOT__inbuf;
            } else {
                ++(vlSymsp->__Vcoverage[592]);
                vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                    = vlSelfRef.tb_polite_dbg__DOT__status;
            }
        } else {
            ++(vlSymsp->__Vcoverage[597]);
            vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                = vlSelfRef.tb_polite_dbg__DOT__d;
        }
    } else {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v = vlSelfRef.tb_polite_dbg__DOT__d;
    }
    ++(vlSymsp->__Vcoverage[598]);
    if ((1U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfffffeU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (1U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((2U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfffffdU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (2U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((4U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfffffbU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (4U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((8U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
               ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfffff7U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (8U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x10U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xffffefU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x10U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x20U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xffffdfU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x20U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x40U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xffffbfU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x40U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x80U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                  ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xffff7fU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x80U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x100U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfffeffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x100U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x200U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfffdffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x200U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x400U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfffbffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x400U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x800U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                   ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfff7ffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x800U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x1000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xffefffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x1000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x2000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xffdfffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x2000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x4000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xffbfffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x4000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x8000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                    ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xff7fffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x8000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x10000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfeffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x10000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x20000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfdffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x20000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x40000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xfbffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x40000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x80000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                     ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xf7ffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x80000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x100000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xefffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x100000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x200000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xdfffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x200000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x400000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0xbfffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x400000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
    if ((0x800000U & (vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v 
                      ^ vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v 
            = ((0x7fffffU & vlSelfRef.tb_polite_dbg__DOT__dut__DOT____Vtogcov__v) 
               | (0x800000U & vlSelfRef.tb_polite_dbg__DOT__dut__DOT__v));
    }
}

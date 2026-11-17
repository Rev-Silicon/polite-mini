// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_polite_mini.h for the primary calling header

#include "Vtb_polite_mini__pch.h"
#include "Vtb_polite_mini_polite_pe.h"

VL_ATTR_COLD void Vtb_polite_mini_polite_pe___ctor_var_reset(Vtb_polite_mini_polite_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_polite_mini__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_polite_mini_polite_pe___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->a = VL_RAND_RESET_I(4);
    vlSelf->b = VL_RAND_RESET_I(4);
    vlSelf->run_now = VL_RAND_RESET_I(1);
    vlSelf->acc_en = VL_RAND_RESET_I(1);
    vlSelf->clr = VL_RAND_RESET_I(1);
    vlSelf->psum = VL_RAND_RESET_I(24);
    vlSelf->mul = VL_RAND_RESET_I(8);
    vlSelf->sum = VL_RAND_RESET_I(24);
    vlSelf->ovf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__prod = VL_RAND_RESET_I(8);
    vlSelf->__PVT__full = VL_RAND_RESET_I(25);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__en = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__a = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__b = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__run_now = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__acc_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__clr = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__psum = VL_RAND_RESET_I(24);
    vlSelf->__Vtogcov__mul = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__sum = VL_RAND_RESET_I(24);
    vlSelf->__Vtogcov__ovf = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__prod = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__full = VL_RAND_RESET_I(25);
}

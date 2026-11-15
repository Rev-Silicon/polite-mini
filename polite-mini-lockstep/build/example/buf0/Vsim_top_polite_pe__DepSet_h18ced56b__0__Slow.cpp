// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "Vsim_top__pch.h"
#include "Vsim_top_polite_pe.h"

VL_ATTR_COLD void Vsim_top_polite_pe___ctor_var_reset(Vsim_top_polite_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_polite_pe___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->run_now = VL_RAND_RESET_I(1);
    vlSelf->acc_en = VL_RAND_RESET_I(1);
    vlSelf->clr = VL_RAND_RESET_I(1);
    vlSelf->a = VL_RAND_RESET_I(4);
    vlSelf->b = VL_RAND_RESET_I(4);
    vlSelf->psum = VL_RAND_RESET_I(24);
    vlSelf->sum = VL_RAND_RESET_I(24);
    vlSelf->mul = VL_RAND_RESET_I(8);
    vlSelf->ovf = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__psum = VL_RAND_RESET_I(24);
    vlSelf->__Vtogcov__sum = VL_RAND_RESET_I(24);
    vlSelf->__Vtogcov__mul = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__ovf = VL_RAND_RESET_I(1);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim_top.h for the primary calling header

#ifndef VERILATED_VSIM_TOP___024ROOT_H_
#define VERILATED_VSIM_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
class Vsim_top_polite_pe;


class Vsim_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vsim_top_polite_pe* __PVT__sim_top__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe;
    Vsim_top_polite_pe* __PVT__sim_top__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe;
    Vsim_top_polite_pe* __PVT__sim_top__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe;
    Vsim_top_polite_pe* __PVT__sim_top__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(ena,0,0);
        VL_IN8(ui_in,7,0);
        VL_IN8(uio_in,7,0);
        VL_OUT8(uo_out,7,0);
        VL_OUT8(uio_out,7,0);
        VL_OUT8(uio_oe,7,0);
        VL_OUT8(ena_q,0,0);
        VL_OUT8(phase,0,0);
        VL_OUT8(otick_q,0,0);
        VL_OUT8(run_busy,0,0);
        VL_OUT8(illegal,0,0);
        VL_OUT8(ovf,0,0);
        VL_OUT8(dump_busy,0,0);
        VL_OUT8(fz_open,0,0);
        VL_OUT8(in_i_q,7,0);
        VL_OUT8(in_d_q,7,0);
        VL_OUT8(uo_q,7,0);
        VL_OUT8(core_uo,7,0);
        VL_OUT8(inbuf,7,0);
        CData/*0:0*/ sim_top__DOT____Vtogcov__clk;
        CData/*0:0*/ sim_top__DOT____Vtogcov__rst_n;
        CData/*0:0*/ sim_top__DOT____Vtogcov__ena;
        CData/*7:0*/ sim_top__DOT____Vtogcov__ui_in;
        CData/*7:0*/ sim_top__DOT____Vtogcov__uio_in;
        CData/*7:0*/ sim_top__DOT____Vtogcov__uo_out;
        CData/*7:0*/ sim_top__DOT____Vtogcov__uio_out;
        CData/*7:0*/ sim_top__DOT____Vtogcov__uio_oe;
        CData/*0:0*/ sim_top__DOT____Vtogcov__ena_q;
        CData/*0:0*/ sim_top__DOT____Vtogcov__phase;
        CData/*0:0*/ sim_top__DOT____Vtogcov__otick_q;
        CData/*0:0*/ sim_top__DOT____Vtogcov__run_busy;
        CData/*0:0*/ sim_top__DOT____Vtogcov__illegal;
        CData/*0:0*/ sim_top__DOT____Vtogcov__ovf;
        CData/*0:0*/ sim_top__DOT____Vtogcov__dump_busy;
        CData/*0:0*/ sim_top__DOT____Vtogcov__fz_open;
        CData/*7:0*/ sim_top__DOT____Vtogcov__in_i_q;
        CData/*7:0*/ sim_top__DOT____Vtogcov__in_d_q;
        CData/*7:0*/ sim_top__DOT____Vtogcov__uo_q;
        CData/*7:0*/ sim_top__DOT____Vtogcov__core_uo;
        CData/*7:0*/ sim_top__DOT____Vtogcov__inbuf;
        CData/*0:0*/ sim_top__DOT__dut__DOT__ena_q;
        CData/*7:0*/ sim_top__DOT__dut__DOT__in_d_q;
        CData/*7:0*/ sim_top__DOT__dut__DOT__in_i_q;
        CData/*7:0*/ sim_top__DOT__dut__DOT__uo_q;
        CData/*7:0*/ sim_top__DOT__dut__DOT__uo_pad;
        CData/*0:0*/ sim_top__DOT__dut__DOT__otick_q;
        CData/*7:0*/ sim_top__DOT__dut__DOT__core_uo;
        CData/*0:0*/ sim_top__DOT__dut__DOT__phase;
        CData/*0:0*/ sim_top__DOT__dut__DOT__run_busy;
        CData/*0:0*/ sim_top__DOT__dut__DOT__illegal;
        CData/*0:0*/ sim_top__DOT__dut__DOT__ovf;
        CData/*0:0*/ sim_top__DOT__dut__DOT__illegal_d;
        CData/*0:0*/ sim_top__DOT__dut__DOT__ovf_d;
        CData/*0:0*/ sim_top__DOT__dut__DOT__run_now;
        CData/*0:0*/ sim_top__DOT__dut__DOT__clr_psum;
        CData/*0:0*/ sim_top__DOT__dut__DOT__clr_outbuf;
        CData/*0:0*/ sim_top__DOT__dut__DOT__dump_load;
        CData/*0:0*/ sim_top__DOT__dut__DOT__dump_abort;
        CData/*0:0*/ sim_top__DOT__dut__DOT__dbg_start;
        CData/*0:0*/ sim_top__DOT__dut__DOT__fz_open;
        CData/*0:0*/ sim_top__DOT__dut__DOT__ofz;
        CData/*0:0*/ sim_top__DOT__dut__DOT__dbg_tick;
    };
    struct {
        CData/*3:0*/ sim_top__DOT__dut__DOT__dbg_nib;
        CData/*7:0*/ sim_top__DOT__dut__DOT__inbuf;
        CData/*7:0*/ sim_top__DOT__dut__DOT__status;
        CData/*3:0*/ sim_top__DOT__dut__DOT__pe_ovf;
        CData/*0:0*/ sim_top__DOT__dut__DOT____Vtogcov__ena_q;
        CData/*7:0*/ sim_top__DOT__dut__DOT____Vtogcov__in_d_q;
        CData/*7:0*/ sim_top__DOT__dut__DOT____Vtogcov__in_i_q;
        CData/*7:0*/ sim_top__DOT__dut__DOT____Vtogcov__uo_q;
        CData/*7:0*/ sim_top__DOT__dut__DOT____Vtogcov__uo_pad;
        CData/*0:0*/ sim_top__DOT__dut__DOT____Vtogcov__otick_q;
        CData/*7:0*/ sim_top__DOT__dut__DOT____Vtogcov__core_uo;
        CData/*0:0*/ sim_top__DOT__dut__DOT____Vtogcov__phase;
        CData/*0:0*/ sim_top__DOT__dut__DOT____Vtogcov__run_busy;
        CData/*0:0*/ sim_top__DOT__dut__DOT____Vtogcov__illegal;
        CData/*0:0*/ sim_top__DOT__dut__DOT____Vtogcov__ovf;
        CData/*0:0*/ sim_top__DOT__dut__DOT____Vtogcov__illegal_d;
        CData/*0:0*/ sim_top__DOT__dut__DOT____Vtogcov__ovf_d;
        CData/*0:0*/ sim_top__DOT__dut__DOT____Vtogcov__run_now;
        CData/*0:0*/ sim_top__DOT__dut__DOT____Vtogcov__clr_psum;
        CData/*0:0*/ sim_top__DOT__dut__DOT____Vtogcov__clr_outbuf;
        CData/*0:0*/ sim_top__DOT__dut__DOT____Vtogcov__dump_load;
        CData/*0:0*/ sim_top__DOT__dut__DOT____Vtogcov__dump_abort;
        CData/*0:0*/ sim_top__DOT__dut__DOT____Vtogcov__dbg_start;
        CData/*0:0*/ sim_top__DOT__dut__DOT____Vtogcov__fz_open;
        CData/*0:0*/ sim_top__DOT__dut__DOT____Vtogcov__ofz;
        CData/*0:0*/ sim_top__DOT__dut__DOT____Vtogcov__dbg_tick;
        CData/*3:0*/ sim_top__DOT__dut__DOT____Vtogcov__dbg_nib;
        CData/*7:0*/ sim_top__DOT__dut__DOT____Vtogcov__inbuf;
        CData/*7:0*/ sim_top__DOT__dut__DOT____Vtogcov__status;
        CData/*3:0*/ sim_top__DOT__dut__DOT____Vtogcov__pe_ovf;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT__debug_read;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT__bad;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT__clear_ok;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT__clear_flags;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__pe_ovf_any;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__debug_read;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__bad;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clear_ok;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clear_flags;
        CData/*3:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__remaining;
        CData/*2:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__index;
        CData/*3:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__duration;
        CData/*2:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__previous_index;
        CData/*2:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__effective_index;
        CData/*2:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__limited_index;
        CData/*3:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__remaining;
        CData/*2:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__index;
        CData/*3:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__duration;
        CData/*2:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__previous_index;
        CData/*2:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__effective_index;
        CData/*2:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__limited_index;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __VactContinue;
        VlWide<3>/*95:0*/ sim_top__DOT__dut__DOT__psum_all;
        VlWide<3>/*95:0*/ sim_top__DOT__dut__DOT__sum_all;
        IData/*31:0*/ sim_top__DOT__dut__DOT__mul_all;
        VlWide<3>/*95:0*/ sim_top__DOT__dut__DOT__cap;
        VlWide<3>/*95:0*/ sim_top__DOT__dut__DOT____Vtogcov__psum_all;
        VlWide<3>/*95:0*/ sim_top__DOT__dut__DOT____Vtogcov__sum_all;
        IData/*31:0*/ sim_top__DOT__dut__DOT____Vtogcov__mul_all;
        VlWide<3>/*95:0*/ sim_top__DOT__dut__DOT____Vtogcov__cap;
    };
    struct {
        IData/*23:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__saved;
        IData/*23:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__capture;
        IData/*23:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__value_now;
        IData/*23:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__saved;
        IData/*23:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__capture;
        IData/*23:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__value_now;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(psum[4],23,0);
        VL_OUT8(product[4],7,0);
        VlUnpacked<IData/*23:0*/, 4> sim_top__DOT____Vtogcov__psum;
        VlUnpacked<CData/*7:0*/, 4> sim_top__DOT____Vtogcov__product;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsim_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_top___024root(Vsim_top__Syms* symsp, const char* v__name);
    ~Vsim_top___024root();
    VL_UNCOPYABLE(Vsim_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard

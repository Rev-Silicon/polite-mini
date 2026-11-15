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
        CData/*0:0*/ sim_top__DOT__dut__DOT__dbg_start;
        CData/*0:0*/ sim_top__DOT__dut__DOT__dump_busy;
        CData/*0:0*/ sim_top__DOT__dut__DOT__ofz;
        CData/*0:0*/ sim_top__DOT__dut__DOT__dbg_tick;
        CData/*3:0*/ sim_top__DOT__dut__DOT__dump_nib;
    };
    struct {
        CData/*7:0*/ sim_top__DOT__dut__DOT__inbuf;
        CData/*7:0*/ sim_top__DOT__dut__DOT__status;
        CData/*3:0*/ sim_top__DOT__dut__DOT__pe_ovf;
        CData/*7:0*/ sim_top__DOT__dut__DOT____Vtogcov__uio_out;
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
        CData/*0:0*/ sim_top__DOT__dut__DOT____Vtogcov__dump_busy;
        CData/*0:0*/ sim_top__DOT__dut__DOT____Vtogcov__fz_open;
        CData/*0:0*/ sim_top__DOT__dut__DOT____Vtogcov__ofz;
        CData/*0:0*/ sim_top__DOT__dut__DOT____Vtogcov__dbg_tick;
        CData/*3:0*/ sim_top__DOT__dut__DOT____Vtogcov__dbg_nib;
        CData/*3:0*/ sim_top__DOT__dut__DOT____Vtogcov__dump_nib;
        CData/*7:0*/ sim_top__DOT__dut__DOT____Vtogcov__inbuf;
        CData/*7:0*/ sim_top__DOT__dut__DOT____Vtogcov__status;
        CData/*3:0*/ sim_top__DOT__dut__DOT____Vtogcov__pe_ovf;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT__is_dbg;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT__bad_bank;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT__dbg_req;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT__clr_coll;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT__clr_ok;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT__clr_flg;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT__ill_set;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT__acc_ovf;
        CData/*7:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT__inbuf_d;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__pe_ovf_any;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_load;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_run;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_dload;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_clear;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_rsvd;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_dbg;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__bad_bank;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__dbg_req;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clr_coll;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clr_ok;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clr_flg;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__ill_set;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__acc_ovf;
        CData/*7:0*/ sim_top__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d;
        CData/*3:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__fz_left;
        CData/*2:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__fz_k;
        CData/*7:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__mu;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__wide;
        CData/*3:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__left_e;
        CData/*2:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__k_e;
        CData/*2:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__fk_raw;
        CData/*2:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__fk;
    };
    struct {
        CData/*3:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__vn;
        CData/*3:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_left;
        CData/*2:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_k;
        CData/*7:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu;
        CData/*0:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__wide;
        CData/*3:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__left_e;
        CData/*2:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__k_e;
        CData/*2:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk_raw;
        CData/*2:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk;
        CData/*4:0*/ sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx;
        CData/*1:0*/ sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__pe_sel;
        CData/*4:0*/ sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub;
        CData/*3:0*/ sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn;
        CData/*0:0*/ sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__step;
        CData/*4:0*/ sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__idx;
        CData/*1:0*/ sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__pe_sel;
        CData/*4:0*/ sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__sub;
        CData/*3:0*/ sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__wn;
        CData/*0:0*/ sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__step;
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
        IData/*23:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__fz_val;
        IData/*23:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__ps;
        IData/*23:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__sm;
        IData/*23:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__v;
        IData/*23:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT__val_e;
        IData/*23:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val;
        IData/*23:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps;
        IData/*23:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm;
        IData/*23:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v;
        IData/*23:0*/ sim_top__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e;
        IData/*23:0*/ sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w;
        IData/*31:0*/ sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__k;
        IData/*23:0*/ sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(psum[4],23,0);
        VL_OUT8(product[4],7,0);
        VlUnpacked<IData/*23:0*/, 4> sim_top__DOT____Vtogcov__psum;
        VlUnpacked<CData/*7:0*/, 4> sim_top__DOT____Vtogcov__product;
        VlUnpacked<IData/*23:0*/, 4> sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word;
        VlUnpacked<IData/*23:0*/, 4> sim_top__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word;
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

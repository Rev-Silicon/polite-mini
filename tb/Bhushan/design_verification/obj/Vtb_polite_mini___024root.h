// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_polite_mini.h for the primary calling header

#ifndef VERILATED_VTB_POLITE_MINI___024ROOT_H_
#define VERILATED_VTB_POLITE_MINI___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtb_polite_mini_polite_pe;


class Vtb_polite_mini__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_polite_mini___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_polite_mini_polite_pe* __PVT__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__0__KET____DOT__u_pe;
    Vtb_polite_mini_polite_pe* __PVT__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__1__KET____DOT__u_pe;
    Vtb_polite_mini_polite_pe* __PVT__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__2__KET____DOT__u_pe;
    Vtb_polite_mini_polite_pe* __PVT__tb_polite_mini__DOT__dut__DOT__g_pe__BRA__3__KET____DOT__u_pe;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_polite_mini__DOT__clk;
        CData/*0:0*/ tb_polite_mini__DOT__rst_n;
        CData/*0:0*/ tb_polite_mini__DOT__ena;
        CData/*7:0*/ tb_polite_mini__DOT__ui_in;
        CData/*7:0*/ tb_polite_mini__DOT__uio_in;
        CData/*0:0*/ tb_polite_mini__DOT__m_ena_q;
        CData/*7:0*/ tb_polite_mini__DOT__m_in_d;
        CData/*7:0*/ tb_polite_mini__DOT__m_in_i;
        CData/*7:0*/ tb_polite_mini__DOT__m_uo_q;
        CData/*7:0*/ tb_polite_mini__DOT__m_uo_pad;
        CData/*0:0*/ tb_polite_mini__DOT__m_otick;
        CData/*0:0*/ tb_polite_mini__DOT__m_pad_loaded;
        CData/*0:0*/ tb_polite_mini__DOT__m_exec_phase;
        CData/*0:0*/ tb_polite_mini__DOT__m_phase;
        CData/*0:0*/ tb_polite_mini__DOT__m_rb;
        CData/*7:0*/ tb_polite_mini__DOT__m_inbuf;
        CData/*0:0*/ tb_polite_mini__DOT__m_ill;
        CData/*0:0*/ tb_polite_mini__DOT__m_ovf;
        CData/*0:0*/ tb_polite_mini__DOT__m_busy;
        CData/*7:0*/ tb_polite_mini__DOT__exp_buf;
        CData/*0:0*/ tb_polite_mini__DOT____Vtogcov__clk;
        CData/*0:0*/ tb_polite_mini__DOT____Vtogcov__rst_n;
        CData/*0:0*/ tb_polite_mini__DOT____Vtogcov__ena;
        CData/*7:0*/ tb_polite_mini__DOT____Vtogcov__ui_in;
        CData/*7:0*/ tb_polite_mini__DOT____Vtogcov__uio_in;
        CData/*7:0*/ tb_polite_mini__DOT____Vtogcov__uo_out;
        CData/*7:0*/ tb_polite_mini__DOT____Vtogcov__uio_out;
        CData/*0:0*/ tb_polite_mini__DOT____Vtogcov__m_ena_q;
        CData/*7:0*/ tb_polite_mini__DOT____Vtogcov__m_in_d;
        CData/*7:0*/ tb_polite_mini__DOT____Vtogcov__m_in_i;
        CData/*7:0*/ tb_polite_mini__DOT____Vtogcov__m_uo_q;
        CData/*7:0*/ tb_polite_mini__DOT____Vtogcov__m_uo_pad;
        CData/*0:0*/ tb_polite_mini__DOT____Vtogcov__m_otick;
        CData/*0:0*/ tb_polite_mini__DOT____Vtogcov__m_pad_loaded;
        CData/*0:0*/ tb_polite_mini__DOT____Vtogcov__m_exec_phase;
        CData/*0:0*/ tb_polite_mini__DOT____Vtogcov__m_phase;
        CData/*0:0*/ tb_polite_mini__DOT____Vtogcov__m_rb;
        CData/*7:0*/ tb_polite_mini__DOT____Vtogcov__m_inbuf;
        CData/*0:0*/ tb_polite_mini__DOT____Vtogcov__m_ill;
        CData/*0:0*/ tb_polite_mini__DOT____Vtogcov__m_ovf;
        CData/*0:0*/ tb_polite_mini__DOT____Vtogcov__m_busy;
        CData/*7:0*/ tb_polite_mini__DOT____Vtogcov__exp_buf;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__ena_q;
        CData/*7:0*/ tb_polite_mini__DOT__dut__DOT__in_d_q;
        CData/*7:0*/ tb_polite_mini__DOT__dut__DOT__in_i_q;
        CData/*7:0*/ tb_polite_mini__DOT__dut__DOT__uo_q;
        CData/*7:0*/ tb_polite_mini__DOT__dut__DOT__uo_pad;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__otick_q;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__en;
        CData/*7:0*/ tb_polite_mini__DOT__dut__DOT__core_uo;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__phase;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__run_busy;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__illegal;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__ovf;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__illegal_d;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__ovf_d;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__run_now;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__acc_en;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__clr_psum;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__clr_outbuf;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__dump_load;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__dump_abort;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__dbg_start;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__dump_busy;
    };
    struct {
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__ofz;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__dbg_tick;
        CData/*3:0*/ tb_polite_mini__DOT__dut__DOT__dump_nib;
        CData/*7:0*/ tb_polite_mini__DOT__dut__DOT__inbuf;
        CData/*7:0*/ tb_polite_mini__DOT__dut__DOT__status;
        CData/*3:0*/ tb_polite_mini__DOT__dut__DOT__pe_ovf;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__ena_q;
        CData/*7:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__in_d_q;
        CData/*7:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__in_i_q;
        CData/*7:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__uo_q;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__otick_q;
        CData/*7:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__core_uo;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__phase;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__run_busy;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__illegal;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__ovf;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__illegal_d;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__ovf_d;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__run_now;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__acc_en;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__clr_psum;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__clr_outbuf;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_load;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_abort;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_start;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_busy;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__fz_open;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__ofz;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_tick;
        CData/*3:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__dbg_nib;
        CData/*3:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__dump_nib;
        CData/*7:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__inbuf;
        CData/*7:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__status;
        CData/*3:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__pe_ovf;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__is_dbg;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__bad_bank;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__dbg_req;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_coll;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_ok;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__clr_flg;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__ill_set;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__acc_ovf;
        CData/*7:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT__inbuf_d;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__pe_ovf_any;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_load;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_run;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_dload;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_clear;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_rsvd;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_dbg;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__bad_bank;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__dbg_req;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__is_dabrt;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clr_coll;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clr_ok;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__clr_flg;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__ill_set;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__acc_ovf;
        CData/*7:0*/ tb_polite_mini__DOT__dut__DOT__u_ctrl__DOT____Vtogcov__inbuf_d;
        CData/*3:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left;
        CData/*2:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_k;
        CData/*7:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__mu;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__wide;
        CData/*3:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__left_e;
    };
    struct {
        CData/*2:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__k_e;
        CData/*2:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk_raw;
        CData/*2:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fk;
        CData/*3:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__vn;
        CData/*3:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_left;
        CData/*2:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_k;
        CData/*7:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__mu;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__wide;
        CData/*3:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__left_e;
        CData/*2:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__k_e;
        CData/*2:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk_raw;
        CData/*2:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fk;
        CData/*4:0*/ tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT____Vtogcov__dump_idx;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_0_0;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_1_0;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_2_0;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_3_0;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_5_0;
        CData/*7:0*/ tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_7_0;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_8_0;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_9_0;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_11_0;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_13_0;
        CData/*4:0*/ tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_14_0;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_15_0;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_16_0;
        CData/*4:0*/ tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx;
        CData/*1:0*/ tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__pe_sel;
        CData/*4:0*/ tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__sub;
        CData/*3:0*/ tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__wn;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__step;
        CData/*1:0*/ tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__pe_sel;
        CData/*4:0*/ tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__sub;
        CData/*3:0*/ tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__wn;
        CData/*0:0*/ tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__step;
        CData/*0:0*/ __Vdly__tb_polite_mini__DOT__dut__DOT__phase;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_mini__DOT__rst_n;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_0_0;
        CData/*7:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__uo_pad;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__ena_q;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_1_0;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_2_0;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_3_0;
        CData/*7:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__in_d_q;
        CData/*7:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__in_i_q;
        CData/*7:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__uo_q;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__otick_q;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_5_0;
        CData/*7:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_7_0;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_8_0;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_9_0;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_11_0;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__clr_psum;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__acc_en;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__dump_load;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__dump_busy;
        CData/*4:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__idx;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_13_0;
        CData/*4:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_14_0;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__dbg_start;
        CData/*3:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_left;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_mini__DOT__ena;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__run_now;
        CData/*0:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__ofz;
    };
    struct {
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_polite_mini__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_polite_mini__DOT__rst_n__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ tb_polite_mini__DOT__cfg_num_items;
        IData/*31:0*/ tb_polite_mini__DOT__error_count;
        IData/*31:0*/ tb_polite_mini__DOT__check_count;
        IData/*31:0*/ tb_polite_mini__DOT__m_idx;
        IData/*31:0*/ tb_polite_mini__DOT__m_fz_left;
        IData/*31:0*/ tb_polite_mini__DOT__m_fz_k;
        IData/*23:0*/ tb_polite_mini__DOT__m_fz_val;
        IData/*23:0*/ tb_polite_mini__DOT____Vtogcov__m_fz_val;
        VlWide<3>/*95:0*/ tb_polite_mini__DOT__dut__DOT__psum_all;
        VlWide<3>/*95:0*/ tb_polite_mini__DOT__dut__DOT__sum_all;
        IData/*31:0*/ tb_polite_mini__DOT__dut__DOT__mul_all;
        VlWide<3>/*95:0*/ tb_polite_mini__DOT__dut__DOT__cap;
        VlWide<3>/*95:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__psum_all;
        VlWide<3>/*95:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__sum_all;
        IData/*31:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__mul_all;
        VlWide<3>/*95:0*/ tb_polite_mini__DOT__dut__DOT____Vtogcov__cap;
        IData/*23:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__fz_val;
        IData/*23:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__ps;
        IData/*23:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__sm;
        IData/*23:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__v;
        IData/*23:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT__val_e;
        IData/*23:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__fz_val;
        IData/*23:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__ps;
        IData/*23:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__sm;
        IData/*23:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__v;
        IData/*23:0*/ tb_polite_mini__DOT__dut__DOT__u_dbg__DOT____Vtogcov__val_e;
        VlWide<4>/*127:0*/ tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_6_0;
        IData/*31:0*/ tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_10_0;
        VlWide<3>/*95:0*/ tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_12_0;
        IData/*23:0*/ tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__w;
        IData/*31:0*/ tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__k;
        IData/*23:0*/ tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__w;
        VlWide<4>/*127:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_6_0;
        VlWide<3>/*95:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__psum_all;
        IData/*31:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__mul_all;
        IData/*31:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_10_0;
        VlWide<3>/*95:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_12_0;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ tb_polite_mini__DOT__edge_n;
        QData/*32:0*/ tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_4_0;
        QData/*32:0*/ __Vsampled_TOP__tb_polite_mini__DOT__dut__DOT__u_top_sva__DOT___Vpast_4_0;
        VlUnpacked<IData/*23:0*/, 4> tb_polite_mini__DOT__m_psum;
        VlUnpacked<CData/*7:0*/, 4> tb_polite_mini__DOT__m_mul;
        VlUnpacked<IData/*23:0*/, 4> tb_polite_mini__DOT__m_word;
        VlUnpacked<IData/*31:0*/, 4> tb_polite_mini__DOT__exp_psum;
        VlUnpacked<IData/*31:0*/, 4> tb_polite_mini__DOT__exp_mul;
        VlUnpacked<IData/*31:0*/, 4> tb_polite_mini__DOT__dump_snapshot;
        VlUnpacked<IData/*23:0*/, 4> tb_polite_mini__DOT____Vtogcov__m_psum;
        VlUnpacked<CData/*7:0*/, 4> tb_polite_mini__DOT____Vtogcov__m_mul;
        VlUnpacked<IData/*23:0*/, 4> tb_polite_mini__DOT____Vtogcov__m_word;
        VlUnpacked<IData/*23:0*/, 4> tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT__word;
        VlUnpacked<IData/*23:0*/, 4> tb_polite_mini__DOT__dut__DOT__g_outbuf__DOT__u_outbuf__DOT____Vtogcov__word;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlQueue<CData/*7:0*/> tb_polite_mini__DOT__mon_q;
    std::string tb_polite_mini__DOT__cfg_test_name;
    std::string tb_polite_mini__DOT__cfg_dumpfile;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h6384728f__0;
    VlTriggerScheduler __VtrigSched_h638472ce__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_polite_mini__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_polite_mini___024root(Vtb_polite_mini__Syms* symsp, const char* v__name);
    ~Vtb_polite_mini___024root();
    VL_UNCOPYABLE(Vtb_polite_mini___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard

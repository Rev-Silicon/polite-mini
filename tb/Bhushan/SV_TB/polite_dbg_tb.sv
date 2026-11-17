`timescale 1ns/1ps
`include "../design/polite_dbg.sv"

/* verilator lint_off DECLFILENAME */
class dbg_txn;
    rand bit       en;
    rand bit       req;        // host asks for a debug read this tick
    rand bit [3:0] op;
    rand bit [1:0] pe;
    rand bit       run_busy;

    constraint c_en  { en  dist {1'b1 := 9, 1'b0 := 1}; }
    constraint c_req { req dist {1'b1 := 1, 1'b0 := 2}; }
    constraint c_op  { op inside {[4'h6:4'hB]}; }
endclass

// Read-level transaction: one debug read plus the gap before the next request
class dbg_read_txn;
    rand bit [3:0]    op;
    rand bit [1:0]    pe;
    rand bit          run_busy;
    rand int unsigned gap;      // idle ticks after the start before the next request
    rand int unsigned n_hold;   // hold (en=0) ticks inserted in the gap
    rand int unsigned hold_at;  // gap tick where the hold begins

    constraint c_op { op inside {[4'h6:4'hB]}; }

    // Hard bounds, kept apart from the dist weights: a simulator that drops
    // a dist expression still can't pick a gap of billions of ticks.
    constraint c_bounds { gap inside {[2:40]}; n_hold inside {[0:4]}; }

    // 8-bit window = 3 ticks, 24-bit = 11. Weight the boundary.
    constraint c_gap {
        (op inside {4'h8, 4'hA}) -> gap dist { 10 := 2,         // one early: blocked
                                               11 := 4,         // minimum legal
                                               [12:16] := 3,
                                               [17:40] := 1 };
        !(op inside {4'h8, 4'hA}) -> gap dist { 2 := 2,
                                                3 := 4,
                                                [4:8]  := 3,
                                                [9:30] := 1 };
    }
    constraint c_hold { n_hold dist {0 := 7, [1:4] := 3}; hold_at < gap; }
endclass
/* verilator lint_on DECLFILENAME */

module tb_polite_dbg;

    timeunit 1ns; timeprecision 1ps;

    localparam int NUM_RANDOM = 5000;

    localparam logic [3:0] OP_DFLAG = 4'h6, OP_DBUF = 4'h7, OP_DPSUM = 4'h8,
                           OP_DMUL  = 4'h9, OP_DADD = 4'hA, OP_DINP = 4'hB;

    // ---------------------------------------------------------------- DUT I/O
    logic        clk;
    logic        rst_n;
    logic        en;
    logic        phase;
    logic        start;
    logic [3:0]  op;
    logic [1:0]  pe;
    logic        run_busy;
    logic [7:0]  status;
    logic [7:0]  inbuf;
    logic [7:0]  d;
    logic [95:0] psum_all;
    logic [31:0] mul_all;
    logic [95:0] sum_all;

    logic        open;
    logic        ofz;
    logic        dbg_tick;
    logic [3:0]  dbg_nib;

    polite_dbg dut (
        .clk      (clk),
        .rst_n    (rst_n),
        .en       (en),
        .phase    (phase),
        .start    (start),
        .op       (op),
        .pe       (pe),
        .run_busy (run_busy),
        .status   (status),
        .inbuf    (inbuf),
        .d        (d),
        .psum_all (psum_all),
        .mul_all  (mul_all),
        .sum_all  (sum_all),
        .open     (open),
        .ofz      (ofz),
        .dbg_tick (dbg_tick),
        .dbg_nib  (dbg_nib)
    );

    // ------------------------------------------------------------------ clock
    // 66 MHz core clock: period 15.152 ns
    initial clk = 1'b0;
    always #7.576 clk = ~clk;

    // Output-tick phase, as polite_ctrl generates it: 0 out of reset,
    // toggles on every enabled core tick, frozen on hold ticks.
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)  phase <= 1'b0;
        else if (en) phase <= ~phase;
    end

    // -------------------------------------------------------- reference model
    logic [3:0]  m_left;   // core ticks left in the freeze window
    logic [2:0]  m_k;      // debug nibbles already shown
    logic [23:0] m_val;    // captured value

    // Values sampled in check_comb() for the following clock edge
    logic        s_en, s_start, s_tick;
    logic [3:0]  s_len;
    logic [23:0] s_val;

    int err_count = 0;
    int chk_count = 0;

    // Value a legal freezing read captures on its own core tick (SPEC 5.7)
    function automatic logic [23:0] capture_value();
        logic [23:0] ps = psum_all[24*pe +: 24];
        logic [7:0]  mu = mul_all [8*pe  +: 8];
        logic [23:0] sm = sum_all [24*pe +: 24];
        case (op)
            OP_DFLAG: return {16'h0, status};
            OP_DBUF:  return {16'h0, inbuf};
            OP_DPSUM: return ps;                       // before the in-flight add
            OP_DMUL:  return {16'h0, mu};              // last latched product
            OP_DADD:  return run_busy ? sm : ps;       // adder preview
            default:  return {16'h0, d};               // DEBUG_INPUT
        endcase
    endfunction

    function automatic bit is_wide(input logic [3:0] o);
        return (o == OP_DPSUM) || (o == OP_DADD);
    endfunction

    // --------------------------------------------------------- scoreboard
    bit          sb_active;
    logic [23:0] sb_exp;
    logic [23:0] sb_got;
    int          sb_need;
    int          sb_cnt;
    int          n_reads = 0;

    // ----------------------------------------------------------- coverage
    int cov_op_phase [6][2];   // opcode (6..B) x phase at the start tick
    int cov_add_rb   [2];      // DEBUG_ADD with run_busy 0 / 1
    int cov_pe       [4];      // 24-bit reads per PE index
    int cov_hold_in_freeze = 0;
    int cov_b2b_min        = 0; // read on the first legal tick after a window
    logic prev_open;

    // -------------------------------------------------------------- checkers
    `define CHECK(sig, expv) \
        begin \
            chk_count++; \
            if ((sig) !== (expv)) begin \
                err_count++; \
                $error("[%0t] %s mismatch: got %0h exp %0h (op=%0h pe=%0d start=%0b phase=%0b)", \
                       $time, `"sig`", sig, expv, op, pe, start, phase); \
            end \
        end

    task automatic model_reset();
        m_left    = 4'd0;
        m_k       = 3'd0;
        m_val     = 24'd0;
        sb_active = 1'b0;
        prev_open = 1'b0;
    endtask

    // Combinational outputs for this tick, plus scoreboard bookkeeping
    task automatic check_comb();
        logic        open_e = (m_left != 4'd0);
        logic        ofz_e  = start || open_e;
        logic        tick_e = ofz_e && phase;
        logic [23:0] val_e  = start ? capture_value() : m_val;
        logic [2:0]  k_e    = start ? 3'd0 : m_k;

        `CHECK(open,     open_e)
        `CHECK(ofz,      ofz_e)
        `CHECK(dbg_tick, tick_e)
        // dbg_nib only reaches the pins on a debug-nibble (output) tick
        if (tick_e && k_e < 3'd6)
            `CHECK(dbg_nib, val_e[4*k_e +: 4])

        if (en) begin
            if (start) begin
                if (sb_active) begin
                    err_count++;
                    $error("[%0t] new freeze started before the previous one finished", $time);
                end
                sb_active = 1'b1;
                sb_exp    = val_e;
                sb_need   = is_wide(op) ? 6 : 2;
                sb_got    = 24'd0;
                sb_cnt    = 0;
                n_reads++;
                cov_op_phase[op - OP_DFLAG][phase]++;
                if (op == OP_DADD) cov_add_rb[run_busy]++;
                if (is_wide(op))   cov_pe[pe]++;
                if (prev_open)     cov_b2b_min++;
            end
            if (tick_e && sb_active) begin
                if (sb_cnt < 6) sb_got[4*sb_cnt +: 4] = dbg_nib;
                sb_cnt++;
            end
            prev_open = open_e;
        end else if (open_e) begin
            cov_hold_in_freeze++;
        end

        s_en    = en;
        s_start = start;
        s_tick  = tick_e;
        s_len   = is_wide(op) ? 4'd12 : 4'd4;
        s_val   = val_e;
    endtask

    // State update on the clock edge, using values sampled before it
    task automatic model_clock();
        if (!s_en) return;
        if (s_start) begin
            m_val  = s_val;
            m_left = s_len - 4'd1;
            m_k    = {2'b00, s_tick};
        end else if (m_left != 4'd0) begin
            m_left = m_left - 4'd1;
            m_k    = m_k + {2'b00, s_tick};
        end

        // Freeze finished: check nibble count and reassembled value
        if (sb_active && m_left == 4'd0) begin
            sb_active = 1'b0;
            chk_count++;
            if (sb_cnt != sb_need || sb_got !== sb_exp) begin
                err_count++;
                $error("[%0t] freeze scoreboard: got %0d nibbles = %06h, exp %0d nibbles = %06h",
                       $time, sb_cnt, sb_got, sb_need, sb_exp);
            end
        end
    endtask

    task automatic check_regs();
        `CHECK(dut.fz_left, m_left)
        `CHECK(dut.fz_k,    m_k)
        `CHECK(dut.fz_val,  m_val)
    endtask

    // ------------------------------------------------------------- stimulus
    // One core tick: drive on the falling edge, check, clock it in.
    // Data buses are re-randomised every tick so a capture taken on the
    // wrong tick, or a value that is not frozen, shows up as a mismatch.
    // As in polite_ctrl, a read request only starts a freeze when no
    // window is open.
    task automatic tick(input logic       en_v,
                        input logic       req_v  = 1'b0,
                        input logic [3:0] op_v   = OP_DFLAG,
                        input logic [1:0] pe_v   = 2'd0,
                        input logic       rb_v   = 1'b0);
        @(negedge clk);
        check_regs();
        en       = en_v;
        op       = op_v;
        pe       = pe_v;
        run_busy = rb_v;
        status   = 8'($urandom);
        inbuf    = 8'($urandom);
        d        = 8'($urandom);
        psum_all = {$urandom, $urandom, $urandom};
        mul_all  = $urandom;
        sum_all  = {$urandom, $urandom, $urandom};
        start    = req_v && !open;
        #1 check_comb();
        @(posedge clk);
        model_clock();
    endtask

    task automatic idle(input int n);
        repeat (n) tick(1'b1);
    endtask

    // Issue a read so that it starts on the requested output-tick phase
    task automatic read_on_phase(input logic [3:0] op_v, input logic [1:0] pe_v,
                                 input logic ph, input logic rb_v = 1'b0);
        #1;  // let phase settle after the last posedge
        if (phase != ph) tick(1'b1);
        tick(1'b1, 1'b1, op_v, pe_v, rb_v);
    endtask

    task automatic apply_reset();
        rst_n    = 1'b0;
        en       = 1'b0;
        start    = 1'b0;
        op       = OP_DFLAG;
        pe       = 2'd0;
        run_busy = 1'b0;
        status   = 8'h00;
        inbuf    = 8'h00;
        d        = 8'h00;
        psum_all = '0;
        mul_all  = '0;
        sum_all  = '0;
        model_reset();
        repeat (3) @(posedge clk);
        @(negedge clk);
        rst_n = 1'b1;
        check_regs();
    endtask

    task automatic directed_tests();
        $display("[%0t] Directed tests", $time);

        // Every opcode, starting on both output-tick phases
        for (int o = OP_DFLAG; o <= OP_DINP; o++) begin
            for (int ph = 0; ph < 2; ph++) begin
                read_on_phase(4'(o), 2'(o), 1'(ph));
                idle(is_wide(4'(o)) ? 12 : 4);
            end
        end

        // DEBUG_ADD with and without a phase 2 in flight
        read_on_phase(OP_DADD, 2'd1, 1'b0, 1'b1);  idle(12);
        read_on_phase(OP_DADD, 2'd1, 1'b0, 1'b0);  idle(12);

        // 24-bit read of every PE
        for (int p = 0; p < 4; p++) begin
            tick(1'b1, 1'b1, OP_DPSUM, 2'(p));
            idle(12);
        end

        // Minimum legal spacing (SPEC 5.6.1): next read on k+4 / k+12
        tick(1'b1, 1'b1, OP_DBUF);  idle(3);
        tick(1'b1, 1'b1, OP_DINP);  idle(3);
        tick(1'b1, 1'b1, OP_DPSUM); idle(11);
        tick(1'b1, 1'b1, OP_DADD);  idle(11);
        tick(1'b1, 1'b1, OP_DFLAG); idle(4);

        // Requests inside the window must not restart the freeze
        tick(1'b1, 1'b1, OP_DPSUM, 2'd2);
        for (int i = 0; i < 11; i++) tick(1'b1, 1'b1, OP_DBUF);
        idle(2);

        // Hold (en low) in the middle of a freeze: everything stays frozen
        tick(1'b1, 1'b1, OP_DPSUM, 2'd3);
        idle(3);
        repeat (4) tick(1'b0);
        idle(10);

        // Hold on the start tick itself: no capture until enabled
        tick(1'b0, 1'b1, OP_DMUL);
        tick(1'b1, 1'b1, OP_DMUL);
        idle(4);
    endtask

    // Read-level constrained random: aims at window edges and holds
    task automatic random_reads(input int n);
        dbg_read_txn t = new();
        $display("[%0t] Random reads: %0d", $time, n);
        for (int i = 0; i < n; i++) begin
            if (!t.randomize()) $fatal(1, "randomize() failed");
            tick(1'b1, 1'b1, t.op, t.pe, t.run_busy);
            for (int g = 0; g < t.gap; g++) begin
                if (g == t.hold_at) repeat (t.n_hold) tick(1'b0);
                tick(1'b1, 1'b0, OP_DFLAG, 2'd0, 1'($urandom));
            end
        end
        idle(12);
    endtask

    // Tick-level random noise (the original random test)
    task automatic random_noise(input int n);
        dbg_txn txn = new();
        $display("[%0t] Random noise: %0d ticks", $time, n);
        for (int i = 0; i < n; i++) begin
            if (!txn.randomize()) $fatal(1, "randomize() failed");
            tick(txn.en, txn.req, txn.op, txn.pe, txn.run_busy);
        end
        idle(12);
    endtask

    task automatic report_coverage();
        string names [6] = '{"DEBUG_FLAGS", "DEBUG_BUFFER", "DEBUG_PARTIAL_SUM",
                             "DEBUG_MULTIPLY", "DEBUG_ADD", "DEBUG_INPUT"};
        int holes = 0;
        $display("------------------------------------------------");
        $display(" Coverage (reads started)       phase0  phase1");
        for (int i = 0; i < 6; i++) begin
            $display("   %-28s %6d  %6d", names[i], cov_op_phase[i][0], cov_op_phase[i][1]);
            if (cov_op_phase[i][0] == 0 || cov_op_phase[i][1] == 0) holes++;
        end
        $display("   DEBUG_ADD run_busy=0/1       %6d  %6d", cov_add_rb[0], cov_add_rb[1]);
        $display("   24-bit reads PE0..PE3        %0d %0d %0d %0d",
                 cov_pe[0], cov_pe[1], cov_pe[2], cov_pe[3]);
        $display("   hold ticks inside a freeze   %6d", cov_hold_in_freeze);
        $display("   reads at minimum spacing     %6d", cov_b2b_min);
        foreach (cov_add_rb[i]) if (cov_add_rb[i] == 0) holes++;
        foreach (cov_pe[i])     if (cov_pe[i] == 0)     holes++;
        if (cov_hold_in_freeze == 0) holes++;
        if (cov_b2b_min == 0)        holes++;
        $display("   coverage holes               %6d", holes);
    endtask

    // ------------------------------------------------------------------ main
    initial begin
        string dumpfile;
        string test_name;
        int    n_rand = NUM_RANDOM;
        if (!$value$plusargs("dumpfile=%s", dumpfile))
            dumpfile = "../logs_waveforms/tb_polite_dbg.vcd";
        $dumpfile(dumpfile);
        $dumpvars(0, tb_polite_dbg);

        // +TEST=directed | random | all (default),  +NUM=<random ticks>
        if (!$value$plusargs("TEST=%s", test_name)) test_name = "all";
        void'($value$plusargs("NUM=%d", n_rand));

        apply_reset();
        case (test_name)
            "directed": directed_tests();
            "random":   begin random_reads(n_rand / 8); random_noise(n_rand); end
            "all":      begin directed_tests(); random_reads(n_rand / 8); random_noise(n_rand); end
            default:    $fatal(1, "unknown +TEST=%s", test_name);
        endcase

        // Async reset in the middle of a freeze
        tick(1'b1, 1'b1, OP_DADD, 2'd0, 1'b1);
        idle(2);
        apply_reset();
        idle(2);
        @(negedge clk);
        check_regs();

        report_coverage();
        $display("------------------------------------------------");
        $display(" polite_dbg_tb: %0d reads, %0d checks, %0d errors -> %s",
                 n_reads, chk_count, err_count, (err_count == 0) ? "PASS" : "FAIL");
        $display("------------------------------------------------");
        $finish;
    end

endmodule

// ============================================================================
// SystemVerilog assertions for polite_dbg (moved from sva/polite_sva.sv, unchanged)
// ============================================================================
module polite_dbg_sva (input logic clk, rst_n, en, start, open, phase, dbg_tick,
                       input logic [3:0] op, fz_left, input logic [2:0] fz_k,
                       input logic [23:0] fz_val);

    a_no_restart: assert property (@(posedge clk) disable iff (!rst_n) start |-> !open);
    a_win_wide:   assert property (@(posedge clk) disable iff (!rst_n) en && start && op inside {4'h8, 4'hA} |=> fz_left == 4'd11);
    a_win_narrow: assert property (@(posedge clk) disable iff (!rst_n) en && start && !(op inside {4'h8, 4'hA}) |=> fz_left == 4'd3);
    a_val_frozen: assert property (@(posedge clk) disable iff (!rst_n) !start |=> $stable(fz_val));
    a_tick_phase: assert property (@(posedge clk) disable iff (!rst_n) dbg_tick |-> phase);
    a_nib_count:  assert property (@(posedge clk) disable iff (!rst_n) $fell(open) |-> fz_k inside {3'd2, 3'd6});
    a_ranges:     assert property (@(posedge clk) disable iff (!rst_n) fz_left <= 4'd11 && fz_k <= 3'd6);
endmodule

bind polite_dbg  polite_dbg_sva  u_sva (.*);

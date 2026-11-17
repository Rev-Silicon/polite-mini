//      // verilator_coverage annotation
        `timescale 1ns/1ps
        `include "../design/polite_dbg.sv"
        
        /* verilator lint_off DECLFILENAME */
 005001 class dbg_txn;
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
 000626 class dbg_read_txn;
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
 041734     logic        clk;
%000003     logic        rst_n;
 003587     logic        en;
 016724     logic        phase;
 002082     logic        start;
 003202     logic [3:0]  op;
 003142     logic [1:0]  pe;
 009916     logic        run_busy;
 010543     logic [7:0]  status;
 010477     logic [7:0]  inbuf;
 010527     logic [7:0]  d;
 010596     logic [95:0] psum_all;
 010535     logic [31:0] mul_all;
 010691     logic [95:0] sum_all;
        
 001814     logic        open;
 002082     logic        ofz;
 005984     logic        dbg_tick;
 005786     logic [3:0]  dbg_nib;
        
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
%000001     initial clk = 1'b0;
 041734     always #7.576 clk = ~clk;
        
            // Output-tick phase, as polite_ctrl generates it: 0 out of reset,
            // toggles on every enabled core tick, frozen on hold ticks.
 020867     always @(posedge clk or negedge rst_n) begin
%000007         if (!rst_n)  phase <= 1'b0;
 016723         else if (en) phase <= ~phase;
            end
        
            // -------------------------------------------------------- reference model
 005858     logic [3:0]  m_left;   // core ticks left in the freeze window
 002930     logic [2:0]  m_k;      // debug nibbles already shown
 000482     logic [23:0] m_val;    // captured value
        
            // Values sampled in check_comb() for the following clock edge
 005984     logic        s_en, s_start, s_tick;
~002836     logic [3:0]  s_len;
 000668     logic [23:0] s_val;
        
%000001     int err_count = 0;
%000001     int chk_count = 0;
        
            // Value a legal freezing read captures on its own core tick (SPEC 5.7)
 001157     function automatic logic [23:0] capture_value();
 001157         logic [23:0] ps = psum_all[24*pe +: 24];
 001157         logic [7:0]  mu = mul_all [8*pe  +: 8];
 001157         logic [23:0] sm = sum_all [24*pe +: 24];
 001157         case (op)
%000000             OP_DFLAG: return {16'h0, status};
%000000             OP_DBUF:  return {16'h0, inbuf};
%000000             OP_DPSUM: return ps;                       // before the in-flight add
%000000             OP_DMUL:  return {16'h0, mu};              // last latched product
%000000             OP_DADD:  return run_busy ? sm : ps;       // adder preview
%000000             default:  return {16'h0, d};               // DEBUG_INPUT
                endcase
            endfunction
        
 022685     function automatic bit is_wide(input logic [3:0] o);
 022685         return (o == OP_DPSUM) || (o == OP_DADD);
            endfunction
        
            // --------------------------------------------------------- scoreboard
 001814     bit          sb_active;
 000481     logic [23:0] sb_exp;
 000952     logic [23:0] sb_got;
            int          sb_need;
            int          sb_cnt;
%000001     int          n_reads = 0;
        
            // ----------------------------------------------------------- coverage
            int cov_op_phase [6][2];   // opcode (6..B) x phase at the start tick
            int cov_add_rb   [2];      // DEBUG_ADD with run_busy 0 / 1
            int cov_pe       [4];      // 24-bit reads per PE index
%000001     int cov_hold_in_freeze = 0;
%000001     int cov_b2b_min        = 0; // read on the first legal tick after a window
 001814     logic prev_open;
        
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
        
%000002     task automatic model_reset();
%000002         m_left    = 4'd0;
%000002         m_k       = 3'd0;
%000002         m_val     = 24'd0;
%000002         sb_active = 1'b0;
%000002         prev_open = 1'b0;
            endtask
        
            // Combinational outputs for this tick, plus scoreboard bookkeeping
 020859     task automatic check_comb();
 020859         logic        open_e = (m_left != 4'd0);
 020859         logic        ofz_e  = start || open_e;
 020859         logic        tick_e = ofz_e && phase;
 020859         logic [23:0] val_e  = start ? capture_value() : m_val;
 020859         logic [2:0]  k_e    = start ? 3'd0 : m_k;
        
 020859         `CHECK(open,     open_e)
 020859         `CHECK(ofz,      ofz_e)
 020859         `CHECK(dbg_tick, tick_e)
                // dbg_nib only reaches the pins on a debug-nibble (output) tick
 016612         if (tick_e && k_e < 3'd6)
 004247             `CHECK(dbg_nib, val_e[4*k_e +: 4])
        
 016724         if (en) begin
 015817             if (start) begin
 000907                 if (sb_active) begin
                            err_count++;
                            $error("[%0t] new freeze started before the previous one finished", $time);
                        end
 000907                 sb_active = 1'b1;
 000907                 sb_exp    = val_e;
 000907                 sb_need   = is_wide(op) ? 6 : 2;
 000907                 sb_got    = 24'd0;
 000907                 sb_cnt    = 0;
 000907                 n_reads++;
 000907                 cov_op_phase[op - OP_DFLAG][phase]++;
 000738                 if (op == OP_DADD) cov_add_rb[run_busy]++;
 000627                 if (is_wide(op))   cov_pe[pe]++;
 000781                 if (prev_open)     cov_b2b_min++;
                    end
 013794             if (tick_e && sb_active) begin
~002930                 if (sb_cnt < 6) sb_got[4*sb_cnt +: 4] = dbg_nib;
 002930                 sb_cnt++;
                    end
 016724             prev_open = open_e;
 002471         end else if (open_e) begin
 002471             cov_hold_in_freeze++;
                end
        
 020859         s_en    = en;
 020859         s_start = start;
 020859         s_tick  = tick_e;
 020859         s_len   = is_wide(op) ? 4'd12 : 4'd4;
 020859         s_val   = val_e;
            endtask
        
            // State update on the clock edge, using values sampled before it
 020859     task automatic model_clock();
~016724         if (!s_en) return;
 000907         if (s_start) begin
 000907             m_val  = s_val;
 000907             m_left = s_len - 4'd1;
 000907             m_k    = {2'b00, s_tick};
 010865         end else if (m_left != 4'd0) begin
 004952             m_left = m_left - 4'd1;
 004952             m_k    = m_k + {2'b00, s_tick};
                end
        
                // Freeze finished: check nibble count and reassembled value
 015818         if (sb_active && m_left == 4'd0) begin
 000906             sb_active = 1'b0;
 000906             chk_count++;
 000906             if (sb_cnt != sb_need || sb_got !== sb_exp) begin
                        err_count++;
                        $error("[%0t] freeze scoreboard: got %0d nibbles = %06h, exp %0d nibbles = %06h",
                               $time, sb_cnt, sb_got, sb_need, sb_exp);
                    end
                end
            endtask
        
 020862     task automatic check_regs();
 020862         `CHECK(dut.fz_left, m_left)
 020862         `CHECK(dut.fz_k,    m_k)
 020862         `CHECK(dut.fz_val,  m_val)
            endtask
        
            // ------------------------------------------------------------- stimulus
            // One core tick: drive on the falling edge, check, clock it in.
            // Data buses are re-randomised every tick so a capture taken on the
            // wrong tick, or a value that is not frozen, shows up as a mismatch.
            // As in polite_ctrl, a read request only starts a freeze when no
            // window is open.
 020859     task automatic tick(input logic       en_v,
~001443                         input logic       req_v  = 1'b0,
~001443                         input logic [3:0] op_v   = OP_DFLAG,
~001443                         input logic [1:0] pe_v   = 2'd0,
~001443                         input logic       rb_v   = 1'b0);
 020859         @(negedge clk);
 020859         check_regs();
 020859         en       = en_v;
 020859         op       = op_v;
 020859         pe       = pe_v;
 020859         run_busy = rb_v;
 020859         status   = 8'($urandom);
 020859         inbuf    = 8'($urandom);
 020859         d        = 8'($urandom);
 020859         psum_all = {$urandom, $urandom, $urandom};
 020859         mul_all  = $urandom;
 020859         sum_all  = {$urandom, $urandom, $urandom};
 020859         start    = req_v && !open;
 020859         #1 check_comb();
 020859         @(posedge clk);
 020859         model_clock();
            endtask
        
 000031     task automatic idle(input int n);
 000231         repeat (n) tick(1'b1);
            endtask
        
            // Issue a read so that it starts on the requested output-tick phase
 000014     task automatic read_on_phase(input logic [3:0] op_v, input logic [1:0] pe_v,
 000012                                  input logic ph, input logic rb_v = 1'b0);
 000014         #1;  // let phase settle after the last posedge
~000013         if (phase != ph) tick(1'b1);
 000014         tick(1'b1, 1'b1, op_v, pe_v, rb_v);
            endtask
        
%000002     task automatic apply_reset();
%000002         rst_n    = 1'b0;
%000002         en       = 1'b0;
%000002         start    = 1'b0;
%000002         op       = OP_DFLAG;
%000002         pe       = 2'd0;
%000002         run_busy = 1'b0;
%000002         status   = 8'h00;
%000002         inbuf    = 8'h00;
%000002         d        = 8'h00;
%000002         psum_all = '0;
%000002         mul_all  = '0;
%000002         sum_all  = '0;
%000002         model_reset();
%000006         repeat (3) @(posedge clk);
%000002         @(negedge clk);
%000002         rst_n = 1'b1;
%000002         check_regs();
            endtask
        
%000001     task automatic directed_tests();
%000001         $display("[%0t] Directed tests", $time);
        
                // Every opcode, starting on both output-tick phases
%000006         for (int o = OP_DFLAG; o <= OP_DINP; o++) begin
~000012             for (int ph = 0; ph < 2; ph++) begin
 000012                 read_on_phase(4'(o), 2'(o), 1'(ph));
 000012                 idle(is_wide(4'(o)) ? 12 : 4);
                    end
                end
        
                // DEBUG_ADD with and without a phase 2 in flight
%000001         read_on_phase(OP_DADD, 2'd1, 1'b0, 1'b1);  idle(12);
%000001         read_on_phase(OP_DADD, 2'd1, 1'b0, 1'b0);  idle(12);
        
                // 24-bit read of every PE
%000004         for (int p = 0; p < 4; p++) begin
%000004             tick(1'b1, 1'b1, OP_DPSUM, 2'(p));
%000004             idle(12);
                end
        
                // Minimum legal spacing (SPEC 5.6.1): next read on k+4 / k+12
%000001         tick(1'b1, 1'b1, OP_DBUF);  idle(3);
%000001         tick(1'b1, 1'b1, OP_DINP);  idle(3);
%000001         tick(1'b1, 1'b1, OP_DPSUM); idle(11);
%000001         tick(1'b1, 1'b1, OP_DADD);  idle(11);
%000001         tick(1'b1, 1'b1, OP_DFLAG); idle(4);
        
                // Requests inside the window must not restart the freeze
%000001         tick(1'b1, 1'b1, OP_DPSUM, 2'd2);
~000011         for (int i = 0; i < 11; i++) tick(1'b1, 1'b1, OP_DBUF);
%000001         idle(2);
        
                // Hold (en low) in the middle of a freeze: everything stays frozen
%000001         tick(1'b1, 1'b1, OP_DPSUM, 2'd3);
%000001         idle(3);
%000004         repeat (4) tick(1'b0);
%000001         idle(10);
        
                // Hold on the start tick itself: no capture until enabled
%000001         tick(1'b0, 1'b1, OP_DMUL);
%000001         tick(1'b1, 1'b1, OP_DMUL);
%000001         idle(4);
            endtask
        
            // Read-level constrained random: aims at window edges and holds
%000001     task automatic random_reads(input int n);
%000001         dbg_read_txn t = new();
%000001         $display("[%0t] Random reads: %0d", $time, n);
~000625         for (int i = 0; i < n; i++) begin
 000625             if (!t.randomize()) $fatal(1, "randomize() failed");
 000625             tick(1'b1, 1'b1, t.op, t.pe, t.run_busy);
 013516             for (int g = 0; g < t.gap; g++) begin
 012891                 if (g == t.hold_at) repeat (t.n_hold) tick(1'b0);
 013516                 tick(1'b1, 1'b0, OP_DFLAG, 2'd0, 1'($urandom));
                    end
                end
%000001         idle(12);
            endtask
        
            // Tick-level random noise (the original random test)
%000001     task automatic random_noise(input int n);
%000001         dbg_txn txn = new();
%000001         $display("[%0t] Random noise: %0d ticks", $time, n);
~005000         for (int i = 0; i < n; i++) begin
 005000             if (!txn.randomize()) $fatal(1, "randomize() failed");
 005000             tick(txn.en, txn.req, txn.op, txn.pe, txn.run_busy);
                end
%000001         idle(12);
            endtask
        
%000001     task automatic report_coverage();
%000001         string names [6] = '{"DEBUG_FLAGS", "DEBUG_BUFFER", "DEBUG_PARTIAL_SUM",
%000001                              "DEBUG_MULTIPLY", "DEBUG_ADD", "DEBUG_INPUT"};
%000001         int holes = 0;
%000001         $display("------------------------------------------------");
%000001         $display(" Coverage (reads started)       phase0  phase1");
%000006         for (int i = 0; i < 6; i++) begin
%000006             $display("   %-28s %6d  %6d", names[i], cov_op_phase[i][0], cov_op_phase[i][1]);
%000006             if (cov_op_phase[i][0] == 0 || cov_op_phase[i][1] == 0) holes++;
                end
%000001         $display("   DEBUG_ADD run_busy=0/1       %6d  %6d", cov_add_rb[0], cov_add_rb[1]);
%000001         $display("   24-bit reads PE0..PE3        %0d %0d %0d %0d",
%000001                  cov_pe[0], cov_pe[1], cov_pe[2], cov_pe[3]);
%000001         $display("   hold ticks inside a freeze   %6d", cov_hold_in_freeze);
%000001         $display("   reads at minimum spacing     %6d", cov_b2b_min);
%000002         foreach (cov_add_rb[i]) if (cov_add_rb[i] == 0) holes++;
%000004         foreach (cov_pe[i])     if (cov_pe[i] == 0)     holes++;
%000001         if (cov_hold_in_freeze == 0) holes++;
%000001         if (cov_b2b_min == 0)        holes++;
%000001         $display("   coverage holes               %6d", holes);
            endtask
        
            // ------------------------------------------------------------------ main
%000001     initial begin
                string dumpfile;
                string test_name;
%000001         int    n_rand = NUM_RANDOM;
%000001         if (!$value$plusargs("dumpfile=%s", dumpfile))
%000000             dumpfile = "../logs_waveforms/tb_polite_dbg.vcd";
%000001         $dumpfile(dumpfile);
%000001         $dumpvars(0, tb_polite_dbg);
        
                // +TEST=directed | random | all (default),  +NUM=<random ticks>
%000001         if (!$value$plusargs("TEST=%s", test_name)) test_name = "all";
%000001         void'($value$plusargs("NUM=%d", n_rand));
        
%000001         apply_reset();
%000001         case (test_name)
%000000             "directed": directed_tests();
%000000             "random":   begin random_reads(n_rand / 8); random_noise(n_rand); end
%000001             "all":      begin directed_tests(); random_reads(n_rand / 8); random_noise(n_rand); end
                    default:    $fatal(1, "unknown +TEST=%s", test_name);
                endcase
        
                // Async reset in the middle of a freeze
%000001         tick(1'b1, 1'b1, OP_DADD, 2'd0, 1'b1);
%000001         idle(2);
%000001         apply_reset();
%000001         idle(2);
%000001         @(negedge clk);
%000001         check_regs();
        
%000001         report_coverage();
%000001         $display("------------------------------------------------");
%000001         $display(" polite_dbg_tb: %0d reads, %0d checks, %0d errors -> %s",
%000001                  n_reads, chk_count, err_count, (err_count == 0) ? "PASS" : "FAIL");
%000001         $display("------------------------------------------------");
%000001         $finish;
            end
        
        endmodule
        
        // ============================================================================
        // SystemVerilog assertions for polite_dbg (moved from sva/polite_sva.sv, unchanged)
        // ============================================================================
~041734 module polite_dbg_sva (input logic clk, rst_n, en, start, open, phase, dbg_tick,
 005858                        input logic [3:0] op, fz_left, input logic [2:0] fz_k,
 000482                        input logic [23:0] fz_val);
        
            a_no_restart: assert property (@(posedge clk) disable iff (!rst_n) start |-> !open);
            a_win_wide:   assert property (@(posedge clk) disable iff (!rst_n) en && start && op inside {4'h8, 4'hA} |=> fz_left == 4'd11);
            a_win_narrow: assert property (@(posedge clk) disable iff (!rst_n) en && start && !(op inside {4'h8, 4'hA}) |=> fz_left == 4'd3);
            a_val_frozen: assert property (@(posedge clk) disable iff (!rst_n) !start |=> $stable(fz_val));
            a_tick_phase: assert property (@(posedge clk) disable iff (!rst_n) dbg_tick |-> phase);
            a_nib_count:  assert property (@(posedge clk) disable iff (!rst_n) $fell(open) |-> fz_k inside {3'd2, 3'd6});
            a_ranges:     assert property (@(posedge clk) disable iff (!rst_n) fz_left <= 4'd11 && fz_k <= 3'd6);
        endmodule
        
        bind polite_dbg  polite_dbg_sva  u_sva (.*);
        

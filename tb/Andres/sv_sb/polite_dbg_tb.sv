// Block testbench for polite_dbg (capture mux, freeze window, nibble pointer).
//
// Checking layers:
//   1. a monitor samples the DUT on every rising edge and compares open, ofz,
//      dbg_tick and (on debug-nibble ticks) dbg_nib with a closed-form model:
//      a read that starts on enabled tick T0 owns ticks T0 .. T0+W-1
//      (W = 4 for an 8-bit read, 12 for a 24-bit read), is "open" on
//      T0+1 .. T0+W-1, and shows nibble j on the j-th odd tick of the window,
//      i.e. j = floor(t/2) - floor(T0/2). The output-tick phase is t mod 2
//      because the phase flop toggles on every enabled edge from reset.
//   2. directed tests with literal tick-by-tick expectations from SPEC 5.6,
//      and host-style reads that rebuild the value from the nibble stream
//      while every data input is scrambled after the capture tick,
//   3. constrained-random traffic that stays inside the contract of the
//      controller (a read only starts while no window is open) with ena
//      holds, back-to-back reads at the first legal tick and async resets.

// The compare helpers take 32-bit arguments so one task serves every signal.
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */

module polite_dbg_tb;

    logic         clk = 1'b0;
    logic         rst_n = 1'b0;
    logic         en = 1'b1;
    logic         phase;
    logic         start = 1'b0;
    logic [3:0]   op = 4'h0;
    logic [1:0]   pe = 2'd0;
    logic         run_busy = 1'b0;
    logic [7:0]   status = 8'h00;
    logic [7:0]   inbuf = 8'h00;
    logic [7:0]   d = 8'h00;
    logic [95:0]  psum_all = '0;
    logic [31:0]  mul_all = '0;
    logic [95:0]  sum_all = '0;

    wire          open, ofz, dbg_tick;
    wire  [3:0]   dbg_nib;

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

    always #5 clk = ~clk;

    // Output-tick phase, as polite_ctrl produces it: 0 after reset, toggles
    // on every enabled edge.
    always @(posedge clk or negedge rst_n)
        if (!rst_n)  phase <= 1'b0;
        else if (en) phase <= ~phase;

    localparam logic [3:0] DFLAGS = 4'h6, DBUF = 4'h7, DPSUM = 4'h8,
                           DMUL = 4'h9, DADD = 4'hA, DINPUT = 4'hB;

    // Loop bounds are variables so Verilator keeps the loops rolled.
    integer N2 = 2, N4 = 4, N6 = 6, N9 = 9, N60 = 60;

    integer checks = 0;
    integer cycle = 0;
    string  label = "";

    // ------------------------------------------------------------------
    // Reference model
    // ------------------------------------------------------------------
    integer       tk = 0;           // enabled ticks since reset (this tick's index)
    bit           win_valid = 1'b0;
    integer       t0 = 0;
    integer       w = 0;
    logic [23:0]  cap = '0;

    // Coverage
    integer cov_start [16][2];      // op x start phase
    integer cov_pe [4];
    integer cov_add_rb [2];
    integer cov_b2b8 = 0, cov_b2b24 = 0, cov_hold_in_win = 0, cov_start_on_hold = 0;
    integer cov_reset_in_win = 0, cov_nib [6];

    function automatic logic model_open;
        model_open = win_valid && (tk > t0) && (tk < t0 + w);
    endfunction

    // What each opcode captures, written from SPEC 5.6/5.7 (PE index = dump order).
    function automatic logic [23:0] spec_capture(input logic [3:0] o, input logic [1:0] p);
        logic [23:0] ps, sm;
        logic [7:0]  mu;
        begin
            case (p)
                2'd0: begin ps = psum_all[23:0];  sm = sum_all[23:0];  mu = mul_all[7:0];   end
                2'd1: begin ps = psum_all[47:24]; sm = sum_all[47:24]; mu = mul_all[15:8];  end
                2'd2: begin ps = psum_all[71:48]; sm = sum_all[71:48]; mu = mul_all[23:16]; end
                default: begin ps = psum_all[95:72]; sm = sum_all[95:72]; mu = mul_all[31:24]; end
            endcase
            case (o)
                DFLAGS:  spec_capture = {16'h0, status};
                DBUF:    spec_capture = {16'h0, inbuf};
                DPSUM:   spec_capture = ps;
                DMUL:    spec_capture = {16'h0, mu};
                DADD:    spec_capture = run_busy ? sm : ps;
                default: spec_capture = {16'h0, d};
            endcase
        end
    endfunction

    function automatic integer spec_ticks(input logic [3:0] o);
        spec_ticks = (o == DPSUM || o == DADD) ? 12 : 4;
    endfunction

    // A mismatch only records what failed; one reporter stops the run.
    bit           bad = 1'b0;
    string        bad_what;
    logic [31:0]  bad_got, bad_exp;
    string        bad_msg;

    always @(posedge bad) begin
        bad_msg = $sformatf("[%s] cycle %0d tk=%0d start=%b op=%h pe=%0d en=%b phase=%b: %s = %h expected %h",
                            label, cycle, tk, start, op, pe, en, phase,
                            bad_what, bad_got, bad_exp);
        $fatal(1, "%s", bad_msg);
    end

    task automatic eq(input string what, input logic [31:0] got, input logic [31:0] exp);
        begin
            checks++;
            if (got !== exp) begin
                bad_what = what;
                bad_got = got;
                bad_exp = exp;
                bad = 1'b1;
            end
        end
    endtask

    // Monitor: sample on every rising edge (inputs were applied after the
    // falling edge), compare, then advance the model.
    always @(posedge clk) begin
        if (rst_n) begin
            logic in_win, e_open, e_tick;
            integer j;
            e_open = model_open();
            eq("phase flop", phase, tk[0]);
            eq("open", open, e_open);
            if (en) begin
                if (start) begin
                    // Contract with polite_ctrl: never start inside a window.
                    eq("start only outside a window", e_open, 1'b0);
                    // First legal tick after the previous window (k+4 / k+12).
                    if (win_valid && tk == t0 + w) begin
                        if (spec_ticks(op) == 12) cov_b2b24++; else cov_b2b8++;
                    end
                    t0 = tk;
                    w = spec_ticks(op);
                    cap = spec_capture(op, pe);
                    win_valid = 1'b1;
                    cov_start[op][tk[0]]++;
                    cov_pe[pe]++;
                    if (op == DADD) cov_add_rb[run_busy]++;
                end
                in_win = win_valid && (tk >= t0) && (tk < t0 + w);
                e_tick = in_win && tk[0];
                eq("ofz", ofz, in_win);
                eq("dbg_tick", dbg_tick, e_tick);
                if (e_tick) begin
                    j = tk / 2 - t0 / 2;
                    eq("dbg_nib", dbg_nib, cap[4*j +: 4]);
                    cov_nib[j]++;
                end
                tk++;
            end else begin
                if (win_valid && (tk > t0) && (tk < t0 + w)) cov_hold_in_win++;
                if (start) cov_start_on_hold++;
            end
            cycle++;
        end
    end

    // Asynchronous reset clears the model immediately.
    always @(negedge rst_n) begin
        if (win_valid && (tk > t0) && (tk < t0 + w)) cov_reset_in_win++;
        tk = 0;
        win_valid = 1'b0;
    end

    // ------------------------------------------------------------------
    // Stimulus helpers (flat, because every call site is inlined)
    // ------------------------------------------------------------------
    task automatic scramble;
        begin
            run_busy = 1'($urandom());
            status   = 8'($urandom());
            inbuf    = 8'($urandom());
            d        = 8'($urandom());
            psum_all = {$urandom(), $urandom(), $urandom()};
            mul_all  = $urandom();
            sum_all  = {$urandom(), $urandom(), $urandom()};
        end
    endtask

    // Asynchronous reset, held across one clock edge; checks idle outputs.
    task automatic reset_dut;
        begin
            rst_n = 1'b0;
            start = 1'b0;
            #1;
            eq("reset: open", open, 0);
            eq("reset: ofz", ofz, 0);
            eq("reset: dbg_tick", dbg_tick, 0);
            @(posedge clk);
            #1;
            rst_n = 1'b1;
        end
    endtask

    // One enabled core tick with literal expectations (directed tests).
    task automatic ex(input logic start_, input logic [3:0] op_, input logic [1:0] pe_,
                      input logic eo, input logic ef, input logic et,
                      input logic [3:0] enib);
        begin
            @(negedge clk);
            start = start_;
            op = op_;
            pe = pe_;
            en = 1'b1;
            #1;
            eq("lit open", open, eo);
            eq("lit ofz", ofz, ef);
            eq("lit dbg_tick", dbg_tick, et);
            if (et) eq("lit dbg_nib", dbg_nib, enib);
            @(posedge clk);
            #1;
        end
    endtask

    // Idle ticks until the output-tick phase equals `want` (the next tick
    // to be executed has that phase).
    task automatic align_phase(input logic want);
        begin
            while (phase !== want) begin
                @(negedge clk);
                start = 1'b0;
                op = 4'($urandom_range(0, 15));
                en = 1'b1;
                #1;
                eq("idle: ofz", ofz, 0);
                eq("idle: dbg_tick", dbg_tick, 0);
                @(posedge clk);
                #1;
            end
        end
    endtask

    // Host-style read: start a read of `o` on a tick with output-tick phase
    // `ph`, scramble every input after the capture tick, and rebuild the
    // value from the nibbles on debug-nibble ticks. Optionally hold the
    // enable for a few edges inside the window.
    // rbm: 0/1 force run_busy on the capture tick, 2 leaves it random.
    task automatic host_read(input logic [3:0] o, input logic [1:0] p,
                             input logic ph, input bit with_holds,
                             input integer rbm);
        logic [23:0] exp_val, got_val;
        integer n_exp, n_got, t, guard;
        begin
            align_phase(ph);
            scramble();
            if (rbm < 2) run_busy = rbm[0];
            exp_val = spec_capture(o, p);
            n_exp = spec_ticks(o) / 2;
            got_val = '0;
            n_got = 0;
            guard = 0;
            @(negedge clk);
            start = 1'b1;
            op = o;
            pe = p;
            en = 1'b1;
            #1;
            t = 0;
            while (t < spec_ticks(o) + 3) begin
                if (en && dbg_tick) begin
                    got_val[4*n_got +: 4] = dbg_nib;
                    n_got++;
                end
                @(posedge clk);
                #1;
                @(negedge clk);
                start = 1'b0;
                op = 4'($urandom_range(0, 15));
                scramble();
                // Hold edges do not advance the window; they are not counted as ticks.
                en = !(with_holds && $urandom_range(0, 2) == 0);
                #1;
                if (en) t++;
                guard++;
                if (guard > 200) eq("host_read terminates", 0, 1);
            end
            // The window must be closed again and carry no further nibbles.
            eq({label, ": nibbles seen"}, n_got, n_exp);
            eq({label, ": rebuilt value"}, got_val, exp_val);
            @(posedge clk);
            #1;
            en = 1'b1;
        end
    endtask

    // ------------------------------------------------------------------
    // Directed tests
    // ------------------------------------------------------------------
    task automatic directed_reset_state;
        begin
            label = "reset";
            reset_dut();
            eq("open after reset", open, 0);
            eq("ofz after reset", ofz, 0);
            eq("dbg_tick after reset", dbg_tick, 0);
            // Idle for several output ticks: nothing happens without a start.
            repeat (6) ex(1'b0, 4'h0, 2'd0, 0, 0, 0, 4'h0);
        end
    endtask

    // 8-bit read, SPEC 5.6.1: window k..k+3, open on k+1..k+3, first legal
    // new read at k+4. Nibble j is on the j-th output tick.
    task automatic directed_8bit_timing;
        begin
            label = "8-bit window, start on non-output tick";
            reset_dut();
            status = 8'hA5;      // low nibble 5, high nibble A
            // phase = 0 for the first tick after reset: start there.
            ex(1'b1, DFLAGS, 2'd0,   0, 1, 0, 4'h0);   // k   (phase 0)
            ex(1'b0, 4'h0,   2'd0,   1, 1, 1, 4'h5);   // k+1 (phase 1): low nibble
            ex(1'b0, 4'h0,   2'd0,   1, 1, 0, 4'h0);   // k+2
            ex(1'b0, 4'h0,   2'd0,   1, 1, 1, 4'hA);   // k+3: high nibble
            ex(1'b0, 4'h0,   2'd0,   0, 0, 0, 4'h0);   // k+4: window closed
            ex(1'b0, 4'h0,   2'd0,   0, 0, 0, 4'h0);

            label = "8-bit window, start on output tick";
            // phase is 0 now (6 ticks since reset), so one NOP makes it 1.
            ex(1'b0, 4'h0,   2'd0,   0, 0, 0, 4'h0);
            inbuf = 8'h3C;
            ex(1'b1, DBUF,   2'd0,   0, 1, 1, 4'hC);   // k   (phase 1): low nibble now
            ex(1'b0, 4'h0,   2'd0,   1, 1, 0, 4'h0);   // k+1
            ex(1'b0, 4'h0,   2'd0,   1, 1, 1, 4'h3);   // k+2: high nibble
            ex(1'b0, 4'h0,   2'd0,   1, 1, 0, 4'h0);   // k+3

            label = "8-bit back-to-back at k+4";
            // Start again exactly at the first legal tick of the previous
            // read (k+4, an output tick like k); open is already 0 there.
            d = 8'h96;
            ex(1'b1, DINPUT, 2'd0,   0, 1, 1, 4'h6);   // k
            ex(1'b0, 4'h0,   2'd0,   1, 1, 0, 4'h0);
            ex(1'b0, 4'h0,   2'd0,   1, 1, 1, 4'h9);
            ex(1'b0, 4'h0,   2'd0,   1, 1, 0, 4'h0);   // k+3 last tick of the window
            status = 8'h5A;
            ex(1'b1, DFLAGS, 2'd0,   0, 1, 1, 4'hA);   // k+4: a new read may start
            ex(1'b0, 4'h0,   2'd0,   1, 1, 0, 4'h0);
            ex(1'b0, 4'h0,   2'd0,   1, 1, 1, 4'h5);
            ex(1'b0, 4'h0,   2'd0,   1, 1, 0, 4'h0);
            ex(1'b0, 4'h0,   2'd0,   0, 0, 0, 4'h0);
        end
    endtask

    // 24-bit read: window k..k+11, six nibbles low first.
    task automatic directed_24bit_timing;
        begin
            label = "24-bit window, start on non-output tick";
            reset_dut();
            // PE 2 of psum: 0xC3A591 -> nibbles 1 9 5 A 3 C
            psum_all = {24'h111111, 24'hC3A591, 24'h222222, 24'h333333};
            ex(1'b1, DPSUM, 2'd2,    0, 1, 0, 4'h0);   // k   (phase 0)
            ex(1'b0, 4'h0,  2'd0,    1, 1, 1, 4'h1);   // k+1
            ex(1'b0, 4'h0,  2'd0,    1, 1, 0, 4'h0);
            ex(1'b0, 4'h0,  2'd0,    1, 1, 1, 4'h9);   // k+3
            ex(1'b0, 4'h0,  2'd0,    1, 1, 0, 4'h0);
            ex(1'b0, 4'h0,  2'd0,    1, 1, 1, 4'h5);   // k+5
            ex(1'b0, 4'h0,  2'd0,    1, 1, 0, 4'h0);
            ex(1'b0, 4'h0,  2'd0,    1, 1, 1, 4'hA);   // k+7
            ex(1'b0, 4'h0,  2'd0,    1, 1, 0, 4'h0);
            ex(1'b0, 4'h0,  2'd0,    1, 1, 1, 4'h3);   // k+9
            ex(1'b0, 4'h0,  2'd0,    1, 1, 0, 4'h0);
            ex(1'b0, 4'h0,  2'd0,    1, 1, 1, 4'hC);   // k+11: last nibble, last tick
            ex(1'b0, 4'h0,  2'd0,    0, 0, 0, 4'h0);   // k+12: closed
            ex(1'b0, 4'h0,  2'd0,    0, 0, 0, 4'h0);

            label = "24-bit window, start on output tick, back-to-back";
            // 14 ticks since reset: phase is 0; a NOP makes the next phase 1.
            ex(1'b0, 4'h0,  2'd0,    0, 0, 0, 4'h0);
            run_busy = 1'b0;
            ex(1'b1, DADD,  2'd1,    0, 1, 1, 4'h2);   // k: psum PE1 = 0x222222 (run_busy = 0)
            ex(1'b0, 4'h0,  2'd0,    1, 1, 0, 4'h0);
            ex(1'b0, 4'h0,  2'd0,    1, 1, 1, 4'h2);
            ex(1'b0, 4'h0,  2'd0,    1, 1, 0, 4'h0);
            ex(1'b0, 4'h0,  2'd0,    1, 1, 1, 4'h2);
            ex(1'b0, 4'h0,  2'd0,    1, 1, 0, 4'h0);
            ex(1'b0, 4'h0,  2'd0,    1, 1, 1, 4'h2);
            ex(1'b0, 4'h0,  2'd0,    1, 1, 0, 4'h0);
            ex(1'b0, 4'h0,  2'd0,    1, 1, 1, 4'h2);
            ex(1'b0, 4'h0,  2'd0,    1, 1, 0, 4'h0);
            ex(1'b0, 4'h0,  2'd0,    1, 1, 1, 4'h2);
            ex(1'b0, 4'h0,  2'd0,    1, 1, 0, 4'h0);   // k+11
            // k+12 is the first legal tick for another read (an output tick).
            inbuf = 8'h4D;
            ex(1'b1, DBUF,  2'd0,    0, 1, 1, 4'hD);
            ex(1'b0, 4'h0,  2'd0,    1, 1, 0, 4'h0);
            ex(1'b0, 4'h0,  2'd0,    1, 1, 1, 4'h4);
            ex(1'b0, 4'h0,  2'd0,    1, 1, 0, 4'h0);
            ex(1'b0, 4'h0,  2'd0,    0, 0, 0, 4'h0);
        end
    endtask

    // One value per opcode and PE, spelled out; the stream is rebuilt like a host would.
    task automatic directed_capture_values;
        begin
            // Every input is scrambled before the capture tick and again after
            // it; the rebuilt value must equal the capture-tick value.
            label = "capture values";
            reset_dut();
            for (int ph = 0; ph < N2; ph++) begin
                for (int rb = 0; rb < N2; rb++) begin
                    for (int p = 0; p < N4; p++) begin
                        host_read(DPSUM, p[1:0], ph[0], 1'b0, rb);
                        host_read(DMUL, p[1:0], ph[0], 1'b0, rb);
                        host_read(DADD, p[1:0], ph[0], 1'b0, rb);
                    end
                    host_read(DFLAGS, 2'd0, ph[0], 1'b0, rb);
                    host_read(DBUF, 2'd0, ph[0], 1'b0, rb);
                    host_read(DINPUT, 2'd0, ph[0], 1'b0, rb);
                end
            end
        end
    endtask

    task automatic directed_literal_values;
        begin
            label = "literal values";
            reset_dut();
            // The PE selected by bits [1:0] and nothing else. psum PE n holds
            // 0x0n0n0n-style patterns so each nibble position is unique.
            psum_all = {24'hF0E0D0, 24'hC0B0A0, 24'h987654, 24'h321098};
            mul_all  = {8'hF8, 8'h07, 8'hC9, 8'h36};
            sum_all  = {24'hAAAAAA, 24'hBBBBBB, 24'hCCCCCC, 24'hDDDDDD};
            run_busy = 1'b0;
            align_phase(1'b0);
            // DEBUG_PARTIAL_SUM PE0 = 0x321098: nibbles 8 9 0 1 2 3
            ex(1'b1, DPSUM, 2'd0, 0, 1, 0, 4'h0);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 1, 4'h8);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 0, 4'h0);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 1, 4'h9);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 0, 4'h0);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 1, 4'h0);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 0, 4'h0);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 1, 4'h1);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 0, 4'h0);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 1, 4'h2);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 0, 4'h0);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 1, 4'h3);
            ex(1'b0, 4'h0, 2'd0, 0, 0, 0, 4'h0);
            // DEBUG_MULTIPLY PE3 = 0xF8 (-8): nibbles 8 F.
            align_phase(1'b0);
            ex(1'b1, DMUL, 2'd3, 0, 1, 0, 4'h0);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 1, 4'h8);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 0, 4'h0);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 1, 4'hF);
            ex(1'b0, 4'h0, 2'd0, 0, 0, 0, 4'h0);
            // DEBUG_ADD with run_busy = 0 returns the partial sum, not sum_all.
            run_busy = 1'b0;
            align_phase(1'b1);
            ex(1'b1, DADD, 2'd1, 0, 1, 1, 4'h4);        // PE1 psum = 0x987654
            ex(1'b0, 4'h0, 2'd0, 1, 1, 0, 4'h0);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 1, 4'h5);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 0, 4'h0);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 1, 4'h6);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 0, 4'h0);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 1, 4'h7);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 0, 4'h0);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 1, 4'h8);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 0, 4'h0);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 1, 4'h9);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 0, 4'h0);
            ex(1'b0, 4'h0, 2'd0, 0, 0, 0, 4'h0);
            // ... and with run_busy = 1 the adder preview, PE2 = 0xBBBBBB.
            run_busy = 1'b1;
            align_phase(1'b1);
            ex(1'b1, DADD, 2'd2, 0, 1, 1, 4'hB);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 0, 4'h0);
            ex(1'b0, 4'h0, 2'd0, 1, 1, 1, 4'hB);
            for (int i = 0; i < N9; i++)
                ex(1'b0, 4'h0, 2'd0, 1, 1, i % 2 == 1, 4'hB);
            ex(1'b0, 4'h0, 2'd0, 0, 0, 0, 4'h0);
            run_busy = 1'b0;
        end
    endtask

    // A freeze window pauses with the chip: hold edges neither advance nor
    // shorten it, and a start that is sampled on a hold edge does not capture.
    task automatic directed_enable_hold;
        begin
            label = "enable hold";
            reset_dut();
            status = 8'h6C;
            // Start (phase 0), then hold for 5 edges, then continue.
            ex(1'b1, DFLAGS, 2'd0, 0, 1, 0, 4'h0);
            for (int i = 0; i < 5; i++) begin
                @(negedge clk);
                en = 1'b0;
                start = 1'b0;
                #1;
                eq("hold: open stays", open, 1);
                @(posedge clk);
                #1;
            end
            en = 1'b1;
            ex(1'b0, 4'h0, 2'd0, 1, 1, 1, 4'hC);        // k+1 (phase 1)
            ex(1'b0, 4'h0, 2'd0, 1, 1, 0, 4'h0);
            // Holds between the nibbles too.
            @(negedge clk); en = 1'b0; #1; @(posedge clk); #1;
            @(negedge clk); en = 1'b0; #1; @(posedge clk); #1;
            @(negedge clk); en = 1'b0; #1; @(posedge clk); #1;
            en = 1'b1;
            ex(1'b0, 4'h0, 2'd0, 1, 1, 1, 4'h6);        // k+3
            ex(1'b0, 4'h0, 2'd0, 0, 0, 0, 4'h0);
            // A start on a hold edge is not executed, and not remembered.
            @(negedge clk);
            start = 1'b1; op = DBUF; en = 1'b0;
            #1;
            @(posedge clk);
            #1;
            @(negedge clk);
            start = 1'b0; en = 1'b1;
            #1;
            eq("start on hold: no window", open, 0);
            eq("start on hold: no ofz", ofz, 0);
            @(posedge clk);
            #1;
        end
    endtask

    // Reset in the middle of a 24-bit read ends it at once and leaves no
    // stale nibbles for the next one.
    task automatic directed_reset_mid_window;
        begin
            label = "reset in window";
            for (int ph = 0; ph < N2; ph++) begin
                for (int cut = 1; cut < N6 + N6; cut++) begin
                    reset_dut();
                    align_phase(ph[0]);
                    psum_all = 96'hFFFFFF_FFFFFF_FFFFFF_FFFFFF;
                    ex(1'b1, DPSUM, 2'd0, 0, 1, ph[0], 4'hF);
                    for (int i = 1; i < cut; i++)
                        ex(1'b0, 4'h0, 2'd0, 1, 1, (i + ph) % 2 == 1, 4'hF);
                    reset_dut();
                    eq("window closed by reset", open, 0);
                    // A fresh read right after reset is not polluted by the old one.
                    host_read(DPSUM, 2'd0, ph[0], 1'b0, 2);
                end
            end
        end
    endtask

    // ------------------------------------------------------------------
    // Random traffic
    // ------------------------------------------------------------------
    task automatic random_traffic(input integer n);
        logic       s;
        integer     r;
        begin
            label = "random";
            reset_dut();
            for (int i = 0; i < n; i++) begin
                @(negedge clk);
                scramble();
                r = $urandom_range(0, 99);
                // Start as soon as the window allows, most of the time.
                s = !model_open() && (r < 60);
                start = s;
                op = s ? 4'($urandom_range(6, 11)) : 4'($urandom_range(0, 15));
                pe = 2'($urandom());
                en = ($urandom_range(0, 7) != 0);
                #1;
                if ($urandom_range(0, 1499) == 0) begin
                    reset_dut();
                end else begin
                    @(posedge clk);
                    #1;
                end
            end
        end
    endtask

    task automatic check_coverage;
        begin
            for (int o = 6; o < 12; o++)
                for (int p = 0; p < 2; p++)
                    if (cov_start[o][p] == 0) $fatal(1, "coverage: op %0d never started on phase %0d", o, p);
            for (int p = 0; p < 4; p++)
                if (cov_pe[p] == 0) $fatal(1, "coverage: PE %0d never read", p);
            if (cov_add_rb[0] == 0 || cov_add_rb[1] == 0)
                $fatal(1, "coverage: DEBUG_ADD with both run_busy values");
            if (cov_b2b8 == 0 || cov_b2b24 == 0)
                $fatal(1, "coverage: back-to-back reads at the first legal tick (%0d, %0d)", cov_b2b8, cov_b2b24);
            if (cov_hold_in_win == 0 || cov_start_on_hold == 0 || cov_reset_in_win == 0)
                $fatal(1, "coverage: hold/reset inside windows (%0d %0d %0d)",
                       cov_hold_in_win, cov_start_on_hold, cov_reset_in_win);
            for (int j = 0; j < 6; j++)
                if (cov_nib[j] == 0) $fatal(1, "coverage: nibble %0d never shown", j);
        end
    endtask

    integer seed;

    initial begin
        if ($test$plusargs("WAVES")) begin
            $dumpfile("polite_dbg_tb.vcd");
            $dumpvars(0, polite_dbg_tb);
        end
        if ($value$plusargs("SEED=%d", seed))
            void'($urandom(seed));
        for (int o = 0; o < 16; o++) begin
            cov_start[o][0] = 0;
            cov_start[o][1] = 0;
        end
        for (int i = 0; i < 4; i++) cov_pe[i] = 0;
        cov_add_rb[0] = 0;
        cov_add_rb[1] = 0;
        for (int j = 0; j < 6; j++) cov_nib[j] = 0;

        directed_reset_state();
        directed_8bit_timing();
        directed_24bit_timing();
        directed_literal_values();
        directed_capture_values();
        directed_enable_hold();
        directed_reset_mid_window();
        // Host-style reads under random enable holds, every opcode and phase.
        label = "reads with holds";
        reset_dut();
        for (int i = 0; i < N60; i++)
            for (int o = 6; o < 12; o++)
                host_read(4'(o), 2'($urandom()), 1'($urandom()), 1'b1, 2);
        random_traffic(30000);
        check_coverage();
        $display("PASS: polite_dbg verification completed with %0d checks", checks);
        $finish;
    end

endmodule

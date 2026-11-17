`timescale 1ns/1ps
// =============================================================================
// POLITE Mini top-level testbench (tt_um_polite_mini)
//
// Plain SystemVerilog (no UVM library). Names and layout follow UVM roles:
//
//   tb_top      : DUT, clock                         (uvm "top" module)
//   cfg_*       : plusarg configuration               (uvm_config_db)
//   driver_*    : drives one item per core tick       (uvm_driver)
//   monitor_*   : samples uo_out into mon_q           (uvm_monitor)
//   predictor_* : cycle-level model of SPEC.pdf       (reference model)
//   exp_model_* : software host arithmetic            (expected values)
//   sb_*        : compare / decode / check            (uvm_scoreboard)
//   seq_*       : reusable stimulus snippets          (uvm_sequence)
//   *_test      : one task per testplan entry         (uvm_test)
//   *_phase     : build / reset / run / report        (uvm phases)
//
// Plusargs:
//   +TEST=<name>   test from verification_plan/polite_mini_testplan.hjson
//   +NUM=<n>       random items for polite_random (default 20000)
//   +nowaves       no VCD
//   +dumpfile=<f>  VCD path
//
// Checking, on every core tick:
//   1. scoreboard compare : uo_out == predictor (pad pipeline, enable, core,
//                           output buffer, debug unit)
//   2. sb_check_*         : dumps / debug reads decoded at the pins and compared
//                           with the expected-value model (independent of the
//                           predictor)
//   3. SVA                : polite_top_sva.sv, bound to tt_um_polite_mini
// Passing runs end with "-> PASS".
// =============================================================================
module tb_polite_mini;
    timeunit 1ns; timeprecision 1ps;

    // =========================================================================
    // TOP: DUT + clock
    // =========================================================================
    logic       clk, rst_n, ena;
    logic [7:0] ui_in, uio_in;
    wire  [7:0] uo_out, uio_out, uio_oe;

    tt_um_polite_mini dut (
        .ui_in(ui_in), .uo_out(uo_out), .uio_in(uio_in), .uio_out(uio_out),
        .uio_oe(uio_oe), .ena(ena), .clk(clk), .rst_n(rst_n)
    );

    // 66 MHz core clock
    initial clk = 1'b0;
    always #7.576 clk = ~clk;

    // =========================================================================
    // CONFIG (uvm_config_db equivalent)
    // =========================================================================
    string cfg_test_name;
    int    cfg_num_items = 20000;
    string cfg_dumpfile;

    // Monitor analysis queue: uo_out values, one per output-tick update.
    // Declared here because the driver's reset clears it.
    logic [7:0] mon_q [$];

    // =========================================================================
    // REPORT (uvm_report_server equivalent)
    // =========================================================================
    int     error_count = 0;
    int     check_count = 0;
    longint edge_n      = 0;

    `define CHECK(cond, msg) \
        begin check_count++; \
            if (!(cond)) begin error_count++; \
                $error("[%0t] edge %0d: %s", $time, edge_n, msg); end \
        end

    // =========================================================================
    // UTILITIES (shared by predictor and expected-value model)
    // =========================================================================
    function automatic logic signed [3:0] lane(input logic [7:0] b, input bit hi);
        return hi ? b[7:4] : b[3:0];
    endfunction

    function automatic bit pe_row2(input int g); return g < 2;      endfunction
    function automatic bit pe_col2(input int g); return (g % 2) == 0; endfunction

    function automatic int sext24(input int x);
        return (x & 32'h0080_0000) ? (x | 32'hFF00_0000) : (x & 32'h00FF_FFFF);
    endfunction

    // =========================================================================
    // DRIVER (uvm_driver equivalent)
    // One call = one sequence item = one core tick: drive on negedge, then
    // wait for the sampling posedge.
    // =========================================================================
    task automatic driver_drive_item(input logic [7:0] ins, input logic [7:0] d = 8'h00,
                                     input logic e = 1'b1);
        @(negedge clk);
        uio_in = ins; ui_in = d; ena = e;
        @(posedge clk);
        #2;
    endtask

    task automatic driver_reset();
        @(negedge clk);
        rst_n = 1'b0; ena = 1'b1; ui_in = 8'h00; uio_in = 8'h00;
        repeat (2) @(posedge clk);
        @(negedge clk);
        rst_n = 1'b1;
        exp_model_reset();
        mon_q.delete();
        #1;
        `CHECK(uo_out == 8'h00, "uo_out not 0 after reset")
    endtask

    // =========================================================================
    // PREDICTOR (reference model)
    // Cycle-level model of SPEC.pdf, state named after the spec terms.
    // =========================================================================
    // Pad pipeline (Spec 2)
    logic       m_ena_q;
    logic [7:0] m_in_d, m_in_i, m_uo_q, m_uo_pad;
    logic       m_otick;
    logic       m_pad_loaded;      // uo_out took a new value on this edge
    logic       m_exec_phase;      // output-tick phase of the last executed tick
    // Core
    logic       m_phase, m_rb;
    logic [7:0] m_inbuf;
    logic       m_ill, m_ovf;
    logic [23:0] m_psum [4];       // PE index = dump order 0=(2,2) 1=(2,1) 2=(1,2) 3=(1,1)
    logic [7:0]  m_mul  [4];
    // Output buffer
    logic        m_busy;
    int          m_idx;
    logic [23:0] m_word [4];
    // Debug unit
    int          m_fz_left, m_fz_k;
    logic [23:0] m_fz_val;

    task automatic predictor_reset();
        m_ena_q = 1'b1; m_in_d = 8'h00; m_in_i = 8'h00;
        m_uo_q = 8'h00; m_uo_pad = 8'h00; m_otick = 1'b0;
        m_pad_loaded = 1'b0; m_exec_phase = 1'b0;
        m_phase = 1'b0; m_rb = 1'b0; m_inbuf = 8'h00; m_ill = 1'b0; m_ovf = 1'b0;
        for (int g = 0; g < 4; g++) begin
            m_psum[g] = '0; m_mul[g] = '0; m_word[g] = '0;
        end
        m_busy = 1'b0; m_idx = 0;
        m_fz_left = 0; m_fz_k = 0; m_fz_val = '0;
    endtask

    // One executed core tick (Spec 3-6). d / ins = pad-registered ui_in / uio_in.
    function automatic logic [7:0] predictor_core_step(input logic [7:0] d, input logic [7:0] ins);
        logic [3:0]  op = ins[7:4];
        logic [3:0]  a  = ins[3:0];
        logic        fz_open = (m_fz_left != 0);
        logic        db = m_busy, rb = m_rb, ph = m_phase;
        logic [23:0] sum [4];
        logic [23:0] cap [4];
        logic        any_ovf = 1'b0;
        logic        is_dbg, bad_bank, dbg_req, clr_coll, clr_ok, clr_flg;
        logic        run_now, clr_psum, clr_ob, dload, dabort, dbg_start, ill_set;
        logic        acc_ovf, ill_d, ovf_d, ofz, dbg_tick, wide, step;
        logic [7:0]  status;
        logic [23:0] v, val_e;
        int          left_e, k_e, pe, kk;
        logic [3:0]  dbg_nib, dump_nib;

        for (int g = 0; g < 4; g++) begin
            logic [24:0] full = {m_psum[g][23], m_psum[g]} + {{17{m_mul[g][7]}}, m_mul[g]};
            sum[g] = full[23:0];
            if (full[24] ^ full[23]) any_ovf = 1'b1;
        end

        is_dbg    = (op >= 4'h6) && (op <= 4'hB);
        bad_bank  = (op == 4'h6) && (a != 4'h0);
        dbg_req   = is_dbg && !bad_bank;
        clr_coll  = (a[3] && rb) || (a[2] && db);
        clr_ok    = (op == 4'h5) && !clr_coll;
        clr_flg   = clr_ok && a[0];
        run_now   = (op == 4'h2) && !fz_open;
        clr_psum  = clr_ok && a[3];
        clr_ob    = clr_ok && a[2];
        dload     = (op == 4'h3) && !db;
        dabort    = (op == 4'h4);
        dbg_start = dbg_req && !fz_open;
        ill_set   = ((op == 4'h2) && fz_open) || ((op == 4'h3) && db) ||
                    ((op == 4'h5) && clr_coll) || bad_bank ||
                    (dbg_req && fz_open) || (op > 4'hB);
        acc_ovf   = rb && any_ovf;
        ill_d     = ill_set || (m_ill && !clr_flg);
        ovf_d     = acc_ovf || (m_ovf && !clr_flg);
        status    = {1'b1, db, m_ill, m_ovf || acc_ovf, db, ph, db, rb};   // Table 7

        pe = a[1:0];
        case (op)
            4'h6:    v = {16'h0, status};
            4'h7:    v = {16'h0, m_inbuf};
            4'h8:    v = m_psum[pe];
            4'h9:    v = {16'h0, m_mul[pe]};
            4'hA:    v = rb ? sum[pe] : m_psum[pe];
            default: v = {16'h0, d};
        endcase
        wide     = (op == 4'h8) || (op == 4'hA);
        ofz      = dbg_start || fz_open;
        left_e   = dbg_start ? (wide ? 12 : 4) : m_fz_left;
        k_e      = dbg_start ? 0 : m_fz_k;
        val_e    = dbg_start ? v : m_fz_val;
        dbg_tick = ofz && ph;
        kk       = (k_e > 5) ? 5 : k_e;
        dbg_nib  = val_e[4*kk +: 4];

        dump_nib = db ? m_word[m_idx / 6][4*(m_idx % 6) +: 4] : 4'h0;
        step     = db && ph && !ofz;

        predictor_core_step = {dbg_tick, dbg_tick ? 1'b0 : db, ill_d, ovf_d,
                               dbg_tick ? dbg_nib : dump_nib};

        // ---- state update (all from the start-of-tick values above)
        for (int g = 0; g < 4; g++) cap[g] = rb ? sum[g] : m_psum[g];
        for (int g = 0; g < 4; g++) begin
            if (rb)            m_psum[g] = sum[g];
            else if (clr_psum) m_psum[g] = '0;
            if (run_now)
                m_mul[g] = 8'(lane(m_inbuf, pe_row2(g)) * lane(d, pe_col2(g)));
        end
        if (dload) begin
            for (int g = 0; g < 4; g++) m_word[g] = cap[g];
            m_idx = 0; m_busy = 1'b1;
        end else begin
            if (clr_ob) for (int g = 0; g < 4; g++) m_word[g] = '0;
            if ((step && m_idx == 23) || dabort) m_busy = 1'b0;
            if (step) m_idx = m_idx + 1;
        end
        m_fz_val = val_e;
        m_fz_k   = k_e + ((ofz && ph) ? 1 : 0);
        if (ofz) m_fz_left = left_e - 1;

        m_inbuf = (op == 4'h1) ? d : ((clr_ok && a[1]) ? 8'h00 : m_inbuf);
        m_phase = ~ph;
        m_rb    = run_now;
        m_ill   = ill_d;
        m_ovf   = ovf_d;
    endfunction

    // One rising edge at the pins (Spec 2: pad pipeline + enable)
    task automatic predictor_write(input logic e, input logic [7:0] ui, input logic [7:0] uio);
        logic [7:0] cu;
        logic       ph;
        m_pad_loaded = 1'b0;
        if (m_ena_q) begin
            ph = m_phase;
            m_exec_phase = ph;
            cu = predictor_core_step(m_in_d, m_in_i);
            if (m_otick) begin m_uo_pad = m_uo_q; m_pad_loaded = 1'b1; end
            m_uo_q  = cu;
            m_otick = ph;
            m_in_d  = ui;
            m_in_i  = uio;
        end
        m_ena_q = e;
    endtask

    // Predictor runs on every rising edge from the pin values.
    always @(posedge clk) begin : predictor_run
        if (!rst_n) predictor_reset();
        else        predictor_write(ena, ui_in, uio_in);
        edge_n++;
    end

    // =========================================================================
    // MONITOR + SCOREBOARD COMPARE (uvm_monitor -> uvm_scoreboard)
    // 1 ns after each edge: compare uo_out with the predictor, and collect
    // every new uo_out value (one per output-tick update) into mon_q.
    // =========================================================================
    function automatic void sb_compare_pins();
        check_count++;
        if (uo_out !== m_uo_pad) begin
            error_count++;
            $error("[%0t] edge %0d: uo_out mismatch got %02h exp %02h", $time, edge_n, uo_out, m_uo_pad);
        end
    endfunction

    function automatic void monitor_collect();
        if (m_pad_loaded) mon_q.push_back(uo_out);
    endfunction

    always @(posedge clk) begin : monitor_run
        #1;
        if (rst_n) begin
            sb_compare_pins();
            monitor_collect();
        end
    end

    // =========================================================================
    // EXPECTED-VALUE MODEL (software host, independent of the predictor)
    // =========================================================================
    int         exp_psum [4];
    int         exp_mul  [4];
    logic [7:0] exp_buf;
    int         dump_snapshot [4];

    function automatic void exp_model_reset();
        for (int g = 0; g < 4; g++) begin exp_psum[g] = 0; exp_mul[g] = 0; end
        exp_buf = 8'h00;
    endfunction

    function automatic void exp_model_run(input logic [7:0] bus);
        for (int g = 0; g < 4; g++) begin
            exp_mul[g]  = int'(lane(exp_buf, pe_row2(g))) * int'(lane(bus, pe_col2(g)));
            exp_psum[g] = sext24(exp_psum[g] + exp_mul[g]);
        end
    endfunction

    // =========================================================================
    // SEQUENCES (uvm_sequence equivalent): stimulus + expected-model update
    // =========================================================================
    task automatic seq_nop(input int n = 1);
        repeat (n) driver_drive_item(8'h00);
    endtask

    // Hold: ena low for n edges (first edge still samples a NOP, Spec 2),
    // garbage RUNs on hold edges, plus the rising edge (still a hold).
    task automatic seq_hold(input int n);
        driver_drive_item(8'h00, 8'h00, 1'b0);
        repeat (n - 1) driver_drive_item(8'h2F, 8'h77, 1'b0);
        driver_drive_item(8'h2F, 8'h77, 1'b1);
    endtask

    task automatic seq_load(input logic [7:0] b); driver_drive_item(8'h10, b); exp_buf = b; endtask
    task automatic seq_run (input logic [7:0] b); driver_drive_item(8'h20, b); exp_model_run(b); endtask

    task automatic seq_clear(input logic [3:0] mask);  // caller guarantees no conflict
        driver_drive_item({4'h5, mask});
        if (mask[3]) for (int g = 0; g < 4; g++) exp_psum[g] = 0;
        if (mask[1]) exp_buf = 8'h00;
    endtask

    task automatic seq_clear_flags(); driver_drive_item(8'h51); seq_nop(4); endtask

    // ---- dump: frame on bit 6, skip debug ticks (Spec 5.2, 6.3)
    task automatic seq_dump_start();
        for (int g = 0; g < 4; g++) dump_snapshot[g] = exp_psum[g];
        mon_q.delete();
        driver_drive_item(8'h30);
    endtask

    task automatic seq_dump_wait();
        seq_nop(2);                      // DUMP_LOAD sampled on edge k, executes on k+1
        while (m_busy) seq_nop();
        seq_nop(4);
    endtask

    // ---- debug read: frame on bit 7 (Spec 5.6); returns the decoded value
    task automatic seq_debug_read(input logic [3:0] op, input logic [3:0] arg,
                                  input logic [7:0] d, output int value);
        int n = 0, need = (op == 4'h8 || op == 4'hA) ? 6 : 2;
        value = 0;
        mon_q.delete();
        driver_drive_item({op, arg}, d);
        seq_nop(16);
        foreach (mon_q[i])
            if (mon_q[i][7]) begin
                `CHECK(!mon_q[i][6], "bit 6 set on a debug nibble")
                if (n < 6) value |= int'(mon_q[i][3:0]) << (4 * n);
                n++;
            end
        `CHECK(n == need, $sformatf("debug op %0h: %0d nibbles exp %0d", op, n, need))
        if (need == 6) value = sext24(value);
        else if (op == 4'h9) value = int'($signed(value[7:0]));
    endtask

    // =========================================================================
    // SCOREBOARD CHECKS (decode at the pins, compare with expected model)
    // =========================================================================
    // live flag pins after the pad latency
    task automatic sb_check_flags(input bit ill, input bit ovf, input string what);
        seq_nop(4);
        `CHECK(uo_out[5] == ill, $sformatf("%s: illegal pin %0b exp %0b", what, uo_out[5], ill))
        `CHECK(uo_out[4] == ovf, $sformatf("%s: overflow pin %0b exp %0b", what, uo_out[4], ovf))
    endtask

    task automatic sb_check_dump(input int exp [4], input string what);
        int n = 0;
        int got [4] = '{0, 0, 0, 0};
        seq_dump_wait();
        foreach (mon_q[i])
            if (mon_q[i][6] && !mon_q[i][7]) begin
                if (n < 24) got[n / 6] |= int'(mon_q[i][3:0]) << (4 * (n % 6));
                n++;
            end
        `CHECK(n == 24, $sformatf("%s: %0d dump nibbles, exp 24", what, n))
        for (int g = 0; g < 4; g++)
            `CHECK(sext24(got[g]) == exp[g],
                   $sformatf("%s: PE%0d dumped %0d exp %0d", what, g, sext24(got[g]), exp[g]))
    endtask

    task automatic sb_dump_and_check(input string what);
        seq_dump_start();
        sb_check_dump(dump_snapshot, what);
    endtask

    // =========================================================================
    // TESTS (uvm_test equivalent): one task per testplan entry
    // =========================================================================
    task automatic polite_smoke_test();
        seq_load(8'h21); seq_run(8'h43); seq_nop();
        sb_dump_and_check("smoke");
        sb_check_flags(0, 0, "smoke");
        `CHECK(uo_out[3:0] == 4'h0 && !uo_out[7] && !uo_out[6], "idle output not 0")
    endtask

    task automatic polite_reset_test();
        int v;
        seq_debug_read(4'h6, 4'h0, 8'h00, v);
        `CHECK((v & 8'hFB) == 8'h80, $sformatf("DEBUG_FLAGS after reset %02h", v))
        seq_load(8'h55); seq_run(8'h33); seq_nop();
        driver_drive_item(8'h30); seq_nop(10);       // reset mid-dump
        driver_reset();
        seq_nop(4);
        `CHECK(uo_out == 8'h00, "not idle after reset mid-dump")
        driver_drive_item(8'h80); seq_nop(3);        // reset mid-freeze
        driver_reset();
        seq_debug_read(4'h7, 4'h0, 8'h00, v);
        `CHECK(v == 0, "input buffer not cleared by reset")
        sb_dump_and_check("dump after reset");
    endtask

    task automatic polite_pad_latency_test();
        for (int i = 0; i < 4; i++) begin
            int lat = 0;
            bit ph;
            mon_q.delete();
            seq_nop(i % 2);
            driver_drive_item(8'h70);                // DEBUG_BUFFER sampled on edge k
            seq_nop(); lat = 1; ph = m_exec_phase;   // edge k+1 executes it
            while (!uo_out[7] && lat < 8) begin seq_nop(); lat++; end
            `CHECK(lat == (ph ? 2 : 3), $sformatf("latency %0d, exec phase %0b", lat, ph))
            seq_nop(8);
        end
    endtask

    task automatic polite_ena_hold_test();
        int v;
        seq_hold(3);                                 // idle hold
        seq_load(8'h3D);
        seq_run(8'h12); seq_hold(4);                 // hold with phase 2 pending
        seq_run(8'hF1); seq_run(8'h7E); seq_hold(1); seq_run(8'h88); seq_nop();
        seq_dump_start(); seq_nop(9); seq_hold(5);   // hold mid-dump
        sb_check_dump(dump_snapshot, "dump with hold");
        mon_q.delete();
        driver_drive_item(8'h80); seq_nop(2); seq_hold(3); seq_nop(14);   // hold mid-freeze
        v = 0;
        begin
            int n = 0;
            foreach (mon_q[i]) if (mon_q[i][7]) begin
                v |= int'(mon_q[i][3:0]) << (4 * n); n++;
            end
            `CHECK(n == 6, $sformatf("freeze with hold: %0d nibbles", n))
            `CHECK(sext24(v) == exp_psum[0], "freeze with hold: wrong value")
        end
        sb_check_flags(0, 0, "ena_hold");
    endtask

    task automatic polite_mac_pipeline_test();
        int v;
        for (int x = 0; x < 16; x++) begin
            seq_load({4'(x), 4'(x ^ 5)});
            for (int y = 0; y < 16; y++) seq_run({4'(y), 4'(y ^ 3)});   // back-to-back
            seq_nop();
            sb_dump_and_check($sformatf("mac x=%0d", x));
            seq_debug_read(4'h9, 4'h0, 8'h00, v);
            `CHECK(v == exp_mul[0], "DEBUG_MULTIPLY after stream")
            seq_clear(4'h8); seq_nop();
        end
        seq_load(8'h12); seq_run(8'h34); seq_load(8'h56); seq_run(8'h78); seq_nop();   // LOAD right after RUN
        sb_dump_and_check("load after run");
        sb_check_flags(0, 0, "mac_pipeline");
    endtask

    task automatic polite_overflow_test();
        seq_load(8'h77);
        repeat (171200) seq_run(8'h77);              // +49 per RUN, wraps past +2^23
        seq_nop();
        sb_dump_and_check("positive wrap");
        sb_check_flags(0, 1, "positive wrap");
        seq_clear(4'h9); seq_nop(2);
        sb_check_flags(0, 0, "flags cleared");
        seq_load(8'h88);
        repeat (149800) seq_run(8'h77);              // -56 per RUN, wraps past -2^23
        seq_nop();
        sb_dump_and_check("negative wrap");
        sb_check_flags(0, 1, "negative wrap");
        seq_clear(4'h9); seq_nop(2);
        seq_load(8'h77);
        repeat (171196) seq_run(8'h77);              // one RUN below the wrap
        seq_nop(); seq_clear_flags();
        seq_run(8'h77); driver_drive_item(8'h51);    // overflowing phase 2 + CLEAR flags
        sb_check_flags(0, 1, "same-tick overflow survives CLEAR");
    endtask

    task automatic polite_dump_test();
        seq_load(8'hA7); seq_run(8'h5C); seq_run(8'h93); seq_nop();
        sb_dump_and_check("dump phase A");
        seq_nop();
        sb_dump_and_check("dump phase B");
        seq_run(8'h44);
        sb_dump_and_check("DUMP_LOAD on tick after RUN");   // captures that RUN
        seq_dump_start();
        seq_run(8'h11); seq_run(8'h22); seq_nop(); seq_clear(4'h8);   // work during the stream
        sb_check_dump(dump_snapshot, "runs during stream");
        sb_check_flags(0, 0, "dump");
    endtask

    task automatic polite_dump_abort_test();
        seq_run(8'h21); seq_nop();
        seq_dump_start(); seq_nop(6);
        driver_drive_item(8'h30);                    // DUMP_LOAD while busy
        sb_check_dump(dump_snapshot, "refused DUMP_LOAD");
        sb_check_flags(1, 0, "DUMP_LOAD while busy");
        seq_clear_flags();
        driver_drive_item(8'h30); seq_nop(8); driver_drive_item(8'h40); seq_nop(2);   // abort mid-stream
        `CHECK(!m_busy, "dump still busy after ABORT")
        driver_drive_item(8'h40);                    // abort with no dump
        sb_check_flags(0, 0, "DUMP_ABORT idle");
        sb_dump_and_check("dump after abort");
    endtask

    task automatic polite_clear_test();
        int v;
        for (int m = 0; m < 16; m++) begin
            seq_load(8'h6B); seq_run(8'hD4); seq_nop();
            driver_drive_item(8'hC0); seq_nop();     // set illegal
            seq_dump_start(); seq_dump_wait();       // fill output buffer
            seq_clear(4'(m)); seq_nop(2);
            seq_debug_read(4'h7, 4'h0, 8'h00, v);
            `CHECK(v == int'(exp_buf), $sformatf("clear %h: buffer %02h", m, v))
            seq_debug_read(4'h8, 4'h3, 8'h00, v);
            `CHECK(v == exp_psum[3], $sformatf("clear %h: psum %0d", m, v))
            sb_check_flags(!m[0], 0, $sformatf("clear %h flags", m));
            seq_clear(4'hF); seq_nop(2);
        end
        seq_run(8'h55); driver_drive_item(8'h58);    // bit 3 on the tick after RUN
        sb_check_flags(1, 0, "CLEAR psum conflict");
        seq_nop(); sb_dump_and_check("psum kept after conflict");
        seq_clear_flags();
        seq_dump_start(); seq_nop(4); driver_drive_item(8'h55);   // bit 2 during dump (+bit 0)
        sb_check_dump(dump_snapshot, "dump kept after conflict");
        sb_check_flags(1, 0, "CLEAR outbuf conflict");
        seq_clear_flags();
    endtask

    task automatic polite_debug_reads_test();
        int v;
        seq_load(8'h9E); seq_run(8'h3B); seq_run(8'hC5); seq_nop();
        for (int ph = 0; ph < 2; ph++) begin
            seq_nop(ph);
            seq_debug_read(4'h6, 4'h0, 8'h00, v);
            `CHECK((v & 8'hFB) == 8'h80, $sformatf("DEBUG_FLAGS %02h", v))
            seq_debug_read(4'h7, 4'h0, 8'h00, v);
            `CHECK(v == int'(exp_buf), "DEBUG_BUFFER")
            seq_debug_read(4'hB, 4'h0, 8'h5C, v);
            `CHECK(v == 8'h5C, "DEBUG_INPUT")
            for (int pe = 0; pe < 4; pe++) begin
                seq_debug_read(4'h8, 4'(pe), 8'h00, v);
                `CHECK(v == exp_psum[pe], $sformatf("DEBUG_PARTIAL_SUM PE%0d", pe))
                seq_debug_read(4'hA, 4'(pe), 8'h00, v);
                `CHECK(v == exp_psum[pe], $sformatf("DEBUG_ADD idle PE%0d", pe))
                seq_debug_read(4'h9, 4'(pe), 8'h00, v);
                `CHECK(v == exp_mul[pe], $sformatf("DEBUG_MULTIPLY PE%0d", pe))
            end
        end
        sb_check_flags(0, 0, "debug_reads");
    endtask

    task automatic polite_debug_pipeline_test();
        int v, pre;
        seq_load(8'h7A);
        for (int pe = 0; pe < 4; pe++) begin
            pre = exp_psum[pe];
            seq_run(8'h5D); seq_debug_read(4'h8, 4'(pe), 8'h00, v);
            `CHECK(v == pre, $sformatf("PARTIAL_SUM pre-add PE%0d", pe))
            seq_run(8'hB3); seq_debug_read(4'hA, 4'(pe), 8'h00, v);
            `CHECK(v == exp_psum[pe], $sformatf("ADD post-add PE%0d", pe))
            seq_run(8'h2E); seq_debug_read(4'h9, 4'(pe), 8'h00, v);
            `CHECK(v == exp_mul[pe], $sformatf("MULTIPLY in flight PE%0d", pe))
            seq_run(8'h61); seq_debug_read(4'h6, 4'h0, 8'h00, v);
            `CHECK(v[0] == 1'b1, "FLAGS run busy")
        end
        sb_check_flags(0, 0, "debug_pipeline");
    endtask

    task automatic polite_freeze_window_test();
        seq_load(8'h35);
        for (int w = 0; w < 2; w++) begin            // 24-bit, then 8-bit read
            int last = w ? 4 : 12;
            for (int j = 1; j <= last; j++) begin
                driver_drive_item(w ? 8'h70 : 8'h80);   // freezing read on edge k
                if (j > 1) seq_nop(j - 1);
                driver_drive_item(8'h20, 8'h4B);     // RUN on edge k+j
                if (j == last) exp_model_run(8'h4B);
                seq_nop(16);
                sb_check_flags(j < last, 0, $sformatf("RUN at +%0d", j));
                seq_clear_flags();
            end
        end
        driver_drive_item(8'h80); seq_nop(2); driver_drive_item(8'h70);   // second read inside window
        sb_check_flags(1, 0, "second freezing read");
        seq_nop(14); seq_clear_flags();
        mon_q.delete();
        driver_drive_item(8'h61); seq_nop(8);        // bad bank, idle
        foreach (mon_q[i]) `CHECK(!mon_q[i][7], "bad bank froze")
        sb_check_flags(1, 0, "bad bank");
        seq_clear_flags();
        driver_drive_item(8'h80); seq_load(8'h22); seq_clear(4'h8); seq_nop(14);   // LOAD / CLEAR legal in window
        sb_check_flags(0, 0, "LOAD/CLEAR in window");
        sb_dump_and_check("after window");
    endtask

    task automatic polite_debug_during_dump_test();
        int v, n = 0;
        seq_load(8'hE2); seq_run(8'h7C); seq_run(8'h19); seq_nop();
        seq_dump_start(); seq_nop(7);
        driver_drive_item(8'h80); seq_nop(15);       // 24-bit read pauses the dump
        driver_drive_item(8'h61); seq_nop(3);        // bad bank: no pause (was 8'h71 = legal DEBUG_BUFFER read)
        driver_drive_item(8'h70); seq_nop(5);        // 8-bit read
        sb_check_dump(dump_snapshot, "dump with debug reads");
        foreach (mon_q[i]) if (mon_q[i][7]) n++;
        `CHECK(n == 8, $sformatf("%0d debug nibbles during dump, exp 8", n))
        sb_check_flags(1, 0, "bad bank during dump");
        seq_clear_flags();
        seq_dump_start(); seq_nop(3);
        seq_debug_read(4'h6, 4'h0, 8'h00, v);
        `CHECK(v[6] && v[3] && v[1], $sformatf("FLAGS during dump %02h", v))
        seq_dump_wait();
    endtask

    task automatic polite_illegal_ops_test();
        for (int op = 12; op < 16; op++) begin
            driver_drive_item({4'(op), 4'h0});
            sb_check_flags(1, 0, $sformatf("opcode %h", op));
            seq_clear_flags();
        end
        driver_drive_item(8'h1F, 8'h5A); exp_buf = 8'h5A;   // reserved argument bits ignored
        seq_run(8'h27); seq_nop();
        sb_dump_and_check("reserved args");
        sb_check_flags(0, 0, "reserved args");
        seq_nop(6);
        `CHECK(uo_out[3:0] == 4'h0 && !uo_out[7] && !uo_out[6], "idle output")
    endtask

    task automatic polite_random_test(input int n);
        for (int i = 0; i < n; i++) begin
            int r = $urandom_range(0, 99);
            logic [3:0] op;
            if      (r < 25) op = 4'h2;
            else if (r < 35) op = 4'h1;
            else if (r < 45) op = 4'h3;
            else if (r < 50) op = 4'h4;
            else if (r < 58) op = 4'h5;
            else if (r < 75) op = 4'($urandom_range(6, 11));
            else if (r < 78) op = 4'($urandom_range(12, 15));
            else             op = 4'h0;
            driver_drive_item({op, 4'($urandom)}, 8'($urandom), $urandom_range(0, 19) != 0);
        end
        seq_nop(30);
    endtask

    task automatic polite_matmul_test();
        int A [2][8], B [8][2], C [4], prev [4];
        for (int t = 0; t <= 4; t++) begin
            if (t < 4) begin
                for (int k = 0; k < 8; k++) begin
                    for (int i = 0; i < 2; i++) A[i][k] = $urandom_range(0, 15) - 8;
                    for (int j = 0; j < 2; j++) B[k][j] = $urandom_range(0, 15) - 8;
                    seq_load({4'(A[1][k]), 4'(A[0][k])});   // buf[2] high, buf[1] low
                    seq_run ({4'(B[k][1]), 4'(B[k][0])});   // bus[2] high, bus[1] low
                end
            end
            if (t > 0) sb_check_dump(prev, $sformatf("tile %0d", t - 1));
            if (t < 4) begin
                for (int g = 0; g < 4; g++) begin
                    C[g] = 0;
                    for (int k = 0; k < 8; k++)
                        C[g] += A[pe_row2(g)][k] * B[k][pe_col2(g)];
                    prev[g] = C[g];
                end
                seq_dump_start();
                seq_clear(4'h8);                     // next tile while streaming
            end
        end
        sb_check_flags(0, 0, "matmul");
    endtask

    // =========================================================================
    // PHASES (build -> reset -> run -> report)
    // =========================================================================
    function automatic void build_phase();
        if (!$value$plusargs("TEST=%s", cfg_test_name)) cfg_test_name = "polite_smoke";
        void'($value$plusargs("NUM=%d", cfg_num_items));
        if (!$test$plusargs("nowaves")) begin
            if (!$value$plusargs("dumpfile=%s", cfg_dumpfile)) cfg_dumpfile = "wave.vcd";
            $dumpfile(cfg_dumpfile);
            $dumpvars(0, tb_polite_mini);
        end
    endfunction

    task automatic reset_phase();
        rst_n = 1'b0; ena = 1'b1; ui_in = 8'h00; uio_in = 8'h00;
        driver_reset();
    endtask

    task automatic run_phase();
        $display("[%0t] TEST %s", $time, cfg_test_name);
        case (cfg_test_name)
            "polite_smoke":             polite_smoke_test();
            "polite_reset":             polite_reset_test();
            "polite_pad_latency":       polite_pad_latency_test();
            "polite_ena_hold":          polite_ena_hold_test();
            "polite_mac_pipeline":      polite_mac_pipeline_test();
            "polite_overflow":          polite_overflow_test();
            "polite_dump":              polite_dump_test();
            "polite_dump_abort":        polite_dump_abort_test();
            "polite_clear":             polite_clear_test();
            "polite_debug_reads":       polite_debug_reads_test();
            "polite_debug_pipeline":    polite_debug_pipeline_test();
            "polite_freeze_window":     polite_freeze_window_test();
            "polite_debug_during_dump": polite_debug_during_dump_test();
            "polite_illegal_ops":       polite_illegal_ops_test();
            "polite_random":            polite_random_test(cfg_num_items);
            "polite_matmul":            polite_matmul_test();
            default: $fatal(1, "unknown +TEST=%s", cfg_test_name);
        endcase
        seq_nop(10);                                 // drain
    endtask

    function automatic void report_phase();
        $display("------------------------------------------------");
        $display(" %s: %0d checks, %0d errors -> %s", cfg_test_name, check_count, error_count,
                 (error_count == 0) ? "PASS" : "FAIL");
        $display("------------------------------------------------");
    endfunction

    initial begin : tb_main
        build_phase();
        reset_phase();
        run_phase();
        report_phase();
        $finish;
    end
endmodule

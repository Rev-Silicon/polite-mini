`timescale 1ns/1ps
// =============================================================================
// POLITE Mini top-level testbench (tt_um_polite_mini)
//
//   +TEST=<name>   test from verification_plan/polite_mini_testplan.hjson
//   +NUM=<n>       random ticks for polite_random (default 20000)
//   +nowaves       no VCD
//   +dumpfile=<f>  VCD path
//
// Checking, on every core tick:
//   1. pin scoreboard : uo_out == cycle-level model of SPEC.pdf (pad pipeline,
//                       enable, core, output buffer, debug unit)
//   2. host checks    : dumps / debug reads decoded at the pins and compared
//                       with plain software arithmetic (independent of model)
//   3. SVA            : polite_top_sva.sv, bound to tt_um_polite_mini
// Passing runs end with "-> PASS".
// =============================================================================
module tb_polite_mini;
    timeunit 1ns; timeprecision 1ps;

    // ------------------------------------------------------------------ DUT
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

    // --------------------------------------------------------------- report
    int err_count = 0;
    int chk_count = 0;
    longint edge_n = 0;

    `define CHK(cond, msg) \
        begin chk_count++; \
            if (!(cond)) begin err_count++; \
                $error("[%0t] edge %0d: %s", $time, edge_n, msg); end \
        end

    // ================================================================ MODEL
    // Cycle-level model of SPEC.pdf, state named after the spec terms.
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

    function automatic logic signed [3:0] lane(input logic [7:0] b, input bit hi);
        return hi ? b[7:4] : b[3:0];
    endfunction

    function automatic bit pe_row2(input int g); return g < 2;      endfunction
    function automatic bit pe_col2(input int g); return (g % 2) == 0; endfunction

    task automatic model_reset();
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
    function automatic logic [7:0] core_step(input logic [7:0] d, input logic [7:0] ins);
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

        core_step = {dbg_tick, dbg_tick ? 1'b0 : db, ill_d, ovf_d,
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
    task automatic model_edge(input logic e, input logic [7:0] ui, input logic [7:0] uio);
        logic [7:0] cu;
        logic       ph;
        m_pad_loaded = 1'b0;
        if (m_ena_q) begin
            ph = m_phase;
            m_exec_phase = ph;
            cu = core_step(m_in_d, m_in_i);
            if (m_otick) begin m_uo_pad = m_uo_q; m_pad_loaded = 1'b1; end
            m_uo_q  = cu;
            m_otick = ph;
            m_in_d  = ui;
            m_in_i  = uio;
        end
        m_ena_q = e;
    endtask

    // ------------------------------------------------- pin scoreboard
    logic [7:0] obs [$];           // uo_out values, one per output-tick update

    always @(posedge clk) begin
        if (!rst_n) model_reset();
        else        model_edge(ena, ui_in, uio_in);
        edge_n++;
        #1;
        if (rst_n) begin
            chk_count++;
            if (uo_out !== m_uo_pad) begin
                err_count++;
                $error("[%0t] edge %0d: uo_out mismatch got %02h exp %02h", $time, edge_n, uo_out, m_uo_pad);
            end
            if (m_pad_loaded) obs.push_back(uo_out);
        end
    end

    // ============================================================ STIMULUS
    task automatic cyc(input logic [7:0] ins, input logic [7:0] d = 8'h00, input logic e = 1'b1);
        @(negedge clk);
        uio_in = ins; ui_in = d; ena = e;
        @(posedge clk);
        #2;
    endtask

    task automatic nop(input int n = 1);
        repeat (n) cyc(8'h00);
    endtask

    task automatic apply_reset();
        @(negedge clk);
        rst_n = 1'b0; ena = 1'b1; ui_in = 8'h00; uio_in = 8'h00;
        repeat (2) @(posedge clk);
        @(negedge clk);
        rst_n = 1'b1;
        sw_reset();
        obs.delete();
        #1;
        `CHK(uo_out == 8'h00, "uo_out not 0 after reset")
    endtask

    // Hold: ena low for n edges (first edge still samples a NOP, Spec 2),
    // garbage RUNs on hold edges, plus the rising edge (still a hold).
    task automatic hold(input int n);
        cyc(8'h00, 8'h00, 1'b0);
        repeat (n - 1) cyc(8'h2F, 8'h77, 1'b0);
        cyc(8'h2F, 8'h77, 1'b1);
    endtask

    // ===================================================== SOFTWARE HOST
    // Plain arithmetic, independent of the model: what the host expects.
    int         sw_psum [4];
    int         sw_mul  [4];
    logic [7:0] sw_buf;

    function automatic int sext24(input int x);
        return (x & 32'h0080_0000) ? (x | 32'hFF00_0000) : (x & 32'h00FF_FFFF);
    endfunction

    function automatic void sw_reset();
        for (int g = 0; g < 4; g++) begin sw_psum[g] = 0; sw_mul[g] = 0; end
        sw_buf = 8'h00;
    endfunction

    function automatic void sw_run(input logic [7:0] bus);
        for (int g = 0; g < 4; g++) begin
            sw_mul[g]  = int'(lane(sw_buf, pe_row2(g))) * int'(lane(bus, pe_col2(g)));
            sw_psum[g] = sext24(sw_psum[g] + sw_mul[g]);
        end
    endfunction

    task automatic load(input logic [7:0] b);  cyc(8'h10, b); sw_buf = b; endtask
    task automatic run (input logic [7:0] b);  cyc(8'h20, b); sw_run(b); endtask

    task automatic clear(input logic [3:0] mask);      // caller guarantees no conflict
        cyc({4'h5, mask});
        if (mask[3]) for (int g = 0; g < 4; g++) sw_psum[g] = 0;
        if (mask[1]) sw_buf = 8'h00;
    endtask

    task automatic clear_flags(); cyc(8'h51); nop(4); endtask

    // live flag pins after the pad latency
    task automatic expect_flags(input bit ill, input bit ovf, input string what);
        nop(4);
        `CHK(uo_out[5] == ill, $sformatf("%s: illegal pin %0b exp %0b", what, uo_out[5], ill))
        `CHK(uo_out[4] == ovf, $sformatf("%s: overflow pin %0b exp %0b", what, uo_out[4], ovf))
    endtask

    // ---- dump: frame on bit 6, skip debug ticks (Spec 5.2, 6.3)
    int snap [4];

    task automatic dump_start();
        for (int g = 0; g < 4; g++) snap[g] = sw_psum[g];
        obs.delete();
        cyc(8'h30);
    endtask

    task automatic dump_wait();
        nop(2);                          // DUMP_LOAD sampled on edge k, executes on k+1
        while (m_busy) nop();
        nop(4);
    endtask

    task automatic dump_check_vs(input int exp [4], input string what);
        int n = 0;
        int got [4] = '{0, 0, 0, 0};
        dump_wait();
        foreach (obs[i])
            if (obs[i][6] && !obs[i][7]) begin
                if (n < 24) got[n / 6] |= int'(obs[i][3:0]) << (4 * (n % 6));
                n++;
            end
        `CHK(n == 24, $sformatf("%s: %0d dump nibbles, exp 24", what, n))
        for (int g = 0; g < 4; g++)
            `CHK(sext24(got[g]) == exp[g],
                 $sformatf("%s: PE%0d dumped %0d exp %0d", what, g, sext24(got[g]), exp[g]))
    endtask

    task automatic dump_check(input string what);
        dump_start();
        dump_check_vs(snap, what);
    endtask

    // ---- debug read: frame on bit 7 (Spec 5.6)
    task automatic dbg_read(input logic [3:0] op, input logic [3:0] arg,
                            input logic [7:0] d, output int value);
        int n = 0, need = (op == 4'h8 || op == 4'hA) ? 6 : 2;
        value = 0;
        obs.delete();
        cyc({op, arg}, d);
        nop(16);
        foreach (obs[i])
            if (obs[i][7]) begin
                `CHK(!obs[i][6], "bit 6 set on a debug nibble")
                if (n < 6) value |= int'(obs[i][3:0]) << (4 * n);
                n++;
            end
        `CHK(n == need, $sformatf("debug op %0h: %0d nibbles exp %0d", op, n, need))
        if (need == 6) value = sext24(value);
        else if (op == 4'h9) value = int'($signed(value[7:0]));
    endtask

    // ================================================================ TESTS
    task automatic t_smoke();
        load(8'h21); run(8'h43); nop();
        dump_check("smoke");
        expect_flags(0, 0, "smoke");
        `CHK(uo_out[3:0] == 4'h0 && !uo_out[7] && !uo_out[6], "idle output not 0")
    endtask

    task automatic t_reset();
        int v;
        dbg_read(4'h6, 4'h0, 8'h00, v);
        `CHK((v & 8'hFB) == 8'h80, $sformatf("DEBUG_FLAGS after reset %02h", v))
        load(8'h55); run(8'h33); nop();
        cyc(8'h30); nop(10);                         // reset mid-dump
        apply_reset();
        nop(4);
        `CHK(uo_out == 8'h00, "not idle after reset mid-dump")
        cyc(8'h80); nop(3);                          // reset mid-freeze
        apply_reset();
        dbg_read(4'h7, 4'h0, 8'h00, v);
        `CHK(v == 0, "input buffer not cleared by reset")
        dump_check("dump after reset");
    endtask

    task automatic t_pad_latency();
        for (int i = 0; i < 4; i++) begin
            int lat = 0;
            bit ph;
            obs.delete();
            nop(i % 2);
            cyc(8'h70);                              // DEBUG_BUFFER sampled on edge k
            nop(); lat = 1; ph = m_exec_phase;       // edge k+1 executes it
            while (!uo_out[7] && lat < 8) begin nop(); lat++; end
            `CHK(lat == (ph ? 2 : 3), $sformatf("latency %0d, exec phase %0b", lat, ph))
            nop(8);
        end
    endtask

    task automatic t_ena_hold();
        int v;
        hold(3);                                     // idle hold
        load(8'h3D);
        run(8'h12); hold(4);                         // hold with phase 2 pending
        run(8'hF1); run(8'h7E); hold(1); run(8'h88); nop();
        dump_start(); nop(9); hold(5);               // hold mid-dump
        dump_check_vs(snap, "dump with hold");
        obs.delete();
        cyc(8'h80); nop(2); hold(3); nop(14);        // hold mid-freeze
        v = 0;
        begin
            int n = 0;
            foreach (obs[i]) if (obs[i][7]) begin
                v |= int'(obs[i][3:0]) << (4 * n); n++;
            end
            `CHK(n == 6, $sformatf("freeze with hold: %0d nibbles", n))
            `CHK(sext24(v) == sw_psum[0], "freeze with hold: wrong value")
        end
        expect_flags(0, 0, "ena_hold");
    endtask

    task automatic t_mac_pipeline();
        int v;
        for (int x = 0; x < 16; x++) begin
            load({4'(x), 4'(x ^ 5)});
            for (int y = 0; y < 16; y++) run({4'(y), 4'(y ^ 3)});   // back-to-back
            nop();
            dump_check($sformatf("mac x=%0d", x));
            dbg_read(4'h9, 4'h0, 8'h00, v);
            `CHK(v == sw_mul[0], "DEBUG_MULTIPLY after stream")
            clear(4'h8); nop();
        end
        load(8'h12); run(8'h34); load(8'h56); run(8'h78); nop();     // LOAD right after RUN
        dump_check("load after run");
        expect_flags(0, 0, "mac_pipeline");
    endtask

    task automatic t_overflow();
        load(8'h77);
        repeat (171200) run(8'h77);                  // +49 per RUN, wraps past +2^23
        nop();
        dump_check("positive wrap");
        expect_flags(0, 1, "positive wrap");
        clear(4'h9); nop(2);
        expect_flags(0, 0, "flags cleared");
        load(8'h88);
        repeat (149800) run(8'h77);                  // -56 per RUN, wraps past -2^23
        nop();
        dump_check("negative wrap");
        expect_flags(0, 1, "negative wrap");
        clear(4'h9); nop(2);
        load(8'h77);
        repeat (171196) run(8'h77);                  // one RUN below the wrap
        nop(); clear_flags();
        run(8'h77); cyc(8'h51);                      // overflowing phase 2 + CLEAR flags
        expect_flags(0, 1, "same-tick overflow survives CLEAR");
    endtask

    task automatic t_dump();
        load(8'hA7); run(8'h5C); run(8'h93); nop();
        dump_check("dump phase A");
        nop();
        dump_check("dump phase B");
        run(8'h44);
        dump_check("DUMP_LOAD on tick after RUN");   // captures that RUN
        dump_start();
        run(8'h11); run(8'h22); nop(); clear(4'h8);  // work during the stream
        dump_check_vs(snap, "runs during stream");
        expect_flags(0, 0, "dump");
    endtask

    task automatic t_dump_abort();
        run(8'h21); nop();
        dump_start(); nop(6);
        cyc(8'h30);                                  // DUMP_LOAD while busy
        dump_check_vs(snap, "refused DUMP_LOAD");
        expect_flags(1, 0, "DUMP_LOAD while busy");
        clear_flags();
        cyc(8'h30); nop(8); cyc(8'h40); nop(2);      // abort mid-stream
        `CHK(!m_busy, "dump still busy after ABORT")
        cyc(8'h40);                                  // abort with no dump
        expect_flags(0, 0, "DUMP_ABORT idle");
        dump_check("dump after abort");
    endtask

    task automatic t_clear();
        int v;
        for (int m = 0; m < 16; m++) begin
            load(8'h6B); run(8'hD4); nop();
            cyc(8'hC0); nop();                       // set illegal
            dump_start(); dump_wait();               // fill output buffer
            clear(4'(m)); nop(2);
            dbg_read(4'h7, 4'h0, 8'h00, v);
            `CHK(v == int'(sw_buf), $sformatf("clear %h: buffer %02h", m, v))
            dbg_read(4'h8, 4'h3, 8'h00, v);
            `CHK(v == sw_psum[3], $sformatf("clear %h: psum %0d", m, v))
            expect_flags(!m[0], 0, $sformatf("clear %h flags", m));
            clear(4'hF); nop(2);
        end
        run(8'h55); cyc(8'h58);                      // bit 3 on the tick after RUN
        expect_flags(1, 0, "CLEAR psum conflict");
        nop(); dump_check("psum kept after conflict");
        clear_flags();
        dump_start(); nop(4); cyc(8'h55);            // bit 2 during dump (+bit 0)
        dump_check_vs(snap, "dump kept after conflict");
        expect_flags(1, 0, "CLEAR outbuf conflict");
        clear_flags();
    endtask

    task automatic t_debug_reads();
        int v;
        load(8'h9E); run(8'h3B); run(8'hC5); nop();
        for (int ph = 0; ph < 2; ph++) begin
            nop(ph);
            dbg_read(4'h6, 4'h0, 8'h00, v);
            `CHK((v & 8'hFB) == 8'h80, $sformatf("DEBUG_FLAGS %02h", v))
            dbg_read(4'h7, 4'h0, 8'h00, v);
            `CHK(v == int'(sw_buf), "DEBUG_BUFFER")
            dbg_read(4'hB, 4'h0, 8'h5C, v);
            `CHK(v == 8'h5C, "DEBUG_INPUT")
            for (int pe = 0; pe < 4; pe++) begin
                dbg_read(4'h8, 4'(pe), 8'h00, v);
                `CHK(v == sw_psum[pe], $sformatf("DEBUG_PARTIAL_SUM PE%0d", pe))
                dbg_read(4'hA, 4'(pe), 8'h00, v);
                `CHK(v == sw_psum[pe], $sformatf("DEBUG_ADD idle PE%0d", pe))
                dbg_read(4'h9, 4'(pe), 8'h00, v);
                `CHK(v == sw_mul[pe], $sformatf("DEBUG_MULTIPLY PE%0d", pe))
            end
        end
        expect_flags(0, 0, "debug_reads");
    endtask

    task automatic t_debug_pipeline();
        int v, pre;
        load(8'h7A);
        for (int pe = 0; pe < 4; pe++) begin
            pre = sw_psum[pe];
            run(8'h5D); dbg_read(4'h8, 4'(pe), 8'h00, v);
            `CHK(v == pre, $sformatf("PARTIAL_SUM pre-add PE%0d", pe))
            run(8'hB3); dbg_read(4'hA, 4'(pe), 8'h00, v);
            `CHK(v == sw_psum[pe], $sformatf("ADD post-add PE%0d", pe))
            run(8'h2E); dbg_read(4'h9, 4'(pe), 8'h00, v);
            `CHK(v == sw_mul[pe], $sformatf("MULTIPLY in flight PE%0d", pe))
            run(8'h61); dbg_read(4'h6, 4'h0, 8'h00, v);
            `CHK(v[0] == 1'b1, "FLAGS run busy")
        end
        expect_flags(0, 0, "debug_pipeline");
    endtask

    task automatic t_freeze_window();
        load(8'h35);
        for (int w = 0; w < 2; w++) begin            // 24-bit, then 8-bit read
            int last = w ? 4 : 12;
            for (int j = 1; j <= last; j++) begin
                cyc(w ? 8'h70 : 8'h80);              // freezing read on edge k
                if (j > 1) nop(j - 1);
                cyc(8'h20, 8'h4B);                   // RUN on edge k+j
                if (j == last) sw_run(8'h4B);
                nop(16);
                expect_flags(j < last, 0, $sformatf("RUN at +%0d", j));
                clear_flags();
            end
        end
        cyc(8'h80); nop(2); cyc(8'h70);              // second read inside window
        expect_flags(1, 0, "second freezing read");
        nop(14); clear_flags();
        obs.delete();
        cyc(8'h61); nop(8);                          // bad bank, idle
        foreach (obs[i]) `CHK(!obs[i][7], "bad bank froze")
        expect_flags(1, 0, "bad bank");
        clear_flags();
        cyc(8'h80); load(8'h22); clear(4'h8); nop(14);   // LOAD / CLEAR legal in window
        expect_flags(0, 0, "LOAD/CLEAR in window");
        dump_check("after window");
    endtask

    task automatic t_debug_during_dump();
        int v, n = 0;
        load(8'hE2); run(8'h7C); run(8'h19); nop();
        dump_start(); nop(7);
        cyc(8'h80); nop(15);                         // 24-bit read pauses the dump
        cyc(8'h71); nop(3);                          // bad bank: no pause
        cyc(8'h70); nop(5);                          // 8-bit read
        dump_check_vs(snap, "dump with debug reads");
        foreach (obs[i]) if (obs[i][7]) n++;
        `CHK(n == 8, $sformatf("%0d debug nibbles during dump, exp 8", n))
        expect_flags(1, 0, "bad bank during dump");
        clear_flags();
        dump_start(); nop(3);
        dbg_read(4'h6, 4'h0, 8'h00, v);
        `CHK(v[6] && v[3] && v[1], $sformatf("FLAGS during dump %02h", v))
        dump_wait();
    endtask

    task automatic t_illegal_ops();
        for (int op = 12; op < 16; op++) begin
            cyc({4'(op), 4'h0});
            expect_flags(1, 0, $sformatf("opcode %h", op));
            clear_flags();
        end
        cyc(8'h1F, 8'h5A); sw_buf = 8'h5A;           // reserved argument bits ignored
        run(8'h27); nop();
        dump_check("reserved args");
        expect_flags(0, 0, "reserved args");
        nop(6);
        `CHK(uo_out[3:0] == 4'h0 && !uo_out[7] && !uo_out[6], "idle output")
    endtask

    task automatic t_random(input int n);
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
            cyc({op, 4'($urandom)}, 8'($urandom), $urandom_range(0, 19) != 0);
        end
        nop(30);
    endtask

    task automatic t_matmul();
        int A [2][8], B [8][2], C [4], prev [4];
        for (int t = 0; t <= 4; t++) begin
            if (t < 4) begin
                for (int k = 0; k < 8; k++) begin
                    for (int i = 0; i < 2; i++) A[i][k] = $urandom_range(0, 15) - 8;
                    for (int j = 0; j < 2; j++) B[k][j] = $urandom_range(0, 15) - 8;
                    load({4'(A[1][k]), 4'(A[0][k])});   // buf[2] high, buf[1] low
                    run ({4'(B[k][1]), 4'(B[k][0])});   // bus[2] high, bus[1] low
                end
            end
            if (t > 0) dump_check_vs(prev, $sformatf("tile %0d", t - 1));
            if (t < 4) begin
                for (int g = 0; g < 4; g++) begin
                    C[g] = 0;
                    for (int k = 0; k < 8; k++)
                        C[g] += A[pe_row2(g)][k] * B[k][pe_col2(g)];
                    prev[g] = C[g];
                end
                dump_start();
                clear(4'h8);                         // next tile while streaming
            end
        end
        expect_flags(0, 0, "matmul");
    endtask

    // ================================================================= MAIN
    initial begin
        string test, dumpfile;
        int    num = 20000;
        if (!$value$plusargs("TEST=%s", test)) test = "polite_smoke";
        void'($value$plusargs("NUM=%d", num));
        if (!$test$plusargs("nowaves")) begin
            if (!$value$plusargs("dumpfile=%s", dumpfile)) dumpfile = "wave.vcd";
            $dumpfile(dumpfile);
            $dumpvars(0, tb_polite_mini);
        end
        rst_n = 1'b0; ena = 1'b1; ui_in = 8'h00; uio_in = 8'h00;
        apply_reset();
        $display("[%0t] TEST %s", $time, test);

        case (test)
            "polite_smoke":             t_smoke();
            "polite_reset":             t_reset();
            "polite_pad_latency":       t_pad_latency();
            "polite_ena_hold":          t_ena_hold();
            "polite_mac_pipeline":      t_mac_pipeline();
            "polite_overflow":          t_overflow();
            "polite_dump":              t_dump();
            "polite_dump_abort":        t_dump_abort();
            "polite_clear":             t_clear();
            "polite_debug_reads":       t_debug_reads();
            "polite_debug_pipeline":    t_debug_pipeline();
            "polite_freeze_window":     t_freeze_window();
            "polite_debug_during_dump": t_debug_during_dump();
            "polite_illegal_ops":       t_illegal_ops();
            "polite_random":            t_random(num);
            "polite_matmul":            t_matmul();
            default: $fatal(1, "unknown +TEST=%s", test);
        endcase

        nop(10);
        $display("------------------------------------------------");
        $display(" %s: %0d checks, %0d errors -> %s", test, chk_count, err_count,
                 (err_count == 0) ? "PASS" : "FAIL");
        $display("------------------------------------------------");
        $finish;
    end
endmodule

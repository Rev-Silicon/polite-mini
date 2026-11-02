// POLITE Mini Tiny Tapeout top. ui_in = data, uio_in = instr (all inputs).
// Pad pipeline: ui_in/uio_in sampled into in_d_q/in_i_q (executed next edge). uo_out is the register uo_q, loaded
// once per output tick (2 clk, 33 MHz pad-out): only on the edge after an out_tick (out_phase_q==1). See docs/LOCKS.md.
// A debug read streams nibbles on uo[3:0] (LS first). uo[7:4] stay live: uo[7] marks a debug nibble, uo[6] a dump nibble.
module tt_um_polite_mini #(parameter bit HAS_OUTBUF = 1, parameter bit OP_PLACE = 0) (
  input wire [7:0] ui_in, output wire [7:0] uo_out, input wire [7:0] uio_in, output wire [7:0] uio_out,
  output wire [7:0] uio_oe, input wire ena, clk, rst_n);
  assign uio_out = 8'h00; assign uio_oe = 8'h00;
  logic [7:0] inbuf, flags8; logic [23:0] dbg_val; logic dbg_wide;
  logic run_phase2, mul_en, acc_en, clr_pe, clr_ob, dump_load, dump_abort;
  logic ovf, illegal, debug_busy, freeze_now, dbg_freeze, dbg_illegal;
  logic dump_busy_q; logic [3:0] dnib;
  logic [95:0] psums, pends; logic [31:0] muls; logic [3:0] povf;
  logic [7:0] in_d_q, in_i_q, uo_q;
  // ena is registered once (resets to 1) so the TT enable is a reg->reg fanout, not a pad->every-flop path.
  // Effect: a hold via ena takes effect one edge after the pad changes. Golden: chip_step_ena.
  logic ena_q, en;
  always_ff @(posedge clk or negedge rst_n) if (!rst_n) ena_q <= 1'b1; else ena_q <= ena;
  assign en = ena_q;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin in_d_q <= '0; in_i_q <= '0; end      // reset = NOP
    else if (en) begin in_d_q <= ui_in; in_i_q <= uio_in; end
  end

  // 33 MHz pad-out: out_phase_q resets 0 and toggles every enabled core edge; out_tick = out_phase_q.
  logic out_phase_q, out_tick;
  always_ff @(posedge clk or negedge rst_n) if (!rst_n) out_phase_q <= 1'b0; else if (en) out_phase_q <= ~out_phase_q;
  assign out_tick = out_phase_q;

  // Freeze counter is the remaining core edges of the open window (0 = none). A new DBG may start one only when it is 0.
  logic [3:0] fz_cnt_q;
  logic freeze_active, nested_dbg, freeze_start;
  assign freeze_active = (fz_cnt_q != 4'd0);
  assign nested_dbg    = dbg_freeze && freeze_active;
  assign freeze_start  = dbg_freeze && !freeze_active;

  polite_ctrl #(.HAS_OUTBUF(HAS_OUTBUF), .OP_PLACE(OP_PLACE)) u_ctrl (
    .clk, .rst_n, .ena(en), .data(in_d_q), .instr(in_i_q), .dump_adv(dump_busy_q), .pend_ovf_any(|povf),
    .freeze_active, .out_tick, .dbg_freeze, .dbg_illegal, .nested_dbg, .inbuf, .flags8, .run_phase2, .mul_en, .acc_en,
    .clr_pe, .clr_ob, .dump_load, .dump_abort, .ovf, .illegal, .debug_busy, .freeze_now);

  // dump-order k -> (row,col): 0=(2,2) 1=(2,1) 2=(1,2) 3=(1,1); lane1 = byte[7:4]
  for (genvar k = 0; k < 4; k++) begin : g_pe
    localparam int R = (k < 2) ? 1 : 0;
    localparam int C = (k % 2 == 0) ? 1 : 0;
    polite_pe u_pe (.clk, .rst_n, .ena(en), .mul_en, .acc_en, .clr(clr_pe),
      .a(inbuf[4*R +: 4]), .b(in_d_q[4*C +: 4]) /* buf[i] x bus[j]: bus = ui_in sampled with RUN */, .psum(psums[24*k +: 24]), .pend(pends[24*k +: 24]),
      .mul_q(muls[8*k +: 8]), .pend_ovf(povf[k]));
  end

  // Freeze window: n nibbles (n=2 for an 8-bit read, n=6 for DEBUG_PARTIAL_SUM/ADD) hold for 2n core edges
  // starting on the freezing DBG. Nibble k, LS first, is on the k-th out_tick. A second DBG does not reload this window.
  // Dump advances only on out_tick and is held for the whole window, so uo_out changes at most every 2 clk.
  logic ofz;
  logic [3:0] cnt_cur;
  logic [2:0] fz_k_q, k_cur, fk, fk_c;
  logic [23:0] fz_val_q, v_cur;
  logic [3:0] dbg_nib;
  logic dbg_tick;
  assign cnt_cur = freeze_start ? (dbg_wide ? 4'd12 : 4'd4) : fz_cnt_q;
  assign k_cur   = freeze_start ? 3'd0 : fz_k_q;
  assign v_cur   = freeze_start ? dbg_val : fz_val_q;          // nested DBG keeps the value already streaming
  assign ofz     = (cnt_cur != 4'd0);
  assign fk      = out_tick ? k_cur : (k_cur != 3'd0 ? k_cur - 3'd1 : 3'd0);
  assign fk_c    = (fk > 3'd5) ? 3'd5 : fk;
  assign dbg_nib = v_cur[4*fk_c +: 4];
  assign dbg_tick= ofz & out_tick;                            // uo[7]=1 and uo[6] forced 0 on this output tick
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin fz_cnt_q <= '0; fz_k_q <= '0; fz_val_q <= '0; end
    else if (en) begin
      fz_cnt_q <= ofz ? cnt_cur - 4'd1 : 4'd0;
      fz_k_q   <= k_cur + {2'b0, ofz & out_tick};
      fz_val_q <= v_cur;
    end
  end
  polite_outbuf #(.HAS_OUTBUF(HAS_OUTBUF)) u_ob (.clk, .rst_n, .ena(en), .load(dump_load), .abort(dump_abort),
    .clr(clr_ob), .hold(ofz), .adv(out_tick), .load_data(run_phase2 ? pends : psums), .nib(dnib), .busy(dump_busy_q));

  polite_dbg u_dbg (.op(in_i_q[7:4]), .arg(in_i_q[3:0]), .flags8, .inbuf, .data(in_d_q), .psums, .pends,
    .muls, .run_phase2, .freeze(dbg_freeze), .illegal(dbg_illegal), .wide(dbg_wide), .val(dbg_val));

  // Pad register loads the core output of an out_tick on the following edge. uo[7:4] are that edge's live flags:
  // uo[7] debug-nibble marker, uo[6] dump-nibble marker (0 on a debug nibble), uo[5] illegal, uo[4] OVF.
  // On a non-debug output tick, live uo[7] is 0. debug_busy is not the pin (it pulses with dbg_freeze only).
  logic [3:0] nib_q;
  logic uo7_q, uo6_q;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin nib_q <= '0; uo7_q <= 1'b0; uo6_q <= 1'b0; end
    else if (en) begin
      nib_q <= dbg_tick ? dbg_nib : dnib;
      uo7_q <= dbg_tick;
      uo6_q <= dbg_tick ? 1'b0 : dump_busy_q;   // busy-at-start of the displayed edge
    end
  end
  // pad register: loaded only when the previous edge was an out_tick (out_phase_q==0 now), never combinational
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) uo_q <= '0;
    else if (en && !out_phase_q) uo_q <= {uo7_q, uo6_q, illegal, ovf, nib_q};
  end
  assign uo_out = uo_q;
endmodule

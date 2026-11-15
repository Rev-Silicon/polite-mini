`default_nettype none
// EXAMPLE implementation derived from chip.c; not the user's original RTL.
module polite_ctrl #(parameter bit HAS_OUTBUF = 1'b1) (
    input wire clk, rst_n, en, dump_busy, fz_open, pe_ovf_any,
    input wire [7:0] d, ins,
    output logic phase, run_busy, illegal, ovf,
    output wire illegal_d, ovf_d,
    output wire run_now, acc_en, clr_psum, clr_outbuf, dump_load, dump_abort, dbg_start,
    output wire [3:0] dbg_op,
    output wire [1:0] dbg_pe,
    output logic [7:0] inbuf,
    output wire [7:0] status
);
    wire [3:0] op = ins[7:4];
    wire debug_read = op >= 4'h6 && op <= 4'hb;
    wire bad = op >= 4'hc ||
        (fz_open && (op == 4'h2 || debug_read)) ||
        (op == 4'h6 && ins[3:0] != 0) ||
        (op == 4'h5 && ((ins[3] && run_busy) ||
                       (ins[2] && (dump_busy || !HAS_OUTBUF)))) ||
        (op == 4'h3 && (!HAS_OUTBUF || dump_busy)) ||
        (op == 4'h4 && !HAS_OUTBUF);
    wire clear_ok = op == 4'h5 && !bad;
    wire clear_flags = clear_ok && ins[0];
    assign run_now = op == 4'h2 && !bad;
    assign acc_en = run_busy;
    assign clr_psum = clear_ok && ins[3];
    assign clr_outbuf = clear_ok && ins[2];
    assign dump_load = op == 4'h3 && !bad;
    assign dump_abort = op == 4'h4 && !bad;
    assign dbg_start = debug_read && !bad;
    assign dbg_op = op;
    assign dbg_pe = ins[1:0];
    assign illegal_d = bad || (illegal && !clear_flags);
    assign ovf_d = (acc_en && pe_ovf_any) || (ovf && !clear_flags);
    assign status = {1'b1, dump_busy, illegal, (ovf || (acc_en && pe_ovf_any)),
                     dump_busy, phase, dump_busy, run_busy};
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            phase <= 0;
            run_busy <= 0;
            illegal <= 0;
            ovf <= 0;
            inbuf <= 0;
        end else if (en) begin
            phase <= !phase;
            run_busy <= run_now;
            illegal <= illegal_d;
            ovf <= ovf_d;
            if (op == 4'h1) inbuf <= d;
            else if (clear_ok && ins[1]) inbuf <= 0;
        end
    end
endmodule
`default_nettype wire

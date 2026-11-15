`default_nettype none
// EXAMPLE implementation derived from chip.c; not the user's original RTL.
module polite_dbg (
    input wire clk, rst_n, en, phase, start, run_busy,
    input wire [3:0] op,
    input wire [1:0] pe,
    input wire [7:0] status, inbuf, d,
    input wire [95:0] psum_all, sum_all,
    input wire [31:0] mul_all,
    output wire open, ofz, dbg_tick,
    output wire [3:0] dbg_nib
);
    logic [23:0] saved;
    logic [3:0] remaining;
    logic [2:0] index;
    logic [23:0] capture;
    wire [3:0] duration = (op == 4'h8 || op == 4'ha) ? 4'd12 : 4'd4;
    wire [2:0] previous_index = index == 0 ? 3'd0 : index - 1'b1;
    wire [2:0] effective_index = start ? 3'd0 : (phase ? index : previous_index);
    wire [2:0] limited_index = effective_index > 5 ? 3'd5 : effective_index;
    wire [23:0] value_now = start ? capture : saved;
    always_comb begin
        case (op)
            4'h6: capture = {16'b0, status};
            4'h7: capture = {16'b0, inbuf};
            4'h8: capture = psum_all[24*pe +: 24];
            4'h9: capture = {16'b0, mul_all[8*pe +: 8]};
            4'ha: capture = run_busy ? sum_all[24*pe +: 24] : psum_all[24*pe +: 24];
            default: capture = {16'b0, d};
        endcase
    end
    assign open = remaining != 0;
    assign ofz = start || open;
    assign dbg_tick = ofz && phase;
    assign dbg_nib = value_now[4*limited_index +: 4];
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            saved <= 0;
            remaining <= 0;
            index <= 0;
        end else if (en) begin
            if (start) begin
                saved <= capture;
                remaining <= duration - 1'b1;
                index <= {2'b0, phase};
            end else if (open) begin
                remaining <= remaining - 1'b1;
                if (phase) index <= index + 1'b1;
            end
        end
    end
endmodule
`default_nettype wire

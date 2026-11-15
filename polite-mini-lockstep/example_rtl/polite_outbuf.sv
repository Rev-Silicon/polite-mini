`default_nettype none
// EXAMPLE implementation derived from chip.c; not the user's original RTL.
module polite_outbuf (
    input wire clk, rst_n, en, phase, hold, load, abort, clr,
    input wire [95:0] cap,
    output logic busy,
    output wire [3:0] nib
);
    logic [95:0] saved;
    logic [4:0] idx;
    assign nib = busy ? saved[4*idx +: 4] : 4'h0;
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            saved <= 0;
            idx <= 0;
            busy <= 0;
        end else if (en) begin
            if (clr) saved <= 0;
            if (load) begin
                saved <= cap;
                idx <= 0;
                busy <= 1;
            end else begin
                if (abort) busy <= 0;
                if (busy && phase && !hold) begin
                    idx <= idx + 1'b1;
                    if (idx == 23) busy <= 0;
                end
            end
        end
    end
endmodule
`default_nettype wire

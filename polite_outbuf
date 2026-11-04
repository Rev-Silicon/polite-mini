`default_nettype none
// POLITE Mini output buffer and dump sequencer.
//
// DUMP_LOAD copies four 24-bit values (cap) in one edge and starts a
// 24-nibble stream: PE order 0..3 = (2,2)(2,1)(1,2)(1,1), low nibble first.
// The nibble index advances once per output tick (phase = 1), and never
// while the debug unit owns the pins (hold = ofz). Mirrors dump_idx /
// dump_busy in golden/chip.c.
//
// nib is the nibble at the index at the START of the tick (dnib), or 0 when
// no dump is busy.
module polite_outbuf (
    input  wire        clk,
    input  wire        rst_n,
    input  wire        en,
    input  wire        phase,
    input  wire        hold,       // debug freeze window active this tick
    input  wire        load,       // legal DUMP_LOAD
    input  wire        abort,      // DUMP_ABORT
    input  wire        clr,        // CLEAR bit 2 accepted
    input  wire [95:0] cap,        // {pe3, pe2, pe1, pe0} values to capture
    output reg         busy,
    output wire [3:0]  nib
);
    reg [23:0] word [0:3];
    reg [4:0]  idx;                // 0..23

    // Which PE and which nibble inside its 24-bit word.
    wire [1:0] pe_sel = (idx >= 5'd18) ? 2'd3 :
                        (idx >= 5'd12) ? 2'd2 :
                        (idx >= 5'd6)  ? 2'd1 : 2'd0;
    wire [4:0] sub    = idx - {2'b00, pe_sel, 1'b0} - {1'b0, pe_sel, 2'b00}; // idx - 6*pe
    wire [23:0] w     = word[pe_sel];
    reg  [3:0]  wn;
    always @(*) begin
        case (sub[2:0])
            3'd0:    wn = w[3:0];
            3'd1:    wn = w[7:4];
            3'd2:    wn = w[11:8];
            3'd3:    wn = w[15:12];
            3'd4:    wn = w[19:16];
            default: wn = w[23:20];
        endcase
    end

    assign nib = busy ? wn : 4'h0;

    // A legal DUMP_LOAD implies !busy, so step and load never coincide.
    wire step = busy && phase && !hold;

    integer k;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            busy <= 1'b0;
            idx  <= 5'd0;
            for (k = 0; k < 4; k = k + 1)
                word[k] <= 24'd0;
        end else if (en) begin
            if (load) begin
                for (k = 0; k < 4; k = k + 1)
                    word[k] <= cap[24*k +: 24];
                idx  <= 5'd0;
                busy <= 1'b1;
            end else begin
                if (clr)
                    for (k = 0; k < 4; k = k + 1)
                        word[k] <= 24'd0;
                if (step)
                    idx <= idx + 5'd1;
                if ((step && idx == 5'd23) || abort)
                    busy <= 1'b0;
            end
        end
    end

    wire _unused = &{1'b0, sub[4:3]};
endmodule
`default_nettype wire

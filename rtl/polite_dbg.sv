`default_nettype none
// POLITE Mini debug unit: capture mux + nibble freeze window.
//
// A legal freezing read (start) captures one value on its own core tick and
// opens a window of 2n core ticks (n = 2 nibbles for an 8-bit read, 6 for a
// 24-bit read). Nibble k goes out on the k-th output tick, low nibble first.
// Mirrors begin_freeze / fz_left / fz_k / fz_val in golden/chip.c.
//
//   open     : window already open at start of tick (c->fz_left > 0, "mid")
//   ofz      : window active this tick (start or open); pauses the dump
//   dbg_tick : this tick shows a debug nibble (ofz on an output tick)
module polite_dbg (
    input  wire        clk,
    input  wire        rst_n,
    input  wire        en,
    input  wire        phase,
    input  wire        start,       // legal freezing debug read this tick
    input  wire [3:0]  op,          // 0x6..0xB
    input  wire [1:0]  pe,
    input  wire        run_busy,
    input  wire [7:0]  status,      // DEBUG_FLAGS byte
    input  wire [7:0]  inbuf,       // DEBUG_BUFFER
    input  wire [7:0]  d,           // DEBUG_INPUT (ui_in of this tick)
    input  wire [95:0] psum_all,    // {pe3..pe0} partial sums
    input  wire [31:0] mul_all,     // {pe3..pe0} products
    input  wire [95:0] sum_all,     // {pe3..pe0} wrap24(psum + mul)
    output wire        open,
    output wire        ofz,
    output wire        dbg_tick,
    output wire [3:0]  dbg_nib
);
    reg [3:0]  fz_left;   // core ticks left in the window (max 12)
    reg [2:0]  fz_k;      // nibbles already shown (max 6)
    reg [23:0] fz_val;

    wire [23:0] ps  = psum_all[24*pe +: 24];
    wire [7:0]  mu  = mul_all [8*pe  +: 8];
    wire [23:0] sm  = sum_all [24*pe +: 24];

    reg [23:0] v;
    always @(*) begin
        case (op)
            4'h6:    v = {16'h0, status};
            4'h7:    v = {16'h0, inbuf};
            4'h8:    v = ps;                       // pre-add partial sum
            4'h9:    v = {16'h0, mu};              // last latched product
            4'hA:    v = run_busy ? sm : ps;       // adder preview
            default: v = {16'h0, d};               // 0xB DEBUG_INPUT
        endcase
    end
    wire wide = (op == 4'h8) || (op == 4'hA);

    assign open = (fz_left != 4'd0);
    assign ofz  = start || open;

    wire [3:0]  left_e = start ? (wide ? 4'd12 : 4'd4) : fz_left;
    wire [2:0]  k_e    = start ? 3'd0 : fz_k;
    wire [23:0] val_e  = start ? v    : fz_val;

    // Off-tick ticks look one nibble back (C: fz_k ? fz_k-1 : 0); clamp at 5.
    wire [2:0] fk_raw = phase ? k_e : ((k_e != 3'd0) ? k_e - 3'd1 : 3'd0);
    wire [2:0] fk     = (fk_raw > 3'd5) ? 3'd5 : fk_raw;
    reg  [3:0]  vn;
    always @(*) begin
        case (fk)
            3'd0:    vn = val_e[3:0];
            3'd1:    vn = val_e[7:4];
            3'd2:    vn = val_e[11:8];
            3'd3:    vn = val_e[15:12];
            3'd4:    vn = val_e[19:16];
            default: vn = val_e[23:20];
        endcase
    end

    assign dbg_nib  = vn;
    assign dbg_tick = ofz && phase;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            fz_left <= 4'd0;
            fz_k    <= 3'd0;
            fz_val  <= 24'd0;
        end else if (en) begin
            fz_val <= val_e;
            fz_k   <= k_e + {2'b00, (ofz && phase)};
            if (ofz)
                fz_left <= left_e - 4'd1;
        end
    end
endmodule
`default_nettype wire

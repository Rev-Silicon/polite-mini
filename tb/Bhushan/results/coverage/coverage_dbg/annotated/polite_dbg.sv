//      // verilator_coverage annotation
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
 041734     input  wire        clk,
%000003     input  wire        rst_n,
 003587     input  wire        en,
 016724     input  wire        phase,
 002082     input  wire        start,       // legal freezing debug read this tick
 003202     input  wire [3:0]  op,          // 0x6..0xB
 003142     input  wire [1:0]  pe,
 009916     input  wire        run_busy,
 010543     input  wire [7:0]  status,      // DEBUG_FLAGS byte
 010477     input  wire [7:0]  inbuf,       // DEBUG_BUFFER
 010527     input  wire [7:0]  d,           // DEBUG_INPUT (ui_in of this tick)
 010596     input  wire [95:0] psum_all,    // {pe3..pe0} partial sums
 010535     input  wire [31:0] mul_all,     // {pe3..pe0} products
 010691     input  wire [95:0] sum_all,     // {pe3..pe0} wrap24(psum + mul)
 001814     output wire        open,
 002082     output wire        ofz,
 005984     output wire        dbg_tick,
 005786     output wire [3:0]  dbg_nib
        );
 005858     reg [3:0]  fz_left;   // core ticks left in the window (max 12)
 002930     reg [2:0]  fz_k;      // nibbles already shown (max 6)
 000482     reg [23:0] fz_val;
        
 010563     wire [23:0] ps  = psum_all[24*pe +: 24];
 010551     wire [7:0]  mu  = mul_all [8*pe  +: 8];
 010591     wire [23:0] sm  = sum_all [24*pe +: 24];
        
 010542     reg [23:0] v;
 166949     always @(*) begin
 166949         case (op)
 127045             4'h6:    v = {16'h0, status};
 004752             4'h7:    v = {16'h0, inbuf};
 011504             4'h8:    v = ps;                       // pre-add partial sum
 008016             4'h9:    v = {16'h0, mu};              // last latched product
 008728             4'hA:    v = run_busy ? sm : ps;       // adder preview
 006904             default: v = {16'h0, d};               // 0xB DEBUG_INPUT
                endcase
            end
 002836     wire wide = (op == 4'h8) || (op == 4'hA);
        
            assign open = (fz_left != 4'd0);
            assign ofz  = start || open;
        
 005858     wire [3:0]  left_e = start ? (wide ? 4'd12 : 4'd4) : fz_left;
 002930     wire [2:0]  k_e    = start ? 3'd0 : fz_k;
 000668     wire [23:0] val_e  = start ? v    : fz_val;
        
            // Off-tick ticks look one nibble back (C: fz_k ? fz_k-1 : 0); clamp at 5.
 013936     wire [2:0] fk_raw = phase ? k_e : ((k_e != 3'd0) ? k_e - 3'd1 : 3'd0);
 010720     wire [2:0] fk     = (fk_raw > 3'd5) ? 3'd5 : fk_raw;
 005786     reg  [3:0]  vn;
 166949     always @(*) begin
 166949         case (fk)
 023071             3'd0:    vn = val_e[3:0];
 052692             3'd1:    vn = val_e[7:4];
 042586             3'd2:    vn = val_e[11:8];
 007400             3'd3:    vn = val_e[15:12];
 006840             3'd4:    vn = val_e[19:16];
 034360             default: vn = val_e[23:20];
                endcase
            end
        
            assign dbg_nib  = vn;
            assign dbg_tick = ofz && phase;
        
 020867     always @(posedge clk or negedge rst_n) begin
%000007         if (!rst_n) begin
%000007             fz_left <= 4'd0;
%000007             fz_k    <= 3'd0;
%000007             fz_val  <= 24'd0;
 016723         end else if (en) begin
 016723             fz_val <= val_e;
 016723             fz_k   <= k_e + {2'b00, (ofz && phase)};
 010865             if (ofz)
 005858                 fz_left <= left_e - 4'd1;
                end
            end
        endmodule
        `default_nettype wire
        

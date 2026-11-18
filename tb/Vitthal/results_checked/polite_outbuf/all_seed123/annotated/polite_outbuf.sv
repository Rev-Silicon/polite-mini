//      // verilator_coverage annotation
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
 023402     input  wire        clk,
%000009     input  wire        rst_n,
 001450     input  wire        en,
 010906     input  wire        phase,
 004915     input  wire        hold,       // debug freeze window active this tick
 006040     input  wire        load,       // legal DUMP_LOAD
 006288     input  wire        abort,      // DUMP_ABORT
 000652     input  wire        clr,        // CLEAR bit 2 accepted
 006564     input  wire [95:0] cap,        // {pe3, pe2, pe1, pe0} values to capture
 006040     output reg         busy,
 003604     output wire [3:0]  nib
        );
 001745     reg [23:0] word [0:3];
 002320     reg [4:0]  idx;                // 0..23
        
            // Which PE and which nibble inside its 24-bit word.
 011252     wire [1:0] pe_sel = (idx >= 5'd18) ? 2'd3 :
 010864                         (idx >= 5'd12) ? 2'd2 :
 010470                         (idx >= 5'd6)  ? 2'd1 : 2'd0;
~002320     wire [4:0] sub    = idx - {2'b00, pe_sel, 1'b0} - {1'b0, pe_sel, 2'b00}; // idx - 6*pe
 001764     wire [23:0] w     = word[pe_sel];
 002478     reg  [3:0]  wn;
 011706     always @(*) begin
 011706         case (sub[2:0])
 008541             3'd0:    wn = w[3:0];
 002002             3'd1:    wn = w[7:4];
 000307             3'd2:    wn = w[11:8];
 000260             3'd3:    wn = w[15:12];
 000260             3'd4:    wn = w[19:16];
 000336             default: wn = w[23:20];
                endcase
            end
        
 006130     assign nib = busy ? wn : 4'h0;
        
            // A legal DUMP_LOAD implies !busy, so step and load never coincide.
 004244     wire step = busy && phase && !hold;
        
            integer k;
 011705     always @(posedge clk or negedge rst_n) begin
 011695         if (!rst_n) begin
 000010             busy <= 1'b0;
 000010             idx  <= 5'd0;
 000040             for (k = 0; k < 4; k = k + 1)
 000040                 word[k] <= 24'd0;
 010905         end else if (en) begin
 007885             if (load) begin
 012080                 for (k = 0; k < 4; k = k + 1)
 012080                     word[k] <= cap[24*k +: 24];
 003020                 idx  <= 5'd0;
 003020                 busy <= 1'b1;
 007885             end else begin
 007536                 if (clr)
 001396                     for (k = 0; k < 4; k = k + 1)
 001396                         word[k] <= 24'd0;
 006310                 if (step)
 001575                     idx <= idx + 5'd1;
 004459                 if ((step && idx == 5'd23) || abort)
 003426                     busy <= 1'b0;
                    end
                end
            end
        
            wire _unused = &{1'b0, sub[4:3]};
        endmodule
        `default_nettype wire
        

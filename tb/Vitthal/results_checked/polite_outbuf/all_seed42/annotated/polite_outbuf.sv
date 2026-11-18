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
 001490     input  wire        en,
 010877     input  wire        phase,
 004989     input  wire        hold,       // debug freeze window active this tick
 006022     input  wire        load,       // legal DUMP_LOAD
 006286     input  wire        abort,      // DUMP_ABORT
 000722     input  wire        clr,        // CLEAR bit 2 accepted
 006582     input  wire [95:0] cap,        // {pe3, pe2, pe1, pe0} values to capture
 006022     output reg         busy,
 003502     output wire [3:0]  nib
        );
 001733     reg [23:0] word [0:3];
 002346     reg [4:0]  idx;                // 0..23
        
            // Which PE and which nibble inside its 24-bit word.
 011251     wire [1:0] pe_sel = (idx >= 5'd18) ? 2'd3 :
 010863                         (idx >= 5'd12) ? 2'd2 :
 010469                         (idx >= 5'd6)  ? 2'd1 : 2'd0;
~002346     wire [4:0] sub    = idx - {2'b00, pe_sel, 1'b0} - {1'b0, pe_sel, 2'b00}; // idx - 6*pe
 001735     wire [23:0] w     = word[pe_sel];
 002439     reg  [3:0]  wn;
 011706     always @(*) begin
 011706         case (sub[2:0])
 008518             3'd0:    wn = w[3:0];
 002030             3'd1:    wn = w[7:4];
 000301             3'd2:    wn = w[11:8];
 000260             3'd3:    wn = w[15:12];
 000260             3'd4:    wn = w[19:16];
 000337             default: wn = w[23:20];
                endcase
            end
        
 006053     assign nib = busy ? wn : 4'h0;
        
            // A legal DUMP_LOAD implies !busy, so step and load never coincide.
 004254     wire step = busy && phase && !hold;
        
            integer k;
 011705     always @(posedge clk or negedge rst_n) begin
 011695         if (!rst_n) begin
 000010             busy <= 1'b0;
 000010             idx  <= 5'd0;
 000040             for (k = 0; k < 4; k = k + 1)
 000040                 word[k] <= 24'd0;
 010876         end else if (en) begin
 007865             if (load) begin
 012044                 for (k = 0; k < 4; k = k + 1)
 012044                     word[k] <= cap[24*k +: 24];
 003011                 idx  <= 5'd0;
 003011                 busy <= 1'b1;
 007865             end else begin
 007476                 if (clr)
 001556                     for (k = 0; k < 4; k = k + 1)
 001556                         word[k] <= 24'd0;
 006281                 if (step)
 001584                     idx <= idx + 5'd1;
 004447                 if ((step && idx == 5'd23) || abort)
 003418                     busy <= 1'b0;
                    end
                end
            end
        
            wire _unused = &{1'b0, sub[4:3]};
        endmodule
        `default_nettype wire
        

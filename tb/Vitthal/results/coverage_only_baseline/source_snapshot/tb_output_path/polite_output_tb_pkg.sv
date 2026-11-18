
`timescale 1ns/1ps
/* verilator coverage_off */
// Packages intentionally contain classes whose names differ from the filename.
/* verilator lint_off DECLFILENAME */
package polite_output_tb_pkg;
    import polite_outbuf_tb_pkg::*;
    class polite_output_cov;
        bit [15:0] controls='0,output_nibbles='0;
        bit [3:0] flags='0,debug_transitions='0;
        bit [2:0] markers='0;
        bit [1:0] debug_lengths='0;
        bit previous_debug=0;
        int samples=0,marker11_samples=0;
        function void sample(bit dbg_tick,bit busy,bit illegal,bit ovf,bit [7:0] uo);
            int marker;
            samples++;
            controls[int'({dbg_tick,busy,illegal,ovf})]=1;
            flags[uo[5:4]]=1;
            output_nibbles[uo[3:0]]=1;
            marker=int'(uo[7:6]);
            if(marker<3) markers[marker]=1;
            else marker11_samples++;
            if(previous_debug!=dbg_tick)
                debug_transitions[int'(busy)*2+int'(dbg_tick)]=1;
            previous_debug=dbg_tick;
        endfunction
        function void report();
            $display("COVERAGE BEGIN integration");
            show_bins("debug_dump_flags",4096'(controls),16);
            show_bins("observed_live_flags",4096'(flags),4);
            show_bins("observed_data_nibbles",4096'(output_nibbles),16);
            show_bins("observed_source_markers",4096'(markers),3);
            show_bins("debug_transitions_x_dump_busy",4096'(debug_transitions),4);
            show_bins("requested_debug_lengths_2_6",4096'(debug_lengths),2);
            $display("OBSERVED samples=%0d marker11_samples=%0d",samples,marker11_samples);
            $display("COVERAGE END integration");
        endfunction
    endclass
endpackage
/* verilator lint_on DECLFILENAME */
/* verilator coverage_on */

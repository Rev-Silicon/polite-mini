
`timescale 1ns/1ps
/* verilator coverage_off */
// Packages intentionally contain classes whose names differ from the filename.
/* verilator lint_off DECLFILENAME */
package polite_outmux_tb_pkg;
    // Solver-backed members and the generated seed are read/written by class methods.
    /* verilator lint_off UNUSEDSIGNAL */
    /* verilator lint_off UNDRIVEN */
    class polite_outmux_txn;
        rand bit dbg_tick,dump_busy,illegal,ovf;
        rand bit [3:0] dbg_nib,dump_nib;
        function bit [11:0] pack();
            return {dbg_tick,dbg_nib,dump_busy,dump_nib,illegal,ovf};
        endfunction
    endclass
    /* verilator lint_on UNUSEDSIGNAL */
    /* verilator lint_on UNDRIVEN */

    function automatic void show_mux_bins(input string label_text,
                                           input bit [4095:0] hits,input int total);
        int count;
        count=0;
        for(int i=0;i<total;i++) if(hits[i]) count++;
        $display("COVERPOINT %s: %0d/%0d bins (%0.2f%%)",label_text,
            count,total,100.0*real'(count)/real'(total));
        for(int i=0;i<total;i++) if(!hits[i]) $display("UNCOVERED %s[%0d]",label_text,i);
    endfunction

    class polite_outmux_cov;
        bit [4095:0] input_vectors='0;
        bit [15:0] controls='0,debug_values='0,dump_values='0,output_bits='0;
        bit [15:0] output_nibbles='0;
        bit [191:0] output_encodings='0;
        bit [6:0] scenarios='0;
        int samples=0, marker11_samples=0;
        function void sample(bit [11:0] inputs,bit [7:0] outputs);
            int marker;
            samples++;
            input_vectors[inputs]=1;
            controls[int'({inputs[11],inputs[6],inputs[1:0]})]=1;
            debug_values[inputs[10:7]]=1;
            dump_values[inputs[5:2]]=1;
            for(int b=0;b<8;b++) output_bits[2*b+int'(outputs[b])]=1;
            output_nibbles[outputs[3:0]]=1;
            marker=int'(outputs[7:6]);
            if(marker<3) output_encodings[marker*64+int'(outputs[5:0])]=1;
            else marker11_samples++;
        endfunction
        function void complete(int id,string name);
            if(id<0 || id>=7) $fatal(1,"STIMULUS_ERROR invalid scenario id");
            scenarios[id]=1;
            $display("SCENARIO COMPLETED %s (stimulus completion only)",name);
        endfunction
        function void report();
            $display("COVERAGE BEGIN outmux");
            show_mux_bins("scenarios",4096'(scenarios),7);
            show_mux_bins("independent_input_vectors",input_vectors,4096);
            show_mux_bins("dbg_dump_illegal_ovf",4096'(controls),16);
            show_mux_bins("debug_nibble",4096'(debug_values),16);
            show_mux_bins("dump_nibble",4096'(dump_values),16);
            show_mux_bins("observed_output_bits",4096'(output_bits),16);
            show_mux_bins("observed_output_nibble",4096'(output_nibbles),16);
            show_mux_bins("observed_output_encodings",4096'(output_encodings),192);
            $display("OBSERVED samples=%0d marker11_samples=%0d",samples,marker11_samples);
            $display("EXCLUSION output marker 11 is outside the three documented source encodings; raw marker11 observations are reported without failure.");
            $display("COVERAGE END outmux");
        endfunction
    endclass
endpackage
/* verilator lint_on DECLFILENAME */
/* verilator coverage_on */

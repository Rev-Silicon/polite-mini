
`timescale 1ns/1ps
/* verilator coverage_off */
module tb_polite_outmux;
    import polite_outmux_tb_pkg::*;
    import polite_outmux_sb_pkg::*;
    logic dbg_tick,dump_busy,illegal,ovf;
    logic [3:0] dbg_nib,dump_nib;
    wire [7:0] core_uo;
    polite_outmux dut(.*);
    polite_outmux_txn txn;
    polite_outmux_cov cov;
    string selected;
    int unsigned seed,num,checking,inject;
    polite_outmux_scoreboard sb;
    function automatic string case_name(int id);
        case(id)
            0:return "idle";1:return "dump";2:return "debug";3:return "overlap";
            4:return "flags";5:return "exhaustive";6:return "random";
            default:return "unknown";
        endcase
    endfunction
    task automatic drive(bit [11:0] vector);
        {dbg_tick,dbg_nib,dump_busy,dump_nib,illegal,ovf}=vector;
        #1;
        cov.sample(vector,core_uo);
        if(checking!=0) sb.check(dbg_tick,dbg_nib,dump_busy,dump_nib,illegal,ovf,
                             core_uo,selected,0,inject!=0);
    endtask
    task automatic run_case(int id);
        case(id)
            0:for(int f=0;f<4;f++) drive({1'b0,4'hf,1'b0,4'h0,2'(f)});
            1:for(int n=0;n<16;n++) drive({1'b0,4'hf,1'b1,4'(n),2'b00});
            2:for(int n=0;n<16;n++) drive({1'b1,4'(n),1'b0,4'hf,2'b00});
            3:for(int n=0;n<16;n++) drive({1'b1,4'(n),1'b1,~4'(n),2'b00});
            4:for(int f=0;f<4;f++) for(int d=0;d<2;d++) for(int b=0;b<2;b++)
                drive({d[0],4'ha,b[0],4'h5,2'(f)});
            // Each field is independent: all 4096 distinct 12-bit vectors.
            5:for(int vector=0;vector<4096;vector++) drive(12'(vector));
            6:repeat(num) begin
                if(txn.randomize()==0) $fatal(1,"STIMULUS_ERROR randomization failed");
                drive(txn.pack());
            end
            default:$fatal(1,"STIMULUS_ERROR unknown scenario");
        endcase
        cov.complete(id,case_name(id));
    endtask
    initial begin
        int chosen;
        dbg_tick=0;dump_busy=0;illegal=0;ovf=0;dbg_nib=0;dump_nib=0;
        seed=1;num=10000;selected="all";
        cov=new();txn=new();sb=new();checking=1;inject=0;
        if($value$plusargs("SEED=%d",seed)) begin end
        if($value$plusargs("NUM=%d",num)) begin end
        if($value$plusargs("TEST=%s",selected)) begin end
        if(num==0 || num>1000000) $fatal(1,"STIMULUS_ERROR NUM must be 1..1000000");
        if($value$plusargs("CHECK=%d",checking)) begin end
        if($value$plusargs("INJECT=%d",inject)) begin end
        if(checking>1 || inject>1 || (checking==0 && inject!=0))
            $fatal(1,"STIMULUS_ERROR CHECK/INJECT must be 0 or 1; injection needs checking");
        txn.srandom(seed);
        if($test$plusargs("WAVE")) begin $dumpfile("wave.fst");$dumpvars(0,tb_polite_outmux);end
        $display("CONFIG checking=%0d seed=%0d num=%0d test=%s inject=%0d",checking,seed,num,selected,inject);
        chosen=-1;
        for(int id=0;id<7;id++) if(selected==case_name(id)) chosen=id;
        if(selected!="all" && chosen<0) $fatal(1,"STIMULUS_ERROR unknown TEST=%s",selected);
        if(selected=="all") for(int id=0;id<7;id++) run_case(id);
        else run_case(chosen);
        cov.report();
        if(checking!=0) begin
            if(inject!=0 && !sb.injected) $fatal(1,"INJECTION_NOT_REACHED");
            sb.report();$display("TEST PASS: all enabled checks completed without mismatches.");
        end else $display("STIMULUS COMPLETED: coverage only; no DUT correctness checks were performed.");
        $finish;
    end
    initial begin #20000000;$fatal(1,"STIMULUS_TIMEOUT global watchdog");end
endmodule
/* verilator coverage_on */

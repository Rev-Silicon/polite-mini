// Sim-only model of the sky130 buffer used as a fanout cut in rtl/pe/polite_pe.sv.
// LibreLane does not read this file: synthesis keeps the library cell.
module sky130_fd_sc_hd__buf_2(input A, output X);
  assign X = A;
endmodule

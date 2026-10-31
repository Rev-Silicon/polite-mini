// Signed int4 x int4 -> int8 multiplier (combinational).
module polite_mac (input logic signed [3:0] a, b, output logic signed [7:0] p);
  assign p = a * b;
endmodule

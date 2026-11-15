# Optional CLI smoke check: gtkwave trace.vcd waves/polite.gtkw -S scripts/gtkwave_smoke.tcl
set n [gtkwave::getNumTraces]
puts "GTKWave loaded $n traces"
if {$n < 36} {exit 1}
gtkwave::/Time/Zoom/Zoom_Full
exit 0

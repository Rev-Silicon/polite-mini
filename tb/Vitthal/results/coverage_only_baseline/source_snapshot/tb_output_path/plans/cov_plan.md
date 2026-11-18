# Buffer + mux integration: coverage plan

Reuse the outbuf coverpoints (20 scenarios including the five integration
scenarios) and add the following bins. Samples use actual pre-edge outputs
while the core is enabled, so the terminal busy-at-start marker is observed.

| Integration coverpoint / cross | Bins |
|---|---:|
| dbg_tick × dump_busy × illegal × ovf | 16 |
| Actual live flag values | 4 |
| Actual data nibble | 16 |
| Actual source marker modes 00/01/10 | 3 |
| Enter/leave debug × dump busy | 4 |
| Completed requested 2/6-output-tick debug windows | 2 |

Debug ownership is externally driven; requested window lengths are stimulus
completion bins, not validated debug-DUT behavior. Marker mode 11 observations
are reported separately without failures. Output bytes/nibbles, marker priority,
and pause/resume correctness are not compared to expected values.

The actual buffer index is observed for positional coverage. Its inactive
out-of-stream values and illegal command combinations are excluded from manual
active-stream bins. Native code coverage remains unwaived; constant sub[4:3]
toggle points are documented as unreachable with legal progression.

See ../../results/summary.md for per-seed results and native coverage gaps.
The measured percentages apply to defined bins only.

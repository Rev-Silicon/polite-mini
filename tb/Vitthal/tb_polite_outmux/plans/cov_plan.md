# polite_outmux: coverage plan

After each input change settles, sample the independently packed 12-bit inputs
and actual 8-bit output. Scoreboard comparisons are separate from bin sampling.

| Coverpoint / cross | Bins |
|---|---:|
| Completed named stimulus scenarios | 7 |
| Distinct complete input vectors | 4096 |
| dbg_tick × dump_busy × illegal × ovf | 16 |
| Each input nibble | 16 each |
| Output bit values (8 bits × 2) | 16 |
| Actual output low nibble | 16 |
| Actual output encodings in marker modes 00/01/10 | 192 |

All input fields are independent in the exhaustive loop. Raw idle-marker vectors
with nonzero dump input are included at this module boundary; legal system idle
instead provides dump_nib=0. Therefore 192 raw-port output encodings are defined.
Marker mode 11 has no documented source mode; its observations are counted
separately by coverage. In checked mode, an impossible marker also fails the
independent full-byte comparison.

Manual bins report hit/total, percentage, and missing IDs. Native simulator
coverage is reported separately. 100% of these bins establishes exercised
combinations only, not correctness.

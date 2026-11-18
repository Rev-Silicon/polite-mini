# polite_outbuf: coverage plan

Manual functional bins; sample actual pre-edge busy/index/nibble on enabled,
phase=1, hold=0 ticks. Post-edge observations and asynchronous-reset contexts are
sampled separately. The actual index is used for coverage; checked stimulus uses reference position.

| Coverpoint / cross | Bins |
|---|---:|
| Completed named stimulus scenarios | 15 |
| Actual stream index | 24 |
| Actual output nibble value | 16 |
| Index × nibble value | 384 |
| en × phase × hold × busy | 16 |
| Accepted load phase × hold | 4 |
| Abort busy × hold × phase | 8 |
| Idle clear phase × hold | 4 |
| Reset busy × enable | 4 |
| Terminal hold / abort / output tick | 3 |
| Observed busy values | 2 |

Reports list hit/total, percentages, and UNCOVERED bins. Counts for abnormal
indices and idle nonzero observations are printed without correctness failures.
Indices 24..31 while idle are excluded from active-stream positional bins.
Load/clear while busy and overlapping commands are outside legal stimulus.

Verilator line/toggle/expression data is separate from these manual percentages.
Native annotation defaults to a hit threshold of 10; merged seeds close reachable
low-count points. Bits sub[4:3] cannot toggle under legal index progression and
remain visible as unhit native coverage; no RTL exclusions are inserted.

No correctness coverage, mutation score, formal result, or exhaustive verification
claim follows from 100% of the defined functional bins.

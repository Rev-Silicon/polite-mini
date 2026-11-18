# buffer + mux integration: stimulus plan

Coverage-only implementation. No assertions, scoreboards, or expected-output
checks. A named testcase completing records only that its stimulus finished.

| Scenario area | Stimulus and observations |
|---|---|
| Reset | Idle and active reset with enable low/high; sample reset context and actual post-reset state. |
| Load | Both phases, hold low/high, four distinct captured words; no load while busy. |
| Stream data | All 24 observed positions and 16 nibble values using constant-nibble fills plus random cap data. |
| Capture activity | Change cap during streaming; observe outputs without expected-value comparison. |
| Pause/resume | Enable and debug-hold pauses, including position 23 and held loads. |
| Abort/clear | Abort idle/active on both phases and hold values; clear only idle. |
| Boundary traffic | Back-to-back dumps, terminal hold/abort, observed completion/drain. |
| Random | 10000 constrained-random core ticks per full run; legal mutually exclusive command strobes. |
| Debug windows | External hold + phase creates 2-output-tick and 6-output-tick debug windows. |
| Handoff | Enter/leave debug while dump idle/active, change live flags, hold at terminal nibble, abort/recover. |

Test names, selected with TEST=<name> (or all):

reset_idle, load_phases, stream_order, capture_change, nibble_values, enable_pause, hold_pause, load_held, abort, clear_idle, reset_active, terminal_hold, terminal_abort, back_to_back, random, debug_8bit, debug_24bit, debug_flags, terminal_debug, handoff.

The full matrix uses seeds 1, 42, 123. Each full run includes directed cases and
10000 random core ticks/vectors. Build/run/cov/wave/lint/clean targets follow the
team Makefile format. See ../../README.md for commands and results locations.

Legal outbuf strobes come from observed busy: load/clear only idle, abort either
state, no overlapping commands. Phase alternates only on enabled rising edges.
The integration bench supplies debug ownership/data/flags; it does not instantiate
or verify the debug/controller/top modules.

Invalid TEST/NUM, randomization failure, and watchdog expiration are fatal
stimulus/infrastructure failures. DUT output values are never judged correct.

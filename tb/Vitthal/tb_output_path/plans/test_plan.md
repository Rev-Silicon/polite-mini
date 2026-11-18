# buffer + mux integration: stimulus plan

Self-checking by default (`CHECK=1`), with independent reference comparisons
and fatal mismatches. `CHECK=0` retains coverage-only operation. Scenario
completion and functional bins are reported separately from check results.

| Scenario area | Stimulus and observations |
|---|---|
| Reset | Idle and active reset with enable low/high; sample reset context and actual post-reset state. |
| Load | Both phases, hold low/high, four distinct captured words; no load while busy. |
| Stream data | All 24 observed positions and 16 nibble values using constant-nibble fills plus random cap data. |
| Capture activity | Change cap during streaming; check that the captured stream remains unchanged. |
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

Legal outbuf strobes use reference busy in checked mode (actual busy in coverage-only mode): load/clear only idle, abort either
state, no overlapping commands. Phase alternates only on enabled rising edges.
The integration bench supplies debug ownership/data/flags; it does not instantiate
or verify the debug/controller/top modules.

Invalid TEST/NUM, randomization failure, and watchdog expiration are fatal
stimulus/infrastructure failures. Enabled scoreboard mismatches are fatal DUT-check failures.

The reference queue checks busy, nibble order, capture stability, enable/debug
pauses, abort, reset, and completion. Complete frames are reconstructed from
actual stream data and compared with captured input. Private stored words are
compared against input-derived state so idle clear is observable. Expectations
never use DUT index or memory. Check before and after rising-edge updates, after
falling-edge input changes, and immediately after asynchronous reset settles.

The mux reference consumes the expected buffer stream and external debug/flag
inputs. Compare all eight output bits at each checkpoint, including terminal
handoff and live flag changes. `INJECT=1 TEST=stream_order` must fail at
`OUTPUT_PATH_MISMATCH`.

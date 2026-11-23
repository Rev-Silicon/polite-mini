> Use mostly Constrained Random Verification, as most debug operations and control combinations are easy to hit. Directed tests below.

| Requirement               | Description                                                               | Checking implementation | Implementation status |
| ------------------------- | ------------------------------------------------------------------------- | ----------------------- | --------------------- |
| 8-bit freeze window       | Debug read lasts 4 enabled core ticks, outputs 2 nibbles                  | Scoreboarding           | In progress           |
| 24-bit freeze window      | Debug read lasts 12 enabled core ticks, outputs 6 nibbles                 | Scoreboarding           | In progress           |
| Nibble ordering           | Debug value is output from least significant nibble to most significant   | Scoreboarding           | In progress           |
| Capture stability         | Captured debug value remains unchanged whilst inputs change during freeze | Scoreboarding           | In progress           |
| Enable hold during freeze | Freeze window pauses whilst en = 0, resumes when enabled                  | Scoreboarding/Assertion | In progress           |
| Reset during freeze       | Reset whilst debug read is active, clearing the freeze window             | Scoreboarding/Assertion | In progress           |
| Reset during en = 0       | Reset whilst enable is disabled should still clear state                  | Assertion               | In progress           |
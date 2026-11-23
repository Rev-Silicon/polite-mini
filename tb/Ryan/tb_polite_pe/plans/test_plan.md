> Use mostly Constrained Random Verification, as module is simple and most scenarios are easy to hit. Directed tests below.

| Requirement | Description | Checking implementation |Implementation status |
| :------------------------------- | :------------------------------------------------------------------------------------------------------- | :---------------------- | :-------------------- |
| Positive accumulator overflow | Psum + mul is greater than 24 bit limit, ovf = 1 | Scoreboarding/Assertion | Done |
| Negative accumulator overflow | Psum + mul is less than 24 bit limit, ovf = 1 | Scoreboarding/Assertion | Done |
| Reset during pending acc | Reset whilst acc has a pending product | Scoreboard | Done |
| Reset during en = 0 | Reset whilst enable should still reset registers | Assertion | Done |


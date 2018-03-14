### Exercise 4.24

Our program that distinguished between high pass, pass and fail depended on the
fact that the conditional operator is right associative. Describe how that
operator would be evaluated if the operator were left associative.

### Solution

If the conditional operator was left associative, a nest of conditional
operators would incorrectly evaluate results as input for the next operator,
like

```cpp
string grade = ((grade > 90 ? "high pass" : (grade < 60)) ? "fail" : "pass";
```

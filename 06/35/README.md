### Exercise 6.35

In the call to `fact`, why did we pass `val - 1` rather than `val--`?

### Solution

Because `val` is used more than once in the expression `factorial(val-1) * val`,
and the standard cannot guarantee that the resulting assignment in `val--` would
be performed before or after its multiplication to `val`. That is, if `val` was
originally 5, `factorial(val--) * val` might resolve to `factorial(5) * 4` or
`factorial(5) * 5`. The behavior would be undefined.

### Exercise 4.11

Write an expression that tests four values, `a`, `b`, `c` and `d` and ensures
that `a` is greater than `b`, which is greater than `c`, which is greater than
`d`.

### Solution

```cpp
a > b && b > c && c > d
```

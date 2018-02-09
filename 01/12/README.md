### Exercise 1.12

What does the following `for` loop do? What is the final value of `sum`?

```cpp
int sum = 0;
for (int i = -100; i <= 100; ++i)
    sum += i;
```

### Solution

The loop adds all integers in the range [-100, 100] to `sum`; the final value of
`sum` will be zero.

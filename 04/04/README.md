### Exercise 4.04

Parenthesize the following expression to show how it is evaluated. Test your
answer by compiling the expression (without parentheses) and printing its
result.

```cpp
12 / 3 * 4 + 5 * 15 + 24 % 4 / 2
```

### Solution

```cpp
(((12 / 3) * 4) + ((5 * 15) + ((24 % 4) / 2)))
```

See `4.cc`.

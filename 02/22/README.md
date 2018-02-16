### Exercise 2.22

Assuming `p` is a pointer to `int`, explain the following code:

```cpp
if (p) // ...
if (*p) // ...
```

### Solution

The first `if` statement tests if the value of `p` is not `0`, that is, if it is
a null pointer. The second `if` statement tests if the value `p` points to is
not `0`.

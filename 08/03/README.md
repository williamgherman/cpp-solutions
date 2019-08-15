### Exercise 8.03

What causes the following `while` to terminate?

```cpp
while (cin >> i) /* ... */
```

### Solution

Assuming `i` is an `int`, for example, the `while` could terminate if passed a
non-`int`, like `"foo"`. Otherwise, if the stream returns any other failure,
like end-of-file or failure, then the `while` will terminate.

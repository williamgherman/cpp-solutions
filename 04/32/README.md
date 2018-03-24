### Exercise 4.32

Explain the following loop.

```cpp
constexpr int size = 5;
int ia[size] = {1, 2, 3, 4, 5};
for (int *ptr = ia, ix = 0; ix != size && ptr != ia+size; ++ix, ++ptr)
    ;   /* ... */
```

### Solution

The loop will go through each element of `ia` with `ptr` and retain its
subscript in `ix`.

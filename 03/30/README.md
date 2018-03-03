### Exercise 3.30

Identify the indexing errors in the following code:

```cpp
constexpr size_t array_size = 10;
int ia[array_size];
for (size_t ix = 1; ix <= array_size; ++ix)
    ia[ix] = ix;
```

### Solution

The `for` loop should terminate before attempting to access `ix[10]` which is
out of bounds; that is, `for (size_t ix = 1; ix < array_size; ++ix)`, assuming
the `for` loop will not include `ia[0]`.

### Exercise 12.09

Explain what happens in the following code:

```cpp
int *q = new int(42), *r = new int(100);
r = q;
auto q2 = make_shared<int>(42), r2 = make_shared<int>(100);
r2 = q2;
```

### Solution

After assigning `r` to `q`, the memory `r` originally pointed to cannot be
freed, and memory will leak. Once `r2` is assigned to `q2`, however, the memory
pointed to by `r2` originally will be freed automatically since its pointer
counter has become zero.

### Exercise 3.34

Given that `p1` and `p2` point to elements in the same array, what does the
following code do? Are there values of `p1` or `p2` that make this code illegal?

```cpp
p1 += p2 - p1;
```

### Solution

The code attempts to increment `p1` by the difference between `p2` and `p1`,
therefore assigning `p1` to `p2`. Unless `p2` is an invalid pointer, there is no
value of `p1` or `p2` that could invalidate this code.

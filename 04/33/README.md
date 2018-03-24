### Exercise 4.33

Using Table 4.12 (p. 166) explain what the following expression does:

```cpp
someValue ? ++x, ++y : --x, --y;
```

### Solution

If the boolean-cast value of `someValue` is `true`, then `x` and `y` will be
incremented; otherwise, they will be decremented.

### Exercise 4.09

Explain the behavior of the condition in the following `if`:

```cpp
const char *cp = "Hello World";
if (cp && *cp)
```

### Solution

The condition in the `if` statement will be `true` if the pointer `cp` does not
point to `NULL` and if the value it points to is not zero (i.e., the null
character). Given that `cp` points to `'H'` in `"Hello World"`, the conditions
have been met.

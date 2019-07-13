### Exercise 6.34

What would happen if the stopping condition in `factorial` were
```cpp
if (val != 0)
```

### Solution

If this were the case, then a negative integer passed to `factorial` would
result in an infinite loop rather than immediately returning 1.

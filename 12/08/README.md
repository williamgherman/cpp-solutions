### Exercise 12.08

Explain what, if anything, is wrong with the following function:

```cpp
bool b() {
    int *p = new int;
    // ...
    return p;
}
```

### Solution

The return type does not match the actual value returned. The function expects a
`bool` to be returned but receives a dynamically-allocated pointer to `int`. On
top of that, the pointer goes out of scope before it is freed, so the program
will leak memory (especially from this `int` to `bool` conversion).

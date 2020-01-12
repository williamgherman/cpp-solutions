### Exercise 14.50

Show the possible class-type conversion sequences for the initializations of
`ex1` and `ex2`. Explain whether the initializations are legal or not.

```cpp
struct LongDouble {
    LongDouble(double = 0.0);
    operator double();
    operator float();
};
LongDouble ldObj;
int ex1 = ldObj;
float ex2 = ldObj;
```

### Solution

For `ex1`, `ldObj` may be implicitly converted to either `double` or `float`
before being converted to `int`; therefore, the call is ambiguous and illegal.
For `ex2`, there is an exact match to `float`, so `ldObj` will call that
operator legally.

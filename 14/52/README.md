### Exercise 14.52

Which `operator+`, if any, is selected for each of the addition expressions?
List the candidate functions, the viable functions, and the type conversions on
the  arguments for each viable function:

```cpp
struct LongDouble {
    LongDouble operator+(const SmallInt &); // illustration purposes only
    // other members as in section 14.9.2
};
LongDouble operator+(LongDouble &, double);
SmallInt si;
LongDouble ld;
ld = si + ld;
ld = ld + si;
```

### Solution

`operator+(LongDouble(double(int(si))), double(ld))` and
`LongDouble(double(int(si))).operator+(SmallInt(int(double(ld))))` are both
equally viable functions for `ld = si + ld`, therefore ambiguous.

For `ld = ld + si`, although both `operator+`s are candidate functions,
`ld.operator+(si)` is an exact match and is the only viable function call.

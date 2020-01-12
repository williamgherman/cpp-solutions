### Exercise 14.51

Show the conversion sequences (if any) needed to call each version of `calc` and
explain why the best viable function is selected.

```cpp
void calc(int);
void calc(LongDouble);
double dval;
calc(dval); // which calc?
```

### Solution

`calc(int(dval))` or `calc(LongDouble(dval))` are viable function calls and
therefore ambiguous.

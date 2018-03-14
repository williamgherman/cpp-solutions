### Exercise 4.15

The following assignment is illegal. Why? How would you correct it?

```cpp
double dval; int ival; int *pi;
dval = ival = pi = 0;
```

### Solution

A pointer value cannot be assigned to a non-pointer type. One fix, assigning all
values to `0` in one statement could be:

```cpp
pi = ival = dval = 0;
```

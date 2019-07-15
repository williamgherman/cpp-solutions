### Exercise 6.39

Explain the effect of the second declaration in each of the following sets of
declarations. Indicate which, if any, are legal.

(a)
```cpp
int calc(int, int);
int calc(const int, const int);
```

(b)
```cpp
int get();
double get();
```

(c)
```cpp
int *reset(int *);
double *reset(double *);
```

### Solution

(a) declares the same function twice, legally. (b)'s second definition will be
in error as only the return types differ. (c) will acceptably declare both
functions, legally.

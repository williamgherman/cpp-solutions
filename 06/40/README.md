### Exercise 6.40

Which, if either, of the following declarations are errors?

(a)
```cpp
int ff(int a, int b = 0, int c = 0);
```

(b)
```cpp
char *init(int ht = 24, int wd, char bckgrnd);
```

### Solution

(b) is an error, because all parameters after the first default argument
parameter must also be default argument parameters.

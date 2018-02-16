### Exercise 2.21

Explain each of the following definitions. Indicate whether any are illegal and,
if so, why.

```cpp
int i = 0;
```

(a) `double* dp = &i;`  
(b) `int *ip = i;`  
(c) `int *p = &i;`

### Solution

(a) is illegal because it attempts to assign a pointer to a double to the
address of an integer.  
(b) is illegal because it attempts to assign a pointer to an integer to an
integer variable.  
(c) is legal.

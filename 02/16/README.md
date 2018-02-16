### Exercise 2.16

Which, if any, of the following assignments are invalid? If they are valid,
explain what they do.

```cpp
int i = 0, &r1 = i; double d = 0, &r2 = d;
```

(a) `r2 = 3.14159;`  
(b) `r2 = r1;`  
(c) `i = r2;`  
(d) `r1 = d;`

### Solution

(a) is valid and will assign `d` the value `3.14159`.  
(b) is not valid because references cannot be rebound.  
(c) is valid and will assign `i` the casted value of `d`, `0`.  
(d) is not valid because references cannot be rebound.

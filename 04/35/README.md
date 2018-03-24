### Exercise 4.35

Given the following definitions,

```cpp
char cval;      int ival;       unsigned int ui;
float fval;     double dval;
```

identify the implicit type conversions, if any, taking place:

(a) `cval = 'a' + 3;`  
(b) `fval = ui - ival * 1.0;`  
(c) `dval = ui * fval;`  
(d) `cval = ival + fval + dval;`

### Solution

(a) `'a'` promoted to `int`, sum converted to `char`.  
(b) `ival` converted to `double`, `ui` converted to `double`, result converted
to `float`.  
(c) `ui` converted to `float`, product converted to `double`.  
(d) `ival` converted to `float`, partial sum converted to `double`, sum
truncated to `char`.

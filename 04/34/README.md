### Exercise 4.34

Given the variable definitions in this section, explain what conversions take
place in the following expressions:

(a) `if (fval)`  
(b) `dval = fval + ival;`  
(c) `dval + ival * cval;`

### Solution

(a) `fval` is converted to `bool`.  
(b) `ival` is converted to `float`; the sum of `fval` and `ival` is promoted to
`double`.  
(c) `cval` is promoted to `int`; the product of `ival` and `cval` is converted
to `double`.

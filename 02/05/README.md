### Exercise 2.05

Determine the type of each of the following literals. Explain the differences
among the literals in each of the four examples:

(a) `'a'`, `L'a'`, `"a"`, `L"a"`  
(b) `10`, `10u`, `10L`, `10uL`, `012`, `0xC`  
(c) `3.14`, `3.14f`, `3.14L`  
(d) `10`, `10u`, `10.`, `10e-2`

### Solution

(a) `char`, `wchar_t`, `char[]`, `wchar_t[]`  
(b) `int`, `unsigned int`, `long int`, `unsigned long int`, `int`, `int`  
(c) `double`, `float`, `long double`  
(d) `int`, `unsigned int`, `double`, `double`

Values in the exercise are essentially the same except for the different formats
(e.g., octal and hex in part (b)).

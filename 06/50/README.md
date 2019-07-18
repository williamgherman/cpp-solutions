### Exercise 6.50

Given the declarations for `f` from page 242, list the viable functions, if any,
for each of the following calls. Indicate which function is the best match or
why the call is ambiguous.

> Declarations from page 242:

```cpp
void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);
```

(a) `f(2.56, 42)`  
(b) `f(42)`  
(c) `f(42, 0)`  
(d) `f(2.56, 3.14)`

### Solution

(a) is an ambiguous call and will be rejected because there are two functions
that could cast its parameters (`f(double, double)` and `f(int,int)`). (b) will
call `f(int)`, although `f(double, double)` is viable due to its default
argument. `f(int)` is chosen because its type exactly matches. (c) will call
`f(int, int)`, although again `f(double, double)` is also viable. (d) will call
`f(double, double)`, although `f(int, int) is also viable.

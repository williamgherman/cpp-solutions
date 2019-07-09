### Exercise 6.2

Indicate which of the following functions are in error and why. Suggest how you
might correct the problems.

(a)
```cpp
int f() {
    string s;
    // ...
    return s;
}
```
(b) `f2(int i) { /* ... */ }`
(c) `int calc(int v1, int v1) { /* ... */ }`
(d) `double square(double x) return x * x;`

### Solution

(a) incorrectly returns a `string` while the compiler expects to return an
`int` and could be fixed by changing the function's return type. (b) has no
return type, which must be declared with the return type `void`. (c) has two
parameters of the same name, which is illegal; its second parameter must be
renamed. (d) incorrectly defines `square` within its declarator statement and
must be enclosed in braces: `double square(double x) { return x * x; }`.

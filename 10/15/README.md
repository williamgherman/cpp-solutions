### Exercise 10.15

Write a lambda that captures an `int` from its enclosing function and takes an
`int` parameter. The lambda should return the sum of the captured `int` and the
`int` parameter.

### Solution

```cpp
int i = 100;
[i](const int &j) { return i + j; }
```

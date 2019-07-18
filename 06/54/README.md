### Exercise 6.54

Write a declaration for a function that takes two `int` parameters and returns
an `int`, and declare a `vector` whose elements have this function pointer type.

### Solution

```cpp
int f(int, int);
std::vector<int (*)(int, int)> vec; 
```

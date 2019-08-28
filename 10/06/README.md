### Exercise 10.06

Using `fill_n`, write a program to set a sequence of `int` values to 0.

### Solution

```cpp
std::vector<int> v{1,2,3,4,5,6,7,8,9};
std::fill_n(v.begin(), v.size(), 0);
```

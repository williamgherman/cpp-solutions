### Exercise 16.07

Write a `constexpr` template that returns the size of a given array.

### Solution

```cpp
template <typename T, size_t M>
constexpr size_t length(T (&array)[M])
{
    return M;
}
```

### Exercise 6.21

Write a function that takes an `int` and a pointer to an `int` and returns the
larger of the `int` value or the value to which the pointer points. What type
should you use for the pointer?

### Solution

```cpp
int larger(const int &i, const int *const j)
{
    return (i > *j) ? i : j;
}
```

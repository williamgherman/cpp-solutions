### Exercise 6.38

Revise the `arrPtr` function to return a reference to the array.

### Solution

```cpp
decltype(odd) &arrPtr(int i)
{
    return (i % 2) ? odd : even
}
```

### Exercise 9.04

Write a function that takes a pair of iterators to a `vector<int>` and an `int`
value. Look for that value in the range and return a `bool` indicating whether
it was found.

### Solution

```cpp
bool contains(std::vector<int>::const_iterator b,
              std::vector<int>::const_iterator e,
              int value)
{
    while (b != e) {
        if (*b == value)
            return true;
        b++;
    }
    return false;
}
```

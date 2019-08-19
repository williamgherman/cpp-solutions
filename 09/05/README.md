### Exercise 9.05

Rewrite the previous program to return an iterator to the requested element.
Note that the program must handle the clase where the element is not found.

### Solution

```cpp
std::vector<int>::const_iterator contains(std::vector<int>::const_iterator b,
                                    std::vector<int>::const_iterator e,
                                    int value);
{
    while (b != e) {
        if (*b == value)
            return b;
    }
    return e;
}
```

### Exercise 6.05

Write a function to return the absolute value of its argument.

### Solution

```cpp
int abs(int val)
{
    if (val < 1)
        return -val;
    return val;
}
```

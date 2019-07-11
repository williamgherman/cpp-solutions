### Exercise 6.07

Write a function that returns 0 when it is first called and then generates
numbers in sequence each time it is called again.

### Solution

```cpp
int callNo(void)
{
    static int call = 0;
    return call++;
}
```

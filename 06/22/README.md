### Exercise 6.22

Write a function to swap two `int` pointers.

### Solution

```cpp
void swap(int *i, int *j)
{
    int *temp = i;
    i = j;
    j = i;
}
```

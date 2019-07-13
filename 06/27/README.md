### Exercise 6.27

Write a function that takes an `initializer_list<int>` and produces the sum of
the elements in the list.

### Solution

```cpp
int sum(std::initializer_list<int> il)
{
    int total = 0;
    for (auto beg = il.begin(); beg != il.end(); ++beg)
        total += *beg;
    return total;
}
```

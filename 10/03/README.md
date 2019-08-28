### Exercise 10.03

Use `accumulate` to sum the elements in a `vector<int>`

### Solution

```cpp
int sum(const std::vector<int> &v)
{
    return accumulate(v.cbegin(), v.cend(), 0);
}
```

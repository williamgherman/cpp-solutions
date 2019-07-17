### Exercise 6.44

Rewrite the `isShorter` function from &sect; 6.2.2 to be `inline`.

### Solution

```cpp
inline bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}
```

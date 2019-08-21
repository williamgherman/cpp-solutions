### Exercise 9.22

Assuming `iv` is a `vector` of `int`s, what is wrong with the following program?
How might you correct the problems?

```cpp
vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size()/2;
while (iter != mid)
    if (*iter == some_val)
        iv.insert(iter, 2 * some_val);
```

### Solution

`iter` is never incremented, so the `while` will be run indefinitely. `iter`
will also be invalid after each insert.

```cpp
std::vector<int>::iterator getmid()
{
    return iv.begin() + iv.size()/2;
}
std::vector<int>::iterator iter = iv.begin();
while (iter != getmid()) {
    if (*iter == some_val) {
        iter = iv.insert(iter, 2 * some_val);
        iter++;
    }
    iter++;
}
```

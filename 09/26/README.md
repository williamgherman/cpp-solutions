### Exercise 9.26

Using the following definition of `ia`, copy `ia` into a `vector` and into a
`list`. Use the single-iterator form of `erase` to remove the elements with odd
values from your `list` and the even values from your `vector`.

```cpp
int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
```

### Solution

```cpp
std::vector<int> v;
std::list<int> l;

for (auto &i : ia) {
    v.push_back(i);
    l.push_back(i);
}

for (auto it = v.begin(); it != v.end();) {
    if (*it % 2 == 0)
        it = v.erase(it);
    else
        ++it;

}
for (auto it = l.begin(); it != l.end();) {
    if (*it % 2 == 1)
        it = l.erase(it);
    else
        ++it;
}
```

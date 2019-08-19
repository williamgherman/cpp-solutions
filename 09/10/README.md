### Exercise 9.10

What are the types of the following four objects?

```cpp
vector<int> v1;
const vector<int> v2;
auto it1 = v1.begin(), it2 = v2.begin();
auto it3 = v1.cbegin(), it4 = v2.cbegin();
```

### Solution

`it1` is a `std::vector<int>::iterator`, and `it2` through `it4` are
`std::vector<int>::const_iterator`s

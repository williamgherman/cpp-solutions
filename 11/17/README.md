### Exercise 11.17

Assuming `c` is a `multiset` of `string`s and `v` is a `vector` of `string`s,
explain the following calls. Indicate whether each call is legal:

```cpp
copy(v.begin(), v.end(), inserter(c, c.end()));
copy(v.begin(), v.end(), back_inserter(c));
copy(c.begin(), c.end(), inserter(v, v.end()));
copy(c.begin(), c.end(), back_inserter(v));
```

### Solution

The first call copies each element from `v` into `c`. The second call attempts
to use `push_back`, which is illegal and undefined for `set`.

The third and fourth calls copy `c` into `v` in reverse alphabetical order.

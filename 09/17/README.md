### Exercise 9.17

Assuming `c1` and `c2` are containers, what (if any) constraints does the
following usage place on the types of `c1` and `c2`?

```cpp
if (c1 < c2)
```

### Solution

They must be the same type of container with the same type of elements. Those
elements must support the `<` relational operation. The container cannot be an
unordered associate container (`unordered_set`, `unordered_map`,
`unordered_multiset`, `unordered_multimap`).

### Exercise 7.51

Why do you think `vector` defines its single-argument constructor as `explicit`,
but `string` does not?

### Solution

Because `string` has historical ties with the C-style string, backwards
compatibility allows implicit conversion from `const char *` and `string`,
therefore an `explicit` constructor for `string` would be cumbersome. On the
other hand, a `vector` constructed only by its size wouldn't make sense if
implicitly passed to another function:

```cpp
getSizeOfVector(const std::vector<int>&);
getSizeOfVector(13); // ???
```

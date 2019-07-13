### Exercise 6.16

The following function, although legal, is less useful than it might be.
Identify and correct the limitation on this function:

```cpp
bool is_empty(string &s) { return s.empty(); }
```

### Solution

Because the function's parameter is a plain reference and not a reference to
`const`, a `string` literal cannot be passed to the function. That is,
`is_empty("test")` is invalid. This can be arranged by making the `s` parameter
a reference to `const`:

```cpp
bool is_empty(const string &s) { return s.empty(); }
```

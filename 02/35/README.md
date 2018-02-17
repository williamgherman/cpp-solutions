### Exercise 2.35

Determine te types deduced in each of the following definitions. Once you've
figured out the types, write a program to see whether you were correct.

```cpp
const int i = 42;
auto j = i; 
const auto &k = i;
auto *p = &i;
const auto j2 = i, &k2 = i;
```

### Solution

`j` is an `int`.  
`k` is a `const` reference to an `int`, bound to `i`.  
`p` is a pointer to a `const int`, pointing to `i`.  
`j2` is a `const int`, and `k2` is a `const` reference to an `int`, bound to
`i`.

One solution to determine the types of variables (which has not yet been
discussed) is to use the `typeid().name()` function from the `<typeinfo>`
header. See `35.cc`.

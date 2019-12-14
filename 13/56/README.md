### Exercise 13.56

What would happen if we defined `sorted` as:

```cpp
Foo Foo::sorted() const & {
    Foo ret(*this);
    return ret.sorted();
}
```

### Solution

First `ret` would be created, then `sorted` would be called again on `ret`,
which is also an lvalue, so it would certainly call `sorted() const &`. This
would result in infinite recursion and program failure.

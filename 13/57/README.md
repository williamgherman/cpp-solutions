### Exercise 13.57

What if we defined `sorted` as:

```cpp
Foo Foo::sorted() const & { return Foo(*this).sorted(); }
```

### Solution

This would actually call the rvalue version of sorted because `Foo(*this)` is an
rvalue.

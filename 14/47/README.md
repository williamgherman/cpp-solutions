### Exercise 14.47

Explain the difference between these two conversion operators:

```cpp
struct Integral {
    operator const int();
    operator int() const;
};
```

### Solution

The first is a conversion operator to a `const int`, while the second is a
conversion operator to a regular `int` which is a `const` method.

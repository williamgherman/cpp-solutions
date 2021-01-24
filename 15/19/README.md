### Exercise 15.19

Assume that each of the classes from page 612 and page 613 has a member function
of the form:

```cpp
void memfcn(Base &b) { b = *this; }
```

For each class, determine whether this function would be legal.

### Solution

All would be legal except for `Derived_from_Private`, because `Base` would not
be accessible.

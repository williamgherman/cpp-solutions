### Exercise 7.43

Assume we have a class named `NoDefault` that has a constructor that takes an
`int` but has no default constructor. Define a class `C` that has a member of
type `NoDefault`. Define the default constructor for `C`.

### Solution

```cpp
struct C {
    NoDefault mymember;
    C(): mymember(0) { }
};
```

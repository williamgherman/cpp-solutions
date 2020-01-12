### Exercise 14.53

Given the definition of `SmallInt` on page 588, determine whether the following
addition expression is legal. If so, what addition operator is used? If not, how
might you change the code to make it legal?

```cpp
SmallInt s1;
double d = s1 + 3.14;
```

### Solution

Because `s1` defines an `operator int()`, the built-in addition operator as well
as the `SmallInt` version of `operator+` may be used; therefore the call is
ambiguous and illegal. To fix this without editing the `SmallInt` class, an
explicit call to one operator may be used:

```cpp
double d = operator+(double(s1), 3.14);
```

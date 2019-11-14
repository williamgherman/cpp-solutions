### Exercise 13.02

Explain why the following declaration is illegal:

```cpp
Sales_data::Sales_data(Sales_data rhs)
```

### Solution

This incorrectly attempts to make a copy constructor that will loop and call
itself indefinitely. The `rhs` argument must be a reference.

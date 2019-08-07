### Exercise 7.38

We might want to supply `cin` as a default argument to the constructor that
takes an `istream&`. Write the constructor declaration that uses `cin` as a
default argument.

### Solution

```cpp
Sales_data(std::istream &is = std::cin) { read(is, *this); }
```

### Exercise 14.02

Write declarations for the overloaded input, output, addition and
compound-assignment operators for `Sales_data`.

### Solution

```cpp
std::istream &operator>>(Sales_data &, std::istream &);
std::ostream &operator<<(std::ostream &, const Sales_data &);
Sales_data operator+(const Sales_data &, const Sales_data &);
Sales_data operator+=(Sales_data &, const Sales_data &);
```

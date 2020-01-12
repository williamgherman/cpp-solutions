### Exercise 14.45

Write conversion operators to convert a `Sales_data` to `string` and to
`double`. What values do you think these operators should return?

### Solution

```cpp
explicit operator std::string() const { return bookNo; }
explicit operator double const { return avg_price(); }
```

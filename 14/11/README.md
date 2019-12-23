### Exercise 14.11

What, if anything, is wrong with the following `Sales_data` input operator? What
would happen if we gave this operator the data in the previous exercise?

```cpp
istream &operator>>(istream &in, Sales_data &s)
{
    double price;
    in >> s.bookNo >> s.units_sold >> price;
    s.revenue = s.units_sold * price;
    return in;
}
```

### Solution

Because the operator does not check for failure of input, if we tried to input
an ISBN `string` to `price`, that `Sales_data` would be partially undefined and
prone to further errors.

### Exercise 14.21

Write the `Sales_data` operators so that `+` does the actual addition and calls
`+=` calls `+`. Discuss the disadvantages of this approached compared to the way
these operators were defined in &sect;&sect; 14.3 and 14.4.

### Solution

```cpp
Sales_data operator+(const Sales_data &lhs, const Sales_Data &rhs)
{
    Sales_data ret = lhs;
    ret.revenue += rhs.revenue;
    ret.units_sold += rhs.units_sold;
    return ret;
}

Sales_data::Sales_data &operator+=(const Sales_data &rhs)
{
    Sales_data lhs = *this;
    *this = lhs + rhs;
    return *this;
}
```

This approach needlessly makes a copy of the `this` object within `+=`.

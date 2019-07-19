### Exercise 7.02

Add the `combine` and `isbn` members to the `Sales_data` class you wrote for the
exercises in &sect; 2.6.2.

### Solution

```cpp
struct Sales_data {
    std::string bookNo = "";
    unsigned int units_sold = 0;
    double revenue = 0.0;
    Sales_data& combine(const Sales_data &);
    std::string isbn() const { return bookNo; }
};

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}
```

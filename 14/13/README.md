### Exercise 14.13

Which other arithmetic operators, if any, do you think `Sales_data` ought to
support? Define any you think the class should include.

### Solution

A subtraction operator may be useful, although it would also require the
implementation of a `-=` operator:

```cpp
Sales_data operator-(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data ret = lhs;
    ret -= rhs;
    return ret;
}
```

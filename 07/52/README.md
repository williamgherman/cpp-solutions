### Exercise 7.52

Using our first version of `Sales_data` from &sect; 2.6.1, explain the following
initialization. Identify and fix any problems.

```cpp
Sales_data item = {"978-0590353403", 25, 15.99};
```

### Solution

The first version of `Sales_data` has in-class initializers, which are not
allowed in an aggregate class. A fixed version of the class would be:

```cpp
struct Sales_data {
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};
```

Otherwise, this initiialization would initialize `bookNo`, `units_sold` and
`revenue` respectively.

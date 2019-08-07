### Exercise 7.37

Using the version of `Sales_data` from this section, determine which constructor
is used to initialize each of the following variables, and list the values of
the data members in each object:

```cpp
Sales_data first_item(cin);

int main() {
    Sales_data next;
    Sales_data last("9-999-99999-9");
}
```

### Solution

`first_item` uses the `Sales_data(std::istream &)` constructor, which will
initialize its members from the `string`s passed from `std::cin`. `next` uses
the `Sales_data(std::string s = "")` constructor, using the optional empty
`string` parameter as `bookNo`, and will initialize `units_sold` and `revenue`
as `0`. `last` uses the same constructor with the same process, although
`bookNo` will be the string `9-999-99999-9`.

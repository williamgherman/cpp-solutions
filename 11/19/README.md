### Exercise 11.19

Define a variable that you initialize by calling `begin()` on the `multiset`
named `bookstore` from &sect; 11.2.2. Write the variable's type without using
`auto` or `decltype`.

### Solution

```cpp
std::multiset<Sales_data, bool(*)(const Sales_data &, const Sales_data &>::iterator
    first_book = bookstore.begin();
```

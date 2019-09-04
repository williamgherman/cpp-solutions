### Exercise 11.11

Redefine `bookstore` without using `decltype`.

### Solution

```cpp
std::multiset<Sales_data, bool(*)(const Sales_data &, const Sales_data &)>
    bookstore(compareIsbn);
```

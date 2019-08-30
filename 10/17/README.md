### Exercise 10.17

Rewrite exercise 10.12 from &sect; 10.3.1 to use a lambda in the call to `sort`
instead of the `compareIsbn` function.

### Solution

```cpp
std::vector<Sales_data> v;
/* fill vector with Sales_datas */

std::sort(v.begin(), v.end(), 
         [](const Sales_data &book1, const Sales_data &book2)
           { return book1.isbn() < book2.isbn(); });
```

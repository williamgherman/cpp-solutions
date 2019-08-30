### Exercise 10.12

Write a function named `compareIsbn` that compares the `isbn()` members of two
`Sales_data` objects. Use that function to `sort` a `vector` that holds
`Sales_data` objects.

### Solution

```cpp
bool compareIsbn(const Sales_data &book1, const Sales_data &book2)
{
    return book1.isbn() < book2.isbn();
}

std::vector<Sales_data> v;
/* fill vector with Sales_datas */

std::sort(v.begin(), v.end(), compareIsbn);
```

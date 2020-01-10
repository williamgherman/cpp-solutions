### Exercise 14.22

Define a version of the assignment operator that can assign a `string`
representing an `ISBN` to a `Sales_data`.

### Solution

```cpp
Sales_data &Sales_data::operator=(const std::string &num)
{
    *this = Sales_Data(num);
    return *this;
}
```

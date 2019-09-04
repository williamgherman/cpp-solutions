### Exercise 11.22

Given a `map<string, vector<int>>`, write the types used as an argument and as
the return value for the veresion of `insert` that inserts one element.

### Solution

```cpp
std::map<std::string, std::vector<int>>::iterator insert( // return type
    std::pair<std::string, std::vector<int>> element);    // argument
```

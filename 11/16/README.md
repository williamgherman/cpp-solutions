### Exercise 11.16

Using a `map` iterator write an expression that assigns a value to an element.

### Solution

```cpp
std::map<std::string, std::string> dictionary{{"apple", ""}};
auto map_it = dictionary.begin();
map_it->second = "(n) A red fruit grown from apple trees";
```

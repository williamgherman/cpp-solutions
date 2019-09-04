### Exercise 11.28

Define an initialize a variable to hold the result of calling `find` on ` map`
from `string` to `vector` if `int`.

### Solution

```cpp
std::map<std::string, std::vector<int> m;

std::map<std::string, std::vector<int>>::iterator it = m.find("username");
```

### Exercise 14.35

Write a class like `PrintString` that reads a line of input from an `istream`
and returns a `string` representing what was read. If the read fails, return the
empty `string`.

### Solution

```cpp
class ReadString {
public:
    std::string operator()(std::istream &in = std::cin) {
        std::string ret;
        std::getline(in, ret);
        return in ? ret : "";
    }
};
```

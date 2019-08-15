### Exercise 8.01

Write a function that takes and returns an `istream&`. The function should read
the stream until it hits end-of-file. The function should print what it reads to
the standard output. Reset the stream so that it is valid before returning the
stream.

### Solution

```cpp
std::istream &inOut(std::istream &is)
{
    std::string line;
    while (is >> line)
        std::cout << line << std::endl;
    is.clear();
    return is;
}
```

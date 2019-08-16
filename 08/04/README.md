### Exercise 8.04

Write a function to open a file for input and read its contents into a `vector`
of `string`s, storing each line as a separate element in the `vector`.

### Solution

```cpp
std::vector<std::string> getlines(const std::string &filename)
{
    std::ifstream in(filename);
    std::vector<std::string> lines;
    std::string line;
    if (in) {
        while (std::getline(in, line)) {
            lines.push_back(line);
        }
    } else {
        std::cerr << "Failed to open \"" << filename << "\"." << std::endl;
    }
    return lines;
}
```


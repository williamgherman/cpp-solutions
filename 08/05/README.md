### Exercise 8.05

Rewrite the previous program to store each word in a separate element.

### Solution

```cpp
std::vector<std::string> getwords(const std::string &filename)
{
    std::ifstream in(filename);
    std::vector<std::string> words;
    std::string word;
    if (in) {
        while (in >> word) {
            lines.push_back(word);
        }
    } else {
        std::cerr << "Failed to open \"" << filename << "\"." << std::endl;
    }
    return lines;
}
```


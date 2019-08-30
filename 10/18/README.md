### Exercise 10.18

Rewrite `biggies` to use `partition` instead of `find_if`. We described
`partition` in exercise 10.13 in &sect; 10.3.1.

### Solution

```cpp
void biggies(std::vector<std::string> &words,
             std::vector<std::string>::size_type sz)
{
    elimDups(words);
    std::stable_sort(words.begin(), words.end(),
                     [](const std::string &a, const std::string &b)
                       { return a.size() < b.size(); });
    auto wc = std::partition(words.begin(), words.end(),
                             [sz](const std::string &a)
                                 { return a.size() >= sz; });
    auto count = words.end() - wc;
    std::cout << count << " " << make_plural(count, "word", "s")
              << " of length " << sz << " or longer" << std::endl;
    std::for_each(wc, words.end(), [](const std::string &s) 
                                     { std::cout << s << " "; });
    std;:cout << std::endl;
}
```

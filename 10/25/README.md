### Exercise 10.25

In the exercises in &sect; 10.3.2 you wrote a version of `biggies` that uses
`partition`. Rewrite that function to use `check_size` and `bind`.

### Solution

```cpp
bool check_size(const std::string &s, std::string::size_type sz)
{
    return s.size() >= sz;
}

void biggies(std::vector<std::string> &words,
             std::vector<std::string>::size_type sz)
{
    elimDups(words);
    auto wc = std::partition(words.begin(), words.end(), 
                             std::bind(check_size,_1, sz));
    auto count = words.end() - wc;
    std::cout << count << " " << make_plural(count, "word", "s")
              << " of length " << sz << " or longer" << std::endl;
    std::for_each(wc, words.end(), [](const std::string &s) 
                                     { std::cout << s << " "; });
    std;:cout << std::endl;
}
```

### Exercise 14.40

Rewrite the `biggies` function from &sect; 10.3.2 to use function-object classes
in place of lambdas.

### Solution

```cpp
struct Smaller {
    bool operator()(const std::string &a, const std::string &b) const
        { return a.size() < b.size(); }
};

struct BigEnough {
    BigEnough(std::vector<std::string>::size_type sz): size(sz) { }
    bool operator()(const std::string &a) const
        { return a.size() >= size; }
};

struct PrintString {
    void operator()(const std::string &s)
        { std::cout << s << " "; }
};


void biggies(std::vector<std::string> &words,
             std::vector<std::string>::size_type sz)
{
    elimDups(words); // sorts alphabetically, removes duplicates
    std::stable_sort(words.begin(), words.end(), Smaller());
    auto wc = std::find_if(words.begin(), words.end(), BigEnough(sz));
    auto count = words.end() - wc;
    std::cout << count << " " << make_plural(count, "word", "s")
              << " of length " << sz << " or longer" << std::endl;
    std::for_each(wc, words.end(), PrintString());
    std::cout << std::endl;
}
```

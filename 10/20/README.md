### Exercise 10.20

The library defines an algorithm named `count_if`. Like `find_if`, this function
takes a pair of itertors denoting an input range and a predicate that it applies
to each element in the given range. `count_if` returns a count of how often the
predicate is true. Use `count_if` to rewrite the portion of our program that
counted how many words are greater than length 6.

### Solution

Note: My solution is generalized to any value of `sz`. To make it specific for
length 6, remove the `sz` capture and replace the `return` with `return
a.size() >= 6`.

```cpp
auto count = std::count_if(words.begin(), words.end(),
                           [sz](const std::string &s)
                               { return a.size() >= sz; });
```

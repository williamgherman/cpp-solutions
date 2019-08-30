### Exercise 10.13

The library defines an algorithm named `partition` that takes a predicate and
partitions the container so that values for which the predicate is `true` appear
in the first part and those for which the predicate is `false` appear in the
second part. The algorithm returns an iterator just past the last element for
which the predicate returned `true`. Write a function that takes a `string` and
returns a `bool` indicating whether the `string` has five characters or more.
Use that function to partition `words`. Print the elements that have five or
more characters.

### Solution

```cpp
bool hasfive(const std::string &s)
{
    return s.size() >= 5;
}

std::vector<std::string> words{"the", "quick", "brown", "fox", "jumped",
                               "over", "the", "lazy", "red", "turtle"};
auto pastfive = std::partition(words.begin(), words.end(), hasfive);
for (auto it = words.begin(); it != pastfive; it++)
    std::cout << *it << " ";
std::cout << std::endl;
```

### Exercise 9.12

Explain the differences between the constructor that takes a container to copy
and the constructor that takes two iterators.

### Solution

The constructor that takes a container must have the same type of container and
value types. The second constructor which takes two iterators does not have this
constraint, as long as the value types can convert to the new type. For example,

```cpp
std::vector<const char *> words1 = {"Hello,", "world", "!"};
std::list<std::string> words2(words1.begin(), words1.end()); // OK!
std::list<std::string> words3(words1);                       // Illegal!
```

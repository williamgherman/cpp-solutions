### Exercise 9.42

Given that you want to read a character at a time into a `string`, and you know
that you need to read at least 100 characters, how might you improve the
performance of your program?

### Solution

Reserve more than 100 elements in the `string` prior to reading characters:

```cpp
std::string s;
s.reserve(128);
// process...
```

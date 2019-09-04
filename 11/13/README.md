### Exercise 11.13

There are at least three ways to create the `pair`s in the program for the
previous exercise. Write three versions of that program, creating the `pair`s in
each way. Explain which form you think is easiest to write and understand, and
why.

### Solution

```cpp
pairs.push_back({word, i}); // original implementation
pairs.push_back(std::make_pair(word, i));
pairs.push_back(std::pair<std::string, int>(word, i));
```

Although I prefer the first method for its succinct quality, the `make_pair`
method is also adequate. The verbose `pair` method would be probably too
cumbersome for most programmers except for novices or those completely
unfamiliar to the C++11 standard.

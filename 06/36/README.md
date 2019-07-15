### Exercise 6.36

Write the declaration for a function that returns a reference to an array of ten
`string`s, without using either a trailing return, `decltype`, or a type alias.

### Solution

```cpp
std::string (&f())[10];
```

### Exercise 6.46

Would it be possible to define `isShorter as a `constexpr`? If so, do so. If
not, explain why not.

### Solution

Since the `std::string::size()` member is not a constant expression as well as
`s1.size() == s2.size()`, `isShorter` cannot be defined as a `constexpr`
function.

### Exercise 9.48

Given the definitions of `name` and `numbers` on page 365, what does
`numbers.find(name)` return?

### Solution

It should return `std::string::npos` because there is no match in `numbers` for
the `string` `"AnnaBelle"`.

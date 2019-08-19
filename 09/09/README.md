### Exercise 9.09

What is the difference between the `begin` and `cbegin` functions?

### Solution

`cbegin` will always return a `const_iterator` type, while `begin` will only
return a `const_iterator` if the container is `const`, otherwise it will return
a regular `iterator`.

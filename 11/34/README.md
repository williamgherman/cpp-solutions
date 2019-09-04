### Exercise 11.34

What would happen if we used the subscript operator instead of `find` in the
`transform` function?

### Solution

The subscript operator would unconditionally add an element like `{"example",
""}`, leading to the entire program substituting every word with the empty
string.

### Exercise 9.08

What type should be used to read elements in a `list` of `string`s? To write
them?

### Solution

`std::list<std::string>::const_iterator` is sufficient for reading, but
`std::list<std::string>::iterator` is necessary for writing.

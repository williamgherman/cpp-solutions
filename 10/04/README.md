### Exercise 10.04

Assuming `v` is a `vector<double>`, what, if anything, is wrong with calling
`accumulate(v.cbegin(), v.cend(), 0)`?

### Solution

The function call will truncate the `double`s in the `vector` to `int`s becaause
the accumulator is an integer.

### Exercise 10.24

Use `bind` and `check_size` to find the first element in a `vector` of `int`s
that has a value greater than the length of a specified `string` value.


### Solution

See `24.cc`. Note my program uses a previously undiscussed algorithm:
`find_if_not`, to preserve the original `check_size` function. Otherwise,
`find_if` could be used if the `check_size` function was altered to compare
`s.size() < sz`.

### Exercise 2.01

What are the differences between `int`, `long`, `long long` and `short`? Between
an unsigned and a signed type? Between a `float` and a `double`?

### Solution

A `short` and an `int` are guaranteed to be at least 16 bytes each, while a
`long` and a `long long` are guaranteed to be at least 32 and 64 bytes long,
respectively. An `int` on machines accepting 64-bit integers are usually 32
bits. An unsigned type removes the sign bit, allowing for only nonnegative
values, while a signed type has a sign bit to allow for negative values. A
`float` has minimum 6 significant figures while a `double` has 10 minimum.

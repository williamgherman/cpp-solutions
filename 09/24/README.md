### Exercise 9.24

Write a program that fetches the first element in a `vector` using `at`, the
subscript operator, `front` and `begin`. Test your program on an empty `vector`.

### Solution

See `24.cc`. Using `at`, the program failed with an uncaught `out_of_range`
exception. All other attempts segfaulted.

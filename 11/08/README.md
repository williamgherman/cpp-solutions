### Exercise 11.08

Write a program that stores the excluded words in a `vector` instead of a `set`.
What are the advantages to using a `set`?

### Solution

See `8.cc`. For this program, the only noticable advantage of using a set is
that we can use `set`'s `find` method rather than needing to include the generic
algorithm in our program.

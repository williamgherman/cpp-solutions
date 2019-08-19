### Exercise 9.14

Write a program to assign the elements from a `list` of `char*` pointers to
C-style character strings to a `vector` of `string`s.

### Solution

See `14.cc`. Note that although this program compiles, my compiler warns that
ISO C++11 does not allow conversion from string literals to `const char *`.

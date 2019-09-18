### Exercise 12.16

Compilers don't always give easy-to-understand error messages if we attempt to
copy or assign a `unique_ptr`. Write a program that contains these errors to see
how your compiler diagnoses them.

### Solution

Upon compiling `16.cc`, G++ complains about use of deleted functions in both the
case of the copy and assignment operations. Clang, on the other hand, gives a
bit more specificity, complaining about the "implicitly-deleted copy
constructor" and that "its copy assignment operator is implicity deleted."

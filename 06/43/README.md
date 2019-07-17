### Exercise 6.43

Which one of the following declarations and definitions would you put in a
header? In a source file? Explain why.

(a) `inline bool eq(const BigInt&, const BigInt&) {...}`  
(b) `void putValues(int *arr, int size);`

### Solution

The `inline` function definition would be placed in a header file, as inline
functions can be defined multiple times given that they exactly match. The
`putValues` function declaration also can be placed in the header file, as it is
the declaration of a useful function that can be called from other source files.

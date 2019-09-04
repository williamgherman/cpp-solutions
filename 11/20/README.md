### Exercise 11.20

Rewrite the word-counting program from &sect; 11.1 to use `insert` instead of
subscripting. Which program do you think is easier to write and read? Explain
your reasoning.

### Solution

See `20.cc`. I prefer the verbosity of the original word-counting program with
the subscripting. It is easier to tell what is happening in the program, and it
is not neccessarily clear that the `insert` action does not do anything unless
the programmer is already familiar with the library.

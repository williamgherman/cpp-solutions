### Exercise 5.08

What is a "dangling `else`"? How are `else` clauses resolved in C++?

### Solution

A dangling `else` is the problem of matching each `else` clause to an `if`
clause, which must be dealt with by the implementation of the programming
language. C++ matches each `else` clause to the nearest preceding `if` clause.

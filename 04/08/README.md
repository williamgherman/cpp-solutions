### Exercise 4.08

Explain when operands are evaluated in the logical AND, logical OR and equality
operators.

### Solution

The logical AND operator evaluates its left argument; if its left argument is
`true`, it will evaluate its right argument.  
The logical OR operator evaluates its left argument; if its left argument is
`false`, it will evaluate its right argument.  
Equality operators will attempt to convert to equal types, but its evaluation
process is undefined.

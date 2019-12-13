### Exercise 13.53

As a matter of low-level efficiency, the `HasPtr` assignment operator is not
ideal. Explain why. Implement a copy-assignment and move-assignment operator for
`HasPtr` and compare the operations executed in your new move-assignment
operator versus the copy-and-swap version.

### Solution

See program files. The copy-and-swap version of the assignment operator was
inefficient because during a move-assignment operation, that assignment operator
requires an additional copy which is not always necessary.

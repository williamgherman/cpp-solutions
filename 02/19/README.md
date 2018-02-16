### Exercise 2.19

Explain the key differences between pointers and references.

### Solution

A pointer is an object -- unlike a reference -- which does not need to be
initialized (although it is advisable to do so). A pointer can change what it
points to during its lifetime and can point to nothing, and a pointer which
points to `void` can be of any type.

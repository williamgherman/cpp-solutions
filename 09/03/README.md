### Exercise 9.03

What are the constraints on the iterators that form iterator ranges?

### Solution

Iterators must be pointing to the elements within the range `[begin, end)`.
That is, between `begin` inclusive and `end` exclusive. They also must point to
the same container.

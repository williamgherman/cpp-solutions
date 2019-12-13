### Exercise 13.52

Explain in detail what happens in the assignments of the `HasPtr` objects on
page 541. In particular, describe step-by-step what happens to values of `hp`,
`hp2` and the `rhs` parameter in the `HasPtr` assignment operator.

### Solution

In `hp = hp2`, `hp2` is an lvalue which then matches to the copy-assignment
operator. In `hp = std::move(hp2)`, `std::move` returns an rvalue reference of
`hp2`, which then matches to the move-assignment operator.

### Exercise 9.25

In the program on page 349 that erased a range of elements, what happens if
`elem1` and `elem2` are equal? What if `elem2` or both `elem1` and `elem2` are
the off-the-end iterator?

### Solution

If the `elem`s are equal, the program would not remove anything and return an
iterator the same as `elem2`. If the `elem`s pointed to the off-the-end
iterator, the program would return the off-the-end-iterator. Otherwise, it would
remove everything from `elem1` to the end and return the off-the-end iterator.

### Exercise 10.40

What kinds of iterators do you think `copy` requires? What about `reverse` or
`unique`?

### Solution

`copy` needs three total iterators: two input iterators to read from a sequence,
and an output iterator to read to. `reverse` requires bidirectional iterators,
and `unique` requires a forward iterator.

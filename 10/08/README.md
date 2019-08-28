### Exercise 10.08

We said that algorithms do not change the size of the containers over which they
operate. Why doesn't the use of `back_inserter` invalidate this claim.

### Solution

Because use of a `back_inserter` first pushes back another element in the
container before returning an iterator to the newly-added element.

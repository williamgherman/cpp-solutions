### Exercise 11.29

What do `upper_bound`, `lower_bound` and `equal_range` return when you pass then
a key that is not in the container?

### Solution

`upper_bound` and `lower_bound` will both return iterators pointing to the
element just larger than the given key, and `equal_range` will return a `pair`
with iterators pointing to those same element.

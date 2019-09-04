### Exercise 11.05

Explain the difference between a `map` and a `set`. When might you use one or
the other?

### Solution

A `set` is a sorted, unique set of values, while a `map` is a set of unique
sorted `pair`s which can be accessed by their key. A `map` would be useful, for
instance, as a text selector based on locale language. A `set` would be more
useful when, for instance, processing a file for unique words. Just add
everything to the `set` instead of needing to sort them and remove duplicates.

### Exercise 10.26

Explain the differences among the three kinds of insert iterators.

### Solution

The three insert iterators use different insert operations. `back_inserter` uses
`push_back`; `front_inserter` uses `push_front`; `inserter` uses `insert`.

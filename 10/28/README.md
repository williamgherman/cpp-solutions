### Exercise 10.28

Copy a `vector` that holds the values from `1` to `9` inclusive, into three
other containers. Use an `inserter`, a `back_inserter` and a `front_inserter` to
add elements to these containers. Predict how the output sequence varies by the
kind of inserter and verify your predictions by running your programs.

### Solution

See `28.cc`. The `front_inserter` will reverse the list; other inserters will
maintain the order.

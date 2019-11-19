### Exercise 13.32

Would the pointerlike version of `HasPtr` benefit from defining a `swap`
function? If so, what is the benefit? If not, why not?

### Solution

A pointerlike `HasPtr` class would have no benefit from a `swap` function, since
all data types are built-in and would just use the `std::swap`.

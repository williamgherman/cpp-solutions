### Exercise 7.47

Explain whether the `Sales_data` constructor that takes a `string` should be
`explicit`. What are the benefits of making the constructor `explicit`? What are
the drawbacks.

### Solution

An `explicit` constructor for `Sales_data` would be meaningful because the
constructor only takes one argument, the `string`. It would limit `Sales_data`
construction from direct initialization from `string`s, and the compiler will
no longer allow implicit conversion, which could be useful to limit the user's
interface with the `Sales_data` class. However, under certain circumstances,
using an `explicit` constructor could make use of the class more confusing.

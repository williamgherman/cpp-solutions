### Exercise 7.25

Can `Screen` safely rely on the default versions of copy and assignment? if so,
why? If not, why not?

### Solution

Since the `Screen` class does not rely on manually-allocated memory structures
defined outside the class, and since the class uses only built-in types and
`string`s, the `Screen` class can safely rely on the default copy and assignment
operations.

### Exercise 14.29

We did not define a `const` version of the increment and decrement operators.
Why not?

### Solution

Because those operations change the state of the object, therefore they cannot
be `const`.

### Exercise 8.12

Why didn't we use in-class initializers in `PersonInfo`?

### Solution

Both members of `PersonInfo` can be default-initialized, and the synthesized
default constructor will do just that, so an in-class initializer is not
necessary.

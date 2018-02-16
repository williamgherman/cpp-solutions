### Exercise 2.23

Given a pointer `p`, can you determine whether `p` points to a valid object? If
so, how? If not, why not?

### Solution

You can test if `p` is a null pointer, which would therefore not be a vlid
object, but otherwise `p` could be uninitialized and have a garbage value
assigned to it. Altering or testing its value could result in undefined
behavior.

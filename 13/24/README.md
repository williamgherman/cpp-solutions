### Exercise 13.24

What would happen if the version of `HasPtr` in this section didn't define a
destructor? What if `HasPtr` didn't define the copy constructor?

### Solution

If `HasPtr` had no destructor, `ps` would never be `free`d, resulting in memory
leakage. If `HasPtr` had no copy constructor, the default synthesized copy
constructor would similarly be in effect, copying only the pointer `ps` and not
the underlying string, which could lead to double `free`ing if the correct
destructor was implemented.

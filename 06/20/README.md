### Exercise 6.20

When should reference parameters be references to `const`? What happens if we
make a parameter a plain reference when it could be a reference to `const`?

### Solution

Parameters that are references to `const` must not be affected by the function
and may be implemented for literals. If a parameter is a plain reference, its
data could be altered, giving a side-effect to the function that may not be
intended, and literal values cannot be passed to the function.

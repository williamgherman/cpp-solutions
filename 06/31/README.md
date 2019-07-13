### Exercise 6.31

When is it valid to return a reference? A reference to `const`?

### Solution

A function may only return a reference if the object which the reference refers
to has been defined outside of the function. Otherwise, the object will be
destroyed and return an undefined result. Returning a literal in a function that
returns a reference to `const` is also illegal, as the literal is a temporary
object defined within the body of the function.

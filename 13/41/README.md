### Exercise 13.41

Why did we use postfix increment in the call to `construct` inside `push_back`?
What would happen if we used the prefix increment?

### Solution

We use the postfix increment because we construct an object in the space that
the pointer points to. If we used prefix, there would be nothing in the current
space and potentially `push_back` an element past the bounds of the container.

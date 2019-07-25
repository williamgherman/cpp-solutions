### Exercise 7.28

What would happen in the previous exercise if the return type of `move`, `set`
and `display` was `Screen` rather than `Screen&`?

### Solution

The program would be forced to create a new `Screen` on every action, and the
original `myScreen` would not be updated.

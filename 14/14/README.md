### Exercise 14.14

Why do you think it is more efficient to define `operator+` to call `operator+=`
rather than the other way around?

### Solution

Because `operator+` must create a new object that is the result of adding two
objects together. `operator+=` would use an unneccessary temporary object if
implemented via `operator+`.

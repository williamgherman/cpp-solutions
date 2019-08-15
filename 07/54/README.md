### Exercise 7.54

Should the members of `Debug` that begin with `set_` be declared as `constexpr`?
If not, why not?

### Solution

No, because they perform an action which is not a `return`, and therefore cannot
be `constexpr`.

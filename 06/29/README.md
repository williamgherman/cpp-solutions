### Exercise 6.29

When you use an `initializer_list` in a range `for` would you ever use a
reference as the loop control variable? If so, why? If not, why not?

### Solution

Yes, a reference as the loop control variable would keep from copying out the
values of every item in the `initializer_list`, especially if we declare each
element as a reference to `const`.

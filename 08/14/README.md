### Exercise 8.14

Why did we declare `entry` and `nums` as `const auto &`?

### Solution

It is not necessary to copy each person or number into a new object, and using a
reference to `const` uses less resources which could be intensive in the case of
a person with a million different telephone numbers.

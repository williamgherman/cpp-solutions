### Exercise 10.05

In the call to `equal` on rosters, what would happen if both rosters held
C-style strings, rather than library `string`s?

### Solution

C-style strings cannot be compared using `==` and must be instead compared using
the C-string library function `strcmp` from `<cstring>`. The program instead
attempt to compare the addresses of the pointers stored in the rosters and
return meaningless results.

### Exercise 4.12

Assuming `i`, `j` and `k` are all `int`s, explain what `i != j < k` means.

### Solution

First the expression `j < k` will evaluate to `true` or `false`. The inequality
operator will cast the result of `j < k` to an integer, `1` or `0`. Next, `i`
will be compared to either `1` or `0`, returning `true` if `i` does not equal
the casted value of `j < k`.

### Exercise 15.40

In the `OrQuery::eval` function, what would happen if its `rhs` member returned
an empty set? What if its `lhs` member did so? What if both `rhs` and `lhs`
returned empty sets?

### Solution

If `rhs` returned an empty set, then the `eval` function would only include the
`lhs` set; likewise, `eval` would only return the `rhs` set if `lhs` returned
the empty set. If both `rhs` and `lhs` returned empty sets, then `eval` would
return the empty set.

### Exercise 13.20

Explain what happens when we copy, assign or destroy objects of our `TextQuery`
and `QueryResult` classes from &sect; 12.3.

### Solution

The default copy-control members and destructors will operate. Since all
pointers are smart-pointers, there will be no necessary `free`ing, and the plain
`map` in the `TextQuery` will be copied for copying and assignment as well as
the plain `string` in `QueryResult`.

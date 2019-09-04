### Exercise 11.10

Could we define a `map` from `vector<int>::iterator` to `int`? What about from
`list<int>::iterator` to `int`? In each case, if not, why not?

### Solution

In each case, the iterators must support the `<` operators in order to be
organize properly, which is possible for `vector<int>::iterator`s, but `list`
iterators do not support `<`, so the second declaration would not work.

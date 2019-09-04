### Exercise 11.27

What kinds of problems would you use `count` to solve? When might you use `find`
instead?

### Solution

`count` would probably be most useful for `multimap`s or `multiset`s where you
need to return, for instance, the amount of books an author has written. `find`
would be more useful in regular `map`s and `set`s where merely the existence of
an element is needed, like in a username lookup.

### Exercise 12.33

In Chapter 15 we'll extend our query system and will need some additional
members in the QueryResult class. Add members named `begin` and `end` that
return iterators into the `set` of line numbers returned by a given query, and a
member named `get_file` that returns a `shared_ptr` to the file in the
`QueryResult` object.

### Solution

See program files.

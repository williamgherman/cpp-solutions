### Exercise 15.37

What changes would your classes need if the derived classes had members of type
`shared_ptr<Query_base>` rather than that of type `Query`?

### Solution

All the constructors and member `q` types would have to change to a shared
pointer, but would otherwise stay the same.

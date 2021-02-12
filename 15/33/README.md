### Exercise 15.33

What about objects of type `Query_base`?

### Solution

`Query_base` is a completely abstract base class that has NO publicly-accessible
data members. Instead, we must rely on pointers or references to `Query_base`
objects to use its members.

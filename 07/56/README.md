### Exercise 7.56

What is a `static` class member? What are the advantages of `static` members?
How do they differ from ordinary members?

### Solution

A `static` class member is a member which is persistent across all objects of
that type and is not dependent on any particular object. This means that
`static` members can be used for persistent data which all objects of that type
need. For example, an exchange rate for currency transaction objects which may
or may not change depending on other factors. `static` members differ from
ordinary members in that they can be used as default arguments and incomplete
types within a class.

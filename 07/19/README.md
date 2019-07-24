### Exercise 7.19

Indicate which members of your `Person` class you would declare as `public` and
which you would declare as `private`. Explain your choice.

### Solution

The `name` and `address` members should be `private`, as their implementation
should not be accessed, while `person`'s constructors and `getName` and
`getAddress` functions should be `public`, because the user code requires access
to its interface.

### Exercise 7.16

What, if any, are the constraints on where and how often an access specifier may
appear inside a class definition? What kinds of members should be defined after
a `public` specifier? What kinds should be `private`?

### Solution

A class has no limit on the amount of access specifiers or on their location
inside the class body. Members of the class's interface should be `public`,
while its implementation should be `private`.

### Exercise 16.08

In the "Key Concept" box on page 108, we noted that as a matter of habit C++
programmers prefer using `!=` to using `<`. Explain the rationale for this
habit.

### Solution

When using template parameters, using an inequality test `!=` does not require
the parameter to be sortable, merely equatable, which is more likely to be
implemented in user-defined class types as well as things like sets and other
un-orderable containers.

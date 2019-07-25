### Exercise 7.30

It is legal but redundant to refer to members through the `this` pointer.
Discuss the pros and cons of explicitly using the `this` pointer to access
members.

### Solution

It is explicit which could provide clarity to the non-experienced C++ programmer
who is used to such calls. However, it is not how the `this` pointer is intended
to be used, so their usage in calling members through `this` is cumbersome.

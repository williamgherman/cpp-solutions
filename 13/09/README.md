### Exercise 13.09

What is a destructor? What does the synthesized destructor do? When is a
destructor synthesized?

### Solution

A destructor is responsible for the destruction of all elements of an object as
well as the object's destruction. It is synthesized always when there is no
`delete`d or otherwise created destructor. A synthesized destructor merely
automatically destroys all members of the object.

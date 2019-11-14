### Exercise 13.06

What is a copy-assignment operator? When is this operator used? What does the
synthesized copy-assignment operator do? When is it synthesized?

### Solution

The copy-assignment operator is the operator used when an object is assigned to
another object of the same type. The synthesized copy-assignment operator copies
each element from the object on the right to the object on the left, and returns
a reference to the left-hand object. It is synthesized if the class does not
define a copy-assignment operator.

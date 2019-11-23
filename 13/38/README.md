### Exercise 13.38

We did not use copy and swap to define the `Message` assignment operator. Why do
you suppose this is so?

### Solution

The `Message` object does not dynamically allocate anything, nor does it require
safety in terms of copying over elements (the constructors and destructors do
this already), therefore copy and swap is not necessarily the most efficient
method of assignment.

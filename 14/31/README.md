### Exercise 14.31

Our `StrBlobPtr` class does not define the copy constructor, assignment operator
or a destructor. Why?

### Solution

Because we do not deal with dynamic allocation, the synthesized "Big Three" will
be adequate.

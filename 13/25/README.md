### Exercise 13.25

Assume we want to define a version of `StrBlob` that acts like a value. Also
assume that we want to continue to use a `shared_ptr` so that our `StrBlobPtr`
class can still use a `weak_ptr` to the `vector`. Your revised class will need a
copy constructor and copy-assignment operator but will not need a destructor.
Explain what the copy constructor and copy-assignment operators must do. Explain
why the class does not need a destructor.

### Solution

A revised copy constructor must also copy the underlying `vector` from each
`shared_ptr` within each `StrBlob`. A copy-assignment operator must similarly
copy the underlying `vector`. No destructor is required because the smart
pointers will `free` the `vector`s upon their destruction.

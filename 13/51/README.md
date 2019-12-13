### Exercise 13.51

Although `unique_ptr`s cannot be copied, in &sect; 12.15 we wrote a `clone`
function that returned a `unique_ptr` by value. Explain why that function is
legal and how it works.

### Solution

`unique_ptr`s will use move operations rather than copy operations. Therefore,
they can be returned by a function, given that they are about to be destroyed.

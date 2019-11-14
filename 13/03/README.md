### Exercise 13.03

What happens when we copy a `StrBlob`? What about `StrBlobPtr`s?

### Solution

When a `StrBlob` is copied, the default synthesized copy constructor is called,
and the `shared_ptr` count is incremented. For a `StrBlobPtr`, the `weak_ptr`
count is not incremented, but its `shared_ptr` is and all the members are
similarly copied.

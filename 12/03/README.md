### Exercise 12.03

Does this class need `const` versions of `push_back` and `pop_back`? If so, add
them. If not, why aren't they needed?

### Solution

It is possible, because the `data` member being a `const shared_ptr` does not
affect the underlying `vector` of `string`s; it won't be a pointer to `const`.
However, it is unnecessary to do this, because these methods do not affect
`this`.

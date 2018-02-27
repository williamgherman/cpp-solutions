### Exercise 3.12

Which, if any, of the following `vector` definitions are in error? For those
that are legal, explain what the definition does. For those that are not legal,
explain why they are illegal.

(a) `vector<vector<int>> ivec;`  
(b) `vector<string> svec = ivec;`  
(c) `vector<string> svec{10, "null"};`

### Solution

(a) is a valid definition of a `vector` of `vector`s of `int`s.  
(b) is an illegal initialization attempting to initialize a `vector` of
`string`s to a `vector` of `int`s.  
(c) is a valid initialization of a `vector` of ten `string`s containing
`"null"`.

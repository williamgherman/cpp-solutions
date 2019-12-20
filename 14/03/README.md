### Exercise 14.03

Both `string` and `vector` define an overloaded `==` that can be used to compare
objects of those types. Assuming `svec1` and `svec2` are `vector`s that hold
`string`s, identify which version of `==` is applied in each of the following
expressions:

```cpp
// (a)
"cobble" == "stone"

// (b)
svec1[0] == svec2[0]

// (c)
svec1 == svec2

// (d)
"svec1[0] == "stone"
```

### Solution

(a) built-in `operator==`  
(b) `string.operator==`  
(c) `vector.operator==`  
(d) Typo? Perhaps `string.operator==`

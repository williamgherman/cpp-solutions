### Exercise 7.49

For each of the three following declarations of `combine`, explain what happens
if we call `i.combine(s)` where `i` is a `Sales_data` and `s` is a `string`:

(a) `Sales_data &combine(Sales_data);`  
(b) `Sales_data &combine(Sales_data&);`  
(c) `Sales_data &combine(const Sales_data&) const;`

### Solution

(a) is fine, and will implicitly construct a `Sales_data` with `s`. (b) is in
error, because the function expects a plain reference and it receives a
temporary (like how passing `"hello, world"` to a function that expects a plain
reference to `string` is in error). (c) would work if not for the final `const`,
because `combine` will affect the resulting `Sales_data`, and is therefore in
error.

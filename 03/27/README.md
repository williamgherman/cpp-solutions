### Exercise 3.27

Assuming `txt_size` is a function that takes no arguments and returns an `int`
value, which of the following definitions are illegal? Explain why.

```cpp
unsigned buf_size = 1024;
```

(a) `int ia[buf_size];`  
(b) `int ia[4 * 7 - 14];`  
(c) `int ia[txt_size()];`  
(d) `char st[11] = "fundamental";`

### Solution

(a) Illegal: `buf_size` is not a constant expression  
(b) Legal.  
(c) Legal if `txt_size()` is `constexpr`; otherwise illegal.  
(d) Illegal: no space for null character.

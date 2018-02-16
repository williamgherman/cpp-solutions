### Exercise 2.28

Explain the following definitions. Identify any that are illegal.

(a) `int i, *const cp;`  
(b) `int *p1, *const p2;`  
(c) `const int ic, &r = ic;`  
(d) `const int *const p3;`  
(e) `const int *p;`

### Solution

(a) is illegal. `i` is a legal uninitialized integer, but the `const` pointer to
an integer, `cp` must be initialized.  
(b) is illegal. `p1` is a legal uninitialized pointer to an integer, but the
`const` pointer to an integer `p2` must be initialized.  
(c) is illegal. The `const` integer ic must be initialized, and its reference
would not be able to bind.  
(d) is illegal. `p3`, a `const` pointer to a `const` integer must be
initialized.  
(e) defines a legal pointer to a `const` integer, `p`.

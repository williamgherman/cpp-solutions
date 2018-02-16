### Exercise 2.27

Which of the following initializations are legal? Explain why.

(a) `int i = -1, &r = 0;`  
(b) `int *const p2 = &i2;`  
(c) `const int i = -1, &r = 0;`  
(d) `const int *const p3 = &i2;`  
(e) `const int *p1 = &i2;`  
(f) `const int &const r2;`  
(g) `const int i2 = i, &r = i;`

### Solution

(a) `int i = -1` is legal, but `&r = 0` is not because a reference must be bound
to an object.  
(b) is legal, creates a `const` pointer to the address of `i2`.  
(c) `const int i = -1` is legal, but `&r = 0 is not because a reference must be
bound to an object.  
(d) is legal, creates a `const` pointer to a `const int`, initialized to the
address of `i2`.  
(e) is legal, creates a pointer to a `const int`, initialized to the address of
`i2`.  
(f) is illegal; a reference must be bound to an object.  
(g) is legal, creates a `const int` and a reference, assigned and bound to the
value of `i`.

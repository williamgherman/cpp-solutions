### Exercise 2.29

Using the variables in the previous exercise, which of the following assignments
are legal? Explain why.

(a) `i = ic;`  
(b) `p1 = p3;`  
(c) `p1 = &ic;`  
(d) `p3 = &ic;`  
(e) `p2 = p1;`  
(f) `ic = *p3;`

### Solution

(a) Legal. Assuming `ic` was initialized, `i` can be assigned its value.  
(b) Legal. Assuming `p3` was initialized, `p1` can be assigned its value.  
(c) Legal. Assuming `ic` was initialized, `p1` can point to it.  
(d) (Il)legal. Assuming `ic` was initialized AND this was not an assigment but
`p3`'s initialization, then `p3` can be initialized to the address of `ic`.  
(e) (Il)legal. Assuming this was not an assigment but `p2`'s initialization,
then `p2` can be initialized to the value of `p1`.  
(f) (Il)legal. Assuming this was not an assignment but `ic`'s initialization,
then `ic` can be initializaed to the value pointed to by `p3`.

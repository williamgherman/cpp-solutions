### Exercise 2.26

Which of the following are legal? For those that are illegal, explain why.

(a) `const int buf;`  
(b) `int cnt = 0;`  
(c) `const int sz = cnt;`  
(d) `++cnt; ++sz;`

### Solution

(a) is illegal, `const` variables must be initialized.  
(b) is legal.  
(c) is legal.  
(d) `++cnt;` is legal, but `++sz;` attempts to change the value of `sz`, which
is illegal.

### Exercise 4.20

Assuming that `iter` is a `vector<string>::iterator`, indicate which, if any, of
the following expressions are legal. Explain the behavior of the legal
expressions and why those that aren't legal are in error.

(a) `*iter++;`  
(b) `(*iter)++;`  
(c) `*iter.empty();`  
(d) `iter->empty();`  
(e) `++*iter;`  
(f) `iter++->empty();`

### Solution

(a) is legal and will return `iter`'s value, then increment `iter`.  
(b) is illegal: a `string` cannot be incremented.  
(c) is illegal: an iterator has no `empty` member.  
(d) is legal and will check if the string pointed to by `iter` is empty.  
(e) is illegal: a `string` cannot be incremented.  
(f) is legal and will check if the string pointed to by `iter is empty, then
increment `iter`.

### Exercise 2.15

Which of the following definitions, if any, are invalid? Why?

(a) `int ival = 1.01;`  
(b) `int &rval1 = 1.01;`  
(c) `int &rval2 = ival;`  
(d) `int &rval3;`

### Solution

(a) is valid, but the initializer will implicitly cast to `1`.  
(b) is not valid because the reference does not initialize an object. 
(c) is valid because it references `ival`.  
(d) is not valid because the reference must be initialized.

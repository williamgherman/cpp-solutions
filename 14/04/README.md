### Exercise 14.04

Explain how to decide whether the following should be class members:

a) `%`  
b) `%=`  
c) `++`  
d) `->`  
e) `<<`  
f) `&&`  
g) `==`  
h) `()`

### Solution

The following operators must be class members: `=`, `[]`, `()`, `->`. The
compound-assignment operators normally should be class members. Operators
altering their type normally should be members (`++`, `--`, dereference). All
operators relating or converting their operands should normally be nonmember
functions. Therefore, (b), (c), (d), (h) and probably (e) should be member
functions, and (a), (f) and (g) nonmember.

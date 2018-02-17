### Exercise 2.33

Using the variable definitions from this section, determine what happens in each
of these assignments:

```cpp
a = 42;
b = 42;
c = 42;
d = 42;
e = 42;
f = 42;
g = 42;
```

### Solution

`a` will be assigned the value `42`.  
`b` will be assigned the value `42`.  
`c` will be assigned the value `42`.  
`d` error: cannot assign an integer literal to a pointer.  
`e` error: `e` is constant and a pointer, which cannot be assigned an integer
literal.  
`f` error: `f` is constant.  
`g` error: `g` is a constant reference which cannot be rebound nor reassigned.

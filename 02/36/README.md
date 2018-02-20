### Exercise 2.36

In the following code, determine the type of each variable and the value each
variable has when the code finishes:

```cpp
int a = 3, b = 4;
decltype(a) c = a;
decltype((b)) d = a;
++c;
++d;
```

### Solution

`a`: `int`, 4.  
`b`: `int`, 4.  
`c`: `int`, 4.  
`d`: `int &`, `a` (4).

### Exercise 4.16

Although the following are legal, they probably do not behave as the programmer
expects. Why? Rewrite the expressions as you think they should be.

(a) `if (p = getPtr() != 0)`  
(b) `if (i = 1024)`

### Solution

(a) is attempting to test if `p` is a null pointer after assigning it the
returned value of `getPtr()`. The problem lies in the operator precedence. Here
is a possible fix:

```cpp
if ((p = getPtr()) != 0)
```

(b) is probably attempting to test if `i` equals `1024`, incorrectly using the
assignment operator instead of the equality operator. Here is a fix:

```cpp
if (i == 1024)
```

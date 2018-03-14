### Exercise 4.19

Given that `ptr` points to an `int`, that `vec` is a `vector<int>` and that
`ival` is an `int`, explain the behavior of each of these expressions. Which, if
any, are likely to be incorrect? Why? How might each be corrected?

(a) `ptr != 0 && *ptr++`  
(b) `ival++ && ival`  
(c) `vec[ival++] <= vec[ival]`

### Solution

(a) tests if `ptr` is null and if its value is not zero, then increments `ptr`,
which would be an error since `ptr` does not point to a container of `int`s. One
possible fix, which would increment the integer `ptr` points to:

```cpp
ptr != 0 && (*ptr)++
```

(b) will test if `ival` is zero, increment it and test again if it is zero.

(c)'s order of operations is undefined (`<=` relational operator expresses its
operands in an undefined order). A correction, which would increment `ival` and
test if that position of `vec` is less than the next position of `vec` is:

```cpp
++ival, vec[ival - 1] <= vec[ival]
```

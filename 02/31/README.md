### Exercise 2.31

Given the declarations in the previous exercise determine whether the following
assignments are legal. Explain how the top-level or low-level `const` applies in
each case.

```cpp
r1 = v2;
p1 = p2;
p1 = p3;
p2 = p1;
p2 = p3;
```

### Solution

`r1 = v2` is illegal because references cannot be rebound.  
`p1 = p2` is illegal because `p2`'s low-level `const` is ignored in the
declaration of `p1`.  
`p1 = p3` is illegal because `p3`'s low-level `const` is ignored in the
declaration of `p1`.  
`p2 = p1` is legal because `p2`'s low-level `const` supercedes `p1`'s
non-`const`.  
`p2 = p3` is legal because both `p2` and `p3` have low-level `const`.

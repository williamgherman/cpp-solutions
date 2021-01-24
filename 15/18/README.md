### Exercise 15.18

Given the classes from page 612 and page 613, and assuming each object has the
type specified in the comments, determine which of these assignments are legal.
Explain why those that are illegal aren't allowed:

```cpp
Base *p = &d1;  // d1 has type Pub_Derv
p = &d2;        // d2 has type Priv_Derv
p = &d3;        // d3 has type Prot_Derv
p = &dd1;       // dd1 has type Derived_from_Public
p = &dd2;       // dd2 has type Derived_from_Private
p = &dd3;       // dd3 has type Derived_from_Protected
```

### Solution

`d1` and `dd1` are legal because their respective derived classes publicly
inherits from `Base`. Since `d2`, `d3`, `dd2` and `dd3` don't publicly inherit
from the `Base` class, the assignments are illegal.

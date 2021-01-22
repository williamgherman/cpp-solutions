### Exercise 15.14

Given the classes from the previous exercise and the following objects,
determine which function is called at run time:

```cpp
base bobj;
derived dobj;
base *bp1 = &bobj;
base *bp2 = &dobj;
base &br1 = bobj;
base &br2 = dobj;
```

(a) `bobj.print();`  
(b) `dobj.print();`  
(c) `bp1->name();`  
(d) `bp2->name();`  
(e) `br1.print();`  
(f) `br2.print();`

### Solution

(a) `base::print()`  
(b) `derived::print()`  
(c) `base::name()`  
(d) `base::name()`  
(e) `base::print()`  
(f) `derived::print()`

NB: (f) is derived because pointers or references with differing static and
dynamic types will call the derived type on a function call.

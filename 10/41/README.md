### Exercise 10.41

Based only on the algorithm and argument names, describe the operation that each
of the following library algorithms perform:

```cpp
replace(beg, end, old_val, new_val);
replace_if(beg, end, pred, new_val);
replace_copy(beg, end, dest, old_val, new_val);
replace_copy_if(beg, end, dest, pred, new_val);
```

### Solution

`replace` replaces each element within the sequence `[beg, end)` from `old_val`
to `new_val`. `replace_if` does the same given the element satisfies the
predicate `pred`. `replace_copy` does the same as `replace` but stores the
resulting sequence in `dest`. `replace_copy_if` does the same as `replace_copy`
if each element satisfies the predicate `pred`.

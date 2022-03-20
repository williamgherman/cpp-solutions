### Exercise 15.38

Are the following declarations legal? If not, why not? If so, explain what the
declarations mean.

```cpp
BinaryQuery a = Query("fiery") & Query("bird");
AndQuery b = Query("fiery") & Query("bird");
OrQuery c = Query("fiery") & Query("bird");
```

### Solution

All three declarations are illegal. `BinaryQuery`, `AndQuery` and `OrQuery` are
non-interface classes which cannot be constructed directly.

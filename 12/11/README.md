### Exercise 12.11

What would happen if we called `process` as follows:

```cpp
process(shared_ptr<int>(p.get()));
```

### Solution

`process` will receive a new temporary `shared_ptr` with a counter of one which
points to the same data as `p`. However, once the temporary goes out of scope of
`process`, the memory will be automatically freed, and the data pointed to by
`p` will be inaccessable.

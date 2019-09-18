### Exercise 12.17

Which of the following `unique_ptr` declarations are illegal or likely to result
in subsequent program error? Explain what the problem is with each one.

```cpp
int ix = 1024, *pi = &ix, *pi2 = new int(2048);
typedef unique_ptr<int> IntP;

// a
IntP p0(ix);

// b
IntP p1(pi);

// c
IntP p2(pi2);

// d
IntP p3(&ix);

// e
IntP p4(new int(2048));

// f
IntP p5(p2.get());
```

### Solution

(a) and (b) are illegal, as `unique_ptr` expects a pointer returned by `new`.
(c) will compile, but will incorrectly free the raw pointer during construction.
(d) will incorrectly try to delete a built-in pointer upon destruction. (e) is
the perfectly-legal, correct construction. (f) will cause error by having two
`unique_ptr`s pointing to the same object.

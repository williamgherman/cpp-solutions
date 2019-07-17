### Exericse 6.48

Explain what this loop does and whether it is a good use of `assert:`

```cpp
string s;
while (cin >> s && s != sought) { } // empty body
assert(cin);
```

### Solution

This loop continues until the user enters the `sought` string or `EOF` is given.
The `assert` re-evaluates if `cin` is not `EOF`. The `assert` is not in good
usage, as it will always be true even if `s` does not equal the `sought` string.
`assert(s == sought)` would be a better approach.

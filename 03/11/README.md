### Exercise 3.11

Is the following range `for` legal? If so, what is the type of `c`?

```cpp
const string s = "Keep out!";
for (auto &c : s) { /* ... */ }
```

### Solution

The range `for` is legal as long as the `for` body does not attempt to modify
the string or its individual characters. The type of each `c` is `const char &`.

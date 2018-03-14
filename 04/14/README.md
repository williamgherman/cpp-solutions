### Exercise  4.14

Explain what happens in each of the `if` tests:

```cpp
if (42 = i) // ...
if (i = 42) // ...
```

### Solution

The first test will result in an error because the rvalue integer constant `42`
cannot be assigned another value. The second test will assign `i` to the integer
constant `42`, and will return `42`, cast that value to a `true` boolean and run
what is inside the `if` statement.

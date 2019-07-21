### Exercise 7.10

What does the condition in the following `if` statement do?

```cpp
if (read(read(cin, data1), data2))
```

### Solution

The `if` statement first `read`s a `Sales_data` object into `data1` and returns
`cin`. `cin` is input as the first argument in the outer `read` call which
`read`s into `data2`, returning `cin`. The `if` statement tests if `cin` returns
`0` (or `EOF`) or anything else.

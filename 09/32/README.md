### Exercise 9.32

In the program on page 354 would it be legal to write the call it `insert` as
follows? If not, why not?

```cpp
iter = vi.insert(iter, *iter++);
```

### Solution

No, it would be illegal, since the increment postfix operator is not guaranteed
to increment `iter` before or after its assignment. Its behavior is undefined.

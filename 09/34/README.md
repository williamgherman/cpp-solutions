### Exercise 9.34

Assuming `vi` is a container of `int`s that includes even and odd values,
predict the behavior of the following loop. After you've analyzed this loop,
write a program to test whether your expectations were correct.

```cpp
iter = vi.begin();
while (iter != vi.end())
    if (*iter % 2)
        iter = vi.insert(iter, *iter);
    ++iter;
```

### Solution

The program would run indefinitely upon reaching an odd value, replicating it
again and again, because `iter` is only incremented once rather than twice. See
`34.cc`. Upon running `34`, it is also worth noting the implied missing brace
around the `while` loop does not change the effect of the program.

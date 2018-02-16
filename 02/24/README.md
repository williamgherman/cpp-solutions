### Exercise 2.24

Why is the initializations of `p` legal but that of `lp` illegal?

```cpp
int i = 42;
void *p = &i;
long *lp = &i;
```

### Solution

`p`'s initialization is legal because a pointer to `void` can be of any type,
while a specified poiner to a `long int` can only point to a `long int`, which
is otherwise illegal.

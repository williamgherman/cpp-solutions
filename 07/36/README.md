### Exercise 7.36

The following initializer is in error. Identify and fix the problem.

```cpp
struct X {
    X (int i, int j): base(i), rem(base % j) { }
    int rem, base;
};
```

### Solution

`rem` is attempting to initialize with `base` although `base` is not yet
defined. A working fix would be to rearrange their initialization, but the most
clear fix would be to also remove the usage of `base` in `rem`'s initialization:

```cpp
struct X {
    X (int i, int j): base(i), rem(i % j) { }
    int base, rem;
};
```

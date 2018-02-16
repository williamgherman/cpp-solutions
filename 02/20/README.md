### Exercise 2.20

What does the following program do?

```cpp
int i = 42;
int *p1 = &i;
*p1 = *p1 * *p1;
```

### Solution

The program assigns the value 42 to the integer variable, `i`. It creates a
pointer which points to the address of `i`. Finally, it changes the value of `i`
to the square of `i`, using dereference operators.

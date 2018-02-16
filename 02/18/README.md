### Exercise 2.18

Write code to change the value of a pointer. Write code to change the value to
which the pointer points.

### Solution

```cpp
int *p = nullptr;
int i = 100;
p = &i;          // p's value is changed to the address of i
*p = 42;         // i's value is changed to 42
```

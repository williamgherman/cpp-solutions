### Exercise 12.25

Given the following `new` expression, how would you `delete pa`?

```cpp
int *pa = new int[10];
```

### Solution

Since `pa` is an array, you must use the `delete[]` operator:

```cpp
delete [] pa;
```

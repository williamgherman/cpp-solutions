### Exercise 4.29

Predict the output of the following code and explan your reasoning. Now run the
program. Is the output what you expected? If not, figure out why.

```cpp
int x[10];   int *p = x;
cout << sizeof(x)/sizeof(*x) << endl;
cout << sizeof(p)/sizeof(*p) << endl;
```

### Solution

The first statement will print `10`, but the second statement will produce a
machine-dependant answer, depending on the size of a pointer.

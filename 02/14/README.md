### Exercise 2.14

Is the following program legal? If so, what values are printed?

```cpp
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
    sum += i;
std::cout << i << " " << sum << std::endl;
```

### Solution

The program is legal and will print `100` for the global variable `i`, because
the `i` declared in the `for` loop has function scope (i.e., within the `for`
loop).

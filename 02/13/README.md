### Exercise 2.13

What is the value of `j` in the following program?

```cpp
int i = 42;
int main()
{
    int i = 100;
    int j = i;
}
```

### Solution

`j` is equal to `100` because the local variable `i` hides the global variable
`i`.

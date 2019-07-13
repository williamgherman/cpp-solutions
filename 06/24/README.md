### Exercise 6.24

Explain the behavior of the following function. If there are problems in the
code, explain what they are and how you might fix them.

```cpp
void print(const int ia[10])
{
    for (size_t i = 0; i != 10; ++i)
        cout << ia[i] << endl;
}
```

### Solution

This function prints the values of arrays of 10 `int`s. However, users of this
function could also pass any pointer to `int`, not only arrays of 10 `int`s,
which will cause undefined results. To make this function accept only arrays of
10 `int`s, the function could be redefined as follows:

```cpp
void print(const int (&ia)[10])
{
    for (size_t i = 0; i != 10; ++i)
        cout << ia[i] << endl;
}
```

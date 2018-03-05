### Exercise 3.37

What does the following program do?

```cpp
const char ca[] = {'h', 'e', 'l', 'l', 'o'};
const char *cp = ca;
while (*cp) {
    cout << *cp << endl;
    ++cp;
}
```

### Solution

The program prints the C-string `"hello"` to the standard output, without the
null character.

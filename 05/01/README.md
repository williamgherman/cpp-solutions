### Exercise 5.01

What is a null statement? When might you use a null statement?

### Solution

A null statement is a statement which does nothing, often used in the body of a
loop which requires no additional statements to be run. For example:

```cpp
char *s = "Hello, world!";
while (*s++)
    ; // null statement
```

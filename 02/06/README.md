### Exercise 2.06

What, if any, are the differences between the following definitions:

```cpp
int month = 9, day = 7;
int month = 09, day = 07;
```

### Solution

Because of the zero prefix in the second statement, the two values `month` and
`day` will be interpreted as octal literals. Because of this, the literal `09`
is not valid, and the program will not compile.

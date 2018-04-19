### Exercise 5.24

Revise your program to throw an exception if the second number is zero. Test
your program with a zero input to see what happens on your system if you don't
`catch` an exception.

### Solution

See `24.cc`.

Below is what by system printed to `stderr` when zero was input for the
program's divisor:

```
terminate called after throwing an instance of 'std::runtime_error'
  what():  Divide by zero error
```

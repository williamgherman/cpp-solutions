### Exercise 4.31

The program in this section used the prefix increment and decrement operators.
Explain why we used prefix and not postfix. What changed would have to be made
to use the postfix versions? Rewrite the program using postfix operators.

### Solution

There is no change in the function of the program other than the "unneccesary
work" of retaining the previous value of the operands in the postfix
expressions, which can be undone by using the prefix operators. The following
program runs the same as before:

```cpp
vector<int>::size_type cnt = ivec.size();
for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
    ivec[ix] = cnt;
```

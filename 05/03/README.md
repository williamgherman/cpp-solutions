### Exercise 5.03

Use the comma operator (&sect; 4.10, p. 157) to rewrite the `while` loop from
&sect; 1.4.1 (p. 11) so that it no longer requires a block. Explain whether this
rewrite improves or diminishes the readability of the code.

### Solution

```cpp
while (val <= 10)
    sum += val, ++val;
```

The rewrite diminishes readability: having two statements artificially joined in
one construct implies a special purpose which this statement does not have.

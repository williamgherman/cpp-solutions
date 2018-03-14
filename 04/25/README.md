### Exercise 4.25

What is the value of `~'q' << 6` on a machine with 32-bit `int`s and 8-bit
`char`s, that uses Latin-1 character set in which `'q'` has the bit pattern
`01110001`?

### Solution

```
~'q'        ~01110001
~'q' << 6    11111111 11111111 11111111 10001110 << 6
-7296        11111111 11111111 11100011 10000000
```

### Exercise 6.41

Which, if any, of the following calls are illegal? Why? Which, if any, are legal
but unlikely to match the programmers' intent? Why?

```cpp
char *init(int ht, int wd = 80, char bckgrnd = ' ');
```

(a) `init();`  
(b) `init(24, 10);`  
(c) `init(14, '*');`

### Solution

Only (a) is strictly illegal, because it must pass an argument to `init`'s first
parameter, but (c) will assign `wd` the integer-decoded value of `'*'`, instead
of what the programmer probably intended, to assign `bckgrnd` with the `'*'`
character.

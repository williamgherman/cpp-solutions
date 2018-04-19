### Exercise 5.15

Explain each of the following loops. Correct any problems you detect.

(a)
```cpp
for (int ix = 0; ix != sz; ++ix) { /* ...*/ }
if (ix != sz)
    // ...
```

(b)
```cpp
int ix;
for (ix != sz; ++ix) { /* ... */ }
```

(c)
```cpp
for (int ix = 0; ix != sz; ++ix, ++sz) { /* ... */ }
```

### Solution

(a) attempts to access variables defined in the block scope of the `for` loop,
fixed by altering its scope:

```cpp
int ix;
for (ix = 0; ix != sz; ++ix) { /* ... */ }
if (ix != sz)
    // ...
```

(b) fails to include an initialisation statement in the `for` loop header, which
also fails to initialise `ix` at all:

```cpp
int ix = 0;
for (/* null */; ix != sz; ++ix) { /* ... */ }
```

(c) attempts to continually increment both values used in the termination
condition, which will never terminate the `for` loop unless broken internally:

```cpp
for (int ix = 0; ix != sz; ++ix) { /* ... */ }
```

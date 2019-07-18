### Exercise 6.53

Explain the effect of the second declaration in each one of the following sets
of declarations. Indicate which, if any, are illegal.

(a)  
```cpp
int calc(int&, int&);
int calc(const int&, const int&);
```

(b)  
```cpp
int calc(char*, char*);
int calc(const char*, const char*);
```

(c)  
```cpp
int calc(char*, char*);
int calc(char* const, char* const);
```

### Solution

(a)'s second declaration will declare a second function which accepts references
to `const int`s. (b)'s second declaration will similarly declare a second
function which accepts pointers to `const char`s. (c) is illegal, because it
declares two functions which accept pointers to `char`s, which can both accept
`const` pointers.

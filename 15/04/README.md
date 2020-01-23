### Exercise 15.04

Which of the following declarations, if any, are incorrect? Explain why.

```cpp
class Base { /* ... */ };

// a
class Derived : public Derived { /* ... */ };

// b
class Derived : public Base { /* ... */ };

// c
class Derived : public Base;
```

### Solution

(a) and (c) are incorrect: a class cannot inherit itself, and a delcaration
cannot have a derivation list.

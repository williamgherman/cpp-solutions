### Exercise 13.13

A good way to understand copy-control members and constructors is to define a
simple class with these members in which each member prints its name:

```cpp
Struct X {
    X() {std::cout << "X()" << std::endl;}
    X(const X&) {std::cout << "X(const X&)" << std::endl;}
};
```

Add the copy-assignment operator and destructor to `X` and write a program using
`X` objects in various ways: pass them as nonreference and reference parameters;
dynamically allocate them; put them in containers; and so forth. Study the
output until you are certain you understand when and why each copy-control
member is used. As you read the output, remember that the compiler can omit
calls to the copy constructor.

### Solution

See program files.

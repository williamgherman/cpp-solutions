### Exercise 15.24

What kind of classes need a virtual destructor? What operations must a virtual
destructor perform?

### Solution

A class which is the base of an inheritance hierarchy should usually define a
virtual destructor. This allows dynamic allocation. By defining a virtual
destructor, a pointer dynamically bound to a derived class but statically typed
to the base class may be deleted properly:

```cpp
struct Base {
    virtual ~Base() = default;
};
struct Derived : Base {
    ~Derived() = default;
};

Base *item = new Derived;
delete item; // calls Derived destructor!
```

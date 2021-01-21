### Exercise 15.09

When is it possible for an expression's static type to differ from its dynamic
type? Give three examples in which the static and dynamic types differ.

### Solution

An expression's static and dynamic types may differ when expression of a derived
class points or refers to an object of a base class.

```cpp
class A {};
class B : A{};

B foo;
A *bar = &foo; // static type: A*, dynamic type: B*

A bat = new B(); // ditto

A &baz = foo; // ditto
```

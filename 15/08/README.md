### Exercise 15.08

Define static type and dynamic type.

### Solution

Static type is the type declared at compile time, while the dynamic type
is the precise type of the object at runtime. For example:

```cpp
class A {};
class B : A {};

A *a = new B();
B *b = new B();
```
The static type of `a` and `b` is `A*` and `B*`, while their dynamic types are
both `B*`.

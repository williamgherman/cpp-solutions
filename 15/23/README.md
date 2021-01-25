### Exercise 15.23

Assuming class `D1` on page 620 had intended to override its inherited `fcn`
function, how would you fix that class? Assuming you fixed the class so that
`fcn` matched the definition in `Base`, how would the calls in that section be
resolved?

Mentioned code:

```cpp
class Base {
public:
    virtual int fcn();
};
class D1 : public Base {
public:
    int fcn(int);
    virtual void f2();
};
class D2 : public D1 {
public:
    int fcn(int);
    int fcn();
    void f2();
};
```

### Solution

`D1::fcn` must be written as `int fcn();`.

```
Base bobj;
D1 d1obj;
D2 d2obj;

Base *bp1 = &bobj, *bp2 = &d1obj, *bp3 = &d2obj;

bp1->fcn() // Base::fcn
bp2->fcn() // Base::fcn
bp3->fcn() // D2::fcn

D1 *d1p = &d1obj;
D2 *d2p = &d2obj;

bp2->f2() // error: Base::f2 doesn't exist
d1p->f2() // D1::f2
d2p->f2() // D2::f2

Base *p1 = &d2obj;
D1 *p2 = &d2obj;
D2 *p3 = &d2obj;

p1->fcn(42) // error: Base::fcn(int) doesn't exist
p2->fcn(42) // error: D1::fcn(int) doesn't exist
p3->fcn(42) // D2::fcn(int) <-- overridden but not virtual
```

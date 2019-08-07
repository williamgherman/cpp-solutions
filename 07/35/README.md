### Exercise 7.35

Explain the following code, indicating which definition of `Type` or `initVal`
is used for each use of those names. Say how you would fix any errors.

```cpp
typedef string Type;
Type initVal();
class Exercise {
public:
    typedef double Type;
    Type setVal(Type);
    Type initVal();
private:
    int val;
};
Type Exercise::setVal(Type parm) {
    val = parm + initVal();
    return val;
}
```

### Solution

```cpp
typedef string Type;
Type initVal();                    // string
class Exercise {
public:
    typedef double Type;
    Type setVal(Type);             // double, double
    Type initVal();                // double
private:
    int val;
};
Type Exercise::setVal(Type parm) { // string, double, should be
// Exercise::Type Exercise::setVal(Type parm)
    val = parm + initVal();        // Exercise::initVal
    return val;
}
```

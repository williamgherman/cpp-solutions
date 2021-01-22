### Exercise 15.13

Given the following classes, explain each `print` function:

```cpp
class base {
public:
    string name() { return basename; }
    virtual void print(ostream &os) { os << basename; }
private:
    string basename;
};
class derived : public base {
public:
    void print(ostream &os) { print(os); os << " " << i; }
private:
    int i;
};
```

### Solution

In `base`, the `print` function prints this object's `basename` to the given
output stream. In `derived`, the `print` function fails to qualify that it is
calling `base::print` and instead recursively calls itself.

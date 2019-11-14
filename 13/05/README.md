### Exercise 13.05

Given the following sketch of a class, write a copy constructor that copies all
the members. Your constructor should dynamically allocate a new `string` and
copy the object to which `ps` points, rather than copying `ps` itself.

```cpp
class HasPtr {
public:
    HasPtr(const std::string &s = std::string()):
        ps(new std::string(s)), i(0) { }
private:
    std::string *ps;
    int i;
};
```

### Solution

```cpp
HasPtr::HasPtr(HasPtr &hp):
    i(hp.i), ps(new std::string(*hp.ps)) { }
```

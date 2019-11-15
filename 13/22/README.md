### Exercise 13.22

Assume that we want `HasPtr` to behave like a value. That is, each object should
have its own copy of the `string` to which the objects point. We'll show the
definitions of the copy-control members in the next section. However, you
already know everything you need to know to implement these members. Write the
`HasPtr` copy constructor and copy-assignment operator befpre reading on.

### Solution

```cpp
HasPtr::HasPtr(const HasPtr &hp):
    ps(new std::string(*hp.ps)), i(hp.i) { }
HasPtr &HasPtr::operator=(const HasPtr &rhs) {
    auto *temp = new std::string(*rhs.ps);
    delete ps;
    ps = temp;
    i = rhs.i;
    return *this;
}
```

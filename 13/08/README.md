### Exercise 13.08

Write the assignment operator for the `HasPtr` class from exercise 13.05 in
&sect; 13.1.1. As with the copy constructor, your assignment operator should
copy the object to which `ps` points.

NB: This copy-assignment operator is in error, as this would produce undefined
results in case of self-assignment. A more correct solution would first copy
`*rhs.ps` to a temporary pointer, `delete ps` then continue with the
copy-assignment.

```cpp
HasPtr &HasPtr::operator=(const HasPtr &rhs)
{
    delete ps;
    ps = new std::string(*rhs.ps);
    i = rhs.i;
    return *this;
}
```

### Exercise 13.08

Write the assignment operator for the `HasPtr` class from exercise 13.05 in
&sect; 13.1.1. As with the copy constructor, your assignment operator should
copy the object to which `ps` points.

```cpp
HasPtr &HasPtr::operator=(const HasPtr &rhs)
{
    delete ps;
    ps = new std::string(*rhs.ps);
    i = rhs.i;
    return *this;
}
```

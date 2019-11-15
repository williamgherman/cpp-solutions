### Exercise 13.19

Does your `Employee` class need to define its own versions of the copy-control
members? If so, why? If not, why not? Implement whatever copy-control members
you think `Employee` needs.

### Solution

Yes. In the case that an `Employee` is copied for usage in a function, the copy
constructor should be implemented. Although the copy-assignment operator should
not be used, as existing employees should not share the same ID:

```cpp
class Employee {
public:
    Employee() { id = uniq++; }
    Employee(const Employee &) = default;
    Employee &operator=(const Employee &rhs) = delete;
private:
    int id;
    std::string name;
};
int Employee::uniq = 0;
```

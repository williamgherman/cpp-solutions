### Exercise 13.18

Define an `Employee` class that contains an employee name and a unique employee
identifier. Give the class a default constructor and a constructor that takes a
`string` representing the employee's name. Each constructor should generate a
unique ID by incrementing a `static` data member.

### Solution

```cpp
class Employee {
public:
    Employee() { id = uniq++; }
    Employee(std::string n): name(n) { id = uniq++; }
    static int uniq;
private:
    int id;
    std::string name;
};
int Employee:uniq = 0;
```

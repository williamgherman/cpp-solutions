### Exercise 14.34

Define a function-object class to perform an if-then-else operation: The call
operator for this class should take three parameters. It should test its first
parameter and if that succeeds, it should return its second parameter;
otherwise, it should retern its third parameter.

### Solution

```cpp
class IfThenElse {
public:
    int operator()(bool cond, int succ, int fail)
        { return cond ? succ : fail; }
};
```

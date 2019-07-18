### Exercise 6.55

Write four functions that add, subtract, multiply and divide two `int` values.
Store pointers to these values in your `vector` from the previous exercise.

### Solution

```cpp
int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    return x / y;
}

// declaration from previous exercise:
vector<int (*)(int, int)> vec;

vec.push_back(add);
vec.push_back(subtract);
vec.push_back(multiply);
vec.push_back(divide);
```

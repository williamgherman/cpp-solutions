### Exercise 14.49

Regardless of whether it is a good idea to do so, define a conversion to `bool`
for the class from the previous exercise.

### Solution

```cpp
explicit operator bool() const { return dewey = 0; }
```

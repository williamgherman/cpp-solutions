### Exercise 4.07

What does overflow mean? Show three expressions that will overflow.

### Solution

Overflow is when a variable's value exceeds the maximum or minimum bounds of its
type. 

```cpp
int i = INT_MAX + 1;
char c = CHAR_MIN - 1;
unsigned int ui = -1;
```

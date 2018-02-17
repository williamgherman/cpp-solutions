### Exercise 2.32

Is the following code legal or not? If not, how might you make it legal?

```cpp
int null = 0, *p = null;
```

### Solution

The code is illegal because a pointer cannot be assigned a variable value. One
solution might be to assign the pointer to `nullptr`:

```cpp
int null = 0, *p = nullptr;
```

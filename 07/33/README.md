### Exercise 7.33

What would happen if we gave `Screen` a `size` member defined as follows? Fix
any problems you identify.

```cpp
pos Screen::size() const
{
    return height * width;
}
```

### Solution

Because the `pos` type is defined within the `Screen` class body and it appears
before the name of the function within the `Screen` scope, we must verbosely
declare that `pos` is defined in the `Screen` scope as follows:

```cpp
Screen::pos Screen::size() const
{
    return height * width;
}
```

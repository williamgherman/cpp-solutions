### Exercise 6.45

Review the programs you've written for the earlier exercises and decide whether
they should be defined as `inline`. If so, do so. If not, explain why they
should not be `inline`.

### Solution

Many of the exercises in this chapter can be defined as `inline` because they
are short (less than five lines) and non-recursive. Only our recursive
`factorial` function is not viable for an `inline` definition because it will
most likely be refused to be placed inline by the compiler. These functions can
all be defined as `inline` by placing the `inline` keyword before the function's
return type. For example:

```cpp
inline void swap(int &i, int &j)
{
    int &temp = i;
    i = j;
    j = temp;
}
```

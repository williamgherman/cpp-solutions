### Exercise 16.05

Write a template version of the `print` function from &sect; 6.2.4 that takes a
reference to an array and can handle arrays of any size and any element type.

### Solution

```cpp
template <typename T, size_t M>
void print(const T (&array)[M])
{
    for (size_t i = 0; i != N; ++i)
        std::cout << array[i] << std::endl;
}
```

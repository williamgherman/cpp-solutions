### Exercise 16.06

How do you think the library `begin` and `end` functions that take an array
argument work? Define your own versions of these functions.

### Solution

I imagine they take a template type and nontype template for the type of items
in the array and its size and simply returns a pointer to the first or last
element in the array:

```cpp
template <typename T, size_t M>
T* begin(T (&array)[M])
{
    return array;
}

template <typename T, size_t M>
T* end(T (&array)[M])
{
    return array + M;
}
```

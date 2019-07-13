### Exercise 6.33

Write a recursive function to print the contents of a `vector`.

### Solution

```cpp
void print_vector(std::vector<int>::iterator beg,
                  std::vector<int>::iterator end)
{
    if (beg == end)
        return;
    std::cout << *beg++ << std::endl;
    print_vector(beg, end);
}
```

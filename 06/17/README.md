### Exercise 6.17

Write a function to determine whether a `string` contains any capital letters.
Write a function to change a `string` to all lowercase. Do the parameters you
used in these functions have the same type? If so, why? If not, why not?

### Solution

The parameters in the two functions are not identical, because `contains_caps`
does not edit the given `string`, so the `s` parameter is a reference to a
`const string`, while `capitalize` does edit the string, passing only a regular
reference.

```cpp
bool contains_caps(const std::string &s)
{
    for (auto c : s) {
        if (isupper(c))
            return true;
    }
    return false;
}

void capitalize(std::string &s)
{
    for (auto c : s)
        toupper(c);
}
```

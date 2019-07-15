### Exercise 6.37

Write three additional declarations for the function in the previous exercise.
One should use a type alias, one should use a trailing return, and the third
should use `decltype`. Which form do you prefer and why?

### Solution

```cpp
using rarr10strings = std::string[10];
rarr10string &f();

auto f() -> std::string(&)[10]

&rarrs = std::string[10];
decltype(rarrs) f();
```

I prefer the trailing return the most, as it is the most clear and requires no
type aliases. Otherwise, if frequently used, the type alias version would also
be acceptable.

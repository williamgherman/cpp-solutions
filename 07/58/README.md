### Exercise 7.58

Which, if any, of the following `static` data member declarations and
definitions are errors? Explain why.

```cpp
// example.h
class Example {
public:
    static double rate = 6.5;
    static const int vecSize = 20;
    static vector<double> vec(vecSize);
};

// example.C
#include "example.h"
double Example::rate;
vector<double> Example::vec;
```

### Solution

`rate` should either be defined outside of the class body or declared
`constexpr`. `vecSize` is not in error, but it should be defined outside of the
class body. `vec` is `static` and must be defined outside of the class body, and
it cannot use parentheses as an in-class initializer.

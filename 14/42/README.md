### Exercise 14.42

Using library function objects and adaptors, define an expression to (a) count
the number of values that are greater than 1024; (b) find the first string that
is not equal to `pooh`; and, (c) multiply all values by 2.

### Solution

```cpp
// (a)
std::greater<int> greatint;
std::count_if(ivec.begin(), ivec.end(), std::bind(greatint, _1, 1024));

// (b)
std::not_equal_to(std::string) neqs;
std::find_if(svec.begin(), svec.end(), std::bind(neqs, _1, "pooh"));

// (c)
std::multiplies<int> mult;
std::transform(ivec.begin(), ivec.end(), ivec.begin(), std::bind(mult, _1, 2));
```

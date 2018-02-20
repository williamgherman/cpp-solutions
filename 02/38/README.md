### Exercise 2.38

Describe the differences in type deduction between `decltype` and `auto`. Give
an example of an expression where `auto` and `decltype` will deduce the same
type and an example where they will deduce differing types.

### Solution

`decltype` deduces types by the form of expression given to it, while `auto`
deduces types by the type of the variable initializer. Also, `auto` does not
deduce reference types unless specified, unlike `decltype`. Some examples:

```cpp
int i = 42;
// both types deduce to int
auto x = i;
decltype(i) y = i;

int &r = i;
// auto deduces to int while decltype deduces to int&
auto a = r;
decltype(i) b = r;

// auto deduces to int while decltype deduces to int&
auto c = i;
decltype((i)) d = i;
``` 

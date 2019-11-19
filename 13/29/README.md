### Exercise 13.29

Explain why the calls to `swap` inside `swap(HasPtr &, HasPtr &)` do not cause a
recursion loop.

### Solution

Inside `swap(HasPtr &, HasPtr &)`, the calls to `swap` are `swap(string *,
string *)` and `swap(int, int)`, which will call those overloaded `swap`s
(probably `std::swap`) and not our `swap`.

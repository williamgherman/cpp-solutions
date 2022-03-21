### Exercise 15.39

Implement the `Query` and `Query_base` classes. Test your application by
evaluating and printing a query such as the one in Figure 15.3.

### Solution

See program files.

Oddly, I've had to make some changes for the program to function properly:

* operators `&` and `|` had to be made non-`inline`.
* operator `<<` doesn't overload properly, so `q.rep()` had to be called to not
  confuse the compiler. This is also probably for the same reason, that it is
  not implemented for some reason.


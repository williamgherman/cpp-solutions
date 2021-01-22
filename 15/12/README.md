### Exercise 15.12

Is it ever useful to declare a member function as both `override` and `final`?
Why or why not?

### Solution

Yes, as the qualifiers have different purposes. If you want to ensure a function
properly overrides a virtual function but not be able to be overriden by
subsequent derived classes, a function may have both qualifiers.

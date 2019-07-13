### Exercise 6.13

Assuming `T` is the name of a type, explain the difference between a function
declared as `void f(T)` and `void f(T&)`.

### Solution

A function declared with its parameter as a reference to type `T` will effect
the argument which is passed to the function, while the regular `T` argument in
the first function will only pass its value to the parameter.

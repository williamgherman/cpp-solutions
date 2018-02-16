### Exercise 2.09

Explain the following definitions. For those that are illegal, explain what's
wrong and how to correct it.

(a) `std::cin >> int input_value;`  
(b) `int i = { 3.14 };`  
(c) `double salary = wage = 9999.99;`  
(d) `int i = 3.14`

### Solution

(a) attempts to define an `int` while using it on the right-hand side of the
`>>` operator, which is illegal, because the `>>` operator expects a definied
variable.  
(b) attemps to define an `int` with a list initializer `3.14`, but will return
an error because of required conversion to an `int` type.  
(c) attempts to define a `double` variable and initialize it to a predefined
variable `wage`, which is assigned the value `9999.99`. If `wage` is not
predefined or if it is not a floating-point type, the initalization will fail or
incorrectly assign `salary` converted to the type of `wage`.  
(d) attempts to initialize an `int` to `3.14`, which will be implicitly
converted to `3`.

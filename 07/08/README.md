### Exercise 7.08

Why does `read` defined its `Sales_data` parameter as a plain reference and
`print` define its parameter as a reference to `const`?

### Solution

Because `read` modifies the `Sales_data` given to its function. `print` does not
do any modifications and therefore can be `const`.

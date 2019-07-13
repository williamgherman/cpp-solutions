### Exercise 6.14

Give an example of when a parameter should be a reference type. Give an example
of when a parameter should not be a reference.

### Solution

A swap or copy function involving objects could make good use of references
given that the entire object does not need to be copied over, like a swap
function for the `Sales_data` object. However, a parameter should not be a
reference in a function which would unintentionally edit the value of the passed
object, like if the argument was used as a `for` loop counter in a
`print_fibonacci(int n)`, where `n` is the number of fibonacci numbers to be
produced.

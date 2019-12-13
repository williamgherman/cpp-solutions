### Exercuse 13.45

Distinguish between an rvalue reference and an lvalue reference.

### Solution

An rvalue reference is a reference which refers to an rvalue; that is, an object
which is about to be destroyed.  something like a literal that is not a
variable, like the result of certain expressions, operations and functions. An
lvalue reference, on the other hand, refers to a variable or the result of a
function that returns an lvalue reference (`&`).

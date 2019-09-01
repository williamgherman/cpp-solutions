### Exercise 10.38

List the five iterator categories and the operations that each supports.

### Solution

Input iterators. These support equality, inequality, increment and dereference
(only as a rvalue) as well as the arrow synonym for accessing the member of a
dereferenced object.

Output iterators. These support the increment and dereference operators (as an
lvalue).

Forward iterators. These support equality, inequality, increment and dereference
operators (to read or write to) and the arrow synonym.

Bidirectional iterators. Same as forward iterators as well as the decrement
operator.

Random-access iterators. Same as bidirectional iterators as well as the
relational operators, addition and subtraction operators on integral values (as
well as the subtraction operator for finding the distance between two
iterators), as well as the subscript synonym `iter[n]` for `*(iter+n)`.

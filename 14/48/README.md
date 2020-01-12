### Exercise 14.48

Determine whether the class you used in exercise 7.40 from &sect; 7.5.1 should
have a conversion to `bool`. If so, explain why, and explain whether the
operator should be `explicit`. If not, explain why not.

### Solution

For a class representing a book, there is little utility in defining a `bool`
conversion operator, normally signalling failure. However, if such an operator
was required, it should be `explicit` to just be used in normal cases within a
condition.

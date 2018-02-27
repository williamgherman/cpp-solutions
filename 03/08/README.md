### Exercise 3.08

Rewrite the program in the first exercise, first using a `while` and again using
a traditional `for` loop. Which of the three approaches do you prefer and why?

### Solution

See `8.cc` and `8b.cc`. My prefered approach is the range `for` loop because a
`decltype` is not needed (nor is a `string::size_type`) and assessing the size
of the string is not needed.

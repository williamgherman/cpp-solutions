### Exercise 12.31

What difference(s) would it make if we used a `vector` instead of a `set` to
hold the line numbers? Which approach is better? Why?

### Solution

If we used a `vector`, the line numbers would not automatically sort themselves
into ascending order nor would they be safeguarded against repeated values.
Therefore, using a `set` is preferred because we do not care about the original
order of the lines or repeated words in the same line.

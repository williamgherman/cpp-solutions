### Exercise 9.01

Which is the most appropriate&em;a `vector`, a `deque` or a `list`&em;for the
following program tasks? Explain the rationale of your choice. If there is no
reason to prefer one or another container, explain why not.

(a) Read a fixed number of words, inserting them in the container alphabetically
as they are entered. We'll see in the next chapter that associative containers
are better suited to this problem.

(b) Read an unknown number of words. Always insert new words at the back. Remove
the next value from the front.

(c) Read an unknown number of integers from a file. Sort the numbers and then
print them to standard output.

### Solution

(a) `list`, because the program requires insertion into the middle of the list.

(b) `deque`, because the program requires deletion from the beginning of the
container.

(c) `vector`, as there are no restrictions on input or output, the best option
is `vector`.

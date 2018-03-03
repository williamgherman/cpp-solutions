### Exercise 3.26

In the binary search program on page 112, why did we write `mid = beg + (end -
beg) / 2;` instead of `mid = (beg + end) / 2;`?

### Solution

The `end()` property of an iterator points to the item placed one item
after the end of the container's contents, so it would be off by one.

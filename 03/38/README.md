### Exercise 3.38

In this section, we noted that it was not only illegal but meaningless to try to
add two pointers. What would adding two pointers be meaningless.

### Solution

A pointer is an address to memory. Adding or subtracting constant values to the
address makes sense if the pointer points to a container in memory; likewise,
the difference between two pointers within the same container makes sense.
However, adding two pointers gives no meaningful or usable information: the
resulting pointer will point to some unknown or invalid chunk of memory.

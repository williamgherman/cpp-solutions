### Exercise 13.54

What would happen if we defined a `HasPtr` move-assignment operator but did not
change the copy-and-swap operator? Write code to test your answer.

### Solution

See program files. Calling the assignment operator would have two candidate
functions, fail to compile due to the ambiguous call.

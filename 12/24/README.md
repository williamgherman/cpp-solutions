### Exercise 12.24

Write a program that reads a string from the standard input into a dynamically
allocated character array. Describe how your program handles varying size
inputs. Test your program by giving it a string of data that is longer than the
array size you've allocated.

### Solution

See `24.cc`. Although I expected a buffer overflow error, the extra data is
merely truncated and always adds the null byte to the end of the string.

### Exercise 1.02

Change the program to return `-1`. A return value of `-1` is often treated as an
indicator that the program failed. Recompile and rerun your program to see how
your system treats a failure indicator from `main`.

### Solution

See `main.cc`. The status returned by `main` given by `echo $?` is 255.

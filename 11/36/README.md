### Exercise 11.36

Our program does no checking on the validity of either input file. In
particular, it assumes that the rules in the transformation file are all
sensible. What would happen if a line in that file has a key, one space, and
then the end of the line? Predict the behavior and then check it against your
version of the program.

### Solution

The program would replace the key with an empty string. The program then calls
the runtime error, complaining that there is no rule for the given word.

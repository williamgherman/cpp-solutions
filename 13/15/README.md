### Exercise 13.15

Assume `numbered` has a copy constructor that generates a new serial number.
Does that change the output of the calls in the previous exercise? If so, why?
What output gets generated.

### Solution

Yes. Since the copy constructor will generate new serial numbers for each
created object, the three serial numbers produced will be unique, however they
will be unique from the original `a`, `b` and `c` objects because the copy
constructor operates during the functio call of `f`.

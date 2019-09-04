### Exercise 11.37

What are the advantages of an unordered container as compared to the ordered
version of that container? What are the advantages of the ordered version?

### Solution

An unordered container in theory should have better performance because of the
hashing (if implemented well), and the elements can be found at constant time.

An ordered container, however, is already sorted and requires no altering the
hash or bucket size.

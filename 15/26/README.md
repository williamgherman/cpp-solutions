### Exercise 15.26

Define the `Quote` and `Bulk_quote` copy-control members to do the same job as
the synthesized versions. Give them and the other constructors print statements
that identify which function is running. Write programs using these classes and
predicy what objects will be created and destroyed. Compare your predictions
with the output and continue experimenting until your predictions are reliably
correct.

### Solution

See program files.

Constructing derived classes will begin with the base class and move down the
heirarchy, while destruction works opposite. During copy and move operations,
the operators are called in their defined order, up the heirarchy to the base
class.

Complete output of program:

```
Quote()
Disc_quote()
Bulk_quote()
~Bulk_quote()
~Disc_quote()
~Quote()
Quote()
~Quote()
Quote()
Disc_quote()
Bulk_quote()
Quote()
Disc_quote()
Bulk_quote()
operator=(const Bulk_quote &rhs)
operator=(const Disc_quote &rhs)
operator=(const Quote &rhs)
operator=(Bulk_quote &&rhs)
operator=(Disc_quote &&rhs)
operator(Quote &&rhs)
~Bulk_quote()
~Disc_quote()
~Quote()
~Bulk_quote()
~Disc_quote()
~Quote()
```

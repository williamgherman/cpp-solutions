### Exercise 7.50

Determine whether any of your `Person` class constructors should be `explicit`.

### Solution

The only constructor which could make meaningful use of being `explicit` would
be the constructor which takes a reference to an `istream` (as it is the only
one with a single argument). This could be useful to not allow implicit
conversions.

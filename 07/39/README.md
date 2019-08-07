### Exercise 7.39

Would it be legal for both the constructor that takes a `string` and the one
that takes an `istream&` to have default arguments? If not, why not?

### Solution

No, it would not be legal because that would mean there would be two viable
candidate default constructors. That is, the compiler cannot reasonably choose
between the `string` default and the `istream&` default when given `Sales_data
s1()`.

### Exercise 15.25

Why did we define a default constructor for `Disc_quote`? What effect, if any,
would removing that constructor have on the behavior of `Bulk_quote`?

### Solution

Because we defined a constructor, a synthesized default constructor is not
additionally provided. This rule holds true in the entire class hierarchy. So,
we must explicitly define a default synthesized constructor in `Disc_quote` in
order to be able to default-initialize a `Bulk_quote` object.

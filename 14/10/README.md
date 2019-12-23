### Exercise 14.10

Describe the behavior of the `Sales_data` input operator if given the following
input:

(a) `0-201-99999-9 10 24.95`  
(b) `10 24.95 0-210-99999-9`

### Solution

(a) The input operator will correctly assign `bookNo` to the ISBN, `units_sold`
to 10 and the price to `24.95`. (b) The input will fail to read the ISBN to
convert it to a `double`, so the `Sales_data` item will be default-constructed.

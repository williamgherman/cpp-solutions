### Exercise 14.46

Explain whether defining these `Sales_data` conversion operators is a good idea
and whther they should be `explicit`.

### Solution

The conversion operators are unintuitive and are more clear by simply returning
`salesdata1.bookNo` or `salesdata1.avg_price()`. In the case they are completely
necessary, then they should be `explicit`.

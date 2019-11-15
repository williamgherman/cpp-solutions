### Exercise 13.16

What if the parameter in `f` were `const numbered &`? Does that change the
output? If so, why? What output gets generated?

### Solution

Yes. Since now there is no copy operation happening to `f`, the three serial
numbers produced will be the true serial numbers of `a`, `b` and `c`.

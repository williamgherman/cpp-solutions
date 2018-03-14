### Exercise 4.22

Extend the program that assigned high pass, pass and fail grades to also assign
low pass for grades between 60 and 75 inclusive. Write two versions: One version
that uses only conditional operators; the other should use one or more `if`
statements. Which version do you think is easier to understand and why?

### Solution

See `22.cc` and `22b.cc`.

The version with `if` statements is easier to understand, because of the
distinct expressions, rather than one long `std::cout` call.

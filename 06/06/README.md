### Exercise 6.06

Explain the differences between a parameter, a local variable and a local
`static` variable. Give an example of a function in which each might be useful.

### Solution

A parameter is a local variable which is initialized by the argument by the call
to the function, defined throughout the life of the function. `fact()` used a
parameter in its definition. A local variable is a variable defined within the
body of a compound statement, such as a function, which is only defined from the
line it's defined until the end of the function. Counter variables and temporary
return variables (such as `ret` in `fact()`) are local variables. A local
`static` variable is a local variable whose value remains persistent across
multiple calls to the function. A function which requires specific behavior
after a certain amount of calls may find a local `static` variable useful.

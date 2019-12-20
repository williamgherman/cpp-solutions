### Exercise 14.01

In what ways does an overloaded operator differ from built-in operators? In what
ways are overloaded operators the same as the built-in operators?

### Solution

#### Similarities:
    * They have the same order of precedence
    * They take the same number of arguments

#### Differences:
    * They operate on different datatypes
    * Overloadeds can be called directly (`operator==(salesitem1, salesitem2)`)
    * Some overloaded operators will disregard the built-in's order of
      evaluation of the operands.

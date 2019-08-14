### Exercise 7.46

Which, if any, of the following statements are untrue? Why?

(a) A class must provide at least one constructor.  
(b) A default constructor is a constructor with an empty parameter list.  
(c) If there are no meaningful default values for a class, the class should not
provide a default constructor.  
(d) If a class does not define a default constructor, the compiler generates one
that initializes each data member to the default value of its associated type.

### Solution

(a) True. If none are written by the class author, a synthesized default
constructor is generated.

(b) True, but not in all cases. A default constructor may have a parameter list
of entirely default-argument parameters (that is, for example, `MyClass(int x =
0, int y = 0) { }`).

(c) False. A default constructor should always be provided to make users of the
class less prone to error and unnecessary bug-checking.

(d) False. This only happens if there are no constructors at all in a class.

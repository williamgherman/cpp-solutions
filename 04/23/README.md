### Exercise 4.23

The following expression fails to compile due to operator precendence. Using
table 4.12 (p. 166), explain why it fails. How would you fix it?

```cpp
string s = "word";
string p1 = s + s[s.size() - 1] == 's' ? "" : "s";
```

### Solution

The string concatenation operator `+` will operate before the equality operator
`==`, attempting to compare a string to a character, which is a type mismatch.
To fix, force operator precendence with parentheses:

```cpp
string s = "word";
string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
```

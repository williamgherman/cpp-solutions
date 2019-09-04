### Exercise 11.26

What type can be used to subscript a `map`? What type does the subscript
operator return? Give a concrete example&em;that is, define a `map` and then
write the types that can be used to subscript the `map` and the type that would
be returned from the subscript operator.

### Solution

```cpp
std::map<int, bool> m;

// subscript:
std::map<int, bool>::key_type // which is...
int

// return of subscript:
std::map<int, bool>::maped_type // which is...
bool

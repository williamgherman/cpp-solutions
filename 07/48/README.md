### Exercise 7.48

Assuming the `Sales_data` constructors are not `explicit`, what operations
happen during the following definitions:

```cpp
string null_isbn("9-999-99999-9");
Sales_data item1(null_isbn);
Sales_data item2("9-999-99999-9");
```

What happens if the `Sales_data` constructors are `explicit`?

### Solution

Either way, `item1` will be directly initialized with `null_isbn`, and the
string `"9-999-99999-9"` will be implicitly converted to string to directly
initialize `item2`.

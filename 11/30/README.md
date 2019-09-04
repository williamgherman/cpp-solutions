### Exercise 11.30

Explain the meaning of the operand `pos.first->second` used in the output
expression of the final program in this section.

> Given program:
```cpp
for (auto pos = authors.equal_range(search_item);
     pos.first != pos.second; ++pos.first)
    cout << pos.first->second << endl; // print each title
```

### Solution

This operand will return the value of the `mapped_value` pointed to by the
iterator `pos.first` (which would be all items with the `key_value` of
`search_item`).

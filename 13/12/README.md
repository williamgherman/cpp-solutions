### Exercise 13.12

How many destructor calls occur in the following code fragment?

```cpp
bool fcn(const Sales_data *trans, Sales_data accum)
{
    Sales_data item1(*trans), item2(accum);
    return item1.isbn() != item2.isbn();
}
```

### Solution

Upon leaving `fcn`, `accum`, `item1` and `item2` will be destroyed,
calling for `Sales_data`'s destructor three times. The destructor is not run for
`trans` because references or pointers going out-of-scope is not a condition for
destruction.

### Exercise 12.10

Explain whether the following call to the `process` function defined on page 464
is correct. If not, how would you correct the call?

```cpp
shared_ptr<int> p(new int(42));
process(shared_ptr<int>(p));
```

> From page 464
```cpp
void process(shared_ptr<int> ptr)
{
    // use ptr
}   // ptr goes out of scope and is destroyed
```

### Solution

The call is valid and unharmful. The `shared_ptr` is copied to the temporary
`shared_ptr` in the call, processes the data and is still accessable after
`process` returns.

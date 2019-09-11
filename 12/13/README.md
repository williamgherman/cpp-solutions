### Exercise 12.13

What happens if we execute the following code?

```cpp
auto sp = make_shared<int>();
auto p = sp.get();
delete p;
```

### Solution

`sp` will become a dangling pointer after `delete p`, and will be in error after
the scope ends and the `shared_ptr` attempts to `delete sp`.

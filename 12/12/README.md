### Exercise 12.12

Using the declarations of `p` and `sp` explain each of the following calls to
`process`. If the call is legal, explain what it does. If the call is illegal,
explain why:

```cpp
auto p = new int();
auto sp = make_shared<int>();

// a
process(sp);

// b
process(new int());

// c
process(p);

// d
process(shared_ptr<int>(p));
```

### Solution

(a) is legal and copies `sp` to `process`. (b) is illegal since `shared_ptr` is
`explicit` and cannot be implicitly converted to be a regular pointer. Same
reason for (c). (d) is legal but the memory pointed to by `p` will be freed
after the call to `process`.

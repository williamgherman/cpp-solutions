### Exercise 13.46

Which kind of reference can be bound to the following initializers?

```cpp
int f();
vector<int> vi(100);
int? r1 = f();
int? r2 = vi[0];
int? r3 = r1;
int? r4 = vi[0] * f();
```

### Solution

```cpp
int &&r1 = f();
int &r2 = vi[0];
int &r3 = r1;
int &&r4 = vi[0] * f();
```

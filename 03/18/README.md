### Exercise 3.18

Is the following program legal? If not, how might you fix it?

```cpp
vector<int> ivec;
ivec[0] = 42;
```

### Solution

No, because `ivec` has no elements when the call to its first element is made.
Here is a possible alternative:

```cpp
vector<int> ivec;
ivec.push_back(42);
```

or, more concisely:

```cpp
vector<int> ivec = {42};
```

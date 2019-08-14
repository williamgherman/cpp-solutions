### Exercise 7.44

Is the following declaration legal? If not, why not?

```cpp
vector<NoDefault> vec(10);
```

### Solution

The declaration is not legal, as the `NoDefault`s are default-initialized here,
and there is no default constructor defined for `NoDefault`.

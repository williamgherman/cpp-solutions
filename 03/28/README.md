### Exercise 3.28

What are the values in the following arrays?

```cpp
string sa[10];
int ia[10];
int main() {
    string sa2[10];
    int    ia2[10];
}
```

### Solution

`sa`, `ia` and `sa2` are default-initialized; so their values are all `0` or the
empty string. Since `ia2` is a primitive array inside a function, its values are
uninitialized to undefined values.

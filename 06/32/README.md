### Exercise 6.32

Indicate whether the following function is legal. If so, explain what it does;
if not, correct any errors and then explain it.

```cpp
int &get(int *arry, int index) { return arry[index]; }
int main() {
    int ia[10];
    for (int i = 0; i != 10; ++i)
        get(ia, i) = i;
}
```

### Solution

The function is valid and returns a reference to the element in position `index`
in `arry`.

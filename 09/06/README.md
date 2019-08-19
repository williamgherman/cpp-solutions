### Exercise 9.06

What is wrong with the following program? How might you correct it?

```cpp
list<int> lst1;
list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();
while (iter1 < iter2) /* ... */
```

### Solution

List iterators cannot make use of the `<` operator for comparison, and must
instead use `!=` or `==`:

```cpp
while (iter1 != iter2) /* ... */
```

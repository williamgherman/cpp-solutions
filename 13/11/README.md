### Exercise 13.11

Add a destructor to your `HasPtr` class from the previous exercises.

```cpp
~HasPtr() {
    delete ps;
}
```

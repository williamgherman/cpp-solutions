### Exercise 12.21

We could have written `StrBlobPtr`'s `deref` member as follows:

```cpp
std::string& deref() const
{ return (*check(curr, "dereference past end"))[curr]; }
```

### Solution

The original two-line solution is clearer, although this solution is more
consise.

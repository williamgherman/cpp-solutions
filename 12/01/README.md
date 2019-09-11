### Exercise 12.01

How many elements do `b1` and `b2` have at the end of this code?

```cpp
StrBlob b1;
{
    StrBlob b2 = {"a", "an", "the"};
    b1 = b2;
    b2.push_back("about");
}
```

### Solution

`b2` will be out of scope, but `b1` will contain all four strings originally in
`b2`.

### Exercise 1.08

Indicate which, if any, of the following output statements are legal:

```cpp
std::cout << "/*";
std::cout << "*/";
std::cout << /* "*/" */;
std::cout << /* "*/" /* "/*" */;
```

### Solution

The final statement will properly compile, but it nests two comments, so it
should not be used.

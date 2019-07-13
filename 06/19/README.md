### Exercise 6.19

Given the following declarations, determine which calls are legal and which are
illegal. For those that are illegal, explain why.

```cpp
double calc(double);
int count(const string &, char);
int sum(vector<int>::iterator, vector<int>::iterator, int);
vector<int> vec(10);
```

(a) `calc(23.4, 55.1);`  
(b) `count("abcda", 'a');`  
(c) `calc(66);`  
(d) `sum(vec.begin(), vec.end(), 3.8);`

### Solution

(a) is not legal, as there is no declaration for `calc` that has two `double`
parameters. (b) is legal. (c) is legal, but the `int` will be converted to
`double`. (d) is legal, but the `double` will be truncated to `int`.

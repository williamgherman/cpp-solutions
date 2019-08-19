### Exercise 9.13

How would you initialize a `vector<double>` from a `list<int>`? From a
`vector<int>`? Write code to check your answers.

### Solution

```cpp
std::list<int> seq = {0, 1, 2, 3, 4};
std::vector<int> seq2 = {0, 1, 2, 3, 4};
std::vector<double> vec1(seq1.begin(), seq1.end());
std::vector<double> vec2(seq2.begin(), seq2.end());
```

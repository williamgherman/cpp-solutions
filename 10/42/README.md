### Exercise 10.42

Reimplement the program that eliminated duplicate words that we wrote in &sect;
10.2.3 to use a `list` instead of a `vector`.

### Solution

```cpp
void elimDups(std::list<std::string> &words)
{
    words.sort();
    words.unique();
}
```

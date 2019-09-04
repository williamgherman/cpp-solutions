### Exercise 11.21

Assuming `word_count` is a `map` from `string` to `size_t` and `word` is a
`string`, explain the following loop:

```cpp
while (cin >> word)
    ++word_count.insert({word, 0}).first->second;
```

### Solution

For each word given from the standard input, the `map` attempts to add a new
element with that word and a count of zero. This insertion returns a `pair` of
an iterator to `word_count` and a `bool` of its success in the insertion. The
iterator is then accessed regardless of success; its count is then incremented.

The net effect of this statement is it will either increment the counter for
that word or add a new word with a count of one.

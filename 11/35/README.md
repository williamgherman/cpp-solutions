### Exercise 11.35

In `buildMap`, what effect, if any, would there be from rewriting the following?

```cpp
trans_map[key] = value.substr(1);
// to
trans_map.insert({key, value.substr(1)});
```

### Solution

The different effect would only be present if there are multiple rules for the
same word: the subscript would always insert the newest one, resulting in the
final rule in the sequence to be implemented, while the insert function would
not insert if there are more rules, implementing the first rule given.

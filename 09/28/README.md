### Exercise 9.28

Write a function that takes a `forward_list<string>` and two additional `string`
arguments. The function should find the first `string` and insert the second
immediately following the first. If the first `string` is not found, then insert
the second `string` at the end of the list.

### Solution

Note that the below function would insert multiple second `string`s if there
were multiple firsts. 

```cpp
void addastring(std::forward_list<std::string> &fl, const std::string &s,
                                                    const std::string &t)
{
    auto prev = fl.before_begin();
    auto curr = fl.begin();
    while (curr != fl.end()) {
        if (*curr == s) {
            curr = fl.insert_after(curr, t);
        } else {
            ++curr;
            if (curr == fl.end())
                fl.insert_after(curr, t);
        }
    }
}
```

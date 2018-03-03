### Exercise 3.22

Revise the loop that printed the first paragraph in `text` to instead change the
elements in `text` that correspond to the first paragraph to all uppercase.
After you've updated `text`, print its contents.

### Solution

```cpp
for (auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it)
{
    for (auto &c : *it)
        c = c.toupper();
    cout << *it << endl;
}
```

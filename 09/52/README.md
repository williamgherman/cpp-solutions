### Exercise 9.52

Use a `stack` to process parenthesized expressions. When you see an open
parenthesis, note that it was seen. When you see a close parenthesis after an
open parenthesis, `pop` elements down to and including the open parenthesis off
the `stack`. `push` a value onto the stack to indicate that a parenthesized
expression was replaced.

### Solution

```cpp
std::stack<char> s;
std::string s{"This is a (test) example."};
std::string replacement;
bool seen = false;

for (auto &c : s) {
    if (c == '(') {
        seen = true;
        continue;
    } else if (c == ')')
        seen = false;
    if (seen)
        s.push(c);
}

while (!s.empty()) {
    replacement += s.top();
    s.pop();
}

s.replace(s.find("(") + 1, replacement.size(), replacement);
std::cout << s << std::endl;
```

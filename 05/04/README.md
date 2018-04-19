### Exercise 5.04

Explain each of the following examples, and correct any problems you detect.

(a) `while (string::iterator iter != s.end()) { /* ... */ }`  
(b) 
```cpp
while (bool status = find(word)) { /* ... */ }
if (!status) { /* ... */ }
```

### Solution

(a) The loop attempts to traverse the string `s`, but fails to initialize the
iterator `iter`:

```cpp
for (string::iterator iter = s.begin(); s != s.end(); ++iter) { /* ... */ }
```

(b) The `if` statement after the loop attempts to access `status` which is out
of scope. The loop itself terminates when `find(word)` returns `false`.

```cpp
bool status
while (status = find(word)) { /* ... */ }
if (!status) { /* ... */ }
```

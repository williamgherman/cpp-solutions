### Exercise 12.29

We could have written the loop to manage the interaction with the user as a `do
while` loop. Rewrite the loop to use a `do while`. Explain which version you
prefer and why.

### Solution

```cpp
do {
    std::cout << "Enter word to look for, or q to quit: ";
    std::string s;
    if (!(std::cin >> s) || s == "q") break;
    print(std::cout, tq.query(s)) << std::endl;
} while(true);
```

I prefer the regular `while` loop because it is less verbose and more idiomatic.

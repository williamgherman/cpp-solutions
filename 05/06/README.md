### Exercise 5.06

Rewrite your grading program to use the conditional operator (&sect; 4.7, p.
151) in place of the `if-else` statement.

### Solution

```cpp
std::string getlettergrade(int numericgrade)
{
    std::vector<std::string> scores = {"F", "D", "C", "B", "A", "A+"};
    std::string lettergrade;

    lettergrade = (numericgrade < 60) ? scores[0] 
                                      : scores[(numericgrade - 50)/100];
    lettergrade += (numericgrade == 100) ? '' 
                   : (numericgrade % 10 < 3) ? '-'
                                             : ((numericgrade % 10 > 7) ? '+'
                                                                        : '';
    return lettergrade;
}
```

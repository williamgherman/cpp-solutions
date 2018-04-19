### Exercise 5.05

Using an `if-else` statement, write your own version of the program to generate
the letter grade from a numeric grade.

### Solution

```cpp
std::string getlettergrade(int numericgrade)
{
    std::vector<std::string> scores = {"F", "D", "C", "B", "A", "A+"};
    std::string lettergrade;

    if (numericgrade < 60)
        lettergrade = scores[0];
    else {
        lettergrade = scores[(grade - 50)/10];
        if (grade % 10 > 7)
            lettergrade += '+';
        else if (grade % 10 < 3 && grade != 100)
            lettergrade += '-';
    }
    return lettergrade;
}
```

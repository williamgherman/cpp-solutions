### Exercise 7.42

For the class you wrote for exercise 7.40, decide whether any of the
constructors might use delegation. If so, write the delegating constructor(s)
for your class. If not, look at the list of abstractions and choose one that you
think would use a delegating constructor. Write the class definition for that
abstraction.

### Solution

```cpp
class Book {
public:
    Book(std::string s, std::string t, int y): title(s), author(t), year(y) { }
    Book(std::string s = "Untitled", std::string t = "Anonymous"): 
        Book(s, t, 0) { }
    Book(std::istream &is): Book() { read(is, *this); }
    read(std::istream &is, Book b) {
        is >> name >> author >> year;
    }
private:
    std::string title = "Untitled";
    std::string author = "Anonymous";
    int year = 0;
};
```

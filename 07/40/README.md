### Exercise 7.40

Choose one of the following abstractions (or an abstraction of your own
choosing). Determine what data are needed in the class. Provide an appropriate
set of constructors. Explain your decisions.

(a) `Book`  
(b) `Date`  
(c) `Employee`  
(d) `Vehicle`  
(e) `Object`  
(f) `Tree`

### Solution

```cpp
class Book {
public:
    Book(std::string s = "Untitled", std::string t = "Anonymous"): title(s) { }
    Book(std::istream &is) { read(is, *this); }
    Book(std::string s, std::string t, int y): title(s), author(t), year(y) { }
    read(std::istream &is, Book b) {
        is >> name >> author >> year;
    }
private:
    std::string title = "Untitled";
    std::string author = "Anonymous";
    int year = 0;
};
```

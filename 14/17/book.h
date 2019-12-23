#ifndef BOOK_H_
#define BOOK_H_

#include <string>
#include <iostream>

class Book {
    friend std::ostream &operator<<(std::ostream &, const Book &);
    friend std::istream &operator>>(std::istream &, Book &);
    friend bool operator==(const Book &, const Book &);
    friend bool operator!=(const Book &, const Book &);
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

bool operator==(const Book &lhs, const Book &rhs)
{
    return lhs.title == rhs.title &&
           lhs.author == rhs.author &&
           lhs.year == rhs.year;
}

bool operator!=(const Book &lhs, const Book &rhs)
{
    return !(lhs == rhs);
}

std::ostream &operator<<(std::ostream &os, const Book &b)
{
    os << b.author << " " << b.title << " " << b.year;
    return os;
}

std::istream &operator>>(std::istream &is, Book &b)
{
    is >> b.author >> b.title >> b.year;
    if (!is)
        b = Book();
    return is;
}

#endif

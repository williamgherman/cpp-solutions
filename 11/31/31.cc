#include <iostream>
#include <map>
#include <string>

void find_and_remove_book(std::multimap<std::string, std::string> &books,
                          const std::string &s)
{
    auto it = books.find(s);
    if (it == books.end()) {
        std::cerr << "No books by author " << s << " could be found."
                  << std::endl;
    } else
        books.erase(it);
}

int main()
{
    std::multimap<std::string, std::string> books = {
        {"Joyce, James", "Finnegans Wake"},
        {"Joyce, James", "Ulysses"},
        {"Orwell, George", "1984"},
        {"Orwell, George", "Animal Farm"},
        {"Orwell, George", "Shooting an Elephant"},
        {"Plato", "The Republic"}};

    find_and_remove_book(books, "Plato");
    find_and_remove_book(books, "Aristotle");

    for (const auto &p : books)
        std::cout << p.first << ": " << p.second << std::endl;
}

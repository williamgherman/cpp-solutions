#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include "Sales_item.h"

bool mycompareIsbn(const Sales_item &book1, const Sales_item &book2)
{
    return book1.isbn() < book2.isbn();
}

int main()
{
    std::vector<Sales_item> books;
    std::istream_iterator<Sales_item> in(std::cin), eof;
    while (in != eof)
        books.push_back(*in++);
    std::sort(books.begin(), books.end(), mycompareIsbn);
    for (auto beg = books.cbegin(), end = beg; beg != books.end(); beg = end) {
        end = find_if(beg, books.cend(), [beg](const Sales_item &book)
                                              { return book.isbn() != beg->isbn(); });
        std::cout << std::accumulate(beg, end, Sales_item(beg->isbn())) << std::endl;
    }
}

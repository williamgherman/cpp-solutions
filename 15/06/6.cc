#include <iostream>
#include "quote.h"

int main()
{
    Quote q("123-4567-8910", 10.95);
    Bulk_quote b("321-7654-1098", 9.95, 20, 0.05);

    print_total(std::cout, q, 10);
    print_total(std::cout, b, 2);
}

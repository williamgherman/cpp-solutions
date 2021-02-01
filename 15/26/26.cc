#include "debug_quote.h"
#include <iostream>

int main()
{
    Bulk_quote *b1 = new Bulk_quote;
    delete b1;
    Quote *q1 = new Quote;
    delete q1;

    Bulk_quote b2, b3;
    b3 = b2;
    b2 = std::move(b3);

    return 0;
}

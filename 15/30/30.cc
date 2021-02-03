#include <iostream>
#include <vector>

#include "basket.h"
#include "quote.h"

int main()
{
    Basket basket;
    for (int i = 0; i < 20; i++)
        basket.add_item(Bulk_quote("0-123-4567", 4.99, 10, 0.10));
    for (int i = 0; i < 20; i++)
        basket.add_item(Bulk_quote("9-876-5432", 19.89, 100, 0.25));
    basket.total_receipts(std::cout);
    return 0;
}

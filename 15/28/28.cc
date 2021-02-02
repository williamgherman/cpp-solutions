#include <iostream>
#include <vector>
#include <iomanip>

#include "quote.h"

int main()
{
    std::vector<Quote> basket;
    basket.push_back(Bulk_quote("0-123-4567", 4.99, 10, 0.10));
    basket.push_back(Bulk_quote("9-876-5432", 19.89, 100, 0.25));
    double sum = 0;
    for (auto item : basket) {
        sum += item.net_price(20);
    }
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Sum: $" << sum << std::endl;
    return 0;
}

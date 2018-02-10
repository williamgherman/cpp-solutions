#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, total;

    std::cin >> total;
    while (std::cin >> item)
    {
        if (item.isbn() == total.isbn())
            total += item;
        else 
        {
            std::cout << total << std::endl;
            total = item;
        }
    }
    std::cout << total << std::endl;
    return 0;
}

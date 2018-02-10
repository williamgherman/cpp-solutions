#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, total;
    
    std::cin >> total;

    while (std::cin >> item)
        total += item;
    std::cout << total << std::endl;
    return 0;
}

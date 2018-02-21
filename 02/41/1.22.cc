#include <iostream>

struct Sales_data {
    std::string name = "";
    unsigned int units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    // TODO
    Sales_item item, total;
    
    std::cin >> total;

    while (std::cin >> item)
        total += item;
    std::cout << total << std::endl;
    return 0;
}

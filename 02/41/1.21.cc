#include <iostream>

struct Sales_data {
    std::string name = "";
    unsigned int units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    double price;
    Sales_data item1, item2;

    std::cin >> item1.name >> item1.units_sold >> price;
    item1.revenue = price * item1.units_sold;
    std::cin >> item2.name >> item2.units_sold >> price;
    item2.revenue = price * item2.units_sold;

    if (item1.name == item2.name)
    {
        std::cout << item1.name << " " << item1.units_sold + item2.units_sold
                  << " " << item1.revenue + item2.revenue << std::endl;
    } else {
        std::cout << item1.name << " " << item1.units_sold << " "
                  << item1.revenue << std::endl;
        std::cout << item2.name << " " << item2.units_sold << " "
                  << item2.revenue << std::endl;
    }
    return 0;
}

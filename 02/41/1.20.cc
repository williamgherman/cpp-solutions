#include <iostream>

struct Sales_data {
    std::string name = "";
    unsigned int units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    double price;
    Sales_data book;
    while (std::cin >> book.name >> book.units_sold >> price)
    {
        book.revenue = price * book.units_sold;
        std::cout << book.name << " " << book.units_sold << " "
                  << book.revenue << std::endl;
    }
    return 0;
}

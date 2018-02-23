#include <iostream>
#include "Sales_data.h"

int main()
{
    double price;
    Sales_data book;
    while (std::cin >> book.name >> book.units_sold >> price)
    {
        book.revenue = price * book.units_sold;
        std::cout << book.name << " " << book.units_sold << " "
                  << book.revenue " " << book.revenue / book.units_sold 
                  << std::endl;
    }
    return 0;
}

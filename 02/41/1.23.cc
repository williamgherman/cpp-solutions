#include <iostream>

struct Sales_data {
    std::string name = "";
    unsigned int units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data item, total;
    double price;

    std::cin >> total.name >> total.units_sold >> price;
    total.revenue = price * total.units_sold;

    while (std::cin >> item.name >> item.units_sold >> price)
    {
        item.revenue = price * item.units_sold;
        if (item.name == total.name)
        {
            total.units_sold += item.units_sold;
            total.revenue += item.revenue;
        } else {
            std::cout << total.name << " " << total.units_sold 
                      << " " << total.revenue << " "
                      << total.revenue / total.units_sold << std::endl;
            total.name = item.name;
            total.units_sold = item.units_sold;
            total.revenue = item.revenue;
        }
    }
    std::cout << total.name << " " << total.units_sold
              << " " << total.revenue << " " << total.revenue / total.units_sold
              << std::endl;
    return 0;
}

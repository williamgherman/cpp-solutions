#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo = "";
    unsigned int units_sold = 0;
    double revenue = 0.0;
    Sales_data& combine(const Sales_data &);
    std::string isbn() const { return bookNo; }
};

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

int main(void)
{
    Sales_data total;
    if (std::cin >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans;
        while (std::cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                std::cout << total.isbn() << " " << total.units_sold << " "
                          << total.revenue << std::endl;
                total.bookNo = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }
        std::cout << total.isbn() << " " << total.units_sold << " "
                  << total.revenue << std::endl;
    } else {
        std::cerr << "No data?!" << std::endl;
        return 1;
    }
}

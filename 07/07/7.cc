#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo = "";
    unsigned int units_sold = 0;
    double revenue = 0.0;
    Sales_data& combine(const Sales_data &);
    std::string isbn() const { return bookNo; }
    double avg_price() const;
};

double Sales_data::avg_price() const
{
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream &read(std::istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " "
       << item.avg_price() << std::endl;
    return os;
}

int main(void)
{
    Sales_data total;
    if (read(std::cin, total)) {
        Sales_data trans;
        while (read(std::cin, trans)) {
            if (total.isbn() == trans.isbn()) {
                add(total, trans);
            } else {
                print(std::cout, total);
                total.bookNo = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }
        print(std::cout, trans);
    } else {
        std::cerr << "No data?!" << std::endl;
        return 1;
    }
}


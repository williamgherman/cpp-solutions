#ifndef SALES_DATA_H_
#define SALES_DATA_H_
#include <iostream>
#include <string>

struct Sales_data;
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
std::istream &read(std::istream &is, Sales_data &item);
std::ostream &print(std::ostream &os, const Sales_data &item);

struct Sales_data {
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, const Sales_data &item);
private:
    std::string bookNo = "";
    unsigned int units_sold = 0;
    double revenue = 0.0;
public:
    Sales_data(const std::string &s, unsigned n, double p):
               bookNo(s), units_sold(n), revenue(p*n) { }
    Sales_data(): Sales_data("", 0, 0) { }
    Sales_data(const std::string &s): Sales_data(s, 0, 0) { }
    Sales_data(std::istream &is): Sales_data()
    {
        read(is, *this);
    }

    Sales_data& combine(const Sales_data &);
    std::string isbn() const { return bookNo; }
    double avg_price() const;
};

// Member fx
inline double Sales_data::avg_price() const
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

// Nonmember fx
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
       << item.avg_price();
    return os;
}
#endif

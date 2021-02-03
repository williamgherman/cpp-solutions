#ifndef QUOTE_H_
#define QUOTE_H_

#include <string>
#include <cstdlib>
#include <iostream>

#include "basket.h"


class Quote {
public:
    Quote() = default;
    Quote(const std::string &book, double sales_price):
        bookNo(book), price(sales_price) { }
    std::string isbn() const { return bookNo; }
    virtual double net_price(std::size_t n) const
        { return n * price; }
    virtual ~Quote() = default;
    // for basket to copy/move pointers, &/&& to diff between lvalue/rvalue
    virtual Quote *clone() const &
        { return new Quote(*this); }
    virtual Quote *clone() const &&
        { return new Quote(std::move(*this)); }
    virtual void debug() const {
        std::cout << "bookNo: " << bookNo << "\nprice: " << price << std::endl;
    }
private:
    std::string bookNo;
protected:
    double price = 0.0;
};

double print_total(std::ostream &os, const Quote &item, std::size_t n)
{
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: "
       << ret << std::endl;
    return ret;
}

// abstract base class
class Disc_quote : public Quote {
public:
    Disc_quote() = default;
    Disc_quote(const std::string &book, double price,
               std::size_t qty, double disc):
        Quote(book, price), quantity(qty), discount(disc) { }
    // pure virtual
    double net_price(std::size_t) const = 0;
protected:
    std::size_t quantity = 0;
    double discount = 0.0;
};


class Bulk_quote : public Disc_quote {
public:
    Bulk_quote() = default; // unneeded due to inherited constructor
    using Disc_quote::Disc_quote; // inherit constructor
    double net_price(std::size_t) const override;
    Bulk_quote *clone() const & override
        { return new Bulk_quote(*this); }
    Bulk_quote *clone() const && override
        { return new Bulk_quote(std::move(*this)); }
    void debug() const override {
        std::cout << "bookNo: " << isbn() << "\nmin_qty: " << min_qty
                  << "\ndiscount: " << discount << std::endl;
    }
private:
    std::size_t min_qty = 0;
};

double Bulk_quote::net_price(std::size_t cnt) const
{
    if (cnt >= min_qty)
        return cnt * (1 - discount) * price;
    else
        return cnt * price;
}

class Limit_quote : public Disc_quote {
public:
    Limit_quote() = default;
    Limit_quote(const std::string &book, double p,
                std::size_t max, double disc):
        Disc_quote(book, p, max, disc) { }
    double net_price(std::size_t) const override;
};

double Limit_quote::net_price(std::size_t cnt) const
{
    if (cnt <= quantity)
        return cnt * (1 - discount) * price;
    else
        return ((cnt - quantity) * price) + (quantity * (1 - discount) * price);
}
#endif

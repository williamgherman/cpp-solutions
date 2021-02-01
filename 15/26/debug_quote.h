#ifndef QUOTE_H_
#define QUOTE_H_

#include <string>
#include <cstdlib>
#include <iostream>

class Quote {
public:
    Quote() {
        std::cout << "Quote()" << std::endl;
    }
    Quote(const std::string &book, double sales_price):
        bookNo(book), price(sales_price) {
        std::cout << "Quote(book, price)" << std::endl;
    }
    std::string isbn() const { return bookNo; }
    virtual double net_price(std::size_t n) const
        { return n * price; }
    virtual ~Quote() {
        std::cout << "~Quote()" << std::endl;
    }
    Quote(const Quote &rhs): price(rhs.price), bookNo(rhs.bookNo) {
        std::cout << "Quote(const Quote &rhs)" << std::endl;
    }
    Quote(Quote &&rhs): price(std::move(rhs.price)),
                        bookNo(std::move(rhs.bookNo)) {
        std::cout << "Quote(Quote &&rhs)" << std::endl;
    }
    Quote &operator=(const Quote &rhs) {
        std::cout << "operator=(const Quote &rhs)" << std::endl;
        price = rhs.price;
        bookNo = rhs.bookNo;
        return *this;
    }
    Quote &operator=(Quote &&rhs) {
        std::cout << "operator(Quote &&rhs)" << std::endl;
        price = std::move(rhs.price);
        bookNo = std::move(rhs.bookNo);
        return *this;
    }

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
    Disc_quote() {
        std::cout << "Disc_quote()" << std::endl;
    }
    Disc_quote(const std::string &book, double price,
               std::size_t qty, double disc):
        Quote(book, price), quantity(qty), discount(disc) {
        std::cout << "Disc_quote(book, price, qty, disc)" << std::endl;
    }
    ~Disc_quote() {
        std::cout << "~Disc_quote()" << std::endl;
    }
    Disc_quote(const Disc_quote &rhs): Quote(rhs), quantity(rhs.quantity),
                                       discount(rhs.discount) {
        std::cout << "Disc_quote(const Quote &rhs)" << std::endl;
    }
    Disc_quote(Disc_quote &&rhs): Quote(std::move(rhs)),
                                  quantity(std::move(rhs.quantity)),
                                  discount(std::move(rhs.discount)) {
        std::cout << "Disc_quote(Disc_quote &&rhs)" << std::endl;
    }
    Disc_quote &operator=(const Disc_quote &rhs) {
        std::cout << "operator=(const Disc_quote &rhs)" << std::endl;
        Quote::operator=(rhs);
        quantity = rhs.quantity;
        discount = rhs.discount;
        return *this;
    }
    Disc_quote &operator=(Disc_quote &&rhs) {
        std::cout << "operator=(Disc_quote &&rhs)" << std::endl;
        Quote::operator=(std::move(rhs));
        quantity = std::move(rhs.quantity);
        discount = std::move(rhs.discount);
        return *this;
    }

    // pure virtual
    double net_price(std::size_t) const = 0;
protected:
    std::size_t quantity = 0;
    double discount = 0.0;
};


class Bulk_quote : public Disc_quote {
public:
    Bulk_quote() {
        std::cout << "Bulk_quote()" << std::endl;
    }
    ~Bulk_quote() {
        std::cout << "~Bulk_quote()" << std::endl;
    }
    Bulk_quote(const std::string &book, double p,
               std::size_t qty, double disc):
        Disc_quote(book, p, qty, disc) {
        std::cout << "Bulk_quote(book, p, qty, disc)" << std::endl;
    }
    Bulk_quote(const Bulk_quote &rhs): Disc_quote(rhs) {
        std::cout << "Bulk_quote(const Bulk_quote &rhs)" << std::endl;
    }
    Bulk_quote(Bulk_quote &&rhs): Disc_quote(std::move(rhs)) {
        std::cout << "Bulk_quote(Bulk_quote &&rhs)" << std::endl;
    }
    Bulk_quote &operator=(const Bulk_quote &rhs) {
        std::cout << "operator=(const Bulk_quote &rhs)" << std::endl;
        Disc_quote::operator=(rhs);
        return *this;
    }
    Bulk_quote &operator=(Bulk_quote &&rhs) {
        std::cout << "operator=(Bulk_quote &&rhs)" << std::endl;
        Disc_quote::operator=(std::move(rhs));
        return *this;
    }
    double net_price(std::size_t) const override;
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

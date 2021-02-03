#ifndef BASKET_H_
#define BASKET_H_

#include <iostream>
#include <memory>
#include <set>

#include "quote.h"

// helper class for containers of quotes
class Basket {
public:
    void add_item(const std::shared_ptr<Quote> &sale)
        { items.insert(sale); }
    // overloaded for direct access
    void add_item(const Quote &sale)
        { items.insert(std::shared_ptr<Quote>(sale.clone())); }
    void add_item(Quote &&sale)
        { items.insert(std::shared_ptr<Quote>(std::move(sale).clone())); }
    double total_receipts(std::ostream&) const;
private:
    static bool compare(const std::shared_ptr<Quote> &lhs,
                        const std::shared_ptr<Quote> &rhs)
        { return lhs->isbn() < rhs->isbn(); }
    std::multiset<std::shared_ptr<Quote>, decltype(compare)*> items{compare};
};

double Basket::total_receipts(std::ostream &os) const
{
    double sum = 0.0;
    for (auto iter = items.cbegin();
              iter != items.cend();
              iter = items.upper_bound(*iter)) {
        sum += print_total(os, **iter, items.count(*iter));
    }
    os << "Total Sale: " << sum << std::endl;
    return sum;
}
#endif

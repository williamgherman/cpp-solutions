### Exercise 15.07

Define a class that implements a limited discount strategy, which applies a
discount to books purchased up to a given limit. If the number of copies exceeds
that limit, the normal price applies to those purchase beyond the limit.

### Solution

```cpp
class Limit_quote : public Quote {
public:
    Limit_quote() = default;
    Limit_quote(const std::string &book, double p,
    std::size_t max, double disc);
        Quote(isbn, price), max_qty(max), discount(disc) { }
    double net_price(std::size_t) const override;
private:
    std::size_t max_qty = 0;
    double discount = 0.0;
};

double Limit_quote::net_price(std::size_t cnt) const
{
    if (cnt <= max_qty)
        return cnt * (1 - discount) * price;
    else
        return ((cnt - max_qty) * price) + (max_qty * (1 - discount) * price);
}
```

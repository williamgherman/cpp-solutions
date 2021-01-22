### Exercise 15.17

Try to define an object of type `Disc_quote` and see what errors you get from
the compiler.

### Solution

See program files for definitions.

Output from `g++`:

```
17.cc: In function 'int main()':
17.cc:6:37: error: invalid new-expression of abstract class type 'Disc_quote'
    6 |     Disc_quote *dq = new Disc_quote();
      |                                     ^
In file included from 17.cc:2:
quote.h:35:7: note:   because the following virtual functions are pure within 'Disc_quote':
   35 | class Disc_quote : public Quote {
      |       ^~~~~~~~~~
quote.h:42:12: note:     'virtual double Disc_quote::net_price(std::size_t) const'
   42 |     double net_price(std::size_t) const = 0;
      |            ^~~~~~~~~
```

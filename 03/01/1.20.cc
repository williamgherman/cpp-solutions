#include <iostream>
#include "Sales_data.h"
using std::cin;
using std::cout;
using std::endl;

int main()
{
    double price;
    Sales_data book;
    while (cin >> book.name >> book.units_sold >> price)
    {
        book.revenue = price * book.units_sold;
        cout << book.name << " " << book.units_sold << " "
             << book.revenue " " << book.revenue / book.units_sold 
             << endl;
    }
    return 0;
}

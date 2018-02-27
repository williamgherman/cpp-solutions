#include <iostream>
#include "Sales_data.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
    Sales_data item, total;
    double price;
    
    cin >> total.name >> total.units_sold >> price;
    total.revenue = price * total.units_sold;

    while (cin >> item.name >> item.units_sold >> price)
    {
        item.revenue = price * item.units_sold;
        if (item.name == total.name)
        {
            total.units_sold += item.units_sold;
            total.revenue += item.revenue;
        } else {
            cout << item.name << " " << item.units_sold << " "
                 << item.revenue << " " << item.revenue / item.units_sold
                 << endl;
        }
    }
    cout << total.name << " " << total.units_sold << " "
         << total.revenue << " " << total.revenue / total.units_sold 
         << endl;
    return 0;
}

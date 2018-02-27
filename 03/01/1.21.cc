#include <iostream>
#include "Sales_data.h"
using std::cin;
using std::cout;
using std::endl;

int main()
{
    double price;
    Sales_data item1, item2;

    cin >> item1.name >> item1.units_sold >> price;
    item1.revenue = price * item1.units_sold;
    cin >> item2.name >> item2.units_sold >> price;
    item2.revenue = price * item2.units_sold;

    if (item1.name == item2.name)
    {
        cout << item1.name << " " << item1.units_sold + item2.units_sold
             << " " << item1.revenue + item2.revenue << " " 
             << (item1.revenue + item2.revenue) 
                / (item1.units_sold + item2.units_sold) 
             << endl;
    } else {
        cout << item1.name << " " << item1.units_sold << " "
             << item1.revenue << " " << item1.revenue / item1.units_sold 
             << endl;
        cout << item2.name << " " << item2.units_sold << " "
             << item2.revenue << " " << item2.revenue / item2.units_sold 
             << endl;
    }
    return 0;
}

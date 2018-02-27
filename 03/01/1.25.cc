#include <iostream>
#include "Sales_data.h"
using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main()
{
    Sales_data total;
    double price;
    if (cin >> total.name >> total.units_sold >> price)
    {
        total.revenue = price * total.units_sold;
        Sales_data trans;
        while (cin >> trans.name >> trans.units_sold >> price)
        {
            trans.revenue = price * trans.units_sold;
            if (total.name == trans.name)
            {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            } else {
                cout << total.name << " " << total.units_sold << " "
                     << total.revenue << " " 
                     << total.revenue / total.units_sold << endl;
                total.name = trans.name;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }
        cout << total.name << " " << total.units_sold << " "
             << total.revenue << " " << total.revenue / total.units_sold
             << endl;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}

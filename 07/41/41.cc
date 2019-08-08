#include <iostream>
#include "Sales_data.h"

int main()
{
    Sales_data s1;
    Sales_data s3("Book3");
    Sales_data s4("Book4", 24, 9.95);
    Sales_data s2(std::cin);
}

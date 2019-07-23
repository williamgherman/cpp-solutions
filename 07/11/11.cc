#include <iostream>
#include "Sales_data.h"

int main(void)
{
    Sales_data s1;
    Sales_data s2(std::cin);
    Sales_data s3("book3", 50, 9.95);
    Sales_data s4("book4");

    print(std::cout, s1) << std::endl;
    print(std::cout, s2) << std::endl;
    print(std::cout, s3) << std::endl;
    print(std::cout, s4) << std::endl;
}

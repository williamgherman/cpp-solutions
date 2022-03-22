#include <iostream>
#include <functional> // less<T>

#include "Sales_data.h"

template <typename T>
int compare(const T& v1, const T& v2)
{
    if (std::less<T>()(v1, v2)) return -1;
    if (std::less<T>()(v2, v1)) return 1;
    return 0;
}

int main()
{
    Sales_data a, b;
    std::cout << compare(a, b) << std::endl;
    return 0;
}

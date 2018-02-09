#include <iostream>

int main()
{
    int v1, v2;

    std::cout << "Enter two integers:" << std::endl;
    std::cin >> v1 >> v2;
    if (v1 > v2)
        while (v1 >= v2)
            std::cout << v1-- << std::endl;
    else
        while (v1 <= v2)
            std::cout << v1++ << std::endl;
    return 0;
}

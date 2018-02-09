#include <iostream>

int main()
{
    int v1, v2;

    std::cout << "Enter two integers in ascending order:" << std::endl;
    std::cin >> v1 >> v2;
    for (; v1 <= v2; v1++)
        std::cout << v1 << std::endl;
    return 0;
}

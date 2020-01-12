#include <iostream>
#include <functional>
#include <map>
#include <string>

int main()
{
    std::string op;
    int x,y;
    std::map<std::string, std::function<int(int,int)>> binops = {
        {"+", std::plus<int>()},
        {"-", std::minus<int>()},
        {"*", std::multiplies<int>()},
        {"/", std::divides<int>()},
        {"%", std::modulus<int>()}};

    while (std::cin >> x >> op >> y)
        std::cout << binops[op](x, y) << std::endl;
}

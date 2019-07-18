#include <iostream>
#include <vector>

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    return x / y;
}

int main(void)
{
    std::vector<int (*)(int, int)> vec;
    vec.push_back(add);
    vec.push_back(subtract);
    vec.push_back(multiply);
    vec.push_back(divide);

    for (auto &e : vec)
        std::cout << e << std::endl;
}

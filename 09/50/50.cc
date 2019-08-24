#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> v{"0", "100", "-245", "13000"};
    std::vector<std::string> v2{"0.0", "12.4", "-50.99", "13e2"};
    int sum = 0;
    double dsum = 0;
    for (auto &e : v)
        sum += std::stoi(e);
    std::cout << sum << std::endl;
    for (auto &e : v2)
        dsum += std::stod(e);
    std::cout << dsum << std::endl;
}

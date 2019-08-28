#include <iostream>
#include <vector>
#include <algorithm>

void print_vec(const std::vector<std::string> &v)
{
    for (auto &e : v)
        std::cout << e << " ";
    std::cout << std::endl;
}

int main()
{
    std::vector<std::string> v{"the", "quick", "brown", "fox", "jumps", "over",
                               "the", "slow", "red", "turtle"};

    print_vec(v);
    std::sort(v.begin(), v.end());
    auto it = std::unique(v.begin(), v.end());
    print_vec(v);
    v.erase(it, v.end());
    print_vec(v);
}

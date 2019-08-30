#include <iostream>
#include <vector>
#include <algorithm>

void print_vec(const std::vector<std::string> &v)
{
    for (auto &e : v)
        std::cout << e << " ";
    std::cout << std::endl;
}

bool isShorter(const std::string &s1, const std::string &s2)
{
    return s1.size() < s2.size();
}

void elimDups(std::vector<std::string> &v)
{
    std::sort(v.begin(), v.end());
    auto it = std::unique(v.begin(), v.end());
    v.erase(it, v.end());
}

int main()
{
    std::vector<std::string> v{"the", "quick", "brown", "fox", "jumps", "over",
                               "the", "slow", "red", "turtle"};

    print_vec(v);
    elimDups(v);
    std::stable_sort(v.begin(), v.end(), isShorter);
    print_vec(v);

}

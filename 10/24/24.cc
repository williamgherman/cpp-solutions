#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std::placeholders;

bool check_size(const std::string &s, std::string::size_type sz)
{
    return s.size() >= sz;
}

int main()
{
    std::string s("Hello");
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto it = std::find_if_not(v.begin(), v.end(), std::bind(check_size, s, _1));
    if (it != v.end())
        std::cout << *it << std::endl;
    else
        std::cout << "None found." << std::endl;
}

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std::placeholders;

bool leqsix(const std::string &s, std::string::size_type sz)
{
    return s.size() <= sz;
}

int main()
{
    std::vector<std::string> v{"hello,", "world", "!", "goodbye,", "world."};
    std::cout << std::count_if(v.begin(), v.end(), std::bind(leqsix, _1, 6))
              << std::endl;
}

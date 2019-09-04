#include <iostream>
#include <string>
#include <vector>
#include <utility>

int main()
{
    std::vector<std::pair<std::string, int>> pairs;
    std::string word;
    int i;
    while (std::cin >> word >> i)
        pairs.push_back({word, i});
    for (auto &e : pairs)
        std::cout << e.first << " " << e.second << std::endl;
}

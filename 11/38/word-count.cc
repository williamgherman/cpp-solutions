#include <iostream>
#include <string>
#include <unordered_map>
#include <cstddef>

int main()
{
    std::unordered_map<std::string, std::size_t> word_count;
    std::string word;
    while (std::cin >> word)
        ++word_count[word];
    for (const auto &w : word_count) {
        std::cout << w.first << " occurs " << w.second
                  << ((w.second > 1) ? " times" : " time") << std::endl;
    }
}

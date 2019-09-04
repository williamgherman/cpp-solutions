#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <cstddef>   // size_t
#include <algorithm> // find

int main()
{
    std::map<std::string, std::size_t> word_count;
    std::vector<std::string> exclude = {"The", "But", "And", "Or", "An", "A",
                                        "the", "but", "and", "or", "an", "a"};
    std::string word;
    while (std::cin >> word)
        if (std::find(exclude.begin(), exclude.end(), word) == exclude.end())
            ++word_count[word];
    for (auto &e : word_count) {
        std::cout << e.first << " occurs " << e.second
                  << ((e.second > 1) ? " times." : " time.");
        std::cout << std::endl;
    }
}

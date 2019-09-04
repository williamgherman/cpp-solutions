#include <iostream>
#include <map>
#include <string>
#include <cctype>
#include <cstddef>
#include <algorithm>

const std::string &rmpunct(std::string &s)
{
    for (auto &c : s)
        c = std::tolower(c);
    s.erase(std::remove_if(s.begin(), s.end(), ispunct), s.end());
    return s;
}

int main()
{
    std::map<std::string, std::size_t> word_count;
    std::string word;
    while (std::cin >> word)
        ++word_count[rmpunct(word)];
    for (const auto &w : word_count)
        std::cout << w.first << " occurs " << w.second
                  << ((w.second > 1) ? " times" : " time") << std::endl;
}

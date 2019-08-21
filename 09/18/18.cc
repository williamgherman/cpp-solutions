#include <iostream>
#include <string>
#include <deque>

int main()
{
    std::string word;
    std::deque<std::string> words;

    while (std::cin >> word)
        words.push_back(word);
    for (auto it = words.cbegin(); it != words.cend(); it++)
        std::cout << *it << std::endl;
}

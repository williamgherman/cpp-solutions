#include <iostream>
#include <string>
#include <list>

int main()
{
    std::string word;
    std::list<std::string> words;

    while (std::cin >> word)
        words.push_back(word);
    for (auto it = words.cbegin(); it != words.cend(); it++)
        std::cout << *it << std::endl;
}

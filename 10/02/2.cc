#include <iostream>
#include <list>
#include <string>
#include <algorithm>

int main()
{
    std::list<std::string> seq;
    std::string s;

    while (std::cin >> s)
        seq.push_back(s);
    std::cout << "There are " << count(seq.cbegin(), seq.cend(), "hi")
              << " strings in the sequence with value \"hi\"." << std::endl;
}

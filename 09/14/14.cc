#include <iostream>
#include <list>
#include <vector>
#include <string>

int main()
{
    std::list<char *> seq{"Hello,", "world", "!"};
    std::vector<std::string> vec;

    vec.assign(seq.begin(), seq.end());

    for (const auto &e : vec)
        std::cout << e << " ";
    std::cout << std::endl;
}

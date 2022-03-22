#include <iostream>
#include <string>
#include <list>
#include <vector>

template <typename T, typename U>
T find(const T& begin, const T& end, const U& sought)
{
    auto p = begin;
    while (p != end) {
        if (*p == sought) break;
        ++p;
    }
    return p;
}

int main()
{
    std::vector<int> v{1,2,3,4,5};
    std::list<std::string> l{"Hello", "world", "goodbye", "all"};

    auto res1 = find(v.begin(), v.end(), 2);
    auto res2 = find(l.begin(), l.end(), "goodbye");
    auto res3 = find(v.begin(), v.end(), -1);

    std::cout << "res1: ";
    if (res1 != v.end())
        std::cout << *res1 << "\n";
    else
        std::cout << "not found\n";
    std::cout << "res2: ";
    if (res2 != l.end())
        std::cout << *res2 << "\n";
    else
        std::cout << "not found\n";
    std::cout << "res3: ";
    if (res3 != v.end())
        std::cout << *res3 << "\n";
    else
        std::cout << "not found\n";
    std::cout << std::endl;

    return 0;
}

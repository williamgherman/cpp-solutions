#include <iostream>
#include <string>
#include <functional> // less<T>

template <typename T>
int compare1(const T& v1, const T& v2)
{
    if (v1 < v2) return -1;
    if (v2 < v1) return 1;
    return 0;
}

template <typename T>
int compare2(const T& v1, const T& v2)
{
    if (std::less<T>()(v1, v2)) return -1;
    if (std::less<T>()(v2, v1)) return 1;
    return 0;
}

int main()
{
    int x = 50, y = -1;
    int* a = &x;
    int* b = &y;
    std::string s{"yes"};
    std::string t{"no"};
    std::cout << compare1(x, y) << "\n";
    std::cout << compare1(s, t) << "\n";
    std::cout << compare1(a, b) << "\n";
    std::cout << compare2(x, y) << "\n";
    std::cout << compare2(s, t) << "\n";
    std::cout << compare2(a, b) << std::endl;

    return 0;
}

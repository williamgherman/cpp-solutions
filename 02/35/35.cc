#include <iostream>
#include <typeinfo>

int main()
{
    const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i;
    const auto j2 = i, &k2 = i;

    std::cout << "j: " << typeid(j).name()
              << "\nk: " << typeid(k).name()
              << "\np: " << typeid(p).name()
              << "\nj2: " << typeid(j2).name()
              << "\nk2: " << typeid(k2).name()
              << std::endl;
    return 0;
}

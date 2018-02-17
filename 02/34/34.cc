#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;

    std::cout << a << "\n" << b << "\n" << c << "\n" << d << "\n"
              << e << "\n" << f << "\n" << g << std::endl;

    a = 42;
    b = 42;
    c = 42;
    d = 42; // error: invalid conversion from ‘int’ to ‘int*’ 
    e = 42; // error: invalid conversion from ‘int’ to ‘const int*’ 
    f = 42; // error: assignment of read-only variable ‘f’
    g = 42; // error: assignment of read-only reference ‘g’

    std::cout << a << "\n" << b << "\n" << c << "\n" << d << "\n"
              << e << "\n" << f << "\n" << g << std::endl;
    return 0;
}

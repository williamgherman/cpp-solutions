#include <iostream>

void f()
{
    std::cout << "f()" << std::endl;
}

void f(int i)
{
    std::cout << "f(int)" << std::endl;
}

void f(int i, int j)
{
    std::cout << "f(int, int)" << std::endl;
}

void f(double d, double e = 3.14)
{
    std::cout << "f(double, double)" << std::endl;
}

int main(void)
{
#ifndef NDEBUG
    f(2.56, 42);
#endif
    f(42);
    f(42, 0);
    f(2.56, 3.14);
}

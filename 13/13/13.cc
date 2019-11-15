#include <iostream>
#include <vector>
#include <new>
#include "X.h"

X f1(X x) {
    return x;
}

X f2(const X &x) {
    return x;
}

int main()
{
    std::cout << "---X x1" << std::endl;
    X x1;
    std::cout << "---X &x2(x1)" << std::endl;
    X &x2(x1);
    std::cout << "---X x3 = x1" << std::endl;
    X x3 = x1;
    std::cout << "---X x4(f1(x3))" << std::endl;
    X x4(f1(x3));
    std::cout << "---X x5 = f2(x4)" << std::endl;
    X x5 = f2(x4);
    std::cout << "---X *x6 = new X()" << std::endl;
    X *x6 = new X();

    std::cout << "---vector<X> xs = {x1, x2, x3, x4}" << std::endl;
    std::vector<X> xs = {x1, x2, x3, x4};
    std::cout << "---xs.push_back(x5)" << std::endl;
    xs.push_back(x5);
    std::cout << "---delete x6" << std::endl;
    delete x6;
    std::cout << "---end of `main' scope" << std::endl;
    return 0;
}

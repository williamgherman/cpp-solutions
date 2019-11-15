#include <iostream>

class numbered {
public:
    int mysn;
    static int uniq;
    numbered() { mysn = uniq++; }
    numbered(const numbered &) { mysn = uniq++; }
};

int numbered::uniq = 0;

void f(const numbered &n)
{
    std::cout << n.mysn << std::endl;
}

int main()
{
    numbered a, b = a, c = b;
    f(a);
    f(b);
    f(c);
    return 0;
}

#include <iostream>

int fact(int val)
{
    int ret = 1;
    while (val > 1)
        ret *= val--;
    return ret;
}

int main(void)
{
    int j = fact(5);
    std::cout << "5! is " << j << std::endl;
    return 0;
}

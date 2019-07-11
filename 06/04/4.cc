#include <iostream>

int fact(int val)
{
    int ret = 1;
    while (val > 1)
        ret *= val--;
    return ret;
}

void interact(void)
{
    int i;
    std::cout << "Enter a number: ";
    std::cin >> i;
    std::cout << i << "! is " << fact(i) << std::endl;
}

int main(void)
{
    interact();
    return 0;
}

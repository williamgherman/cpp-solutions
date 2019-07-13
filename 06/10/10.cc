#include <iostream>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int x = 23;
    int y = -9;
    std::cout << "Before:\nx = " << x << "\ny = " << y << std::endl;
    swap(&x,&y);
    std::cout << "\nAfter:\nx = " << x << "\ny = " << y << std::endl;
    return 0;
}

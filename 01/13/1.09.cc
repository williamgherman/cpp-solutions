#include <iostream>

int main()
{
    int sum = 0;

    for (int count = 50; count <= 100; count++)
        sum += count;
    std::cout << "Sum of [50, 100]: " << sum << std::endl;
    return 0;
}

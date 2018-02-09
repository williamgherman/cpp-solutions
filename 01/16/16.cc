#include <iostream>

int main()
{
    int sum = 0, x;

    std::cout << "Enter integers followed by EOF:" << std::endl;

    while (std::cin >> x)
        sum += x;
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1 = {0, 1, 2, 3, 4, 5};
    std::vector<int> v2 = {0, 2, 4, 6, 8,10};

    std::cout << ((v1 == v2) ? "Equal!" : ((v1 < v2) ? "v1 < v2" : "v1 > v2"));
    std::cout << std::endl;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
    std::vector<int> v{1,2,3,4,5,6,7,8,9};
    auto it = std::prev(v.cend());
    while (it != v.cbegin())
        std::cout << *it-- << " ";
    std::cout << *it << std::endl;
}

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
    std::vector<int> v{1,2,3,4,5,6,7,8,9,10};
    std::list<int> l;
    std::copy(v.cbegin() + 3, v.cbegin() + 8, std::front_inserter(l));
    for (auto &e : l)
        std::cout << e << " ";
    std::cout << std::endl;
}

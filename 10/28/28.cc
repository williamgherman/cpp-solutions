#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

void printlist(const std::list<int> &l)
{
    for (auto &e : l)
        std::cout << e << " ";
    std::cout << std::endl;
} 

int main()
{
    std::vector<int> v{1,2,3,4,5,6,7,8,9};
    std::list<int> l1, l2, l3;

    std::copy(v.begin(), v.end(), std::back_inserter(l1));
    std::copy(v.begin(), v.end(), std::front_inserter(l2));
    std::copy(v.begin(), v.end(), std::inserter(l3, l3.begin()));

    printlist(l1);
    printlist(l2);
    printlist(l3);
}

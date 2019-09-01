#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

int main()
{
    std::list<int> l{0,1,0,1,2,0,1,2,3,0,1,2,3,4};
    std::cout << "Position of last 0 in list: ";
    auto lastzero = std::find(l.crbegin(), l.crend(), 0);
    std::cout << std::distance(lastzero, l.crend()) << std::endl;
}

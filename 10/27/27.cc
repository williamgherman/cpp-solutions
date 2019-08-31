#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

int main()
{
    std::vector<int> v{1,2,1,3,2,1,4,3,2,1,5,6,7};
    std::list<int> result;
    
    std::sort(v.begin(), v.end());
    std::unique_copy(v.begin(), v.end(), std::back_inserter(result));
    for (auto &e : result)
        std::cout << e << " ";
    std::cout << std::endl;
}

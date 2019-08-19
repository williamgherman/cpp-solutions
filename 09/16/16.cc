#include <iostream>
#include <vector>
#include <list>
#include <string>

std::string compare(const std::list<int> &v1, const std::vector<int> &v2)
{
    auto it1 = v1.begin();
    auto it2 = v2.begin();
    while (it1 != v1.end() && it2 != v2.end()) {
        if (*it1 < *it2)
            return "v1 < v2";
        else if (*it1 > *it2)
            return "v1 > v2";
        it1++;
        it2++;
    }
    if (it1 == v1.end() && it2 != v2.end())
        return "v1 < v2";
    else if (it2 == v2.end() && it1 != v1.end())
        return "v1 > v2";
    return "Equal!";
}


int main()
{
    std::list<int> v1 = {0, 1, 2, 3, 4, 5};
    std::vector<int> v2 = {0, 1, 2, 3, 4};

    std::cout << compare(v1, v2) << std::endl;

}

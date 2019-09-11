#include <iostream>
#include <vector>
#include <memory>

std::shared_ptr<std::vector<int>> getvec()
{
    std::vector<int> v;
    return std::make_shared<std::vector<int>>(v);
}

std::shared_ptr<std::vector<int>> readvec(std::shared_ptr<std::vector<int>> v)
{
    int i;
    while (std::cin >> i)
        v->push_back(i);
    return v;
}

void printvec(std::shared_ptr<std::vector<int>> v)
{
    for (auto &e : *v)
        std::cout << e << std::endl;
}

int main()
{
    printvec(readvec(getvec()));
}

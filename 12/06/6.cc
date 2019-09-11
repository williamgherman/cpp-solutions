#include <iostream>
#include <new>
#include <vector>

std::vector<int> *getvec()
{
    return new std::vector<int>();
}

std::vector<int> *readvec(std::vector<int> *v)
{
    int i;
    while (std::cin >> i)
        v->push_back(i);
    return v;
}

void printvec(std::vector<int> *v)
{
    for (auto &e : *v)
        std::cout << e << std::endl;
}

int main()
{
    std::vector<int> *pv = getvec();
    readvec(pv);
    printvec(pv);
    delete pv;
    pv = nullptr;
}

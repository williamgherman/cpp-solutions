#include <vector>

int main()
{
    std::vector<int> v{0,1,2,3,4,5};
    auto begin = v.begin();
    while (begin != v.end()) {
        ++begin;
        v.insert(begin, 42);
        ++begin;
    }
}

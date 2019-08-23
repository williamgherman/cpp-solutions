#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    while (v.size() < 100000) {
        std::cout << v.capacity() << std::endl;
        v.resize(v.capacity() + 1);
    }
}

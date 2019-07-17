#include <vector>
#include <iostream>

void print_vector(std::vector<int>::iterator beg,
                  std::vector<int>::iterator end)
{
    if (beg == end)
    {
#ifndef NDEBUG
        std::cout << "iterators equal; exit function" << std::endl;
#endif
        return;
    }
#ifndef NDEBUG
        std::cout << "Vector size: " << end - beg << std::endl;
#endif
    std::cout << *beg++ << std::endl;
    print_vector(beg, end);
}

int main(void)
{
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print_vector(vec.begin(), vec.end());
}

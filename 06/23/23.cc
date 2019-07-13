#include <iostream>

void print_one(int i)
{
    std::cout << i << std::endl;
}

void print_two(const int *beg, const int *end)
{
    while (beg != end)
        std::cout << *beg++ << std::endl;
}

void print_three(const int ia[], size_t size)
{
    for (size_t i = 0; i != size; ++i)
        std::cout << ia[i] << std::endl;
}

void print_four(const int (&arr)[2])
{
    for (auto &e : arr)
        std::cout << e << std::endl;
}

int main(void)
{
    int i = 0, j[2] = {0, 1};
    print_one(i);
    print_two(std::begin(j), std::end(j));
    print_three(j, std::end(j) - std::begin(j));
    print_four(j);
    return 0;
}

#include <iostream>
#include <list>
#include <deque>

int main()
{
    std::deque<int> evens, odds;
    std::list<int> nums;

    for (int i; std::cin >> i; nums.push_back(i))
        ; // nop
    for (const auto &n : nums) {
        if (n % 2 == 1)
            odds.push_back(n);
        else
            evens.push_back(n);
    }
    std::cout << "evens: ";
    for (const auto &n : evens)
        std::cout << n << " ";
    std::cout << std::endl << "odds: ";
    for (const auto &n : odds)
        std::cout << n << " ";
    std::cout << std::endl;
}

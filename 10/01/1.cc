#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v;
    int i;

    while (std::cin >> i)
        v.push_back(i);
    std::cout << "There are " << count(v.cbegin(), v.cend(), 42)
              << " integers in the sequence with value 42." << std::endl;
}

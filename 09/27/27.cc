#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> fl = {0, 1, 2, 3, 4, 5, 6};
    auto prev = fl.before_begin();
    auto curr = fl.begin();
    while (curr != fl.end()) {
        if (*curr % 2 == 1)
            curr = fl.erase_after(prev);
        else {
            prev = curr;
            ++curr;
        }
    }
    for (auto &elem : fl)
        std::cout << elem << std::endl;
}

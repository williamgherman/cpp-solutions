#include <iostream>
#include <vector>
#include <algorithm>

class EqualTest {
public:
    EqualTest(const int &x): val(x) { }
    bool operator()(const int &a) const
        { return a == val; }
private:
    int val;
};

int main()
{
    std::vector<int> vec = {1, 3, 2, 4, 6, 3, 6, 5, 3, 6, 5, 6, 7};
    std::replace_if(vec.begin(), vec.end(), EqualTest(6), 100);
    for (auto i : vec)
        std::cout << i << std::endl;
}

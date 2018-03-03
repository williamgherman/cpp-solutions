#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec;
    int num, sum = 0, count = 1;
    while (cin >> num)
        vec.push_back(num);
    auto beg = vec.begin(), end = vec.end() - 1;
    auto mid = vec.begin() + (end - beg) / 2;
    for (auto i = beg, j = end; i < j; i++, j--)
    {
        cout << *i + *j << " ";
        // prints middle number if needed
        if (i + 1 == mid && i + 1 == j - 1)
            cout << *(i + 1);
    }
    cout << endl;
    return 0;
}

#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec = {23, -74, 1, -76, 234, -54, 13, 676, 87, 2};
    for (auto it = vec.begin(); it != vec.end(); it++)
        *it *= 2;
    for (auto elem : vec)
        cout << elem << endl;
    return 0;
}

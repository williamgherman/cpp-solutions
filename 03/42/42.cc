#include <iostream>
#include <vector>
#include <iterator>
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    int arr[vec.size()];
    for (auto it = vec.begin(); it != vec.end(); it++)
        arr[it - vec.begin()] = *it;
    for (int i : arr)
        cout << i << endl;
    return 0;
}

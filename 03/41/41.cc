#include <iostream>
#include <vector>
#include <iterator> // begin, end
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    vector<int> vec(begin(arr), end(arr));
    for (int i : vec)
        cout << i << endl;
    return 0;
}

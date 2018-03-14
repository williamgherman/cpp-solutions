#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i : vec)
    {
        i = i % 2 == 0 ? i : 2 * i;
        cout << i << endl;
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <iterator>
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
                v2 = {1, 2, 3, 100, 5, 6, 7, 8, 9, 10};
    if (v1.size() != v2.size())
    {
        cout << "The vectors are not equal." << endl;
        return 0;
    }
    for (auto it1 = v1.begin(), it2 = v2.begin();
         it1 != v1.end() && it2 != v2.end(); it1++, it2++)
    {
        if (*it1 != *it2)
        {
            cout << "The vectors are not equal." << endl;
            return 0;
        }
    }
    cout << "The vectors are equal." << endl;
    return 0;
}

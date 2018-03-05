#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int ia[3][4] = {{0, 1,  2,  3},
                    {4, 5,  6,  7},
                    {8, 9, 10, 11}};

    for (auto i = ia; i < ia + 3; i++)
        for (auto j = *i; j < *i + 4; j++)
            cout << *j << endl;
    return 0;
}

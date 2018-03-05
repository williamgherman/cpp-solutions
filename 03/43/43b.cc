#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int ia[3][4] = {{0, 1,  2,  3},
                    {4, 5,  6,  7},
                    {8, 9, 10, 11}};

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            cout << ia[i][j] << endl;
    return 0;
}

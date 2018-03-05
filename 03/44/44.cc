#include <iostream>
using std::cout;
using std::endl;

int main()
{
    using int_row = const int [4];
    int ia[3][4] = {{0, 1,  2,  3},
                    {4, 5,  6,  7},
                    {8, 9, 10, 11}};

    for (int_row &row : ia)
        for (int i : row)
            cout << i << endl;
    return 0;
}

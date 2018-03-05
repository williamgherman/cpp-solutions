#include <iostream>
#include <iterator> //begin, end
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
    int a1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a2[] = {1, 2, 3, 100, 5, 6, 7, 8, 9, 10};

    for (int *p = begin(a1), *q = begin(a2); 
         p != end(a1) && q != end(a1); p++, q++)
    {
        if (*p != *q)
        {
            cout << "The arrays are not equal." << endl;
            return 0;
        }
    }
    cout << "The arrays are equal." << endl;
    return 0;
}

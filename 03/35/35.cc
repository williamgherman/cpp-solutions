#include <iostream>
#include <iterator> // begin, end
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int *p = begin(arr); p != end(arr); p++)
    {
        *p = 0;
        cout << *p << endl;
    }
    return 0;
}

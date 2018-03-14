#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i;
    while (cin >> i)
    {
        if (i > 90)
            cout << "high pass" << endl;
        else if (i > 75)
            cout << "pass" << endl;
        else if (i >= 60)
            cout << "low pass" << endl;
        else 
            cout << "fail" << endl;
    }
    return 0;
}

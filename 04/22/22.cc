#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i;
    while (cin >> i)
        cout << (i > 90 ? "high pass" 
                        : (i > 75 ? "pass" 
                                  : (i >= 60 ? "low pass" : "fail"))) << endl;
    return 0;
}

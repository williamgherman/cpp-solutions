#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x, y;
    cout << "Enter two integers: " << endl;
    cin >> x;
    cin >> y;
    cout << x << " / " << y << " = " << (double) x/y << endl;
    return 0;
}

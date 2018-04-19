#include <iostream>
#include <stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
    int x, y;
    cout << "Enter two integers: " << endl;
    cin >> x;
    cin >> y;
    if (y == 0)
        throw runtime_error("Divide by zero error");
    cout << x << " / " << y << " = " << (double) x/y << endl;
    return 0;
}

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int v1, v2;

    cout << "Enter two integers in ascending order:" << endl;
    cin >> v1 >> v2;
    while (v1 <= v2)
        cout << v1++ << endl;
    return 0;
}

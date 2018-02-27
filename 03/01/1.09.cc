#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int sum = 0, count = 50;

    while (count <= 100)
    {
        sum += count;
        count++;
    }
    cout << "Sum of [50, 100]: " << sum << endl;
    return 0;
}

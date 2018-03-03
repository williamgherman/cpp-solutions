#include <iostream>
using std::cout;
using std::endl;

int main()
{
    constexpr size_t arr_size = 10;
    int arr[arr_size];
    for (size_t i = 0; i < arr_size; i++)
    {
        arr[i] = i;
        cout << arr[i] << endl;
    }
    return 0;
}

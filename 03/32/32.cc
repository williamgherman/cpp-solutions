#include <iostream>
using std::cout;
using std::endl;

int main()
{
    constexpr size_t arr_size = 10;
    int arr[arr_size];
    int arr2[arr_size];
    for (size_t i = 0; i < arr_size; i++)
    {
        arr[i] = i;
        arr2[i] = arr[i];
        cout << arr2[i] << endl;
    }

    return 0;
}

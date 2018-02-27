#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec;
    int num, sum = 0, count = 1;
    while (cin >> num)
        vec.push_back(num);
    for (decltype(vec.size()) i = 0, j = vec.size() - 1; 
            i < vec.size() / 2; i++, j--)
    {
        cout << vec[i] + vec[j] << " ";
        // prints middle number if needed
        if (i + 1 == vec.size() / 2 && i + 1 == j - 1)
            cout << vec[i+1];
    }
    cout << endl;
    return 0;
}

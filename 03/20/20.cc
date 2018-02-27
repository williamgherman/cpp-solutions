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
    for (decltype(vec.size()) i = 0; i < vec.size() - 1; i++)
        cout << vec[i] + vec[i+1] << " ";
    cout << endl;
    return 0;
}

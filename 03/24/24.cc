#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec;
    int num;
    while (cin >> num)
        vec.push_back(num);
    for (auto i = vec.begin(); i != vec.end() - 1; i++)
        cout << *i + *(i+1) << " ";
    cout << endl;
    return 0;
}

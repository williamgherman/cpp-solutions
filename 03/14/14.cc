#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> seq;
    int cur;
    while (cin >> cur)
        seq.push_back(cur);
    for (int i : seq)
        cout << i << endl;
    return 0;
}

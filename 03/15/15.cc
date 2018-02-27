#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<string> seq;
    string cur;
    while (cin >> cur)
        seq.push_back(cur);
    for (string s : seq)
        cout << s << endl;
    return 0;
}

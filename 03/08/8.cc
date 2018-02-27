#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    string s;
    cin >> s;
    decltype (s.size()) i = 0;
    while (i < s.size())
        s[i++] = 'X';
    cout << s << endl;
    return 0;
}

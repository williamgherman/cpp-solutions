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
    for (decltype (s.size()) i = 0; i < s.size(); i++)
        s[i] = 'X';
    cout << s << endl;
    return 0;
}

#include <iostream>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s, t;
    while (cin >> s)
    {
        if (!isupper(s[0]))
        {
            t = s;
            continue;
        }
        if (s == t)
            break;
        t = s;
    }
    if (s == t)
        cout << s << endl;
    else
        cout << "No word was repeated." << endl;
    return 0;
}

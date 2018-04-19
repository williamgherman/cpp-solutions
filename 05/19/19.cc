#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
    string res;
    do {
        string s, t;
        cout << "Enter two strings: ";
        cin >> s >> t;
        cout << (s >= t ? s : t) << " is the longer string.\n\n"
             << "Again? [y/N]: ";
        cin >> res;
    } while (!res.empty() && tolower(res[0]) == 'y');
    return 0;
}

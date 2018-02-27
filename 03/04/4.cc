#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string s1, s2;

    cin >> s1 >> s2;
    if (s1 == s2)
        cout << s1 << " and " << s2 << " are equal." << endl;
    else if (s1 > s2)
        cout << s1 << " is greater than " << s2 << "." << endl;
    else
        cout << s2 << " is greater than " << s1 << "." << endl;
    return 0;
}

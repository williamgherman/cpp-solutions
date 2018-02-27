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
    string::size_type size1 = s1.size(), size2 = s2.size();
    if (size1 == size2)
        cout << s1 << " and " << s2 << " are equal length." << endl;
    else if (size1 > size2)
        cout << s1 << " is longer than " << s2 << "." << endl;
    else
        cout << s2 << " is longer than " << s1 << "." << endl;
    return 0;
}

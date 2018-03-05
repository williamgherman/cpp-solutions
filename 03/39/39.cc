#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1 = "Foo";
    string s2 = "bar";

    if (s1 == s2)
        cout << s1 << " and " << s2 << " are equal." << endl;
    else
        cout << s1 << " and " << s2 << " are not equal." << endl;
    return 0;
}

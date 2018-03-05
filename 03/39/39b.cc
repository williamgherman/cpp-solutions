#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

int main()
{
    const char *s1 = "Foo";
    const char *s2 = "bar";

    if (strlen(s1) != strlen(s2))
    {
        cout << s1 << " and " << s2 << " are not equal." << endl;
        return 0;
    }
    for (const char *c = s1, *d = s2; *c != '\0' && *d != '\0'; c++, d++)
    {
        if (*c != *d)
        {
            cout << s1 << " and " << s2 << " are not equal." << endl;
            return 0;
        }
    }
    cout << s1 << " and " << s2 << " are equal." << endl;
    return 0;
}

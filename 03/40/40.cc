#include <iostream>
#include <cstring> // strcat
using std::cout;
using std::endl;

int main()
{
    const char *s1 = "Hello, ";
    const char *s2 = "world.";
    char s3[strlen(s1) + strlen(s2) + 1];
    strcat(strcpy(s3, s1), s2);
    cout << s3 << endl;
    return 0;
}

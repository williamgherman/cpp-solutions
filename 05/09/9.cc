#include <iostream>
using std::cout;
using std::endl;

int main()
{
    unsigned int a, e, i, o, u;
    char c;
    a = e = i = o = u = 0;
    while((c = getchar()) != EOF)
    {
        if (c == 'a' || c == 'A')
            a++;
        if (c == 'e' || c == 'E')
            e++;
        if (c == 'i' || c == 'I')
            i++;
        if (c == 'o' || c == 'O')
            o++;
        if (c == 'u' || c == 'U')
            u++;
    }

    cout << "Number of vowel a: \t" << a << '\n'
         << "Number of vowel e: \t" << e << '\n'
         << "Number of vowel i: \t" << i << '\n'
         << "Number of vowel o: \t" << o << '\n'
         << "Number of vowel u: \t" << u << endl;
    return 0;
}

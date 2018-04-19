#include <iostream>
using std::cout;
using std::endl;

int main()
{
    unsigned int a, e, i, o, u;
    a = e = i = o = u = 0;
    char c;

    while ((c = getchar()) != EOF)
    {
        switch(c)
        {
            case 'a': case 'A':
                a++;
                break;
            case 'e': case 'E':
                e++;
                break;
            case 'i': case 'I':
                i++;
                break;
            case 'o': case 'O':
                o++;
                break;
            case 'u': case 'U':
                u++;
                break;
            default:
                break;
        }
    }

    cout << "Number of vowel a: \t" << a << '\n'
         << "Number of vowel e: \t" << e << '\n'
         << "Number of vowel i: \t" << i << '\n'
         << "Number of vowel o: \t" << o << '\n'
         << "Number of vowel u: \t" << u << endl;
    return 0;
}

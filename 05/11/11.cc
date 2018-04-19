#include <iostream>
using std::cout;
using std::endl;

int main()
{
    unsigned int a, e, i, o, u, tab, space, newline;
    a = e = i = o = u = tab = space = newline = 0;
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
            case '\t':
                tab++;
                break;
            case ' ':
                space++;
                break;
            case '\n':
                newline++;
                break;
            default:
                break;
        }
    }

    cout << "Number of vowel a: \t" << a << '\n'
         << "Number of vowel e: \t" << e << '\n'
         << "Number of vowel i: \t" << i << '\n'
         << "Number of vowel o: \t" << o << '\n'
         << "Number of vowel u: \t" << u << '\n'
         << "Number of tabs: \t" << tab << '\n'
         << "Number of spaces: \t" << space << '\n'
         << "Number of newlines: \t" << newline << endl;
    return 0;
}

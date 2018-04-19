#include <iostream>
using std::cout;
using std::endl;

int main()
{
    unsigned int a, e, i, o, u, tab, space, newline, fi, fl ,ff;
    a = e = i = o = u = tab = space = newline = fi = fl = ff = 0;
    char c;
    bool previousF = false;

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
                if (previousF && c == 'i')
                    fi++;
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
            case 'l':
                if (previousF)
                    fl++;
                break;
            case 'f':   // ensures ff is only incremented for two-char sequence
                if (previousF)
                    ff++;
                previousF = !previousF;
                break;
            default:
                break;
        }
        if (c != 'f')
            previousF = false;
    }

    cout << "Number of vowel a: \t" << a << '\n'
         << "Number of vowel e: \t" << e << '\n'
         << "Number of vowel i: \t" << i << '\n'
         << "Number of vowel o: \t" << o << '\n'
         << "Number of vowel u: \t" << u << '\n'
         << "Number of tabs: \t" << tab << '\n'
         << "Number of spaces: \t" << space << '\n'
         << "Number of newlines: \t" << newline << '\n'
         << "Number of sequence fi: \t" << fi << '\n'
         << "Number of sequence ff: \t" << ff << '\n'
         << "Number of sequence fl: \t" << fl << endl;
    return 0;
}

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// TODO: NB: prints trailing space.

int main()
{
    string word, total;
    while (cin >> word)
        total += word + " ";
    cout << total << endl;
    return 0;
}

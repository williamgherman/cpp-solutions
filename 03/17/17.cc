#include <iostream>
#include <vector>
#include <string>
#include <cctype> // toupper
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    string word;
    vector<string> words;

    while (cin >> word)
        words.push_back(word);
    for (auto &w : words)
        for (auto &c : w)
                c = toupper(c);

    int counter = 1;
    for (auto w : words)
    {
        cout << w << " ";
        if (counter % 8 == 0)
            cout << "\n";
        counter++;
    }
    cout << endl;
    return 0;
}

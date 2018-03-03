#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<unsigned int> scores(11, 0);
    unsigned int grade;
    while (cin >> grade)
    {
        if (grade <= 100)
        {
            ++*(scores.begin() + grade / 10);
        }
    }
    for (auto it = scores.begin(); it != scores.end(); it++)
        cout << *it << " ";
    cout << endl;
    
    return 0;
}

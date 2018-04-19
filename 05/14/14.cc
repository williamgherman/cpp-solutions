#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s, t, most;
    unsigned int reps = 1, mostreps = 1;
    while (cin >> s)
    {
        if (s == t)
            reps++;
        else
            reps = 1;
        if (reps > mostreps)
        {
            most = s;
            mostreps = reps;
        }
        t = s;
    }
    if (mostreps == 1)
        cout << "There were no sequential repeating words." << endl;
    else
    {
        cout << "The most sequentially repeated word was \"" 
             << most << "\"" << ", which was repeated " 
             << mostreps << " times."<< endl;
    }
    return 0;
}

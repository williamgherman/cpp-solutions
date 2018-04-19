#include <iostream>
#include <stdexcept>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
    int x, y;
    while (true)
    {
        try
        {
            cout << "Enter two integers: " << endl;
            cin >> x >> y;
            if (y == 0)
                throw runtime_error("Divide by zero error");
        } catch (runtime_error err) {
            cout << err.what() << "\nTry again? [y/N]" << endl;
            char c;
            cin >> c;
            if (cin && tolower(c) == 'y')
                continue;
            else
                exit(EXIT_FAILURE);
        }
        break;
    }


    cout << x << " / " << y << " = " << (double) x/y << endl;
    return 0;
}

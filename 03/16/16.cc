#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::vector;
using std::string;

// NB: prints trailing space and could be written more clearly as a function
//     instead.
int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    cout << "v1: " << v1.size() << ", (";
    for (auto i : v1)
        cout << i << ", ";
    cout << ")" << endl;

    cout << "v2: " << v2.size() << ", (";
    for (auto i : v2)
        cout << i << ", ";
    cout << "\b\b)" << endl;

    cout << "v3: " << v3.size() << ", (";
    for (auto i : v3)
        cout << i << ", ";
    cout << "\b\b)" << endl;

    cout << "v4: " << v4.size() << ", (";
    for (auto i : v4)
        cout << i << ", ";
    cout << "\b\b)" << endl;

    cout << "v5: " << v5.size() << ", (";
    for (auto i : v5)
        cout << i << ", ";
    cout << "\b\b)" << endl;

    cout << "v6: " << v6.size() << ", (";
    for (auto i : v6)
        cout << i << ", ";
    cout << "\b\b)" << endl;

    cout << "v7: " << v7.size() << ", (";
    for (auto i : v7)
        cout << i << ", ";
    cout << "\b\b)" << endl;

    return 0;
}

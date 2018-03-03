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
    for (auto it = v1.begin(); it != v1.end(); it++)
        cout << *it << ", ";
    cout << ")" << endl;

    cout << "v2: " << v2.size() << ", (";
    for (auto it = v2.begin(); it != v2.end(); it++)
        cout << *it << ", ";
    cout << "\b\b)" << endl;

    cout << "v3: " << v3.size() << ", (";
    for (auto it = v3.begin(); it != v3.end(); it++)
        cout << *it<< ", ";
    cout << "\b\b)" << endl;

    cout << "v4: " << v4.size() << ", (";
    for (auto it = v4.begin(); it != v4.end(); it++)
        cout << *it << ", ";
    cout << "\b\b)" << endl;

    cout << "v5: " << v5.size() << ", (";
    for (auto it = v5.begin(); it != v5.end(); it++)
        cout << *it << ", ";
    cout << "\b\b)" << endl;

    cout << "v6: " << v6.size() << ", (";
    for (auto it = v6.begin(); it != v6.end(); it++)
        cout << *it << ", ";
    cout << "\b\b)" << endl;

    cout << "v7: " << v7.size() << ", (";
    for (auto it = v7.begin(); it != v7.end(); it++)
        cout << *it << ", ";
    cout << "\b\b)" << endl;

    return 0;
}

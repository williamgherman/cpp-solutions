#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

bool compare_vectors(vector<int> v1, vector<int> v2);

int main()
{
    vector<int> v1 = {0, 1, 1}, v2 = {0, 1, 1, 2, 3, 5};

    if (compare_vectors(v1, v2))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
bool compare_vectors(vector<int> v1, vector<int> v2)
{
    auto i = v1.begin();
    auto j = v2.begin();
    for (/* null */; i != v1.end() && j != v2.end(); i++, j++)
    {
        if (*i != *j)
            return false;
    }
    return true;
}

#ifndef FOO_H_
#define FOO_H_

#include <algorithm>
#include <iostream>
#include <vector>

class Foo {
public:
    Foo sorted() &&;
    Foo sorted() const &;
private:
    std::vector<int> data;
};

Foo Foo::sorted() &&
{
    sort(data.begin(), data.end());
    std::cout << "sorted &&" << std::endl;
    return *this;
}

/* inf recursion version

Foo Foo::sorted() const &
{
    Foo ret(*this);
    std::cout << "sorted const &" << std::endl;
    return ret.sorted();
}

*/

Foo Foo::sorted() const &
{
    std::cout << "sorted const &" << std::endl;
    return Foo(*this).sorted();
}

#endif

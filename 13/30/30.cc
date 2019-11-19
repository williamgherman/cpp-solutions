#include <iostream>
#include "HasPtr.h"

using std::swap;

int main()
{
    HasPtr a("hello");
    HasPtr b("world");

    swap(a,b);
    return 0;
}

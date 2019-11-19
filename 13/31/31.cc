#include <iostream>
#include <vector>
#include <algorithm>
#include "HasPtr.h"

using std::swap;

int main()
{
    HasPtr a("Hello"), b("World!"), c("Goodbye");
    std::vector<HasPtr> hps{a,b,c};

    std::sort(hps.begin(), hps.end());
    return 0;
}

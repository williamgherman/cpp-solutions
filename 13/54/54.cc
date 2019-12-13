#include <iostream>
#include "HasPtr_bad.h"

int main()
{
    HasPtr hp;
    hp = HasPtr(); // ambiguous call
    return 0;
}

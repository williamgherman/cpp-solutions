#include <iostream>

#include "query.h"

int main()
{
    Query q = Query("fiery") & Query("bird") | Query("wind");
    std::cout << q << std::endl;
}

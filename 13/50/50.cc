#include <iostream>
#include <vector>
#include "string.h"

int main()
{
    std::vector<String> ss;
    ss.push_back(String());
    ss.push_back(String("Hello, world"));
    ss.push_back(String("test"));
    ss.push_back(String("another"));
    ss.push_back(String("final message"));

    return 0;
}

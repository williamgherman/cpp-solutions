#include <iostream>
#include <sstream>
#include <string>

std::istream &inOut(std::istream &is)
{
    std::string line;
    while (is >> line)
        std::cout << line << std::endl;
    is.clear();
    return is;
}

int main()
{
    std::string hello = "Hello, world.";
    std::istringstream ss(hello);
    inOut(ss);
}

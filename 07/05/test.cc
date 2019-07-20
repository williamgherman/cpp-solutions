#include <string>
#include <iostream>

inline const std::string item(std::string s)
{
    return s;
}

int main()
{
    std::string s = "Fuck me";
    std::cout << item(s) << std::endl;
}

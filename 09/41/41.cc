#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<char> v{'H', 'e', 'l', 'l', 'o', ',', ' ', 
                        'w', 'o', 'r', 'l', 'd', '\0'};
    std::string s(v.begin(), v.end());
    std::cout << s << std::endl;
}

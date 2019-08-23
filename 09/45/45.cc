#include <string>
#include <iostream>

std::string getName(const std::string &name, const std::string &prefix,
                    const std::string &suffix)
{
    std::string ret(name);
    ret.insert(ret.begin(), prefix.cbegin(), prefix.cend());
    return ret.append(suffix);
}

int main()
{
    std::cout << getName("George", "HRH King ", " III") << std::endl;
}

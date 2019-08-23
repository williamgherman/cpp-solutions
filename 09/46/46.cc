#include <string>
#include <iostream>

std::string getName(const std::string &name, const std::string &prefix,
                    const std::string &suffix)
{
    std::string ret(name);
    std::string::size_type pos = 0;
    ret.insert(pos, prefix);
    pos = ret.size();
    ret.insert(pos, suffix);
    return ret;
}

int main()
{
    std::cout << getName("George", "HRH King ", " III") << std::endl;
}

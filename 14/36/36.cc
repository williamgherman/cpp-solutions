#include <iostream>
#include <string>
#include <vector>

class ReadString {
public:
    std::string operator()(std::istream &in = std::cin) {
        std::string ret;
        std::getline(in, ret);
        return in ? ret : "";
    }
};

int main()
{
    std::vector<std::string> ss;
    std::string temp;
    ReadString reader;

    while (!(temp = reader()).empty())
        ss.push_back(temp);
    for (auto s : ss)
        std::cout << s << std::endl;
    return 0;
}

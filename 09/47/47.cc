#include <iostream>
#include <string>

const std::string &as{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
const std::string &nums{"0123456789"};

void separate1(const std::string &s)
{
    std::string::size_type pos = 0;
    while ((pos = s.find_first_of(nums, pos)) != std::string::npos) {
        std::cout << s[pos];
        ++pos;
    }
    std::cout << std::endl;
    pos = 0;
    while ((pos = s.find_first_of(as, pos)) != std::string::npos) {
        std::cout << s[pos];
        ++pos;
    }
    std::cout << std::endl;
}

void separate2(const std::string &s)
{
    std::string::size_type pos = 0;
    while ((pos = s.find_first_not_of(as, pos)) != std::string::npos) {
        std::cout << s[pos];
        ++pos;
    }
    pos = 0;
    std::cout << std::endl;
    while ((pos = s.find_first_not_of(nums, pos)) != std::string::npos) {
        std::cout << s[pos];
        ++pos;
    }
    std::cout << std::endl;
}

int main()
{
    std::string s{"ab2c3d7R4E6"};
    separate1(s);
    separate2(s);
}

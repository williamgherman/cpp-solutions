#include <iostream>
#include <new>
#include <cstring>
#include <string>

char *cat_char(const char *a1, const char *a2)
{
    std::size_t len = std::strlen(a1) + std::strlen(a2) + 1;
    char *ret = new char[len];
    std::strcpy(ret,a1);
    std::strcpy(ret+std::strlen(a1), a2);
    return ret;
}

std::string cat_string(const std::string &s1, const std::string &s2)
{
    return s1 + s2;
}

int main()
{
    char *a1 = "Hello, ";
    char *a2 = "world!";
    std::string s1(a1), s2(a2);
    char *res = cat_char(a1,a2);
    std::string sres = cat_string(s1,s2);

    std::cout << res << std::endl;
    delete [] res;
    std::cout << sres << std::endl;
}

#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cerr << "USAGE: " << argv[0] << " filename" << std::endl;
        return 1;
    }

    std::vector<std::string> vec;
    std::ifstream fp(argv[1]);
    std::istream_iterator<std::string> in(fp), eof;

    while (in != eof)
        vec.push_back(*in++);
    for (auto &e : vec)
        std::cout << e << " ";
    std::cout << std::endl;
    return 0;
}

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "StrBlob.h"
#include "StrBlobPtr.h"

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cerr << "USAGE: " << argv[0] << " filename" << std::endl;
        exit(EXIT_FAILURE);
    }

    std::ifstream in(argv[1]);
    if (!in) {
        std::cerr << "Error: could not open file" << argv[1] << std::endl;
        exit(EXIT_FAILURE);
    }

    StrBlob blob;
    std::string s;
    while (getline(in, s))
        blob.push_back(s);
    StrBlobPtr p(blob.begin());
    for (StrBlob::size_type pos = 0; pos != blob.size(); ++pos, p.incr())
        std::cout << p.deref() << std::endl;
}

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cerr << "USAGE: " << argv[0] << " filename" << std::endl;
        return EXIT_FAILURE;
    }

    std::ifstream fp(argv[1]);
    std::string word;
    std::string best;
    if (fp) {
        while (fp >> word) {
            if (word.find_first_of("bdfghjklpqty") == std::string::npos &&
                word.size() > best.size())
                best = word;
        }
        std::cout << "Longest word in " << argv[1] << " without ascenders"
                  << " or descenders: " << best << std::endl;
    } else {
        std::cerr << "Failed to open " << argv[1] << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <cstdlib>

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cerr << "USAGE: " << argv[0] << " in_file" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::string> lines;
    std::string line, word;
    std::ifstream in(argv[1]);
    if (in) {
        while (getline(in, line)) {
            lines.push_back(line);
        }
    }
    in.close();
    for (auto l : lines) {
        std::istringstream ss(l);
        while (ss >> word)
            std::cout << word << std::endl;
    }
}
